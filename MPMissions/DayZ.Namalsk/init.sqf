call compile preprocessFileLineNumbers "config.sqf";

diag_log 'dayz_preloadFinished reset';
dayz_preloadFinished=nil;
onPreloadStarted "diag_log [diag_tickTime,'onPreloadStarted']; dayz_preloadFinished = false;";
onPreloadFinished "diag_log [diag_tickTime,'onPreloadFinished']; dayz_preloadFinished = true;";
with uiNameSpace do {RscDMSLoad=nil;}; // autologon at next logon

if (!isDedicated) then {
	enableSaving [false, false];
	startLoadingScreen ["","RscDisplayLoadCustom"];
	progressLoadingScreen 0;
	dayz_loadScreenMsg = localize 'str_login_missionFile';
	progress_monitor = [] execVM "\z\addons\dayz_code\system\progress_monitor.sqf";
	0 cutText ['','BLACK',0];
	0 fadeSound 0;
	0 fadeMusic 0;
};

initialized = false;
call compile preprocessFileLineNumbers "\z\addons\dayz_code\init\variables.sqf";
call compile preprocessFileLineNumbers "dayz_code\init\variables.sqf";
progressLoadingScreen 0.05;
call compile preprocessFileLineNumbers "\z\addons\dayz_code\init\publicEH.sqf";
progressLoadingScreen 0.1;
call compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\setup_functions_med.sqf";
progressLoadingScreen 0.15;
call compile preprocessFileLineNumbers "\z\addons\dayz_code\init\compiles.sqf";
call compile preprocessFileLineNumbers "dayz_code\init\compiles.sqf";
progressLoadingScreen 0.25;
initialized = true;

setTerrainGrid 25;
if (dayz_REsec == 1) then {call compile preprocessFileLineNumbers "dayz_code\system\REsec.sqf";};
execVM "dayz_code\system\DynamicWeatherEffects.sqf";

//Object AII
call compile preprocessFileLineNumbers "\nst\ns_modules\aii\spawn_aii.sqf";
//EVR Storm
call compile preprocessFileLineNumbers "\nst\ns_modules\blowout\blowout_init.sqf";

if (isServer) then {
	execVM "\z\addons\dayz_server\system\server_monitor.sqf";
};

if (!isDedicated) then {
	//Enables Plant lib fixes
	execVM "\z\addons\dayz_code\system\antihack.sqf";

	//Player Monitor
	execFSM "\z\addons\dayz_code\system\player_monitor.fsm";

	//Plant Spawner
	execVM "\z\addons\dayz_code\compile\client_plantSpawner.sqf";

	//Blowout Fixes
	execVM "ns_modules\blowout\module\blowout_client.sqf";

	//Cold Breath Fog
	[] execVM "scripts\breathfog.sqf";

	waitUntil {scriptDone progress_monitor};
	cutText ["","BLACK IN", 3];
	3 fadeSound 1;
	3 fadeMusic 1;
	endLoadingScreen;
};