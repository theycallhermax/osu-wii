function love.load()
    local tick = require("lib.tick")
    local binser = require("lib.binser")

    local wiimote = love.wiimote.getWiimotes()[1]
    local cursor = love.graphics.newTexture("assets/pointer.png")

    if love.filesystem.exists("save.json") then
        save = binser.deserializeN(love.filesystem.read("save.bin"))
    else
        save = {
            rumble = true
        }
    end
end

function love.draw()
    love.graphics.print("osu!wii", 500, 500)
end

function love.update(dt)
    love.filesystem.write("save.bin", binser.serialize(save)) 
end
