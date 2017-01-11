#include <string.h>
#include <stdio.h>

#include <3ds.h>

string DecodeQR();
bool ExportTorrent(char xtype, string torrentURI);

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

string DecodeQR(){
	return "This function intentionally left blank";
} 

bool ExportTorrent(char xtype, string torrentURI){
	string formats = "ihmqtf";	//i,h=hash, m=magnet, q=qr, t,f=.torrent
	if(formats.find(lower(xtype) == -1){
		return false;
	}
	printf("%c\n%s\n", xtype, torrentURI);
	return true;
}
