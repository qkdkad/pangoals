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
	stringstream sst; // stringstream - char�� �����ͷ� ���� ���� string�� ��ȯ���� �� ���� ���� ����
	HighSchoolNode node; // ����ü
public:
	//AccessFile(const AccessFile * file); // ���� ������
	//~AccessFile();
	void initSstream(char * &chp); // �������� ���۷����� �Ѱ� �ްڴ�.
	const HighSchoolNode &makeNodeInfo(); 
//	int String2Number(string str);
	void printNode();
};
