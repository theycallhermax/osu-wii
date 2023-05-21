function love.load()
    local tick = require("lib.tick")
    local binser = require("lib.binser")

    local wiimote = love.wiimote.getWiimotes()[1]
    local cursor = love.graphics.newTexture("assets/pointer.png")
    local logo = love.graphics.newImage("assets/logo.png")
    local started = false

    -- How do I do multiline comments?
    --
    -- if love.filesystem.exists("save.json") then
    --    save = binser.deserializeN(love.filesystem.read("save.bin"))
    -- else
    --    save = {
    --        rumble = true
    --    }
    -- end
end

function love.draw()
    love.graphics.draw(logo, love.graphics.getWidth() / 2, love.graphics.getHeight() / 2, 0, 3, 3, logo:getWidth() / 2, logo:getHeight() / 2)
end

function love.update(dt)

end
