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
			["rhs_uniform_flora",nil,5000]
		];
	};
	
	//Hats
	case 1:
	{
		[
			["NONE","Retirer chapeau",0],
			["rhs_6b27m_green",nil,850],
			["rhs_6b27m",nil,800]
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
			["G_Balaclava_blk",nil,20]
		];
	};
	
	//Vest
	case 3:
	{
		[
			["NONE","Retirer Gilet",0],
			["rhs_6b23_6sh92",nil,4500]
		];
	};
	
	//Backpacks
	case 4:
	{
		[
			["NONE","Retirer Sac",0],
			["rhs_assault_umbts",nil,4500]
		];
	};
};