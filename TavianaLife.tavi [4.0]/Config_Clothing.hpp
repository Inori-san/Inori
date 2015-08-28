/*
    ARRAY FORMAT:
        0: STRING (Classname)
        1: STRING (Display Name, leave as "" for default)
        2: SCALAR (Price)
        4: ARRAY (This is for limiting items to certain things)
            0: Variable to read from
            1: Variable Value Type
            2: What to compare to
*/
class Clothing {
	/////////////////////////////////////////////////////////////Army Shops/////////////////////////////////////////////////////////////
	class army_clothes_land {
        title = "Vêtements de l'armée";
        license = "";
        side = "adac";

        uniforms[] = {
    
        { "NONE", "Remove Uniform", 0, { "", "", -1 } },
		{ "rhs_uniform_flora", "", 0, { "", "", -1 }}
			};

        headgear[] = {
        { "NONE", "Remove Hat", 0, { "", "", -1 } },
        { "rhs_6b27m_green", "", 0, { "", "", -1 } },
        { "rhs_6b27m", "", 0, { "", "", -1 } }
			};

        goggles[] = {
        { "NONE", "Remove Glasses", 0, { "", "", -1 } },
        { "G_Aviator", "", 0, { "", "", -1 } },
        { "rhs_balaclava", "", 0, { "", "", -1 } },
        { "G_Balaclava_blk", "", 0, { "", "", -1 } },
        { "TRYK_US_ESS_Glasses_NV", "Lunettes ESS (JVN)", 0, { "", "", -1 } },
        { "TRYK_ESS_BLKBLK_NV", "Lunettes ESS (JVN)", 0, { "", "", -1 } }
			};

        vests[] = {
        { "NONE", "Remove Vest", 0, { "", "", -1 } },
        { "rhs_6b23_6sh92", "", 0, { "", "", -1 } }
			};

        backpacks[] = {
        { "NONE", "Remove Backpack", 0, { "", "", -1 } },
        { "rhs_assault_umbts", "Sac à dos UMBTS", 0, { "", "", -1 } }
			};
    };
	
	class army_clothes_air {
        title = "Vêtements de l'armée";
        license = "";
        side = "adac";

        uniforms[] = {
        { "NONE", "Remove Uniform", 0, { "", "", -1 } },
        { "U_RU_Pilot_Suit", "Combinaison de Pilote d’Hélico", 0, { "", "", -1 }},
        { "U_I_pilotCoveralls", "Combinaison de Pilote d’Avion", 0, { "", "", -1 }},
		{ "rhs_uniform_df15", "Combinaison DF-15-2", 0, { "", "", -1 }},
        { "rhs_uniform_m88_patchless", "Tenue Multifonction M88", 0, { "", "", -1 }},
        { "rhs_uniform_vdv_flora", "", 0, { "", "", -1 }}
			};

        headgear[] = {
        { "NONE", "Remove Hat", 0, { "", "", -1 } },
        { "rhs_zsh7a", "", 0, { "", "", -1 } },
        { "rhs_zsh7a_mike", "", 0, { "", "", -1 } },
        { "H_HelmetCrew_I", "Casque d’équipage", 0, { "", "", -1 } },
        { "H_HelmetCrew_0", "Casque d’équipage FS", 0, { "", "", -1 } },
        { "H_CrewHelmetHeli_O", "Casque Pilote Vert", 0, { "", "", -1 } },
        { "H_CrewHelmetHeli_B", "Casque Pilote Noir", 0, { "", "", -1 } },
        { "H_PilotHelmetHeli_O", "Casque Vert", 0, { "", "", -1 } },
        { "H_PilotHelmetHeli_B", "Casque Noir", 0, { "", "", -1 } },
        { "rhs_6b28_green", "", 0, { "", "", -1 } },
        { "TRYK_H_TACEARMUFF_H", "Headset", 0, { "", "", -1 } },
        { "rhs_gssh18", "Headset GSSh-A-18", 0, { "", "", -1 } }
			};

        goggles[] = {
        { "NONE", "Remove Glasses", 0, { "", "", -1 } },
        { "G_Aviator", "", 0, { "", "", -1 } },
        { "rhs_balaclava", "", 0, { "", "", -1 } },
        { "G_Balaclava_blk", "", 0, { "", "", -1 } },
        { "G_Bandanna_beast", "", 0, { "", "", -1 } },
		{ "TRYK_US_ESS_Glasses_NV", "Lunettes ESS (JVN)", 0, { "", "", -1 } },
        { "TRYK_ESS_BLKBLK_NV", "Lunettes ESS (JVN)", 0, { "", "", -1 } }
			};

