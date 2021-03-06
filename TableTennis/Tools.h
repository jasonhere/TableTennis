#ifndef HEADER_TOOLS
#define HEADER_TOOLS

void showHist(IplImage *frame, CvArr *mask = NULL, bool wait = true, bool keep = false);
void getColorRange(IplImage *frame, CvArr *mask, int *maxIdx, int *loIdx, int *hiIdx); 
void getColorRangeN(CvCapture *capture, CvArr *mask, int n, int lo[3], int hi[3]);

void drawMask(std::vector<CvPoint> &points, IplImage *mask);
void drawConnectedComponents(CvSeq *contours, IplImage *mask);

void findTableArea(IplImage *frame, IplImage *mask, int lo, int hi, int vlo, int vhi);
void findTable(IplImage *mask, CvRect *tableBBox);
void findEdges(IplImage *frame, IplImage *mask);
bool findVertices(IplImage *frame, CvPoint2D32f *pts, CvPoint hints[4][2]=NULL, int numHints=0);

float getRectScore(CvRect candidate, CvRect golden);
CvRect getGoldenRect(CvSize size);

//3d reconstruction
void calibrateCamera(CvPoint2D32f *ptsLeft, CvPoint2D32f *ptsRight, CvSize imageSize, CvMat *intrinsicMatrix, CvMat *distortionMatrix, CvMat *rotationVectors, CvMat *translationVectors);
void calibrateCameraUseGuess(CvPoint2D32f *ptsLeft, CvPoint2D32f *ptsRight, CvSize imageSize, CvMat *intrinsicMatrix, CvMat *distortionMatrix, CvMat *rotationVectors, CvMat *translationVectors);
void transformUV(CvPoint2D32f *ptsLeft, CvMat *intrinsicMatrix, CvMat *intrinsicMatrix1);
void transformUV(CvPoint2D32f *ptsLeft, CvMat *transformMatrix);
void getTransformMatrix(CvMat *intrinsicMatrix, CvMat *intrinsicMatrix1, CvMat *res);

#endif