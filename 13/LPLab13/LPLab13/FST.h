#pragma once
#include <iostream>
#include"stdafx.h"
namespace FST
{
	struct RELATION
	{
		char symbol; // ������ ��������
		short nnode; // ����� ������� �������
		RELATION(
			char c = 0x00,
			short ns = NULL
		);
	};

	struct NODE
	{
		short n_relation; // ��-�� ����������� ����
		RELATION* relations; // ����
		NODE();
		NODE(short n,
			RELATION rel, ...
		);
	};

	struct FST
	{
		char* string; //�������
		short position; //������� � �������
		short nstates; //���-�� ���������
		NODE* nodes; //���� ��������
		short* rstates; //��������� ���������
		FST(char* s,
			short ns,
			NODE n, ...
		);
	};

	struct CHECK_FST
	{
		int str_line;
		int position;
	};

	bool step(FST& fst, short* rstates); // ������ ������ �������
	bool execute(FST& fsts);  //������������ �������
}