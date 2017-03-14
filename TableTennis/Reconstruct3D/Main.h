#ifndef HEADER_RECONSTRUCTOR
#define HEADER_RECONSTRUCTOR

#include <cstdio>
#include <cmath>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <vector>
#include <limits.h>
#include <fstream>
#include <iostream>

using namespace std;

const CvScalar CVX_WHITE = CV_RGB(0xff, 0xff, 0xff);
const CvScalar CVX_RED = CV_RGB(0xff, 0x00, 0x00);
const CvScalar CVX_BLACK = CV_RGB(0x00, 0x00, 0x00);

const int STATE_PLAY = 1;
const int STATE_PAUSE = 2;
const int STATE_WAIT = 3;

const int KEY_ENTER = 10;
const int KEY_RETURN = 13;
const int KEY_ESC = 27;
const int KEY_SPACE = 32;

const int SCALE = 2;

#endif