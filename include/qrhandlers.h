#pragma once
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include <quirc/quirc.h>
#include <libqrencode/qrencode.h>

quirc_decode_error_t* DecodeQR();
bool EncodeQR();
bool EncodeQR(const char* path);

