#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

string type2str(int type)
{
    string r;
    uchar depth = type & CV_MAT_DEPTH_MASK;

    switch (depth) {
    case CV_8U:
        r = "8U";
        break;
    case CV_8S:
        r = "8S";
        break;
    case CV_16U:
        r = "16U";
        break;
    case CV_16S:
        r = "16S";
        break;
    case CV_32S:
        r = "32S";
        break;
    case CV_32F:
        r = "32F";
        break;
    case CV_64F:
        r = "64F";
        break;
    default:
        r = "User";
        break;
    }
    return r;
}

int main(int argc, char const *argv[])
{
    // Read 8-bit grayscale image
    Mat img = imread("earth-16-bit-per-channel.png", IMREAD_GRAYSCALE);
    cout << "flags : IMREAD_GRAYSCALE" << endl;
    cout << "Number of Channels : " << img.channels() << ", depth : " << type2str(img.depth())
         << endl
         << endl;

    // Read 8-bit color image
    img = imread("earth-16-bit-per-channel.png", IMREAD_COLOR);
    cout << "flags : IMREAD_COLOR" << endl;
    cout << "Number of Channels : " << img.channels() << ", depth : " << type2str(img.depth())
         << endl
         << endl;

    // Read 16-bit color image
    img = imread("earth-16-bit-per-channel.png", IMREAD_ANYCOLOR | IMREAD_ANYDEPTH);
    cout << "flags : IMREAD_ANYCOLOR | IMREAD_ANYDEPTH" << endl;
    cout << "Number of Channels : " << img.channels() << ", depth : " << type2str(img.depth())
         << endl
         << endl;

    // Read transparent PNG / TIFF image
    img = imread("earth-16-bit-per-channel.png", IMREAD_UNCHANGED);
    cout << "flags : IMREAD_UNCHANGED" << endl;
    cout << "Number of Channels : " << img.channels() << ", depth : " << type2str(img.depth())
         << endl
         << endl;

    return 0;
}
