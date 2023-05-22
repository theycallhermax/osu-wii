#include <stdio.h>
#include <stdlib.h>
#include <wiiuse/wpad.h>
#include <grrlib.h>

int main() {
    GRRLIB_Init();
    WPAD_Init();

    while(1) {
        WPAD_ScanPads();
        if (WPAD_ButtonsDown(0) & WPAD_BUTTON_HOME) break;

        // Our stuff here, I guess

        GRRLIB_Render();
    }

    GRRLIB_Exit();
    exit(0);
}
