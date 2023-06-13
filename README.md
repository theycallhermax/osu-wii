# osu!wii
osu!wii is a port of the free-to-play rhythm game, osu! to the Nintendo Wii, written in C++, using GRRLIB. This attempt to port osu! to the Wii has been inspired by a thread on the osu! forums and [GBAtemp](https://gbatemp.net/threads/osu-wii.251881/) that a osu! port to the Wii is "impossible." This is a proof-of-concept that it is possible to port osu! to the Wii.
## Building
To build, you need to have devkitPro installed. If you don't, see the [devkitPro Getting Started page](https://devkitpro.org/wiki/Getting_Started). If you have it installed, run the following command:
```bash
make
```
## Packing for disturbution
To pack the files into a zip file for disturbution, you must build first. See above for how to do it. Once you have built everything, run the following command:
```bash
make pack
```