        vests[] = {
        { "NONE", "Remove Vest", 0, { "", "", -1 } },
        { "rhs_6b23_6sh92", "", 0, { "", "", -1 } },
        { "rhs_6sh46", "", 0, { "", "", -1 } }
			};

        backpacks[] = {
        { "NONE", "Remove Backpack", 0, { "", "", -1 } },
        { "B_Parachute", 0, { "", "", -1 } },
        { "B_FieldPack_oli", "Sac à dos UMBTS", 0, { "", "", -1 } }
			};
    };
	
	class army_clothes_water {
        title = "Vêtements de l'armée";
        license = "";
        side = "adac";

        uniforms[] = {
        { "NONE", "Remove Uniform", 0, { "", "", -1 } },
        { "TRYK_U_B_BLKBLK_CombatUniform", "", 0, { "", "", -1 }},
        { "U_mas_rus_O_Gorka_uniform_na", "", 0, { "", "", -1 }},
        { "U_mas_rus_O_Gorka_uniform_d", "", 0, { "", "", -1 }}
			};

        headgear[] = {
        { "NONE", "Remove Hat", 0, { "", "", -1 } },
        { "H_mas_rus_helmet_ops_sf_gog_g", "", 0, { "", "", -1 } },
        { "H_mas_rus_helmet_ops_sf_gog_b", "", 0, { "", "", -1 } },
        { "H_mas_rus_woolhat_ht", "", 0, { "", "", -1 } },
        { "TRYK_H_Bandana_H", "", 0, { "", "", -1 } },
        { "H_mas_rus_Bandana", "", 0, { "", "", -1 } }
			};

        goggles[] = {
        { "NONE", "Remove Glasses", 0, { "", "", -1 } },
        { "G_Aviator", "", 0, { "", "", -1 } },
        { "Balaclava_OD", "", 0, { "", "", -1 } },
        { "Balaclava_Black", "", 0, { "", "", -1 } },
        { "Mask_M40", "", 0, { "", "", -1 } },
        { "Mask_M50", "", 0, { "", "", -1 } },
        { "TRYK_Beard_BK", "", 0, { "", "", -1 } },
        { "TRYK_Beard TRYK_Beard_BW", "", 0, { "", "", -1 } },
        { "TRYK_Beard_Gr", "", 0, { "", "", -1 } },
        { "TRYK_Beard_BK2", "", 0, { "", "", -1 } },
        { "TRYK_Beard2", "", 0, { "", "", -1 } },
        { "TRYK_Beard_BW2", "", 0, { "", "", -1 } },
        { "TRYK_Beard_Gr2", "", 0, { "", "", -1 } },
        { "TRYK_Beard_BK3", "", 0, { "", "", -1 } },
        { "TRYK_Beard3", "", 0, { "", "", -1 } },
        { "TRYK_Beard_BW3", "", 0, { "", "", -1 } },
        { "TRYK_Beard_Gr3", "", 0, { "", "", -1 } },
        { "TRYK_Beard_BK4", "", 0, { "", "", -1 } },
        { "TRYK_Beard4", "", 0, { "", "", -1 } },
        { "TRYK_Beard_BW4", "", 0, { "", "", -1 } },
        { "TRYK_Beard_Gr4", "", 0, { "", "", -1 } },
		{ "TRYK_US_ESS_Glasses_NV", "Lunettes ESS (JVN)", 0, { "", "", -1 } },
        { "TRYK_ESS_BLKBLK_NV", "Lunettes ESS (JVN)", 0, { "", "", -1 } }
			};

        vests[] = {
        { "NONE", "Remove Vest", 0, { "", "", -1 } },
        { "TRYK_V_tacSVD_OD", "", 0, { "", "", 1 } },
        { "TRYK_V_tacv10LC_OD", "", 0, { "", "", -1 } },
        { "TRYK_V_tacSVD_BK", "", 0, { "", "", -1 } },
        { "TRYK_V_ChestRig_L", "", 0, { "", "", -1 } }
			};

        backpacks[] = {
        { "NONE", "Remove Backpack", 0, { "", "", -1 } },
        { "TRYK_B_Belt_BLK", "", 0, { "", "", -1 } },
        { "TRYK_B_Belt_br", "", 0, { "", "", -1 } },
        { "TRYK_B_Belt_CYT", "", 0, { "", "", -1 } },
        { "TRYK_B_Medbag_OD", "", 0, { "", "", -1 } },
        { "rhs_assault_umbts", "Sac à dos UMBTS", 0, { "", "", -1 } },
        { "TRYK_B_Kitbag_blk", "", 0, { "", "", -1 } }
			};
    };
	
