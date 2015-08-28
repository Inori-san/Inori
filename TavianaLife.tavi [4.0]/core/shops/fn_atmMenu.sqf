#include <macro.h>
/*
	File: fn_atmMenu.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Opens and manages the bank menu.
*/
private["_units","_type"];

if(!life_use_atm) exitWith {
	hint localize "STR_Shop_ATMRobbed";
};

if(!dialog) then {
	if(!(createDialog "Life_atm_management")) exitWith {};
};

disableSerialization;
_units = CONTROL(2700,2703);

lbClear _units;
CONTROL(2700,2701) ctrlSetStructuredText parseText format["<img size='1.7' image='\tavianalifefr_data\data\icons\bank.paa'/> $%1<br/><img size='1.6' image='\tavianalifefr_data\data\icons\money.paa'/> $%2",[BANK] call life_fnc_numberText,[CASH] call life_fnc_numberText];

{
	_name = _x GVAR ["realname",name _x];
	if(alive _x && (!(EQUAL(_name,profileName)))) then {
		switch (side _x) do {
			case west: {_type = "Cop"};
			case civilian: {_type = "Civ"};
			case independent: {_type = "EMS"};
			case east: {_type = "Adac"};
		};
		_units lbAdd format["%1 (%2)",_x GVAR ["realname",name _x],_type];
		_units lbSetData [(lbSize _units)-1,str(_x)];
	};
} foreach playableUnits;

lbSetCurSel [2703,0];

if(isNil {(grpPlayer GVAR "gang_bank")}) then {
	(CONTROL(2700,2705)) ctrlEnable false;
};