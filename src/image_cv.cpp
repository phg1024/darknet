#include "image_cv.h"

#include <iostream>

IplImage* LoadImageWithCV(const char* filename, int flag) {
  return cvLoadImage(filename, flag);
}