	/////////////////////////////////////////////////////////////Police Shops/////////////////////////////////////////////////////////////
	class cops_clothes {
        title = "Penderie de la police";
        license = "";
        side = "cop";

        uniforms[] = {
    
        { "NONE", "Remove Uniform", 0, { "", "", -1 } },
		{ "U_mas_rus_O_Gorka_uniform_u", "Uniforme réglementaire", 0, { "", "", -1 }}
			};

        headgear[] = {
        { "NONE", "Remove Hat", 0, { "", "", -1 } },
        { "H_Beret_02", "Bérêt réglementaire", 0, { "", "", -1 } }
			};

        goggles[] = {
        { "NONE", "Remove Glasses", 0, { "", "", -1 } },
        { "G_Shades_Black", "", 0, { "", "", -1 } },
        { "G_Squares_Tinted", "", 0, { "", "", -1 } },
        { "G_Aviator", "", 0, { "", "", -1 } },
        { "G_mas_wpn_gog_d", "", 0, { "", "", -1 } },
        { "TRYK_Shemagh", "", 0, { "", "", -1 } },
        { "TRYK_Shemagh_shade", "", 0, { "", "", -1 } }
			};

        vests[] = {
        { "NONE", "Remove Vest", 0, { "", "", -1 } },
        { "TRYK_V_tacv1_P_BK", "Veste tactique pare-balle", 0, { "", "", -1 } }
			};

        backpacks[] = {
        { "NONE", "Remove Backpack", 0, { "", "", -1 } },
        { "TRYK_B_Coyotebackpack_BLK", "Sac de patrouille", 0, { "", "", -1 } }
			};
    };
	/////////////////////////////////////////////////////////////Rebels Shops/////////////////////////////////////////////////////////////
	class reb {
		title = "Vêtements rebelle";
		license = "rebel";
		side = "civ";

