// ConsoleApplication1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stdlib.h"
#include "stdio.h"
#include "functions.h"
#define number 6

int main()
{
	int i,j,num,a;
	
	
	//struct Student stu_s;
	printf("欢迎进入成绩管理系统！\n\n");
	printf("读取并查看数据请按1\n计算总成绩并排序请按2\n查询请按3\n计算均值及方差请按4\n退出请按5\n");
	printf("--------------------------------------\n");
	printf("--------------------------------------\n");
	while (true)
	{
		printf("请输入要执行的操作\n");
		scanf("%d",&a);
		if (a == 1)
		{
			read_data("data.txt");
			
		}
		else if (a == 2)
			sort();
		else if (a == 3)
			search();
		else if (a == 4)
			describe();
		else if (a == 5)
			break;
		
	
	}
	
	
	return 0;
}











/*for (i = 0; i < size; i++)
{
printf("%d %s %d %d %d\n", stu[i].student_number, stu[i].name, stu[i].score1, stu[i].score2, stu[i].score_s);
}*/


/*
int main()
{
	
	int i,size;
	
	FILE *fp = NULL;
	errno_t err = 0;
	if ((err = fopen_s(&fp, "data.txt", "r")) != 0)
	{
		printf("cann't open file\n");
		exit(0);
	}

	fscanf(fp,"%d",&size);

	for (i = 0; i < size; i++)
	{
		fscanf(fp,"%d %s %d %d %d",&stu[i].student_number,&stu[i].name,&stu[i].score1,&stu[i].score2,&stu[i].score_s);
		
	}
	for ( i = 0; i < size; i++)
	{
		printf("%d %s %d %d %d\n", stu[i].student_number, stu[i].name, stu[i].score1, stu[i].score2, stu[i].score_s);
		printf("1\n");
	}
	fclose(fp);
    return 0;
}
*/
//,stu[i].name, stu[i].score1, stu[i].score2, stu[i].score_s