/*
	File: fn_clothing_reb.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Master configuration file for Reb shop.
*/
private["_filter"];
_filter = [_this,0,0,[0]] call BIS_fnc_param;
//Classname, Custom Display name (use nil for Cfg->DisplayName, price

//Shop Title Name
ctrlSetText[3103,"Vêtement de l'armée"];

switch (_filter) do
{
	//Uniforms
	case 0:
	{
		[
			["NONE","Retirer uniforme",0],
			["U_RU_Pilot_Suit",nil,7500],
			["U_I_pilotCoveralls",nil,11500],
			["rhs_uniform_df15",nil,17500],
			["rhs_uniform_m88_patchless",nil,15610],
			["rhs_uniform_vdv_flora",nil,15340]
		];
	};
	
	//Hats
	case 1:
	{
		[
			["NONE","Retirer casque",0],
			["rhs_zsh7a",nil,850],
			["rhs_zsh7a_mike",nil,800],
			["H_HelmetCrew_I",nil,2500],
			["H_HelmetCrew_0",nil,1200],
			["H_CrewHelmetHeli_O",nil,650],
			["H_CrewHelmetHeli_B",nil,650],
			["H_PilotHelmetHeli_O",nil,650],
			["H_PilotHelmetHeli_B",nil,650],
			["rhs_6b28_green",nil,650],
			["TRYK_H_TACEARMUFF_H",nil,650],
			["rhs_gssh18",nil,650]
		];
	};
	
	//Glasses
	case 2:
	{
		[
			["NONE","Retirer lunettes",0],
			["TRYK_US_ESS_Glasses_NV",nil,25],
			["TRYK_ESS_BLKBLK_NV",nil,20],
			["G_Aviator",nil,20],
			["rhs_balaclava",nil,20],
			["G_Balaclava_blk",nil,20],
			["G_Bandanna_beast",nil,20]
		];
	};
	
	//Vest
	case 3:
	{
		[
			["NONE","Retirer gilet",0],
			["rhs_6b23_6sh92",nil,4500],
			["rhs_6sh46",nil,7500]
		];
	};
	
	//Backpacks
	case 4:
	{
		[
			["NONE","Retirer sac",0],
			["B_Parachute",nil,4500],
			["B_FieldPack_oli",nil,3500]
		];
	};
};