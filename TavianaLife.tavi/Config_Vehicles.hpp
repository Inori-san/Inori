class CarShops {
	/*
		Format:
		{ Classname, rental price, license required, { varname, >= value } }

		{ varname, >= value} this is a "level" requirement mainly used by cops and rebels, do not fill this in if you are not utilizing it.
	*/
	/////////////////////////////////////////////////////////////Army Shops/////////////////////////////////////////////////////////////
class army_car_land {
		side = "adac";
		vehicles[] = {
			{ "rhs_uaz_vv", 0, "" },
			{ "rhs_uaz_open_vv", 0, "" }, 
			{ "rhs_tigr_vv", 0, "" },
			{ "rhs_tigr_3camo_vv", 0, "" },
			{ "rhs_tigr_ffv_vv", 0, "" },
			{ "rhs_tigr_ffv_3camo_vv", 0, "" },
			{ "rhs_gaz66_vv", 0, "" },
			{ "rhs_gaz66_r142_vv", 0, "" },
			{ "rhs_gaz66_ap2_vv", 0, "" },
			{ "rhs_gaz66_repair_vv", 0, "" },
			{ "RHS_Ural_VV_01", 0, "" },
			{ "RHS_Ural_Fuel_VV_01", 0, "" },
			{ "RHS_Ural_Open_VV_01", 0, "" },
			{ "rhs_btr80a_vv", 150000, "" },	//Uniquement location
			{ "rhs_prp3_tv", 0, "" },
			{ "rhs_t90_tv", 500000, "" },	//Uniquement Location
			{ "rhs_zsu234_aa", 450000, "" }	//Uniquement Location
		};
	};

	class army_heli_land {
		side = "adac";
		vehicles[] = {
			{ "RHS_Mi8AMT_vvs", 0, "" },
			{ "RHS_Mi8mt_vvs", 0, "" }
		};
	};
	
	class army_car_air {
		side = "adac";
		vehicles[] = {
			{ "rhs_uaz_vdv", 0, "" },
			{ "rhs_uaz_open_vdv", 0, "" },
			{ "rhs_tigr_vdv", 0, "" },
			{ "rhs_tigr_3camo_vdv", 0, "" },
			{ "rhs_tigr_ffv_vdv", 0, "" },
			{ "rhs_tigr_ffv_3camo_vdv", 0, "" },
			{ "rhs_gaz66_vdv", 0, "" },
			{ "rhs_gaz66_r142_vdv", 0, "" },
			{ "rhs_gaz66_ap2_vdv", 0, "" },
			{ "rhs_gaz66_repair_vdv", 0, "" },
			{ "RHS_Ural_VDV_01", 0, "" },
			{ "RHS_Ural_Fuel_VDV_01", 0, "" },
			{ "RHS_Ural_Open_VDV_01", 0, "" },
			{ "rhs_zsu234_aa", 0, "" }	//Uniquement location
		};
	};
	
	class army_heli_air {
		side = "adac";
		vehicles[] = {
			{ "rhs_ka60_c", 0, "" },
			{ "RHS_Mi8AMT_vvs", 0, "" },
			{ "RHS_Mi8mt_vvs", 0, "" },
			{ "RHS_Mi8AMTSh_UPK23_vvs", 0, "" },
			{ "RHS_Mi8MTV3_UPK23_vvs", 0, "" },
			{ "RHS_Mi24V_UPK23_vvs", 0, "" },
			{ "RHS_Ka52_UPK23_vvsc", 0, "" },
			{ "RHS_Su25SM_KH29_vvs", 0, "" },	//Avion
			{ "RHS_Su25SM_vvs", 0, "" },	//Avion
			{ "IVORY_MIG29K_1", 0, "" }		//Avion

		};
	};
	
	class army_car_water {
		side = "adac";
		vehicles[] = {
			{ "rhs_uaz_vmf", 0, "" },
			{ "rhs_uaz_open_vmf", 0, "" },
			{ "rhs_tigr_vmf", 0, "" },
			{ "rhs_tigr_3camo_vmf", 0, "" },
			{ "rhs_tigr_ffv_vmf", 0, "" },
			{ "rhs_tigr_ffv_3camo_vmf", 0, "" },
			{ "rhs_gaz66_vmf", 0, "" },
			{ "rhs_gaz66_r142_vmf", 0, "" },
			{ "rhs_gaz66_ap2_vmf", 0, "" },
			{ "rhs_gaz66_repair_vmf", 0, "" },
			{ "RHS_Ural_VMF_01", 0, "" },
			{ "RHS_Ural_Fuel_VMF_01", 0, "" },
			{ "RHS_Ural_Open_VMF_01", 0, "" }
		};
	};
	
	class army_heli_water {
		side = "adac";
		vehicles[] = {
			{ "rhs_ka60_grey", 0, "" },
			{ "RHS_Mi8AMT_vvs", 0, "" },
			{ "RHS_Mi8mt_vvs", 0, "" }
		};
	};
	
	class army_boat_water {
		side = "adac";
		vehicles[] = {
			{ "SUD_RU_Assaultboat", 0, "" },
			{ "O_Boat_Armed_01_hmg_F", 0, "" },
			{ "B_SDV_01_F", 0, "" }
		};
	};
	/////////////////////////////////////////////////////////////Police Shops/////////////////////////////////////////////////////////////
	class cop_car {
		side = "cop";
		vehicles[] = {
			{ "DAR_CVPIAux", 17000, ""},
			{ "DAR_TaurusPolice", 25500, "", { "life_coplevel", 3 } },
			{ "DAR_CVPISlick", 20000, "", { "life_coplevel", 5 } },
			{ "DAR_ExplorerPolice", 32000, "", { "life_coplevel", 5 } },
			{ "DAR_ChargerPolice", 43000, "", { "life_coplevel", 6 } },
			{ "DAR_ChargerPoliceStateSlick", 45000, "", { "life_coplevel", 8 } },
			{ "DAR_SWATPolice", 87000, "", { "life_coplevel", 8 } },
			{ "DAR_ExplorerPoliceStealth", 35000, "", { "life_coplevel", 8 } }
		};
	};

	class cop_air {
		side = "cop";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 75000, "cAir" },
			{ "B_Heli_Transport_01_F", 200000, "cAir", { "life_coplevel", 3 } }
		};
	};
	
	class cop_ship {
		side = "cop";
		vehicles[] = {
			{ "B_Boat_Transport_01_F", 3000, "coastguard" },
			{ "C_Boat_Civil_01_police_F", 20000, "coastguard" },
			{ "B_Boat_Armed_01_minigun_F", 75000, "coastguard" },
			{ "B_SDV_01_F", 100000, "coastguard" }
		};
	};
	
	/////////////////////////////////////////////////////////////Civil Shops/////////////////////////////////////////////////////////////
	class civ_car {
		side = "civ";
		vehicles[] = {
			{ "RDS_Gaz24_Civ_01", 12500, "driver" },
			{ "RHS_UAZ_chdkz", 9500, "driver" }, 
			{ "rhs_uaz_open_chdkz", 12500, "driver" },
			{ "RDS_Lada_Civ_01", 30000, "driver" },
			{ "RDS_Octavia_Civ_01", 40000, "driver" },
			{ "RDS_Golf4_Civ_01", 45000, "driver" },
			{ "RDS_S1203_Civ_01", 40000, "driver" },
			{ "DAR_FusionCiv", 40000, "driver" }
		};
	};

	class kart_shop {
		side = "civ";
		vehicles[] = {
			{ "C_Kart_01_Blu_F", 15000 , "driver" },
			{ "C_Kart_01_Fuel_F", 15000, "driver" },
			{ "C_Kart_01_Red_F", 15000, "driver" },
			{ "C_Kart_01_Vrana_F", 15000, "driver" }
		};
	};
	
	class civ_truck {
		side = "civ";
		vehicles[] = {
			{ "RHS_Ural_Open_Civ_01", 60000, "trucking" },
			{ "RHS_Ural_Civ_01", 75000, "trucking" },
			{ "DAR_4X4", 200000, "trucking" },
			{ "DAR_MK27", 250000, "trucking" },
			{ "DAR_LHS_16", 350000, "trucking" },
			{ "RHS_Ural_Fuel_MSV_01", 350000, "trucking" }
		};
	};
	
	class civ_air {
		side = "civ";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 253000, "pilot" },
			{ "O_Heli_Light_02_unarmed_F", 750000, "pilot" }
		};
	};
	
	class civ_ship {
		side = "civ";
		vehicles[] = {
			{ "C_Rubberboat", 5000, "boat" },
			{ "C_Boat_Civil_01_F", 22000, "boat" },
			{ "B_SDV_01_F", 150000, "boat" }
		};
	};
	/////////////////////////////////////////////////////////////Med Shops/////////////////////////////////////////////////////////////
	class med_shop {
		side = "med";
		vehicles[] = {
			{ "C_Offroad_01_F", 10000, "" },
			{ "I_Truck_02_medical_F", 25000, "" },
			{ "O_Truck_03_medical_F", 45000, "" },
			{ "B_Truck_01_medical_F", 60000, "" }
		};
	};

	class med_air_hs {
		side = "med";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 50000, "mAir" },
			{ "O_Heli_Light_02_unarmed_F", 75000, "mAir" }
		};
	};
	/////////////////////////////////////////////////////////////Rebel Shops/////////////////////////////////////////////////////////////
	class reb_car {
		side = "civ";
		vehicles[] = {
			{ "B_Quadbike_01_F", 2500, "" },
			{ "TB_ALFR_LandRover_LUV", 15000, "rebel" },
			{ "O_MRAP_02_F", 150000, "" },
			{ "B_Heli_Light_01_F", 325000, "" },
			{ "TB_ALFR_LandRover_LPV", 750000, "rebel" }
		};
	};
};
/*
	Vehicle Configs (Contains textures and other stuff)

	storageFee (Getting vehicles out of garage) format:
		INDEX 0: Civilian Price
		INDEX 1: Cop Price
		INDEX 3: EMS Price
		INDEX 4: OPFOR Price (Not implemented in vanilla but still leaving support

	Textures config follows { Texture Name, side, {texture(s)path}}
	Texture(s)path follows this format:
		INDEX 0: Texture Layer 0
		INDEX 1: Texture Layer 1
		INDEX 2: Texture Layer 2
		etc etc etc
*/
class CfgVehicles {
	class Default {
		vItemSpace = -1;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
		insurance = 2500;
		chopShop = 1200;
		textures[] = {};
	};
	//Army
	class rhs_btr80a_vv {    //
        vItemSpace = 45;
        storageFee[] = { 0, 0, 0, 50000 }; //Prix de sortie
        garageSell[] = { 0, 0, 0, 0 };    //Prix de vente
        insurance = 8000;    //Prix assurance
        chopShop = 10000;    // Prix revente illégale
        textures[] = {};
    };
	class rhs_t90_tv {
        vItemSpace = 12;
        storageFee[] = { 0, 0, 0, 100000 }; //Prix de sortie
        garageSell[] = { 0, 0, 0, 0 };    //Prix de vente
        insurance = 8000;    //Prix assurance
        chopShop = 10000;    // Prix revente illégale
        textures[] = {};
    };
	class rhs_zsu234_aa {
        vItemSpace = 12;
        storageFee[] = { 0, 0, 0, 85000 }; //Prix de sortie
        garageSell[] = { 0, 0, 0, 0 };    //Prix de vente
        insurance = 8000;    //Prix assurance
        chopShop = 10000;    // Prix revente illégale
        textures[] = {};
    };
	//Army end
	class DAR_FusionCiv {
        vItemSpace = 65;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 3500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
            { "Blanc", "civ", {
                "@DAR\addons\dar_fusion\Data\body_co.paa"
            } },
            { "Noir", "civ", {
                "@DAR\addons\dar_fusion\Data\body_coblack.paa"
            } },
            { "Bleu", "civ", {
                "@DAR\addons\dar_fusion\Data\body_coblue.paa"
            } },
			{ "Rouge", "civ", {
                "@DAR\addons\dar_fusion\Data\body_cored.paa"
            } },
			};
    };