		uniforms[] = {
		{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
		{ "U_IG_Guerilla1_1", "", 5000, {"", "", -1} },
		{ "U_I_G_Story_Protagonist_F", "", 7500, { "", "", -1 } },
		{ "U_I_G_resistanceLeader_F", "", 11500, { "", "", -1 } },
		{ "U_O_SpecopsUniform_ocamo", "", 17500, { "", "", -1 } },
		{ "U_O_PilotCoveralls", "", 15610, { "", "", -1 } },
		{ "U_IG_leader", "Guerilla Leader", 15340, { "", "", -1 } },
		{ "U_O_GhillieSuit", "", 50000, { "", "", -1 } }
			};

		headgear[] = {
		{ "NONE", "Remove Hat", 0, { "", "", -1 } },
		{ "H_ShemagOpen_tan", "", 850, { "", "", -1 } },
		{ "H_Shemag_olive", "", 850, { "", "", -1 } },
		{ "H_ShemagOpen_khk", "", 800, { "", "", -1 } },
		{ "H_HelmetO_ocamo", "", 2500, { "", "", -1 } },
		{ "H_MilCap_oucamo", "", 1200, { "", "", -1 } },
		{ "H_Bandanna_camo", "", 650, { "", "", -1 } }
			};

		goggles[] = {
		{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
		{ "G_Shades_Black", "", 25, { "", "", -1 } },
		{ "G_Shades_Blue", "", 20, { "", "", -1 } },
		{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
		{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
		{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
		{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
		{ "G_Squares", "", 10, { "", "", -1 } },
		{ "G_Lowprofile", "", 30, { "", "", -1 } },
		{ "G_Combat", "", 55, { "", "", -1 } }
			};

		vests[] = {
		{ "NONE", "Remove Vest", 0, { "", "", -1 } },
		{ "V_TacVest_khk", "", 12500, { "", "", -1 } },
		{ "V_BandollierB_cbr", "", 4500, { "", "", -1 } },
		{ "V_HarnessO_brn", "", 7500, { "", "", -1 } }
			};

		backpacks[] = {
		{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
		{"B_AssaultPack_cbr", "", 2500, { "", "", -1 }},
		{ "B_Kitbag_mcamo", "", 4500, { "", "", -1 } },
		{ "B_TacticalPack_oli", "", 3500, { "", "", -1 } },
		{ "B_FieldPack_ocamo", "", 3000, { "", "", -1 } },
		{ "B_Bergen_sgg", "", 4500, { "", "", -1 } },
		{ "B_Kitbag_cbr", "", 4500, { "", "", -1 } },
		{ "B_Carryall_oli", "", 5000, { "", "", -1 } },
		{ "B_Carryall_khk", "", 5000, { "", "", -1 } }
			};
	};
	
	class resist {
        title = "Tenues de résistant";
        license = "rebel";
        side = "civ";

        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "TRYK_U_denim_hood_blk", "", 5000, {"", "", -1} },
            { "TRYK_U_denim_hood_mc", "", 5000, {"", "", -1} },
            { "TRYK_U_denim_hood_nc", "", 5000, {"", "", -1} },
            { "TRYK_U_pad_hood_Blod", "", 5000, {"", "", -1} },
            { "TRYK_U_pad_hood_Cl_blk", "", 5000, {"", "", -1} },
            { "TRYK_U_B_PCUHsW3", "", 5000, {"", "", -1} },
            { "TRYK_shirts_DENIM_BK", "", 5000, {"", "", -1} },
            { "TRYK_U_B_PCUGs_OD_R", "", 5000, {"", "", -1} },
            { "TRYK_U_B_BLK_T_BG_BK", "", 5000, {"", "", -1} },
            { "TRYK_shirts_BLK_PAD_BK", "", 5000, {"", "", -1} },
            { "U_I_G_Story_Protagonist_F", "", 7500, { "", "", -1 } },
            { "U_I_G_resistanceLeader_F", "", 11500, { "", "", -1 } },
            { "U_O_SpecopsUniform_ocamo", "", 17500, { "", "", -1 } },
            { "U_O_PilotCoveralls", "", 15610, { "", "", -1 } },
            { "U_IG_leader", "Guerilla Leader", 15340, { "", "", -1 } },
            { "U_O_GhillieSuit", "", 50000, { "", "", -1 } }
        };

        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "TRYK_ESS_CAP", "", 850, { "", "", -1 } },
            { "TRYK_H_headsetcap_blk", "", 850, { "", "", -1 } },
            { "TRYK_R_CAP_BLK", "", 800, { "", "", -1 } },
            { "TRYK_R_CAP_OD_US", "", 2500, { "", "", -1 } },
            { "H_MilCap_oucamo", "", 1200, { "", "", -1 } },
            { "H_Bandanna_camo", "", 650, { "", "", -1 } }
        };

        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "TRYK_Shemagh_shade_G", "", 10, { "", "", -1 } },
            { "G_mas_wpn_wrap_mask_g", "", 30, { "", "", -1 } },
            { "G_Balaclava_oli", "", 55, { "", "", -1 } },
            { "G_mas_wpn_bala", "", 55, { "", "", -1 } },
            { "G_Bandanna_oli", "", 55, { "", "", -1 } }
        };

        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "TRYK_V_Sheriff_BA_TB", "", 12500, { "", "", -1 } },
            { "rhs_vest_commander", "", 4500, { "", "", -1 } },
            { "V_ArmorVestGL_RU", "", 7500, { "", "", -1 } },
            { "V_mas_rus_ChestrigO_rgr_b", "", 4500, { "", "", -1 } },
            { "TRYK_V_Sheriff_BA_T", "", 4500, { "", "", -1 } },
            { "TRYK_V_Sheriff_BA_T2", "", 4500, { "", "", -1 } },
            { "TRYK_U_B_PCUGs_OD_R", "", 4500, { "", "", -1 } },
            { "TRYK_V_ArmorVest_green2", "", 4500, { "", "", -1 } },
            { "TRYK_V_harnes_blk_L", "", 4500, { "", "", -1 } },
            { "TRYK_V_harnes_od_L", "", 4500, { "", "", -1 } }
        };

        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            {"B_AssaultPack_cbr", "", 2500, { "", "", -1 }},
            {"rhs_sidor", "", 2500, { "", "", -1 }},
            {"TRYK_B_Kitbag_blk", "", 2500, { "", "", -1 }},
            {"B_mas_Kitbag_rng", "", 2500, { "", "", -1 }},
            { "B_Kitbag_mcamo", "", 4500, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 3500, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 3000, { "", "", -1 } },
            { "B_Bergen_sgg", "", 4500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 4500, { "", "", -1 } },
            { "TRYK_B_Kitbag_blk", "", 5000, { "", "", -1 } },
            { "B_Carryall_khk", "", 5000, { "", "", -1 } }
        };
    };


	
	/////////////////////////////////////////////////////////////Civils Shops/////////////////////////////////////////////////////////////
	class civil_clothes {
		title = "Vêtements civil";
		license = "";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_C_Poloshirt_blue", "Poloshirt Blue", 250, { "", "", -1 } },
			{ "U_C_Poloshirt_burgundy", "Poloshirt Burgundy", 275, { "", "", -1 } },
			{ "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 150, { "", "", -1 } },
			{ "U_C_Poloshirt_salmon", "Poloshirt Salmon", 175, { "", "", -1 } },
			{ "U_C_Poloshirt_stripped", "Poloshirt stripped", 125, { "", "", -1 } },
			{ "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 350, { "", "", -1 } },
			{ "U_C_Poor_2", "Rag tagged clothes", 250, { "", "", -1 } },
			{ "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 650, { "", "", -1 } },
			{ "U_IG_Guerilla3_1", "Brown Jacket & Pants", 735, { "", "", -1 } },
			{ "U_IG_Guerilla2_3", "The Outback Rangler", 1200, { "", "", -1 } },
			{ "U_C_HunterBody_grn", "The Hunters Look", 1500, { "", "", -1 } },
			{ "U_C_WorkerCoveralls", "Mechanic Coveralls", 2500, { "", "", -1 } },
			{ "U_OrestesBody", "Surfing On Land", 1100, { "", "", -1 } },
			{ "U_NikosAgedBody", "Casual Wears", 5000, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_Bandanna_camo", "Camo Bandanna", 120, { "", "", -1 } },
			{ "H_Bandanna_surfer", "Surfer Bandanna", 130, { "", "", -1 } },
			{ "H_Bandanna_gry", "Grey Bandanna", 150, { "", "", -1 } },
			{ "H_Bandanna_cbr", "", 165, { "", "", -1 } },
			{ "H_Bandanna_surfer", "", 135, { "", "", -1 } },
			{ "H_Bandanna_khk", "Khaki Bandanna", 145, { "", "", -1 } },
			{ "H_Bandanna_sgg", "Sage Bandanna", 160, { "", "", -1 } },
			{ "H_StrawHat", "Straw Fedora", 225, { "", "", -1 } },
			{ "H_BandMask_blk", "Hat & Bandanna", 300, { "", "", -1 } },
			{ "H_Booniehat_tan", "", 425, { "", "", -1 } },
			{ "H_Hat_blue", "", 310, { "", "", -1 } },
			{ "H_Hat_brown", "", 276, { "", "", -1 } },
			{ "H_Hat_checker", "", 340, { "", "", -1 } },
			{ "H_Hat_grey", "", 280, { "", "", -1 } },
			{ "H_Hat_tan", "", 265, { "", "", -1 } },
			{ "H_Cap_blu", "", 150, { "", "", -1 } },
			{ "H_Cap_grn", "", 150, { "", "", -1 } },
			{ "H_Cap_grn_BI", "", 150, { "", "", -1 } },
			{ "H_Cap_oli", "", 150, { "", "", -1 } },
			{ "H_Cap_red", "", 150, { "", "", -1 } },
			{ "H_Cap_tan", "", 150, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Aviator", "", 100, { "", "", -1 } },
			{ "G_Lady_Mirror", "", 150, { "", "", -1 } },
			{ "G_Lady_Dark", "", 150, { "", "", -1 } },
			{ "G_Lady_Blue", "", 150, { "", "", -1 } },
			{ "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Combat", "", 55, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 2500, { "", "", -1 } },
			{ "B_Kitbag_mcamo", "", 4500, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 3500, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 3000, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 4500, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 4500, { "", "", -1 } },
			{ "B_Carryall_oli", "", 5000, { "", "", -1 } },
			{ "B_Carryall_khk", "", 5000, { "", "", -1 } }
		};
	};
	
	class dive {
		title = "Tenue de plongée";
		license = "dive";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_B_Wetsuit", "", 2000, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Diving", "", 500, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_RebreatherB", "", 5000, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } }
		};
	};
	
	class kart {
		title = "Tenues de karting";
		license = "";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_C_Driver_1_black", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_blue", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_red", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_orange", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_green", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_white", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_yellow", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_2", "", 3500, { "", "", -1 } },
			{ "U_C_Driver_1", "", 3600, { "", "", -1 } },
			{ "U_C_Driver_3", "", 3700, { "", "", -1 } },
			{ "U_C_Driver_4", "", 3700, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_RacingHelmet_1_black_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_red_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_white_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_blue_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_yellow_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_green_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_F", "", 2500, { "", "", -1 } },
			{ "H_RacingHelmet_2_F", "", 2500, { "", "", -1 } },
			{ "H_RacingHelmet_3_F", "", 2500, { "", "", -1 } },
			{ "H_RacingHelmet_4_F", "", 2500, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } }
		};
	};
};