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
ctrlSetText[3103,"Vêtements de la résistance"];

switch (_filter) do
{
	//Uniforms
	case 0:
	{
		[
			["NONE","Retirer uniforme",0],
			["TRYK_U_denim_hood_blk",nil,7500],
			["TRYK_U_denim_hood_mc",nil,11500],
			["TRYK_U_denim_hood_nc",nil,17500],
			["TRYK_U_pad_hood_Blod",nil,15610],
			["TRYK_U_pad_hood_Cl_blk",nil,15340],
			["TRYK_U_B_PCUHsW3",nil,15340],
			["TRYK_shirts_DENIM_BK",nil,15340],
			["TRYK_U_B_PCUGs_OD_R",nil,15340],
			["TRYK_U_B_BLK_T_BG_BK",nil,15340],
			["TRYK_shirts_BLK_PAD_BK",nil,15340],
			["U_I_G_Story_Protagonist_F",nil,15340],
			["U_I_G_resistanceLeader_F",nil,15340],
			["U_O_SpecopsUniform_ocamo",nil,15340],
			["U_O_PilotCoveralls",nil,15340],
			["U_IG_leader",nil,15340],
			["U_O_GhillieSuit",nil,15340]
		];
	};
	
	//Hats
	case 1:
	{
		[
			["NONE","Retirer chapeau",0],
			["TRYK_ESS_CAP",nil,850],
			["TRYK_H_headsetcap_blk",nil,800],
			["TRYK_R_CAP_BLK",nil,2500],
			["TRYK_R_CAP_OD_US",nil,1200],
			["H_MilCap_oucamo",nil,1200],
			["H_Bandanna_camo",nil,1200]
		];
	};
	
	//Glasses
	case 2:
	{
		[
			["NONE","Retirer lunettes",0],
			["G_Shades_Black",nil,25],
			["G_Shades_Blue",nil,20],
			["G_Sport_Blackred",nil,20],
			["G_Sport_Checkered",nil,20],
			["G_Sport_Blackyellow",nil,20],
			["G_Sport_BlackWhite",nil,20],
			["G_Squares",nil,10],
			["G_Lowprofile",nil,30],
			["G_Combat",nil,55],
			["TRYK_Shemagh_shade_G",nil,55],
			["G_mas_wpn_wrap_mask_g",nil,55],
			["G_Balaclava_oli",nil,55],
			["G_mas_wpn_bala",nil,55],
			["G_Bandanna_oli",nil,55]
		];
	};
	
	//Vest
	case 3:
	{
		[
			["NONE","Retirer gilet",0],
			["TRYK_V_Sheriff_BA_TB",nil,4500],
			["rhs_vest_commander",nil,4500],
			["V_ArmorVestGL_RU",nil,4500],
			["V_mas_rus_ChestrigO_rgr_b",nil,4500],
			["TRYK_V_Sheriff_BA_T",nil,4500],
			["TRYK_V_Sheriff_BA_T2",nil,4500],
			["TRYK_U_B_PCUGs_OD_R",nil,4500],
			["TRYK_V_ArmorVest_green2",nil,4500],
			["TRYK_V_harnes_blk_L",nil,4500],
			["TRYK_V_harnes_od_L",nil,4500]
		];
	};
	
	//Backpacks
	case 4:
	{
		[
			["NONE","Retirer sac",0],
			["B_AssaultPack_cbr",nil,4500],
			["rhs_sidor",nil,4500],
			["TRYK_B_Kitbag_blk",nil,3500],
			["B_mas_Kitbag_rng",nil,3000],
			["B_Kitbag_mcamo",nil,4500],
			["B_TacticalPack_oli",nil,4500],
			["B_FieldPack_ocamo",nil,5000],
			["B_Kitbag_cbr",nil,5000],
			["TRYK_B_Kitbag_blk",nil,5000],
			["B_Carryall_khk",nil,5000]
		];
	};
};