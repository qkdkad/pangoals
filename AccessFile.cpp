#include "AccessFile.h"

void AccessFile::initSstream(char * &chp) {
	string temp;
	temp = chp; // 연산자 오버로딩 '=' -> string - iostream
	sst.str(temp);

	// chp를 stringstrieam로 변환

	string temp_str;
	for (int i = 0; i < MAX_STR; i++) {
		sst >> temp_str;
		vstr.push_back(temp_str);
	}
	
	double temp_num;
	for (int i = 0; i < MAX_NUMBER; i++) {
		sst >> temp_num;
		vnum.push_back(temp_num);
	}
	// sst >> (string)str;
	// vextor에 str, n 내용 추가
}

const HighSchoolNode &AccessFile::makeNodeInfo() {
	for (int i = 0; i < MAX_STR; i++)
		node.str[i] = vstr[i];
	
	for (int i = 0; i < MAX_NUMBER; i++)
		node.num[i] = vnum[i];

	return node;
}
//int AccessFile::String2Number(string str) {

//}

void AccessFile::printNode() {
	for (int i = 0; i < MAX_STR; i++)
		cout << i + 1 << " : " << node.str[i] << endl;

	for (int i = 0; i < MAX_NUMBER; i++)
		cout << i + 11 << " : " << node.num[i] << endl;
}