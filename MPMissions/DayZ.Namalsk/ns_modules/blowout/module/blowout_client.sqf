bl_local_anims = {
    {
       _jednotka = _x; 
       if (!(_jednotka hasWeapon "APSI") && (Alive _jednotka)) then {
         if ((vehicle _jednotka) == _jednotka) then {
            _jednotka switchMove "AcinPercMrunSnonWnonDf_agony";
         };
       };
    } count AllUnits;
};

bl_local_def_anim = {
    {
       _jednotka = _x;
       if (!(_jednotka hasWeapon "APSI") && (Alive _jednotka)) then {
         if ((vehicle _jednotka) == _jednotka) then {
            _jednotka switchMove "";
         };
       };
    } count AllUnits;
}; 