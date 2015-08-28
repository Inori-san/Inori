/*
	File: initServer.sqf
	
	Description:
	Starts the initialization of the server.
*/
if(!(_this select 0)) exitWith {}; //Not server
[] call compile PreprocessFileLineNumbers "\life_server\init.sqf";

diag_log format["Spawning Base Opérationnelle Shrapnel"];
[] execVM "\life_server\bases\Base_airport.sqf"; //Base Shrapnel
diag_log format["Spawning Base Naval Marita"];
[] execVM "\life_server\bases\Base_maritime.sqf"; //Base Maritime
diag_log format["Spawning Base Aérienne"];
[] execVM "\life_server\bases\Base_Sector.sqf"; //Base SectorB
diag_log format["Spawning Base Maritime2"];
[] execVM "\life_server\bases\Maritime.sqf"; //Maritime 2
diag_log format["Spawning Cop Sabina"];
[] execVM "\life_server\bases\cop_sabina.sqf"; //Maritime 2
diag_log format["Spawning Cop Vladimir"];
[] execVM "\life_server\bases\cop_vladimir.sqf"; //Maritime 2
diag_log format["Spawning Cop Lyepestok"];
[] execVM "\life_server\bases\cop_lyepestok.sqf"; //Maritime 2
diag_log format["Spawning Cop Krasno"];
[] execVM "\life_server\bases\cop_krasno.sqf"; //Maritime 2