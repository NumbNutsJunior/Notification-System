waitUntil {!isNull (findDisplay 46)};

player switchCamera "External";
enableSaving [false, false];
player enableFatigue false;
player allowDamage false;
enableTeamSwitch false;

// Setup configuration
call life_fnc_configuration;

// Create message display
call life_fnc_initMessageHUD;

// Debug
uiSleep 7.00;
for "_i" from 1 to 3 do {
    for "_x" from 1 to 6 do {

        // Placeholder text
        private _text = "The quick brown fox jumps over the lazy dog.";

        // Random message
        private _message = _text;
        for "_k" from 1 to floor(random[1, 4, 8]) do {_message = _message + " " + _text};

        // Random duration
        private _duration = floor(random[2, 6, 10]);

        // Random priority
        private _priority = ceil(random(3));

        // Create message
        [format["%1 :: %2", _priority, _message], _duration, _priority] spawn life_fnc_handleMessage;
    };

    // Wait
    uiSleep 5.00;
};
