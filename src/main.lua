function love.load()
    tick = require("lib.tick")
    json = require("lib.json")

    if love.filesystem.exists("save.json") then
        save = love.filesystem.read("save.json")
    else
        save = {}
    end
end

function love.update()
    love.filesystem.write("save.json", save) 
end
