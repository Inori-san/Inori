/*
	File: fn_spawnPointCfg.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Master configuration for available spawn points depending on the units side.
	
	Return:
	[Spawn Marker,Spawn Name,Image Path]
*/
private["_side","_return"];
_side = [_this,0,civilian,[civilian]] call BIS_fnc_param;

//Spawn Marker, Spawn Name, PathToImage
switch (_side) do
{
	case west:
	{
		_return = [
			["cop_spawn_1","Kavala HQ","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["cop_spawn_2","Pyrgos HQ","\a3\ui_f\data\map\MapControl\fuelstation_ca.paa"],
			["cop_spawn_3","Athira HQ","\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa"],
			["cop_spawn_4","Air HQ","\a3\ui_f\data\map\Markers\NATO\b_air.paa"],
			["cop_spawn_5","HW Patrol","\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa"]
		];
	};
	
	case civilian:
    {
                   
                   
        //if have reb license, only spawn here
        if(license_civ_rebel && playerSide == civilian) then {
        _return = [
            ["civ_spawn_1","Sabina","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["civ_spawn_2","Vladimir","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["civ_spawn_3","Lyepestok","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["civ_spawn_4","Krasnoznamem'sk","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],									
			["rebelle_spawn","Camp de la Résistance","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["rebelle_spawn1","QG de la Résistance","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
            ];
        };
		
                  
        if(!license_civ_rebel && playerSide == civilian) then {
        _return = [
            ["civ_spawn_1","Sabina","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["civ_spawn_2","Vladimir","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["civ_spawn_3","Lyepestok","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["civ_spawn_4","Krasnoznamem'sk","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]								    
            ];

        if((getPlayerUID player) in ["76561198044962044","0","0"])then {
	    _ret = _ret + [
            ["civ_spawn_1","Sabina","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["civ_spawn_2","Vladimir","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["civ_spawn_3","Lyepestok","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["civ_spawn_4","Krasnoznamem'sk","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["rebelle_spawn","Camp Rebelle","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
	    }; 
        };	
	};
	
	case independent: {
		_return = [
			["medic_spawn_1","Kavala Hospital","\a3\ui_f\data\map\MapControl\hospital_ca.paa"],
			["medic_spawn_2","Athira Regional","\a3\ui_f\data\map\MapControl\hospital_ca.paa"],
			["medic_spawn_3","Pygros Hospital","\a3\ui_f\data\map\MapControl\hospital_ca.paa"]
		];
	};
	
	case east: 
	{
		_return = [
			["army_spawn01","Camp Brimstone","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["army_spawn_shrap","Base Shrapnel","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["army_spawn_sector","Base Whale","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["army_spawn_naval","Base Navale Maarita","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
		];
	};
};

_return;