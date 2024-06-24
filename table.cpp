getgenv().native = {  
    ['Loader'] = {
       ["Key"] = "",   
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
        ['DistanceESP'] = true,
        ['WeaponESP'] = true,   
        ['HealthBar'] = true,
        ['NameESP'] = true,
    },
}
