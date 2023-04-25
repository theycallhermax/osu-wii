function love.load()
    tick = require("lib.tick")
    binser = require("lib.binser")

    if love.filesystem.exists("save.json") then
        save = love.filesystem.read("save.json")
    else
        save = {}
    end
end

function love.update()
    love.filesystem.write("save.json", save) 
end
