class life_message_hud {

    idd = 245000;
    name = "life_message_hud";
    duration = 1e+007;
    movingEnable = 0;
    fadein = 0;
    fadeout = 0;

    onLoad = "uiNamespace setVariable ['life_message_hud', _this select 0]";
    onUnload = "uiNamespace setVariable ['life_message_hud', nil]";

    class controls {

        class MessageContainer: Life_RscControlsGroupNoScrollbars
        {
            idc = 245001;

            x = 0.8220 * safezoneW + safezoneX;
            y = 0.0960 * safezoneH + safezoneY;
            w = 0.1700 * safezoneW;
            h = 0.8875 * safezoneH;

            class controls {};
        };
    };
};

// Hint Layout Position
// x = "0 * (((safezoneW / safezoneH) min 1.2) / 40) + (profilenamespace getvariable [""IGUI_GRID_HINT_X"", ((safezoneX + safezoneW) - (12 * (((safezoneW / safezoneH) min 1.2) / 40)) - 1 * (((safezoneW / safezoneH) min 1.2) / 40))])";
// y = "0 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (profilenamespace getvariable [""IGUI_GRID_HINT_Y"", (safezoneY + 6 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
// w = "(12 * (((safezoneW / safezoneH) min 1.2) / 40))";
// h = "5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
