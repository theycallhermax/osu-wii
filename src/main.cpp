#include <stdio.h>
#include <stdlib.h>
#include <wiiuse/wpad.h>
#include <grrlib.h>

#define GRRLIB_BLACK 0x000000FF
#define GRRLIB_MAROON 0x800000FF
#define GRRLIB_GREEN 0x008000FF
#define GRRLIB_OLIVE 0x808000FF
#define GRRLIB_NAVY 0x000080FF
#define GRRLIB_PURPLE 0x800080FF
#define GRRLIB_TEAL 0x008080FF
#define GRRLIB_GRAY 0x808080FF
#define GRRLIB_SILVER 0xC0C0C0FF
#define GRRLIB_RED 0xFF0000FF
#define GRRLIB_LIME 0x00FF00FF
#define GRRLIB_YELLOW 0xFFFF00FF
#define GRRLIB_BLUE 0x0000FFFF
#define GRRLIB_FUCHSIA 0xFF00FFFF
#define GRRLIB_AQUA 0x00FFFFFF
#define GRRLIB_WHITE 0xFFFFFFFF

void main() {
    GRRLIB_Init();
    WPAD_Init();

    while(1) {
        WPAD_ScanPads();
        if (WPAD_ButtonsDown(0) & WPAD_BUTTON_HOME) break;

        GRRLIB_FillScreen(GRRLIB_WHITE);

        GRRLIB_Render();
    }

    GRRLIB_Exit();
    exit(0);
}
