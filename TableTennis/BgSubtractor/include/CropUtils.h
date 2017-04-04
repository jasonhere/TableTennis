#ifndef HEADER_CROP_UTILS
#define HEADER_CROP_UTILS

#include <stdlib.h>//srand, rand
#include <time.h>//time
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <limits.h>

const bool OUTPUT_PROB_MAP = true;

const int PATCH_WIDTH = 100;
const int PATCH_HEIGHT = 100;

const int PROB_MAP_WIDHT = 50;
const int PROB_MAP_HEIGHT = 50;

const int PROB_MAP_PADDING = 0;

const int NUM_POS_PER_FRAME = 16;
const int NUM_NEG_PER_FRAME = 8;

//maximum scale of the patch compared to the original bbox
const int MAX_SCALE = 4;
const int NEG_SCALE = 2;

void cropImage(IplImage *frame, 
	IplImage **dest, 
	CvRect *bboxes, 
	CvRect rect, 
	int *numNeg, 
	int numPos = NUM_POS_PER_FRAME, 
	int negScale = NEG_SCALE, 
	int maxScale = MAX_SCALE, 
	int outputSize = PATCH_WIDTH);
void stitchImages(IplImage **crops, IplImage *display, CvRect *bboxes, int numNeg, int numPos = NUM_POS_PER_FRAME);

void saveImages(IplImage **crops, 
	CvRect *bboxes, 
	ofstream &filenames, 
	ofstream &groundTruth,
	ofstream &fileBBox,//bbox in the 100*100 patch
	string prefix, 
	char *frameCountStr, 
	int numNeg, 
	int numPos = NUM_POS_PER_FRAME);

#endif