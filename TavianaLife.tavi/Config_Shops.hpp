class WeaponShops {
	//Army Shops
	class army_weap_land {
        name = "Armement militaire";
        side = "adac";
        license = "";
        level = -1;
        msg = "Vous n'êtes pas militaire!";
        items[] = {
				{"rhs_weap_ak74m", "", 0 },
				{"rhs_30Rnd_545x39_AK", "Chargeur AK-74M Polymere", 0 },
				{"hgun_mas_grach_F", "", 0 },
				{"17Rnd_mas_9x21_Mag", "Chargeur MP-443 Grach", 0 },
				{"rhs_acc_ekp1", "Red Dot EKP-1S-03", 0 },
				{"rhs_acc_pkas", "Red Dot PK-AS", 0 },
				{"rhs_acc_pso1m2", "Lunette PSO-1M2", 0 },
				{"rhs_acc_ak5", "Cache Flamme DPM-AK-5", 0 },
				{"rhs_acc_dtk", "Cache Flamme DTK", 0 },
				{"rhs_acc_dtk1", "Cache Flamme DTK-1", 0 },
				{"rhs_acc_dtk3", "Cache Flamme DTK-3", 0 },
				{"TRYK_US_ESS_Glasses_NV", "Masque (JVN)", 0 },
				{"TRYK_ESS_BLKBLK_NV", "Masque Noir (JVN)", 0 }
        };
    };
	
	class army_weap_air {
        name = "Armement militaire";
        side = "adac";
        license = "";
        level = -1;
        msg = "Vous n'êtes pas militaire!";
        items[] = {
				{"hlc_rifle_ak12", "", 0 },
				{"hlc_30Rnd_545x39_B_AK", "Chargeur AK12", 0 },
				{"SMG_02_F", "", 0 },
				{"hgun_PDW2000_F", "", 0 },
				{"30Rnd_9x21_Mag", "Chargeur PDW 9mm", 0 },
				{"RH_gsh18", "", 0 },
				{"RH_18Rnd_9x19_gsh", "Chargeur GSH-18", 0 },
				{"rhs_mag_rgd5", "Grenade RGD-5", 0 },
				{"RH_barska_rds", "Red Dot Barska", 0 },
				{"RH_t1", "Red Dot T1", 0 },
				{"RH_shortdot", "Lunette Schmidt", 0 },
				{"RH_peq15b_top", "", 0 },
				{"RH_peq15b", "", 0 },
				{"RH_SFM952V", "Cache Flamme DTK-1", 0 },
				{"TRYK_US_ESS_Glasses_NV", "Masque (JVN)", 0 },
				{"TRYK_ESS_BLKBLK_NV", "Masque Noir (JVN)", 0 }
        };
    };
	
	class army_weap_water {
        name = "Armement militaire";
        side = "adac";
        license = "";
        level = -1;
        msg = "Vous n'êtes pas militaire!";
        items[] = {
				{"hlc_rifle_ak12", "", 0 },
				{"hlc_rifle_aku12", "", 0 },
				{"hlc_30Rnd_545x39_B_AK", "Chargeur AK12", 0 },
				{"arifle_mas_asval_ds", "", 0 },
				{"30Rnd_mas_9x39_mag", "Chargeur AS VAL", 0 },
				{"RH_cz75", "", 0 },
				{"RH_16Rnd_9x19_CZ", "Chargeur CZ75", 0 },
				{"RH_mp412", "", 0 },
				{"RH_6Rnd_357_Mag", "Chargeur MP412", 0 },
				{"DemoCharge_Remote_Mag", "", 0 },
				{"APERSTripMine_Wire_Mag", "", 0 },
				{"RH_LTdocterl", "Red Dot Larue", 0 },
				{"RH_barska_rds", "Red Dot Barska", 0 },
				{"RH_shortdot", "Lunette Schmidt", 0 },
				{"optic_mas_kobra", "Red Dot Kobra", 0 },
				{"optic_mas_PSO", "Lunette PSO", 0 },
				{"hlc_muzzle_545SUP_AK", "Silencieux AK12", 0 },
				{"RH_SFM952V", "", 0 },
				{"RH_gemtech9", "", 0 },
				{"RH_peq15b_top", "", 0 },
				{"RH_peq15b", "", 0 },
				{"TRYK_bandana_NV", "", 0 },
				{"rhs_weap_tr8", "", 0 }
        };
    };
	
	class army_weap_gen {
        name = "Equipement militaire";
        side = "adac";
        license = "";
        level = -1;
        msg = "Vous n'êtes pas militaire!";
        items[] = {
				{"Rangefinder", "", 0 },
				{"Medikit", "", 0 },
				{"cw_item_notepad", "Bloc-note", 0 },
				{"cw_dtag_dogtag_item_01", "Plaques militaire", 0 },
				{"SmokeShell", "Fumigène M83 Blanche", 0 },
				{"SmokeShellRed", "Fumigène M18 Rouge", 0 },
				{"SmokeShellGreen", "Fumigène M18 Verte", 0 },
				{"rhs_mag_nspn_red", "Fusée NSP-N Rouge", 0 },
				{"rhs_mag_rgd5", "Grenade RGD-5", 0 },
				{"rhs_mag_fakel", "Grenade Fakel", 0 },
				{"Rangefinder", "", 0 },
				{"ItemMap", "", 0 },
				{"ItemCompass", "", 0 },
				{"ItemRadio", "", 0 },
				{"ItemWatch", "", 0 },
				{"B_UavTerminal", "", 0 },
				{"SUD_NVG", "JVN", 0 },
				{"NVGoggles_OPFOR", "JVN Noir", 0 },
				{"A3_GPNVG18b_BLK_F", "", 0 }
		};
	};
	
	//Police Shops
	class cops_genstore {
        name = "Equipement général";
        side = "cop";
        license = "";
        level = -1;
        msg = "Vous ne faites pas parti de la police!";
        items[] = {
            {"TRYK_Headset_NV", "Lunettes de vision nocturne", 0 },
			{"Rangefinder", "Télémètre", 0 },
			{"ItemGPS", "GPS", 0 },
			{"ItemMap", "", 0 },
			{"ItemCompass", "", 0 },
			{"ItemWatch", "", 0 },
			{"ItemRadio", "", 0 },
			{"FirstAidKit", "", 0 },
			{"Chemlight_blue", "", 0 },
			{"SmokeShell", "", 0 },
			{"SmokeShellOrange", "", 0 },
			{"SmokeShellRed", "", 0 },
			{"SmokeShellBlue", "", 6500 },
			{"rhs_weap_tr8", "", 6500 },
			{"Chemlight_red", "", 6500 }
        };
    };
	
	class cops_weapons {
        name = "Armurerie de la Police";
        side = "cop";
        license = "";
        level = -1;
        msg = "Vous ne faites pas parti de la police!";
        items[] = {
				{"RH_p226", "", 0 },
				{"RH_15Rnd_9x19_SIG", "", 0 },
				{"RH_X300", "", 0 },
				{"hlc_smg_mp5a4", "", 0 },
				{"hlc_30Rnd_9x19_GD_MP5", "", 0 },
				{"RH_SFM952V", "Lampe torche", 0 },
				{"RH_compm4s", "AimPoint CompM4", 0 },
				{"RH_barska_rds", "Viseur CircleDot", 0 },
				{"optic_Hamr", "", 0 },
				{"hlc_rifle_g3ka4", "", 0, { "life_coplevel", 3 } },
				{"hlc_20rnd_762x51_b_G3", "", 0, { "life_coplevel", 3 } },
				{"RH_compM2l", "AimPoint CompM2", 0, { "life_coplevel", 3 } },
				{"RH_HBLM", "", 0, { "life_coplevel", 3 } },
				{"optic_MRCO", "", 0, { "life_coplevel", 3 } },
				{"hlc_rifle_auga3_b", "", 0, { "life_coplevel", 5 } },
				{"hlc_30Rnd_556x45_B_AUG", "", 0, { "life_coplevel", 5 } },
				{"RH_Deagles", "", 0, { "life_coplevel", 5 } },
				{"RH_7Rnd_50_AE", "", 0, { "life_coplevel", 5 } },
				{"RH_bull", "", 0, { "life_coplevel", 8 } },
				{"RH_6Rnd_454_Mag", "", 0, { "life_coplevel", 8 } }
		};
	};
	/*
	class cops_sergent {
        name = "Casier de Sergent";
        side = "cop";
        license = "";
        level = 3;
        msg = "";
        items[] = {
				{"RH_p226", "", 0 },
				{"RH_15Rnd_9x19_SIG", "", 0 },
				{"RH_X300", "", 0 },
				{"hlc_rifle_g3ka4", "", 0 },
				{"hlc_20rnd_762x51_b_G3", "", 0 },
				{"RH_SFM952V", "Lampe torche", 0 },
				{"RH_compM2l", "AimPoint CompM2", 0 },
				{"RH_compm4s", "Aimpoint CompM4", 0 },
				{"RH_barska_rds", "Viseur CircleDot", 0 },
				{"optic_MRCO", "", 0 },
				{"optic_Hamr", "", 0 },
				{"RH_HBLM", "", 0 }
		};
	};
	
	class cops_lieutenant {
        name = "Casier de Lieutenant";
        side = "cop";
        license = "";
        level = 5;
        msg = "";
        items[] = {
				{"hlc_rifle_auga3_b", "", 0 },
				{"hlc_30Rnd_556x45_B_AUG", "", 0 },
				{"RH_SFM952V", "Lampe torche", 0 },
				{"RH_compM2l", "AimPoint CompM2", 0 },
				{"RH_compm4s", "Aimpoint CompM4", 0 },
				{"RH_barska_rds", "Viseur CircleDot", 0 },
				{"optic_MRCO", "", 0 },
				{"optic_Hamr", "", 0 },
				{"RH_Deagles", "", 0 },
				{"RH_7Rnd_50_AE", "", 0 }
		};
	};
	
	class cops_colonel {
        name = "Tiroir du Chef de service";
        side = "cop";
        license = "";
        level = 8;
        msg = "";
        items[] = {
				{"RH_bull", "", 0 },
				{"RH_6Rnd_454_Mag", "", 0 }
		};
	};*/
	
	//Civil Shops
	class civil_gun {
        name = "Armurerie Civile";
        side = "civ";
        license = "gun";
        level = -1;
        msg = "";
        items[] = {
            {"RH_cz75", "", 6500 },
			{"RH_16Rnd_9x19_cz", "", 6500 },
			{"RH_fn57", "", 6500 },
			{"RH_20Rnd_57x28_FN", "", 6500 },
			{"RH_m1911", "", 6500 },
			{"RH_7Rnd_45cal_m1911", "", 6500 },
			{"RH_tt33", "", 6500 },
			{"RH_8Rnd_762_tt33", "", 6500 },
			{"RH_tec9", "", 6500 },
			{"RH_32Rnd_9x19_tec", "", 6500 },
			{"RH_vz61", "", 6500 },
			{"RH_20Rnd_32cal_vz61", "", 6500 }
        };
    };
	
	class civil_genstore {
        name = "Fournitures générales";
        side = "civ";
        license = "";
        level = -1;
        msg = "";
        items[] = {
        	{"Binocular", "", 150 },
			{"ItemGPS", "", 100 },
			{"ToolKit", "", 250 },
			{"FirstAidKit", "", 150 },
			{"NVGoggles", "", 2000 },
			{"Chemlight_red", "", 300 },
			{"Chemlight_yellow", "", 300 },
			{"Chemlight_green", "", 300 },
			{"Chemlight_blue", "", 300 }
        };
    };
	
	//Rebels Shops
	class rebel {
        name = "Yuri Orlov Shop";
        side = "civ";
        license = "rebel";
        level = -1;
        msg = "Vous n'êtes pas rebelle !";
        items[] = {
            {"hlc_rifle_ak47", "AK47", 25000 },
            {"hlc_30Rnd_762x39_b_ak", "Munition AK47", 30000 },
            {"hlc_rifle_aks74u", "AKS74u", 25000 },
            {"hlc_30Rnd_545x39_B_AK", "Munition AKS", 30000 },
            {"arifle_SUD_AKMS", "", 25000 },
            {"30Rnd_762x39_AKM", "Munition AKM", 30000 },
            {"rhs_weap_rpg7", "", 25000 },
            {"rhs_rpg7_PG7VL_mag", "Munition RPG", 30000 },
            {"arifle_mas_lee", "", 25000 },
            {"5Rnd_mas_762x51_Stanag", "Munition Enfield", 30000 },
            {"rhs_acc_pso1m2", "", 30000 },
            {"rhs_acc_ekp1", "", 30000 },
            {"HLC_Optic_1p29", "", 30000 },
            {"optic_mas_DMS", "", 30000 },
            {"optic_mas_term", "", 30000 },
            };
    };
	
	class rebel_us {
        name = " 'merican Shop";
        side = "civ";
        license = "rebel";
        level = -1;
        msg = "";
        items[] = {
            {"hlc_rifle_M4", "", 25000 },
            {"hlc_30rnd_556x45_EPR", "Munition M4", 30000 },
            {"RH_m16a4_m_des", "", 25000 },
            {"RH_m16a4_m_wdl", "", 25000 },
            {"RH_30Rnd_556x45_M855A1", "Munition M16A4", 30000 },
            {"RH_ta31rmr_2D", "", 30000 },
            {"RH_compM2", "", 30000 },
            {"RH_barska_rds", "", 30000 },
            {"RH_eotech553mag", "", 30000 },
            {"RH_leu_mk4", "", 30000 },
            {"RH_accupoint", "", 30000 }
        };
    };

	
	//Medic Shops
	class med_basic {
        name = "store";
        side = "med";
        license = "";
        level = -1;
        items[] = {
            {"ItemGPS", "", 100 },
			{"Binocular", "", 150 },
			{"ToolKit", "", 250 },
			{"FirstAidKit", "", 150 },
			{"Medikit", "", 500 },
			{"NVGoggles", "", 1200 },
			{"B_FieldPack_ocamo", "", 3000 }
        };
    };
};
