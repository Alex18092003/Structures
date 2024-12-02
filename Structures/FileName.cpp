#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <malloc.h>


using namespace std;

struct Quarter
{
	int x;
	int y;
};

struct student {
	char fam[20];
	int ball[4];
	float srball;
};

struct trapezoid {
	float footing_one;
	float footing_two;
	float height;
};

typedef struct Date {
	int day;
	int month;
	int year;
} Date;

typedef struct Time {
	int hour;
	int minute;
	int second;
} Time;

typedef struct Visitor {
	char surname[50];
	char name[50];
	char patronymic[50];
} Visitor;

typedef struct LogEntry {
	Date date;
	Time time;
	Visitor visitor;
} LogEntry;




int One(struct Quarter quarter)
{
	int n;
	printf("�� ����������� �����, ���������� ����� ������������ ��������, � ������� ��������� ������ �����\n");
	if (quarter.x > 0 && quarter.y > 0)
	{
		n = 1; 
	}
	else if (quarter.x < 0 && quarter.y > 0)
	{
		n = 2;
	}
	else if (quarter.x < 0 && quarter.y < 0)
	{
		n = 3;
	}
	else if (quarter.x > 0 && quarter.y < 0)
	{
		n = 4;
	}
	else if (quarter.x == 0 && quarter.y == 0)
	{
		n = 0;
	}


	return n;
}

int One_Two(struct Quarter* quarter)
{
	int n;
	printf("�� ����������� �����, ���������� ����� ������������ ��������, � ������� ��������� ������ �����\n");
	if (quarter->x > 0 && quarter->y > 0)
	{
		n = 1;
	}
	else if (quarter->x < 0 && quarter->y > 0)
	{
		n = 2;
	}
	else if (quarter->x < 0 && quarter->y < 0)
	{
		n = 3;
	}
	else if (quarter->x > 0 && quarter->y < 0)
	{
		n = 4;
	}
	else if (quarter->x == 0 && quarter->y == 0)
	{
		n = 0;
	}
	return n;
}
 

void definition(struct student* stud, int n)
{
	printf("���������:\n");
	for (int i = 0; i < n; i++)
	{
		if (stud[i].srball == 5)
		{
			printf("%s\n", stud[i].fam);
		}
	}
	printf("\n");
	printf("���������:\n");
	for (int i = 0; i < n; i++)
	{
		if (stud[i].srball == 2)
		{
			printf("%s\n", stud[i].fam);
		}
	}
}

float srball_st(struct student* stud, int n) 
{
	float srb = 0, sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = sum + stud[i].srball;
	}
	return srb = sum / n;
}

float �rapezoid_area(struct trapezoid* trap) 
{
	float sq = (trap->footing_one + trap->footing_two) * trap->height / 2;
	return sq;
}


// ������� ���������� ���������� � ���������� � ������
LogEntry* addVisitorToLog(LogEntry* log, int* logSize, Date date, Time time, Visitor visitor) {
	*logSize = *logSize + 1;
	log = (LogEntry*)realloc(log, (*logSize) * sizeof(LogEntry));
	if (log == NULL) {
		fprintf(stderr, "������ ��������� ������!\n");
		exit(1); 
	}
	log[*logSize-1].date = date;
	log[*logSize-1].time = time;
	log[*logSize-1].visitor = visitor;
	return log;
}

void printLogEntry(LogEntry entry) {
	printf("����: %02d.%02d.%d\n", entry.date.day, entry.date.month, entry.date.year);
	printf("�����: %02d:%02d:%02d\n", entry.time.hour, entry.time.minute, entry.time.second);
	printf("���: %s %s %s\n\n", entry.visitor.surname, entry.visitor.name, entry.visitor.patronymic);
}



int main()
{
	setlocale(LC_ALL, "Rus");
	//������� 1 (�)
	/*printf("�������� �������, ������� �� ����������� �����, ���������� ����� ������������ ��������, � ������� ��������� ������ �����. ��� �������� ������ ����� (��������� x,y) ������������ ���������. ������� ������ ��������� ��������� � ���������� ����� ��������.\n");
	struct Quarter quarter = { quarter.x = 1, quarter.y = 2 };
	int n = One(quarter);
	if (n == 0)
	{
		printf("����� (%d,%d) ��������� � ������ ���������\n", quarter.x, quarter.y);
	}
	else
	{
		printf("����� (%d,%d) ��������� � %d ��������\n", quarter.x, quarter.y, n);
	}*/


	//������� 1 (�)
	/*printf("������� ������ ��������� ��������� �� ��������� � ���������� ����� ������.\n");
	struct Quarter quarter = { quarter.x = 1, quarter.y = -2 };
	int b = One_Two(&quarter);
	if (b == 0)
	{
		printf("����� (%d,%d) ��������� � ������ ���������\n", quarter.x, quarter.y);
	}
	else
	{
		printf("����� (%d,%d) ��������� � %d ��������\n", quarter.x, quarter.y, b);
	}*/


	//������� 2
	/*printf("����  �������� ��������� student. ������� ������ ��������. �������� ������� ����������� ������� ����������, ����������. ���������� ������� ���� ������.\n");
	struct student stud[] = { {"��������", {4,4,4,4}, 4.0}, {"�������", {5,4,5,4}, 4.5}, {"������", {5,4,5,3}, 4.25}, {"�����", {3,3,3,3}, 3.0}, {"������", {3,3,3,5}, 3.5}, {"��������", {5,5,5,5}, 5.0}, {"������", {2,2,2,2}, 2.0}, {"�����", {2,2,2,2}, 2.0} };
	int n = sizeof(stud) / sizeof(stud[0]);
	definition(stud, n);
	float srb = srball_st(stud, n);
	printf("������� ���� ������ = %-3.2f\n", srb);*/


	//������� 3
	/*printf("�������� ��������� ����������, ������� ������ ��������� ������ � ��������(��� ��������� � ������).�������� �������, ������� ����� ������������ ������� ��������.\n");
	struct trapezoid trap;
	printf("\n������� ����� ������� ��������� ��������: ");
	scanf_s("%f", &trap.footing_one);
	printf("\n������� ����� ������� ��������� ��������: ");
	scanf_s("%f", &trap.footing_two);
	printf("\n������� ����� ������ ��������: ");
	scanf_s("%f", &trap.height);
	float square = �rapezoid_area(&trap);
	printf("\n������� �������� = %f\n", square)*/;


	//������� 4
	printf("������� ��������� Date (��� �������� ����), ��������� Time(��� �������� �������), Visitor(�������, ���, �������� ����������).�������� �������, ������� ����� ��������� � ������ ���������� � ����������� � ����, ����� � ��� ����������. \n");
	LogEntry* log = NULL;  
	int logSize = 0;       
	Date date1 = { 18, 9, 2024 };
	Time time1 = { 11, 21, 21 };
	Visitor visitor1 = { "��������", "����������", "���������" };
	log = addVisitorToLog(log, &logSize, date1, time1, visitor1);
	Date date2 = { 12, 11, 2024 };
	Time time2 = { 14, 30, 30 };
	Visitor visitor2 = { "������", "�����", "����������" };
	log = addVisitorToLog(log, &logSize, date2, time2, visitor2);
	for (int i = 0; i < logSize; i++) {
		printLogEntry(log[i]);
	}
	free(log);

}
