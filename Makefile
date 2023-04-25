build:
	@rm -rf dist
	@mkdir -p dist/apps/osu-wii/data

	@cp -r res/* dist/apps/osu-wii
	@cp -r src/* dist/apps/osu-wii/data

	@cd dist; zip -r -9 ../osu-wii.zip .

clean:
	@rm -rf dist