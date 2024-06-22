getgenv().script_key = "keyhere";
script_key="discord.gg/asics"; -- do not touch 
getgenv().native = {
    ['Target'] = {
        Keybind = Enum.KeyCode.C,
        Camlock = 0.42, -- // Camlock Prediction

        Hitpart = true,
        TargetPart = "HumanoidRootPart", -- // Single Target Part

        NearestPart = true,
        TargetParts = {"Head","HumanoidRootPart"}, -- // Multiple Target Part

        Smoothing = 0.0631, -- // Smoothing For Camlock
        Shake = 0,
        JumpOffset = -1.50
    },
    ['Silent'] = {
        Prediction = 0.11144,
        Detection = {Close = 35, Mid = 65, Far = math.huge}, -- // These are distance values DO NOT CHANGE UNLESS YK WHAT UR DOING

        ['SpecificDis'] = { -- // Prediction for the distance
            Enabled = true,
            Prediction = {Close = 0.138, Mid = 0.1247, Far = 0.123}
        },
    },  
    ['Checks'] = {
        DisableOnPlayerDeath = true, -- // Disabled When Plr Is Dead
        KnockedCheck = true, -- // Check If Player Knocked
        AntiGroundShots = false, -- // AntiGroundShot - Bugged
    },
    ['Spin'] = {
        Enabled = true,
        Keybind = Enum.KeyCode.V,
        Speed = 4900, -- // Speed Of the Spin
        Degrees = 360, -- // Leave at 360 for a full circle
    },
}

