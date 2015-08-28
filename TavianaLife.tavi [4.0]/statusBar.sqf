waitUntil {!(isNull (findDisplay 46))};
disableSerialization;

_rscLayer = "statusBar" call BIS_fnc_rscLayer;
_rscLayer cutRsc["statusBar","PLAIN"];
systemChat format["Bienvenue sur TavianaLife FR", _rscLayer];

[] spawn {
	sleep 5;
	_statusText = "Welcome";
	_counter = 180;
	_timeSinceLastUpdate = 0;
	while {true} do
	{
		sleep 1;
		_counter = _counter - 1;
		_statusText = "Tavianalife FR";
		((uiNamespace getVariable "statusBar")ctrlSetText format["FPS: %1 | Armée: %2 |Police: %3 | Civs: %4 | Medics: %5 | CASH: %6 | BANK: %7 | TS3 : tavianalife.fr", round diag_fps, east countSide playableUnits, west countSide playableUnits, civilian countSide playableUnits, independent countSide playableUnits,[CASH] call life_fnc_numberText,[BANK] call life_fnc_numberText, _counter];
	};
};