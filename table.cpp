getgenv().native = {   
    ['Loader'] = {   
       ["Key"] = "", -- // Key here   
        ["Intro"] = {
            ["Enabled"] = true
     },
    },
    ['Target'] = {
        ["Keybind"] = Enum.KeyCode.C,
        ["Camlock"] =  0.145, -- // Camlock Prediction

        ["Hitpart"] = true,
        ["TargetPart"] = "Head", -- // Single Target Part

        ["NearestPart"] = true, -- // hits the closetpart to your mouse retard 
        ["Parts"] = {"Head","HumanoidRootPart"},--// You can add More Parts Here Example : "Head", "UpperTorso", and more Sped Fucks.

        ["Smoothing"] = 0.0075, -- // Smoothing For Camlock
        ["Shake"] = 0,
        ["JumpOffset"] = -2.910
    },
    ['Silent'] = {
        ["Prediction"] = 0.155223362,
        ["Detection"] = {Close = 35, Mid = 65, Far = math.huge}, -- // These are distance values DO NOT CHANGE UNLESS YK WHAT UR DOING

        ['SpecificDis'] = { -- // Prediction for the distance
            ["Enabled"] = false,
            ["Prediction"] = {Close = 0.138, Mid = 0.1247, Far = 0.123}
        },
    },  
    ['Checks'] = {
        ["DisableOnPlayerDeath"] = true, -- // Disabled When Plr Is Dead
        ["KnockedCheck"] = true, -- // Check If Player Knocked
        ["AntiGroundShots"] = false, -- // AntiGroundShot - Bugged
    },
    ['Spin'] = {
        ["Enabled"] = true,
        ["Keybind"] = Enum.KeyCode.V,
        ["Speed"] = 4900, -- // Speed Of the Spin
        ["Degrees"] = 360, -- // Leave at 360 for a full circle
    },
    ['Visuals'] = {
        ['DistanceESP'] = false,
        ['WeaponESP'] = true,   
        ['HealthBar'] = false,
        ['NameESP'] = true,
    },
}


script_key = getgenv().native.Whitelist.key --// DO NOT FUCKING TOUCH THIS SHIT
loadstring(game:HttpGet("https://api.luarmor.net/files/v3/loaders/e5c39b1bb7ed52d027ddd97ff8f477b1.lua"))() --// credits to bel for making things a bit more simple
