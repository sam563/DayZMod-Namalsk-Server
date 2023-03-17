if (!isDedicated) then {
	call compile preprocessFileLineNumbers "loot\compile.sqf";
	//call compile preprocessFileLineNumbers "\nst\ns_modules\functions\fn_dzn_breathfog.sqf";	
	building_spawnLoot = compile preprocessFileLineNumbers "loot\building_spawnLoot.sqf";
	dzn_fnc_snowfall = compile preprocessFileLineNumbers "\nst\ns_modules\functions\fn_dzn_snowfall.sqf";
	player_temp_calculation = compile preprocessFileLineNumbers "dayz_code\compile\fn_temperatur.sqf";		//Temperatur System //TeeChange
	//player_temp_calculation = compile preprocessFileLineNumbers "\nst\ns_dayz\code\compile\fn_temperatur.sqf";
	building_spawnZombies = compile preprocessFileLineNumbers "dayz_code\compile\building_spawnZombies.sqf";
	//player_wearClothes = compile preprocessFileLineNumbers "dayz_code\actions\player_wearClothes.sqf";
};