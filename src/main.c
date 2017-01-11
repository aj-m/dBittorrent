#include <string.h>
#include <stdio.h>

#include <3ds.h>

char const* DecodeQR();
bool ExportTorrent(char xtype, char const* torrentURI);

int main(int argc, char **argv) {

	gfxInitDefault();
	consoleInit(GFX_TOP, NULL);

//	printf("Hello 3DS World!\n");
	int i = 0;

	// Main loop
	while (aptMainLoop()) {

		gspWaitForVBlank();
		hidScanInput();

		// Your code goes here
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

char const* DecodeQR(){
	return "This function intentionally left blank";
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

