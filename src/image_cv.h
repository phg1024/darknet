#pragma once

#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"

extern "C" IplImage* LoadImageWithCV(const char* filename, int flag);
