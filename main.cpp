#include "AccessFile.h"
#include <iostream>
#include <fstream>
using namespace std;

int main(void) {
	ifstream ifo("c:\\data\\����б� ����2.txt");

	// ���� ���� �� -> ���Ͽ��� �� �� ���� �� ���ۿ� ����

	char str[1000]; // ���� �а� ������ ���� ����
	ifo.getline(str, sizeof(str));
	ifo.getline(str, sizeof(str));

	char * chp = str;
	AccessFile acf;
	acf.initSstream(chp);
	acf.makeNodeInfo();
	acf.printNode();
}