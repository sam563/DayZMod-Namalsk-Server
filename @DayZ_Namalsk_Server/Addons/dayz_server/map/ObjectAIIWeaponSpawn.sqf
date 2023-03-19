//AII Rail Gun Spawn Script by JasonTM

private ["_spawnPoint","_spawnChance","_position"];

_position = [4978.83, 6645.74, 17.2435];
_spawnChance = random(1);

if (_spawnChance <= 0.25) then { //25% chance of railgun spawn
	_spawnPoint = createVehicle ["WeaponHolder",_position,[],0,"CAN_COLLIDE"];
	_spawnPoint addWeaponCargoGlobal ["nsw_er7s",1];
	_spawnPoint addMagazineCargoGlobal ["nsw_er7mm",1];
	_spawnPoint setVariable ["permaLoot",true];

diag_log "Railgun has spawned at object AII";	
} else {diag_log "Railgun did not spawn at object AII";};