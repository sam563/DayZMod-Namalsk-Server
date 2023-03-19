fn_breathfog = {
	_unit = _this;
	_unit setVariable ["breathfog", true, true];

	while {alive _unit && ((_unit distance player) <= breathRange)} do {
		if((vehicle _unit) == _unit) then {
			//speed factor  0 - 6 -  18 - 23
			private["_vel","_pos","_speed","_cycle","_intensity"];
			_pos = 		getPos _unit;
			_vel = 		velocity _unit;
			_speed = 	round((_vel distance [0,0,0]) * 3.5);
			
			if (_speed >= 0 && _speed <= 7) then {
				_cycle = 2.2;
				_intensity = 0.04;
			} else {
				if (_speed > 7 && _speed <= 18) then {
					_cycle = 1.2;
					_intensity = 0.06;
				} else {
					_cycle = 0.6;
					_intensity = 0.1;
				};
			};
			
			sleep _cycle;

			_source = "logic" createVehicleLocal _pos;
			_source attachto [_unit, [0, 0.15, 0], "neck"];
			_bfog = "#particlesource" createVehicleLocal (getPos _source);
			_bfog setParticleParams [["\Ca\Data\ParticleEffects\Universal\Universal", 16, 12, 1, 0], "", "Billboard", 0.5, 0.5, [0, 0, 0], [(wind select 0)/6, (wind select 1)/6, (wind select 2)/6], 1, 1.275, 1, 0.2, [0, 0.2, 0], [[ 1, 1, 1, _intensity], [1, 1, 1, 0.01], [1, 1, 1, 0]], [1000], 1, 0.04, "", "", _source];
			_bfog setParticleRandom [1, [0, 0, 0], [0.15, 0.15, 0.15], 0, 0.25, [0, 0, 0, 0.1], 0, 0, 10];
			_bfog setDropInterval 0.005;
			sleep 0.15;
			deletevehicle _source;
		};
	};

	_unit setVariable ["breathfog", false, true];
};

[] spawn {
	while {true} do {
		sleep 5;
		{
			_isZombie = (_x isKindOf "zZombie_base");
			if (alive _x && (!_isZombie or (_isZombie && zombieBreath)) && !(_x getVariable ["breathfog", false])) then {
				_bul = (_x spawn fn_breathfog);
			};
		} count nearestobjects [player, ["Man"], breathRange];
	};
};