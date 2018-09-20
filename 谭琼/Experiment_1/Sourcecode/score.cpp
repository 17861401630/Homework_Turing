#include "score.h"
#include <cmath>;
#include <iostream>
using namespace std;

void readData(SS stu[], int N)
{
	cout << "������ѧ�ţ�������ƽʱ�ɼ���ʵ��ɼ�����ĩ�ɼ�" << endl;
	for (int i = 0; i < N; i++)
	{
		cin >> stu[i].number >> stu[i].name >> stu[i].dailyScore >> stu[i].experScore >> stu[i].finalScore;
	}
}

void calcuScore(SS stu[], int N)
{
	for (int i = 0; i < N; i++)
	{
		stu[i].generalScore = 0.2*stu[i].dailyScore + 0.2*stu[i].experScore + 0.6*stu[i].finalScore;
	}
}

void sortScore(SS stu[], int N)		//���ݳɼ��ɸ���������
{
	for (int i = 0; i < N; i++)
	{
		stu[i].rank = 1;			//������ǣ���ʼֵΪ1
		for (int j = 0; j < N; j++)
		{
					
			if (j != i)				//�����Լ����Լ��Ƚ�
			{
			 if (stu[i].generalScore < stu[j].generalScore)		//�����Ϊi��ͬѧ�ɼ���j��ͬѧ�ɼ��ͣ������Ϊi��ͬѧ��������1λ�����½�1λ��
					{
						stu[i].rank += 1;
					}
			}
		}
	}
}

void printOut(SS stu[], int N)
{
	cout << "����  ѧ��  ����  ƽʱ�ɼ�  ��ĩ�ɼ�  ʵ��ɼ�  �����ɼ�" << endl;
	for (int i = 1; i <= N; i++)	//i��ʾ��������
	{
		for (int j = 0; j < N; j++)	//
		{
			if (stu[j].rank == i)
			{
				cout << stu[j].name << "  " << stu[j].number << "  " << stu[j].rank << "  " << stu[j].dailyScore
					<< "  " << stu[j].experScore << "  " << stu[j].finalScore << " " << stu[j].generalScore<<endl;
				continue;
			}
		}
	}
}