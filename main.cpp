#include "AccessFile.h"
#include <iostream>
#include <fstream>
using namespace std;

int main(void) {
	ifstream ifo("c:\\data\\고등학교 정보2.txt");

	// 버퍼 생성 후 -> 파일에서 한 줄 읽은 후 버퍼에 저장

	char str[1000]; // 파일 읽고 저정할 버퍼 생성
	ifo.getline(str, sizeof(str));
	ifo.getline(str, sizeof(str));

	char * chp = str;
	AccessFile acf;
	acf.initSstream(chp);
	acf.makeNodeInfo();
	acf.printNode();
}