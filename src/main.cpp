#include <stdio.h>
#include <stdlib.h>
#include <wiiuse/wpad.h>

static void *xfb = NULL;
static GXRModeObj *rmode = NULL;

void init_video() {
    VIDEO_Init();
    WPAD_Init();
    rmode = VIDEO_GetPreferredMode(NULL);
    xfb = MEM_K0_TO_K1(SYS_AllocateFramebuffer(rmode));
    console_init(xfb,20,20,rmode->fbWidth,rmode->xfbHeight,rmode->fbWidth*VI_DISPLAY_PIX_SZ);
    VIDEO_Configure(rmode);
    VIDEO_SetNextFramebuffer(xfb);
    VIDEO_SetBlack(FALSE);
    VIDEO_Flush();
    VIDEO_WaitVSync();
    if (rmode->viTVMode&VI_NON_INTERLACE) VIDEO_WaitVSync();
}

int main() {
    init_video();

    printf("osu!wii\n");

    while(1) {
        WPAD_ScanPads();
        if (WPAD_ButtonsDown(0) & WPAD_BUTTON_HOME) {
            exit(0);
        }
    }
}
