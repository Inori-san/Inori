/*

	Main configuration for non-persistent market system
	Will need triggers to hook into vanilla pricing methods

*/

////////////MAIN CONFIG

life_market_resources = [

	//Schema: SHORTNAME, Default, Min, Max, changes in action, [Sales multiplied by 1, Purchase multiplied by -1]
	//["gold", 1500, 450, 2300, 8, 5],
	
	["oilp", 2200, 1100, 3300, 3, 5,
		[
			["diamondc",1], 
			["iron_r",1],
			["copper_r",1],
			["salt_r",1],
			["cement",1],
			["diamondf",1],
			["glass",1]
		]
	],
	
	["iron_r", 1500, 750, 2250, 3, 5,   
		[ 
			["diamondc",1], 
			["oilp",1],
			["copper_r",1],
			["salt_r",1],
			["cement",1],
			["diamondf",1],
			["glass",1]
		] 
	],
	
	["diamondc", 3500, 1750, 4000, 2, 5, 
		[ 
			["oilp",1],
			["iron_r",1],
			["copper_r",1],
			["salt_r",1],
			["cement",1],
			["diamondf",1],
			["glass",1]
		] 
	],
	
	["copper_r", 1000, 500, 1500, 2, 5, 
		[ 
			["diamondc",1], 
			["oilp",1],
			["iron_r",1],
			["salt_r",1],
			["cement",1],
			["diamondf",1],
			["glass",1]
		] 
	],
	
	["salt_r", 700, 350, 1050, 2, 5, 
		[ 
			["diamondc",1], 
			["oilp",1],
			["iron_r",1],
			["copper_r",1],
			["cement",1],
			["diamondf",1],
			["glass",1]
		] 
	],
	
	["glass", 1200, 600, 1800, 2, 5,
		[ 
			["diamondc",1], 
			["oilp",1],
			["iron_r",1],
			["copper_r",1],
			["diamondf",1],
			["salt_r",1],
			["cement",1]
		] 
	],
	
	["cement", 1200, 600, 1800, 2, 5, 
		[ 
			["diamondc",1], 
			["oilp",1],
			["iron_r",1],
			["copper_r",1],
			["diamondf",1],
			["salt_r",1],
			["glass",1]
		] 
	],
	
	////////////////ILLEGAL///////////////////
	
	["turtle", 9000, 4500, 13500, 4, 8,
		[ 
			["marijuana",1], 
			["cocainep",1],
			["heroinp",1]
		] 
	],

	["marijuana", 3000, 1500, 4500, 5, 6,   
		[ 
			["turtle",1], 
			["cocainep",1],
			["heroinp",1]
		] 
	],
	
	["cocainep", 8000, 4000, 12000, 5, 6,      
		[ 
			["marijuana",1], 
			["heroinp",1],
			["turtle",1]
		] 
	],

	["heroinp", 8500, 4250, 12750, 5, 6,     
		[ 
			["marijuana",1], 
			["cocainep",1],
			["turtle",1]
		] 
	]
];
publicVariable "life_market_resources";

////////////GENERATED CONFIG
//life_market_changes = []; //[SHORTNAME,SELL,BUY]
life_market_shortnames = []; //shortnames if in market
//life_market_clampprices = []; //[SHORTNAME,MIN,MAX]

{
	life_market_shortnames set [count life_market_shortnames, _x select 0];
	//life_market_clampprices set [count life_market_clampprices, [_x select 0, _x select 2, _x select 3] ];
	//life_market_changes set [count life_market_changes, [_x select 0, _x select 4, _x select 5] ];
}
foreach life_market_resources;

publicVariable "life_market_shortnames";
//publicVariable "life_market_clampprices";

//SYNC PRICES WITH SERVER IF EMPTY
if(isNil("life_market_prices")) then
{
	life_market_prices = []; //[SHORTNAME,CURRENTPRICE,DIRECTIONGLOBAL,DIRECTIONLOCAL]
	{
	
		life_market_prices set [count life_market_prices, [_x select 0, _x select 1, 0, 0] ];
	}
	foreach life_market_resources;
	
	publicVariable "life_market_prices";
	
	systemChat "Market Prices Generated!";
};