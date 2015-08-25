/*
File: fn_adacLoadout.sqf
Author: Bryan "Tonic" Boardwine
Edited: Itsyuka
 
Description:
Loads the ADAC out with the default gear.
*/

private["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};
 
//Load player with default adac gear.
player addUniform "rhs_uniform_msv_emr";
player addHeadgear "rhs_6b27m_green";
player addVest "rhs_6b23_digi_6sh92";
player addBackpack "rhs_assault_umbts";
 
/* ITEMS */
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "ItemWatch";
player assignItem "ItemWatch";
player addItem "ItemGPS";
player assignItem "ItemGPS";
player addItem "ItemRadio";
player assignItem "ItemRadio";
 
[] call life_fnc_saveGear;