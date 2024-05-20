#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;
string folderPath = "/home/matt/바탕화면/Project_MBH/project/data/";

int main(){

    Mat img = imread(folderPath + "daejun.png");      //Scalar(220, 245, 245) : 베이지색
    putText(img, "DAEJEON ", Point(50, 30), FONT_HERSHEY_SIMPLEX, 1, Scalar(220, 245, 245), 3.0);
    putText(img, "Today's Weather : ", Point(50, 60), FONT_HERSHEY_SIMPLEX, 1, Scalar(220, 245, 245), 2.5);
    putText(img, "Today's Temperature : ", Point(50, 90), FONT_HERSHEY_SIMPLEX, 1, Scalar(220, 245, 245), 2.5);
    putText(img, "Today's Rainfall : ", Point(50, 120), FONT_HERSHEY_SIMPLEX, 1, Scalar(220, 245, 245), 2.5);
    putText(img, "Today's Total Cloudiness : ", Point(50, 150), FONT_HERSHEY_SIMPLEX, 1, Scalar(220, 245, 245), 2.5);
       
    // 이모지 이미지 불러오기
    Mat emoji = imread(folderPath + "smile.png", IMREAD_COLOR);
    if (emoji.empty()) {
        cerr << "이모지 이미지 불러오기 실패!" << endl;
        return -1;
    }
    // 이모지 이미지 크기 조정
    double scale = 0.04;
    Mat resizedEmoji;
    resize(emoji, resizedEmoji, Size(), scale, scale);

    int emojiX = 340; 
    int emojiY = 30; 

    
    Rect roi(Point(emojiX, emojiY), resizedEmoji.size());
    resizedEmoji.copyTo(img(roi), resizedEmoji);

    imshow("img", img);
    waitKey(0);

    return 0;    
}