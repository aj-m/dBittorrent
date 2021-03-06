#include <qrhandlers.h>

quirc_decode_error_t* DecodeQR(const char* path){
	//Create decode context
	struct quirc *qr;
	qr = quirc_new();
	if(!qr){
		perror("Failed to allocate memory");
		abort();
	} else {
		perror("Allocated memory");
	}

	//Decoding happens here
	//Do_Something();

	//Clean up and return
	quirc_destroy(qr);
	return NULL;
}

bool EncodeQR(const char* path){
	printf("EncodeQR\n%s\n",path);
	return 1;
}

