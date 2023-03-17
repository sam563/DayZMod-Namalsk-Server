private ["_timeout"];

call compile preprocessFileLineNumbers "config.sqf";
 
_timeout = 5;
{
	private ["_title","_content","_titleText"];
	uiSleep 2;
	_content = _x;
	_titleText = format[("<t shadow='1'shadowColor='#000000' font='TahomaB' size='0.60' color='#FFFFFF' align='right'>%1</t>"), _content];
	[
		_titleText,
		[safezoneX + safezoneW - 0.8,0.50],     //DEFAULT: 0.5,0.35
		[safezoneY + safezoneH - 0.8,0.7],      //DEFAULT: 0.8,0.7
		_timeout,
		0.5
	] spawn BIS_fnc_dynamicText;
	uiSleep (_timeout * 1.1);
} forEach dayz_ServerMessages;