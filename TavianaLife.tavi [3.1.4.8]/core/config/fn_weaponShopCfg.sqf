#include <macro.h>
/*
	File: fn_weaponShopCfg.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Master configuration file for the weapon shops.
	
	Return:
	String: Close the menu
	Array: 
	[Shop Name,
	[ //Array of items to add to the store
		[classname,Custom Name (set nil for default),price]
	]]
*/
private["_shop"];
_shop = [_this,0,"",[""]] call BIS_fnc_param;
if(_shop == "") exitWith {closeDialog 0}; //Bad shop type passed.

switch(_shop) do
{
/////////////////////////////ARMY SHOPS///////////////////////////////////
case "army_weap_land":
	{
		switch(true) do
		{
			case (playerSide != east): {"Vous ne faites pas partis de l'armée!"};
			default
			{
				["Armement militaire",
					[
						["rhs_weap_ak74m",nil,0],
						["rhs_30Rnd_545x39_AK","Chargeur AK-74M Polymere",0],
						["hgun_mas_grach_F",nil,0],
						["17Rnd_mas_9x21_Mag","Chargeur MP-443 Grach",0],
						["rhs_acc_ekp1","Red Dot EKP-1S-03",0],
						["rhs_acc_pkas","Red Dot PK-AS",0],
						["rhs_acc_pso1m2","Lunette PSO-1M2",0],
						["rhs_acc_ak5","Cache Flamme DPM-AK-5",0],
						["rhs_acc_dtk","Cache Flamme DTK",0],
						["rhs_acc_dtk1","Cache Flamme DTK-1",0],
						["rhs_acc_dtk3","Cache Flamme DTK-3",0],
						["TRYK_US_ESS_Glasses_NV","Masque (JVN)",0],
						["TRYK_ESS_BLKBLK_NV","Masque Noir (JVN)",0]
					]
				];
			};
		};
	};

case "army_weap_air":
	{
		switch(true) do
		{
			case (playerSide != east): {"Vous ne faites pas partis de l'armée!"};
			default
			{
				["Armement militaire",
					[
						["hlc_rifle_ak12",nil,0],
						["hlc_30Rnd_545x39_B_AK","Chargeur AK12",0],
						["SMG_02_F",nil,0],
						["hgun_PDW2000_F",nil,0],
						["30Rnd_9x21_Mag","Chargeur PDW 9mm",0],
						["RH_gsh18",nil,0],
						["RH_18Rnd_9x19_gsh","Chargeur GSH-18",0],
						["rhs_mag_rgd5","Grenade RGD-5",0],
						["RH_barska_rds","Red Dot Barska",0],
						["RH_t1","Red Dot T1",0],
						["RH_shortdot","Lunette Schmidt",0],
						["RH_peq15b_top",nil,0],
						["RH_peq15b",nil,0],
						["RH_SFM952V","Cache Flamme DTK-1",0],
						["TRYK_US_ESS_Glasses_NV","Masque (JVN)",0],
						["TRYK_ESS_BLKBLK_NV","Masque Noir (JVN)",0]
					]
				];
			};
		};
	};

case "army_weap_water":
	{
		switch(true) do
		{
			case (playerSide != east): {"Vous ne faites pas partis de l'armée!"};
			default
			{
				["Armement militaire",
					[
						["hlc_rifle_ak12",nil,0],
						["hlc_rifle_aku12",nil,0],
						["hlc_30Rnd_545x39_B_AK","Chargeur AK12",0],
						["arifle_mas_asval_ds",nil,0],
						["30Rnd_mas_9x39_mag","Chargeur AS VAL",0],
						["RH_cz75",nil,0],
						["RH_16Rnd_9x19_CZ","Chargeur CZ75",0],
						["RH_mp412",nil,0],
						["RH_6Rnd_357_Mag","Chargeur MP412",0],
						["DemoCharge_Remote_Mag",nil,0],
						["APERSTripMine_Wire_Mag",nil,0],
						["RH_LTdocterl","Red Dot Larue",0],
						["RH_barska_rds","Red Dot Barska",0],
						["RH_shortdot","Lunette Schmidt",0],
						["optic_mas_kobra","Red Dot Kobra",0],
						["optic_mas_PSO","Lunette PSO",0],
						["hlc_muzzle_545SUP_AK","Silencieux AK12",0],
						["RH_SFM952V",nil,0],
						["RH_gemtech9",nil,0],
						["RH_peq15b_top",nil,0],
						["RH_peq15b",nil,0],
						["TRYK_bandana_NV",nil,0],
						["rhs_weap_tr8",nil,0]
					]
				];
			};
		};
	};
	
	case "army_weap_gen":
	{
		switch(true) do
		{
			case (playerSide != east): {"Vous ne faites pas partis de l'armée!"};
			default
			{
				["Equipement militaire",
					[
						["Rangefinder",nil,0],
						["Medikit",nil,0],
						["cw_item_notepad","Bloc-note",0],
						["cw_dtag_dogtag_item_01","Plaques militaire",0],
						["SmokeShell","Fumigène M83 Blanche",0],
						["SmokeShellRed","Fumigène M18 Rouge",0],
						["SmokeShellGreen","Fumigène M18 Verte",0],
						["rhs_mag_nspn_red","Fusée NSP-N Rouge",0],
						["rhs_mag_rgd5","Grenade RGD-5",0],
						["rhs_mag_fakel","Grenade Fakel",0],
						["Rangefinder",nil,0],
						["ItemMap",nil,0],
						["ItemCompass",nil,0],
						["ItemRadio",nil,0],
						["ItemWatch",nil,0],
						["B_UavTerminal",nil,0],
						["SUD_NVG", "JVN",0],
						["NVGoggles_OPFOR","JVN Noir",0],
						["A3_GPNVG18b_BLK_F",nil,0]
					];
				];
			};
		};
	};

/////////////////////////////POLICE SHOPS///////////////////////////////////

case "cops_genstore":
	{
		switch(true) do
		{
			case (playerSide != west): {"Tu ne fais pas parti de la Police!"};
			default
			{
				["Equipement général",
					[
						["TRYK_Headset_NV","Lunettes de vision nocturne",0],
						["Rangefinder","Télémètre",0],
						["ItemGPS","GPS",0],
						["ItemMap",nil,0],
						["ItemCompass",nil,0],
						["ItemWatch",nil,0],
						["ItemRadio",nil,0],
						["FirstAidKit",nil,0],
						["Chemlight_blue",nil,0],
						["SmokeShell",nil, 0],
						["SmokeShellOrange",nil,0],
						["SmokeShellRed",nil,0],
						["SmokeShellBlue",nil,6500],
						["rhs_weap_tr8",nil,6500],
						["Chemlight_red",nil,6500]
					]
				];
			};
		};
	};

case "cops_genstore":
	{
		switch(true) do
		{
			case (playerSide != west): {"Tu ne fais pas parti de la Police!"};
			default
			{
				["Equipement général",
					[
						["TRYK_Headset_NV","Lunettes de vision nocturne",0],
						["Rangefinder","Télémètre",0],
						["ItemGPS","GPS",0],
						["ItemMap",nil,0],
						["ItemCompass",nil,0],
						["ItemWatch",nil,0],
						["ItemRadio",nil,0],
						["FirstAidKit",nil,0],
						["Chemlight_blue",nil,0],
						["SmokeShell",nil,0],
						["SmokeShellOrange",nil,0],
						["SmokeShellRed",nil,0],
						["SmokeShellBlue",nil,6500],
						["rhs_weap_tr8",nil,6500],
						["Chemlight_red",nil,6500]
					]
				];
			};
		};
	};

case "cops_weapons":
	{
		switch(true) do
		{
			case (playerSide != west): {"Tu ne fais pas parti de la Police!"};
			default
			{
				["Equipement général",
					[
						["RH_p226",nil,0],
						["RH_15Rnd_9x19_SIG",nil,0],
						["RH_X300",nil,0],
						["hlc_smg_mp5a4",nil,0],
						["hlc_30Rnd_9x19_GD_MP5",nil,0],
						["RH_SFM952V","Lampe torche",0],
						["RH_compm4s","AimPoint CompM4",0],
						["RH_barska_rds","Viseur CircleDot",0],
						["optic_Hamr",nil,0],
						/*["hlc_rifle_g3ka4",nil, 0, { "life_coplevel", 3 } ],
						["hlc_20rnd_762x51_b_G3", nil, 0, { "life_coplevel", 3 } ],
						["RH_compM2l", "AimPoint CompM2", 0, { "life_coplevel", 3 } ],
						["RH_HBLM", nil, 0, { "life_coplevel", 3 } ],
						["optic_MRCO", nil, 0, { "life_coplevel", 3 } ],
						["hlc_rifle_auga3_b", nil, 0, { "life_coplevel", 5 } ],
						["hlc_30Rnd_556x45_B_AUG", nil, 0, { "life_coplevel", 5 } ],
						["RH_Deagles", nil, 0, { "life_coplevel", 5 } ],
						["RH_7Rnd_50_AE", nil, 0, { "life_coplevel", 5 } ],
						["RH_bull", nil, 0, { "life_coplevel", 8 } ],
						["RH_6Rnd_454_Mag", nil, 0, { "life_coplevel", 8 } ]*/
					]
				];
			};
		};
	};

	/////////////////////////////CIVIL SHOPS///////////////////////////////////
	
	case "civil_gun":
	{
		switch(true) do
		{
			case (playerSide != civilian): {"Vous n'êtes pas un civil!"};
			case (!license_civ_gun): {"Vous n'avez pas de permis de port d'arme!"};
			default
			{
				["Armurerie Civile",
					[
				        ["RH_cz75",nil,6500],
						["RH_16Rnd_9x19_cz",nil,6500],
						["RH_fn57",nil,6500],
						["RH_20Rnd_57x28_FN",nil,6500],
						["RH_m1911",nil,6500],
						["RH_7Rnd_45cal_m1911",nil,6500],
						["RH_tt33",nil,6500],
						["RH_8Rnd_762_tt33",nil,6500],
						["RH_tec9",nil,6500],
						["RH_32Rnd_9x19_tec",nil,6500],
						["RH_vz61",nil,6500],
						["RH_20Rnd_32cal_vz61",nil,6500],
					]
				];
			};
		};
	};
	
	case "civil_genstore":
	{
		["Fournitures générales",
			[
				["Binocular",nil,150],
				["ItemGPS",nil,100],
				["ToolKit",nil,250],
				["FirstAidKit",nil,150],
				["NVGoggles",nil,2000],
				["Chemlight_red",nil,300],
				["Chemlight_yellow",nil,300],
				["Chemlight_green",nil,300],
				["Chemlight_blue",nil,300]
			]
		];
	};
	
	/////////////////////////////REBELLES SHOPS///////////////////////////////////
	
	case "rebel":
	{
		switch(true) do
		{
			case (playerSide != civilian): {"Vous n'êtes pas civil!"};
			case (!license_civ_rebel): {"Vous n'êtes pas rebel!"};
			default
			{
				["Yuri Orlov Shop",
					[
						["hlc_rifle_ak47","AK47",25000],
						["hlc_30Rnd_762x39_b_ak","Munition AK47",30000],
						["hlc_rifle_aks74u","AKS74u",25000],
						["hlc_30Rnd_545x39_B_AK","Munition AKS",30000],
						["arifle_SUD_AKMS",nil,25000],
						["30Rnd_762x39_AKM","Munition AKM",30000],
						["rhs_weap_rpg7",nil,25000],
						["rhs_rpg7_PG7VL_mag","Munition RPG",30000],
						["arifle_mas_lee",nil,25000],
						["5Rnd_mas_762x51_Stanag","Munition Enfield",30000],
						["rhs_acc_pso1m2",nil,30000],
						["rhs_acc_ekp1",nil,30000],
						["HLC_Optic_1p29",nil,30000],
						["optic_mas_DMS",nil,30000],
						["optic_mas_term",nil,30000]
					]
				];
			};
		};
	};
	
	case "rebel_us":
	{
		switch(true) do
		{
			case (playerSide != civilian): {"Vous n'êtes pas civil!"};
			case (!license_civ_resistance): {"Vous n'êtes pas un résistant!"};
			default
			{
				["'Merican Shop",
					[
						["hlc_rifle_M4",nil,25000],
						["hlc_30rnd_556x45_EPR","Munition M4",30000],
						["RH_m16a4_m_des",nil,25000],
						["RH_m16a4_m_wdl",nil,25000],
						["RH_30Rnd_556x45_M855A1","Munition M16A4",30000],
						["RH_ta31rmr_2D",nil,30000],
						["RH_compM2",nil,30000],
						["RH_barska_rds",nil,30000],
						["RH_eotech553mag",nil,30000],
						["RH_leu_mk4",nil,30000],
						["RH_accupoint",nil,30000]
					]
				];
			};
		};
	};
	
	/////////////////////////////MEDIC SHOPS///////////////////////////////////
	
	case "med_basic":
	{
		switch (true) do 
		{
			case (playerSide != independent): {"You are not an EMS Medic"};
			default {
				["Medical General Store",
					[
						["ItemGPS",nil,100],
						["Binocular",nil,150],
						["ToolKit",nil,250],
						["FirstAidKit",nil,150],
						["Medikit",nil,500],
						["NVGoggles",nil,1200],
						["B_FieldPack_ocamo",nil,3000]
					]
				];
			};
		};
	};
	
};
