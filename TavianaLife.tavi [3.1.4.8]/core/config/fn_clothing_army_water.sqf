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
ctrlSetText[3103,"Vêtements de l'armée"];

switch (_filter) do
{
	//Uniforms
	case 0:
	{
		[
			["NONE","Retirer uniforme",0],
			["TRYK_U_B_BLKBLK_CombatUniform",nil,7500],
			["U_mas_rus_O_Gorka_uniform_na",nil,11500],
			["U_mas_rus_O_Gorka_uniform_d",nil,17500]
		];
	};
	
	//Hats
	case 1:
	{
		[
			["NONE","Retirer chapeau",0],
			["H_mas_rus_helmet_ops_sf_gog_g",nil,850],
			["H_mas_rus_helmet_ops_sf_gog_b",nil,800],
			["H_mas_rus_woolhat_ht",nil,2500],
			["TRYK_H_Bandana_H",nil,1200],
			["H_mas_rus_Bandana",nil,650]
		];
	};
	
	//Glasses
	case 2:
	{
		[
			["NONE","Retirer lunettes",0],
			["G_Aviator",nil,20],
			["Balaclava_OD",nil,20],
			["Balaclava_Black",nil,20],
			["Mask_M40",nil,20],
			["Mask_M50",nil,20],
			["TRYK_Beard_BK",nil,10],
			["TRYK_Beard",nil,30],
			["TRYK_Beard_BW",nil,30],
			["TRYK_Beard_Gr",nil,30],
			["TRYK_Beard_BK2",nil,30],
			["TRYK_Beard2",nil,30],
			["TRYK_Beard_BW2",nil,30],
			["TRYK_Beard_Gr2",nil,30],
			["TRYK_Beard_BK3",nil,30],
			["TRYK_Beard3",nil,30],
			["TRYK_Beard_BW3",nil,30],
			["TRYK_Beard_Gr3",nil,30],
			["TRYK_Beard_BK4",nil,30],
			["TRYK_Beard4",nil,30],
			["TRYK_Beard_BW4",nil,30],
			["TRYK_Beard_Gr4",nil,30],
			["TRYK_US_ESS_Glasses_NV",nil,30],
			["TRYK_ESS_BLKBLK_NV",nil,30]
		];
	};
	
	//Vest
	case 3:
	{
		[
			["NONE","Retirer Gilet",0],
			["TRYK_V_tacSVD_OD",nil,4500],
			["TRYK_V_tacv10LC_OD",nil,4500],
			["TRYK_V_tacSVD_BK",nil,4500],
			["TRYK_V_ChestRig_L",nil,7500]
		];
	};
	
	//Backpacks
	case 4:
	{
		[
			["NONE","Retirer sac",0],
			["TRYK_B_Belt_BLK",nil,4500],
			["TRYK_B_Belt_br",nil,3500],
			["TRYK_B_Belt_CYT",nil,3000],
			["TRYK_B_Medbag_OD",nil,4500],
			["rhs_assault_umbts",nil,4500],
			["TRYK_B_Kitbag_blk",nil,5000]
		];
	};
};