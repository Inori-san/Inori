/*
File: fn_processAction.sqf
Author: Bryan "Tonic" Boardwine
edited by theInfinit (to process 2 Item to a combination)
Description:
Master handling for processing an item.
*/
private["_vendor","_type","_itemInfo","_oldItem","_oldItem2","_newItem","_cost","_upp","_hasLicense","_itemName","_oldVal","_oldVal2","_ui","_progress","_pgText","_cP","_error"];
_vendor = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_type = [_this,3,"",[""]] call BIS_fnc_param;
//Error check
if(isNull _vendor OR _type == "" OR (player distance _vendor > 10)) exitWith {};


_error = false;
_itemInfo = switch (_type) do
{
  case "oil": {["oilu","oilp",1000,"Processing Oil",false];}; //added param (true or false) true if processing with 2 Items.
  case "diamond": {["diamond","diamondc",1000,"Processing Diamond",false]};
  case "heroin": {["heroinu","heroinp",1000,"Processing Heroin",false]};
  case "copper": {["copperore","copper_r",500,"Processing Copper",false]};
  case "iron": {["ironore","iron_r",800,"Processing Iron",false]};
  case "sand": {["sand","glass",450,"Processing Sand",false]};
  case "salt": {["salt","salt_r",450,"Processing Salt",false]};
  case "cocaine": {["cocaine","cocainep",1000,"Processing Cocaine",false]};
  case "marijuana": {["cannabis","marijuana",800,"Processing Marijuana",false]};
  case "cement": {["rock","cement",650,"Mixing Cement",false]};
  case "fonte": {["carbonebrute","fontebrute",1000,"Traitement de l'alliage",true,"iron_unrefined"];}; // Modif':05/08/2015
  case "carbone": {["charbonore","carbonebrute",1000,"Traitement du minerai",false];}; // Modif':05/08/2015
  default {[]};
};


//Error checking
if(count _itemInfo == 0) exitWith {};


//Setup vars.
_2var = _itemInfo select 4;  // true if process action is with 2 Items and false if processing with 1 Item.
_oldItem = _itemInfo select 0;
_newItem = _itemInfo select 1;
_cost = _itemInfo select 2;
_upp = _itemInfo select 3;


//2vars
if(_2var) then { _oldItem2 = _itemInfo select 5; }; //set Itemname if (processing with 2 Items = true) 


_hasLicense = missionNamespace getVariable (([_type,0] call life_fnc_licenseType) select 0);
_itemName = [([_newItem,0] call life_fnc_varHandle)] call life_fnc_varToStr;
_oldVal = missionNamespace getVariable ([_oldItem,0] call life_fnc_varHandle);


//2vars
if(_2var) then { _oldVal2 = missionNamespace getVariable ([_oldItem2,0] call life_fnc_varHandle); };


if(_2var) then { 
       if(_oldVal !=_oldVal2) then {
              _error = true;
       };
};
if(_error) exitWith{hint "Tu n'as pas les ingrédients nécessaires"};


_cost = _cost * _oldVal;
//Some more checks
if(_oldVal == 0) exitWith {};


//Setup our progress bar.
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNameSpace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["%2 (1%1)...","%",_upp];
_progress progressSetPosition 0.01;
_cP = 0.01;


life_is_processing = true;


if(_hasLicense) then
{
while{true} do
{
sleep  0.3;
_cP = _cP + 0.01;
_progress progressSetPosition _cP;
_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
if(_cP >= 1) exitWith {};
if(player distance _vendor > 10) exitWith {};
};


if(player distance _vendor > 10) exitWith {hint "You need to stay within 10m to process.."; 5 cutText ["","PLAIN"]; life_is_processing = false;};


//2vars
if(_2var) then 
{
([false,_oldItem2,_oldVal2] call life_fnc_handleInv); //delete the second items (for example Iron)
};
if(!([false,_oldItem,_oldVal] call life_fnc_handleInv)) exitWith {5 cutText ["","PLAIN"]; life_is_processing = false;};
if(!([true,_newItem,_oldVal] call life_fnc_handleInv)) exitWith {5 cutText ["","PLAIN"]; [true,_oldItem,_oldVal] call life_fnc_handleInv; life_is_processing = false;};
5 cutText ["","PLAIN"];
titleText[format[localize "STR_Process_Processed",_oldVal,_itemName],"PLAIN"];
life_is_processing = false;


}
else
{
if(life_cash < _cost) exitWith {hint format[localize "STR_Process_License",[_cost] call life_fnc_numberText]; 5 cutText ["","PLAIN"]; life_is_processing = false;};


while{true} do
{
sleep  0.9;
_cP = _cP + 0.01;
_progress progressSetPosition _cP;
_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
if(_cP >= 1) exitWith {};
if(player distance _vendor > 10) exitWith {};
};


if(player distance _vendor > 10) exitWith {hint "You need to stay within 10m to process."; 5 cutText ["","PLAIN"]; life_is_processing = false;};


if(life_cash < _cost) exitWith {hint format["You need $%1 to process  without a license!",[_cost] call life_fnc_numberText]; 5 cutText ["","PLAIN"]; life_is_processing = false;};
//2vars
if(_2var) then 
{
([false,_oldItem2,_oldVal2] call life_fnc_handleInv); //delete the second items (for example Iron)
};


if(!([false,_oldItem,_oldVal] call life_fnc_handleInv)) exitWith {5 cutText ["","PLAIN"]; life_is_processing = false;};
if(!([true,_newItem,_oldVal] call life_fnc_handleInv)) exitWith {5 cutText ["","PLAIN"]; [true,_oldItem,_oldVal] call life_fnc_handleInv; life_is_processing = false;};
5 cutText ["","PLAIN"];
titleText[format[localize "STR_Process_Processed2",_oldVal,_itemName,[_cost] call life_fnc_numberText],"PLAIN"];
life_cash = life_cash - _cost;
life_is_processing = false;
}; 
