#pragma once
#include <stdbool.h>
#include <quirc/quirc.h>
#include <libqrencode/qrencode.h>

quirc_decode_error_t* DecodeQR();
bool EncodeQR();

