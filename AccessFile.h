#pragma once
#include "HighSchoolNode.h"
#include <vector>
#include <iostream>
#include <sstream>
using namespace std;

class AccessFile {
private:
	vector<string> vstr;
	vector<double> vnum;
	//string s;
	stringstream sst; // stringstream - char형 포인터로 받은 값을 string로 변환해준 뒤 값을 받을 변수
	HighSchoolNode node; // 구조체
public:
	//AccessFile(const AccessFile * file); // 복사 생성자
	//~AccessFile();
	void initSstream(char * &chp); // 포인터의 레퍼런스를 넘겨 받겠다.
	const HighSchoolNode &makeNodeInfo(); 
//	int String2Number(string str);
	void printNode();
};
