function love.load()
    tick = require("lib.tick")
    binser = require("lib.binser")
    
    wiimote = love.wiimote.getWiimotes()[1]
    cursor = love.graphics.newTexture("assets/pointer.png")

    if love.filesystem.exists("save.json") then
        save = binser.deserializeN(love.filesystem.read("save.bin"))
    else
        save = {
            rumble = true
        }
    end
end

function love.update(dt)
    love.filesystem.write("save.bin", binser.serialize(save)) 
end
