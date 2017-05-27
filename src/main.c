#include <string.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <qrhandlers.h>
#include <libtransmission/transmission.h>

#include <3ds.h>

bool ExportTorrent(char xtype, char const* torrentURI);

int main(int argc, char **argv) {

	gfxInitDefault();
	consoleInit(GFX_TOP, NULL);

	int i = 0;
	quirc_decode_error_t* qrbuff;

	// Main loop
	while (aptMainLoop()) {

		gspWaitForVBlank();
		hidScanInput();

		if (i == 0){
			qrbuff = DecodeQR(""); //put actual path later
		}
		if (++i >= 60){
			printf("Tick\n");
			i = 0;
		}	
		u32 kDown = hidKeysDown();
		if (kDown & KEY_START)
			break; // break in order to return to hbmenu

		// Flush and swap framebuffers
		gfxFlushBuffers();
		gfxSwapBuffers();
	}

	gfxExit();
	return 0;
}

bool ExportTorrent(char xtype, char const* torrentURI){
	char const* formats = "ihmqtfIHMQTF";	//i,h=hash, m=magnet, q=qr, t,f=.torrent
	for(int i=0; formats[i]!=0;i++){
		if(formats[i]==xtype){
			printf("%c\n%s\n", xtype, torrentURI);
			return true;
		}
	}
	return false;
}

