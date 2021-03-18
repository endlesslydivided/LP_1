#pragma once

#include <cstring>
#include <iostream>

#define DICTNAMEMAXSIZE 20
#define DICTMAXSIZE 100
#define ENTRYNAMEMAXSIZE 30


#define THROW1 "Create: �������� ������ ����� �������"
#define THROW2 "Create: �������� ������ ������������ ������� �������"
#define THROW3 "AddEntry: ������������ �������"
#define THROW4 "AddEntry: ������������� ��������������"
#define THROW5 "GetEntry: �� ������ �������"
#define THROW6 "DelEntry: �� ������ �������"
#define THROW7 "UpdEntry: �� ������ �������"
#define THROW8 "UpdEntry: ������������� ��������������"

namespace Dictionary
{
	struct Entry
	{
		int id;
		char name[ENTRYNAMEMAXSIZE];
	};
	struct Instance
	{
		char name[DICTNAMEMAXSIZE];
		int maxsize;
		int size;
		Entry* dictionary;
	};
	Instance Create(char* name, int size);
	void AddEntry(Instance& inst, Entry ed);
	void DelEntry(Instance& inst, int id);
	void UpdEntry(Instance& inst, int id,Entry new_ed);
	Entry GetEntry(Instance& inst, int id);
	void Print(Instance d);
	void Delete(Instance& d);

}