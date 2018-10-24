#include <string>
#include <vector>
#include <stdio.h>
#include <math.h>
#include <dirent.h>
#include <fstream>
#include <boost/python.hpp>

#include "caffe/caffe.hpp"
#include "gpu_nms.hpp"

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace caffe;
using namespace std;

#define max(a, b) (((a)>(b)) ? (a) :(b))
#define min(a, b) (((a)<(b)) ? (a) :(b))
