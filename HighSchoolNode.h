#pragma once

#ifndef MAX_STR
#define MAX_STR 10
#endif

#ifndef MAX_NUMBER
#define MAX_NUMBER 18
#endif

#include<cstring>
#include<iostream>
using namespace std;

struct HighSchoolNode {
	string str[MAX_STR];
	double num[MAX_NUMBER];
};

/*
fstream - h.file
1. open - ifstream // if(filename+��θ�);
                   / ifstream ifo; / ifo.open(filename+��θ�);
				   string s;
				   ifo >> s 
				   >> 1. space / 2. tab / 3.\n ���� ����
				   ifo.getline(char *, size);					/ 1. �� �� ��ä�� ���ۿ� ����
				   vector<string> / MAX_STR �� ��ŭ				/ 2. �� ���� �м� �� vector�� ����
				   vector<int> / MAX_NUMBER �� ��ŭ
																/ 3. Node ����
																/ 2���� 3�� - AcceseFile
*/