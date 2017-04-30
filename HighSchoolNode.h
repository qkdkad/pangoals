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
1. open - ifstream // if(filename+경로명);
                   / ifstream ifo; / ifo.open(filename+경로명);
				   string s;
				   ifo >> s 
				   >> 1. space / 2. tab / 3.\n 마다 저장
				   ifo.getline(char *, size);					/ 1. 한 줄 통채로 버퍼에 저장
				   vector<string> / MAX_STR 개 만큼				/ 2. 한 줄을 분석 후 vector에 저장
				   vector<int> / MAX_NUMBER 개 만큼
																/ 3. Node 생성
																/ 2번과 3번 - AcceseFile
*/