class SUD_Kamaz_transport {
        vItemSpace = 65;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 3500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {};
    };

	class RHS_Ural_Civ_01 {
        vItemSpace = 65;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 3500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {};
    };
	
	class RHS_Ural_Fuel_MSV_01 {
        vItemSpace = 65;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 3500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {};
    };
	
	class RHS_Ural_Open_Civ_01 {
        vItemSpace = 65;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 3500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {};
    };
	
	class I_Truck_02_medical_F : Default {
		vItemSpace = 150;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};

	class O_Truck_03_medical_F : Default {
		vItemSpace = 200;
		storageFee[] = { 0, 0, 3000, 0 };
		garageSell[] = { 0, 0, 10000, 0 };
		chopShop = 7500;
	};

	class B_Truck_01_medical_F : Default {
		vItemSpace = 250;
		storageFee[] = { 0, 0, 6500, 0 };
		garageSell[] = { 0, 0, 25000, 0 };
		chopShop = 12500;
	};

	class C_Rubberboat {
        vItemSpace = 45;
        storageFee[] = { 400, 300, 0, 0 };
		garageSell[] = { 950, 350, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Heli_Transport_01_F {
		vItemSpace = 200;
		storageFee[] = { 0, 50000, 0, 0 };
		garageSell[] = { 0, 85000, 0, 0 };
		insurance = 16000;
		chopShop = 45000;
		textures[] = {};
	};

	class B_MRAP_01_hmg_F : Default {
		vItemSpace = 100;
	};

	class O_Boat_Armed_01_hmg_F {
        vItemSpace = 175;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 21000, 21000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        storageFee[] = { 0, 16500, 0, 0 };
		garageSell[] = { 0, 21000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class I_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_G_Boat_Transport_01_F {
        vItemSpace = 45;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Boat_Transport_01_F {
        vItemSpace = 45;
        storageFee[] = { 0, 450, 0, 0 };
		garageSell[] = { 0, 850, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class O_Truck_03_transport_F {
        vItemSpace = 285;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class O_Truck_03_device_F {
        vItemSpace = 350;
        storageFee[] = { 95000, 0, 0, 0 };
		garageSell[] = { 185000, 0, 0, 0 };
        insurance = 25000;
        chopShop = 125000;
        textures[] = { };
    };

	class Land_CargoBox_V1_F : Default {
        vItemSpace = 5000;
    };

	class Box_IND_Grenades_F : Default {
        vItemSpace = 350;
    };

	class B_supplyCrate_F {
        vItemSpace = 700;
    };

	class B_G_Offroad_01_F {
        vItemSpace = 65;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 3500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_G_Offroad_01_armed_F : B_G_Offroad_01_F {};

	class I_G_Van_01_transport_F {
        vItemSpace = 100;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class rhs_uaz_open_chdkz {
        vItemSpace = 65;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 3500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
            { "Civil", "civ", {
                "rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_civil_co.paa"
            } },			
			};
    };
	
	class RHS_UAZ_chdkz {
        vItemSpace = 65;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 3500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
            { "Civil", "civ", {
                "rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_civil_co.paa"
            } },			
			};
    };
	
	class RDS_Gaz24_Civ_01 {
        vItemSpace = 65;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 3500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {};
    };
	
	class RDS_Lada_Civ_01 {
        vItemSpace = 65;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 3500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {};
    };
	
	class RDS_Octavia_Civ_01 {
        vItemSpace = 65;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 3500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
            { "Noir", "civ", {
                "\rds_a2port_civ\octavia\Data\car_body_black_CO.paa"
            } },	
			{ "Jaune", "civ", {
                "\rds_a2port_civ\octavia\Data\car_body_yellow_CO.paa"
            } },
			{ "Bleu", "civ", {
                "\rds_a2port_civ\octavia\Data\car_body_blue_CO.paa"
            } },
			};
    };
	
	class RDS_Golf4_Civ_01 {
        vItemSpace = 65;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 3500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
            { "Noir", "civ", {
                "\rds_a2port_civ\VWGOLF\Data\vwgolf_body_black_CO.paa"
            } },	
			{ "Jaune", "civ", {
                "\rds_a2port_civ\VWGOLF\Data\vwgolf_body_yellow_CO.paa"
            } },
			{ "Bleu", "civ", {
                "\rds_a2port_civ\VWGOLF\Data\vwgolf_body_blue_CO.paa"
            } },
			{ "Blanc", "civ", {
                "\rds_a2port_civ\VWGOLF\Data\vwgolf_body_white_CO.paa"
            } },
			{ "Vert", "civ", {
                "\rds_a2port_civ\VWGOLF\Data\vwgolf_body_green_CO.paa"
            } },
			};
    };
	
	class RDS_S1203_Civ_01 {
        vItemSpace = 65;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 3500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
            { "Rouge", "civ", {
                "\rds_a2port_civ\s1203\Data\s1203_red_CO.paa"
            } },	
			{ "Argent", "civ", {
                "\rds_a2port_civ\s1203\Data\s1203_silver_CO.paa"
            } },
			{ "Orange", "civ", {
                "\rds_a2port_civ\s1203\Data\s1203_orange_CO.paa"
            } },
			{ "Blanc", "civ", {
                "\rds_a2port_civ\s1203\Data\s1203_white_CO.paa"
            } },
			{ "Vert", "civ", {
                "\rds_a2port_civ\s1203\Data\s1203_green_CO.paa"
            } },
			};
    };

	class C_Boat_Civil_01_F {
        vItemSpace = 85;
        storageFee[] = { 4500, 2500, 0, 0 };
		garageSell[] = { 6800, 3500, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        storageFee[] = { 0, 3500, 0, 0 };
		garageSell[] = { 0, 4950, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class C_Boat_Civil_01_rescue_F {
        vItemSpace = 85;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Truck_01_box_F {
        vItemSpace = 450;
        storageFee[] = { 35000, 0, 0, 0 };
		garageSell[] = { 150000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Truck_01_transport_F {
        vItemSpace = 325;
        storageFee[] = { 25650, 0, 0, 0 };
		garageSell[] = { 135000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class O_MRAP_02_F {
        vItemSpace = 60;
        storageFee[] = { 45000, 0, 0, 0 };
		garageSell[] = { 65000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class I_MRAP_03_F {
        vItemSpace = 58;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class C_Offroad_01_F {
        vItemSpace = 65;
        storageFee[] = { 1000, 500, 650, 1000 };
		garageSell[] = { 6500, 2500, 0, 0 };
        insurance = 2500;
        chopShop = 2500;
        textures[] = {
        	{ "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            } },
			{ "Yellow", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            } },
			{ "White", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            } },
			{ "Blue", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            } },
			{ "Dark Red", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            } },
			{ "Blue / White", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            } },
            { "Fed", "fed", {
	                "#(ai,64,64,1)Fresnel(0.3,3)"
            } },
			{ "Police", "cop", {
	                "#(ai,64,64,1)Fresnel(1.3,7)"
            } },
            { "Taxi", "civ", {
	                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } }
	    };
    };

	class C_Kart_01_Blu_F {
		vItemSpace = 20;
		storageFee[] = { 1500, 0, 0, 0 };
		garageSell[] = { 3500, 0, 0, 0 };
		inusrance = 1650;
		chopShop = 3500;
		textures[] = {};
	};

	class C_Kart_01_Fuel_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class
	class C_Kart_01_Red_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class
	class C_Kart_01_Vrana_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class

	class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        storageFee[] = { 2500, 1000, 0, 0 };
		garageSell[] = { 15000, 7500, 0, 0 };
        insurance = 5500;
        chopShop = 4500;
        textures[] = {
        	{ "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            } },
			{ "Dark Blue", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
			{ "Orange", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            } },
			{ "Black / White", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } },
			{ "Beige", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } },
			{ "Green", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            } },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } }
        };
    };

	class B_Quadbike_01_F {
        vItemSpace = 25;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 950, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            } },
			{ "Digi Desert", "reb", {
	                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
	        } },
			{ "Black", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
	        } },
			{ "Blue", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
	        } },
			{ "Red", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
	        } },
			{ "White", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
	        } },
			{ "Digi Green", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
	        } },
			{ "Hunter Camo", "civ", {
	                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
	        } },
	        { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } }
        };
    };

	class I_Truck_02_covered_F {
        vItemSpace = 250;
        storageFee[] = { 14500, 0, 0, 0 };
		garageSell[] = { 62000, 0, 0, 0 };
        insurance = 6500;
        chopShop = 20000;
        textures[] = {
        	{ "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "fed", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

	class I_Truck_02_transport_F : I_Truck_02_covered_F {
        vItemSpace = 200;
        storageFee[] = { 12000, 0, 0, 0 };
		garageSell[] = { 49800, 3500, 0, 0 };
    };

	class O_Truck_03_covered_F {
		vItemSpace = 300;
		storageFee[] = { 25000, 0, 0, 0 };
		garageSell[] = { 65000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = {};
	};

	class C_Hatchback_01_F {
        vItemSpace = 40;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 4500, 3500, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            } },
			{ "Green", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            } },
			{ "Blue", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            } },
			{ "Dark Blue", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            } },
			{ "Yellow", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            } },
			{ "White", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            } },
			{ "Grey", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            } },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            } }
        };
    };

	class C_SUV_01_F {
        vItemSpace = 50;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 15000, 7500, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            } },
			{ "Black", "cop", {
	                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_02_co.paa"
            } },
			{ "Silver", "civ", {
	                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            } },
			{ "Orange", "civ", {
	                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            } },
            { "Cop", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } }
	        };
    };

	class C_Van_01_transport_F {
        vItemSpace = 100;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 25000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

	class C_Van_01_box_F {
        vItemSpace = 150;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 35000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };
	class B_MRAP_01_F {
        vItemSpace = 65;
        storageFee[] = { 0, 7500, 0, 0 };
		garageSell[] = { 0, 10000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Regular", "cop", {
                "\A3\Soft_F\MRAP_01\Data\mrap_01_base_co.paa"
            } },
            { "Black", "fed", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

	class B_Heli_Light_01_F {
        vItemSpace = 90;
        storageFee[] = { 45000, 19500, 0, 0 };
		garageSell[] = { 57000, 35000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Sheriff", "cop", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            } },
			{ "Black", "fed", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
            } },
			{ "Civ Blue", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            } },
			{ "Civ Red", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            } },
			{ "Digi Green", "donate", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            } },
			{ "Blueline", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
			{ "Elliptical", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
			{ "Furious", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
			{ "Jeans Blue", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
			{ "Speedy Redline", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
			{ "Sunset", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
			{ "Vrana", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
			{ "Waves Blue", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },
			{ "Rebel Digital", "reb", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } }
        };
    };

	class O_Heli_Light_02_unarmed_F {
        vItemSpace = 210;
        storageFee[] = { 55000, 0, 22000, 0 };
		garageSell[] = { 72500, 0, 35000, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Black", "fed", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            } },
			{ "White / Blue", "civ", {
	                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"   
            } },
			{ "Digi Green", "donate", {
	                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            } },
			{ "Desert Digi", "reb", {
	                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa" 
            } },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } }
        };
    };

	class I_Heli_Transport_02_F {
        vItemSpace = 375;
        storageFee[] = { 75000, 0, 0, 0 };
		garageSell[] = { 125000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Ion", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"
            } },
            { "Dahoman", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_dahoman_co.paa"
            } }
        };
    };
};