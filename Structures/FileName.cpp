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
	printf("По координатам точки, определить номер координатной четверти, в которой находится данная точка\n");
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
	printf("По координатам точки, определить номер координатной четверти, в которой находится данная точка\n");
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
	printf("Отличники:\n");
	for (int i = 0; i < n; i++)
	{
		if (stud[i].srball == 5)
		{
			printf("%s\n", stud[i].fam);
		}
	}
	printf("\n");
	printf("Двоечники:\n");
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

float Еrapezoid_area(struct trapezoid* trap) 
{
	float sq = (trap->footing_one + trap->footing_two) * trap->height / 2;
	return sq;
}


// Функция добавления информации о посетителе в журнал
LogEntry* addVisitorToLog(LogEntry* log, int* logSize, Date date, Time time, Visitor visitor) {
	*logSize = *logSize + 1;
	log = (LogEntry*)realloc(log, (*logSize) * sizeof(LogEntry));
	if (log == NULL) {
		fprintf(stderr, "Ошибка выделения памяти!\n");
		exit(1); 
	}
	log[*logSize-1].date = date;
	log[*logSize-1].time = time;
	log[*logSize-1].visitor = visitor;
	return log;
}

void printLogEntry(LogEntry entry) {
	printf("Дата: %02d.%02d.%d\n", entry.date.day, entry.date.month, entry.date.year);
	printf("Время: %02d:%02d:%02d\n", entry.time.hour, entry.time.minute, entry.time.second);
	printf("ФИО: %s %s %s\n\n", entry.visitor.surname, entry.visitor.name, entry.visitor.patronymic);
}



int main()
{
	setlocale(LC_ALL, "Rus");
	//задание 1 (а)
	/*printf("Написать функцию, которая по координатам точки, определяет номер координатной четверти, в которой находится данная точка. Для хранения данных точки (координат x,y) использовать структуру. Функция должна принимать структуру и возвращать номер четверти.\n");
	struct Quarter quarter = { quarter.x = 1, quarter.y = 2 };
	int n = One(quarter);
	if (n == 0)
	{
		printf("Точка (%d,%d) находится в начале координат\n", quarter.x, quarter.y);
	}
	else
	{
		printf("Точка (%d,%d) находится в %d четверти\n", quarter.x, quarter.y, n);
	}*/


	//задание 1 (б)
	/*printf("Функция должна принимать указатель на структуру и возвращать номер строки.\n");
	struct Quarter quarter = { quarter.x = 1, quarter.y = -2 };
	int b = One_Two(&quarter);
	if (b == 0)
	{
		printf("Точка (%d,%d) находится в начале координат\n", quarter.x, quarter.y);
	}
	else
	{
		printf("Точка (%d,%d) находится в %d четверти\n", quarter.x, quarter.y, b);
	}*/


	//задание 2
	/*printf("Есть  описание структуры student. Создать массив структур. Написать функции определения фамилий двоечников, отличников. Определить средний балл группы.\n");
	struct student stud[] = { {"Лебедева", {4,4,4,4}, 4.0}, {"Боброва", {5,4,5,4}, 4.5}, {"Мухина", {5,4,5,3}, 4.25}, {"Мухин", {3,3,3,3}, 3.0}, {"Иванов", {3,3,3,5}, 3.5}, {"Курюкина", {5,5,5,5}, 5.0}, {"Бобков", {2,2,2,2}, 2.0}, {"Алиев", {2,2,2,2}, 2.0} };
	int n = sizeof(stud) / sizeof(stud[0]);
	definition(stud, n);
	float srb = srball_st(stud, n);
	printf("Средний балл группы = %-3.2f\n", srb);*/


	//задание 3
	/*printf("Написать структуру «Трапеция», которая должна содержать данные о трапеции(два основания и высоту).Написать функцию, которая будет рассчитывать площадь трапеции.\n");
	struct trapezoid trap;
	printf("\nВведите длину первого основания трапеции: ");
	scanf_s("%f", &trap.footing_one);
	printf("\nВведите длину второго основания трапеции: ");
	scanf_s("%f", &trap.footing_two);
	printf("\nВведите длину высоты трапеции: ");
	scanf_s("%f", &trap.height);
	float square = Еrapezoid_area(&trap);
	printf("\nПлощадь трапеции = %f\n", square)*/;


	//задание 4
	printf("Описать структуру Date (для хранение даты), структуру Time(для хранения времени), Visitor(фамилия, имя, отчество посетителя).Написать функцию, которая будет добавлять в журнал информацию о посетителях – дата, время и ФИО посетителя. \n");
	LogEntry* log = NULL;  
	int logSize = 0;       
	Date date1 = { 18, 9, 2024 };
	Time time1 = { 11, 21, 21 };
	Visitor visitor1 = { "Лебедева", "Александра", "Федоровна" };
	log = addVisitorToLog(log, &logSize, date1, time1, visitor1);
	Date date2 = { 12, 11, 2024 };
	Time time2 = { 14, 30, 30 };
	Visitor visitor2 = { "Папина", "Мария", "Викторовна" };
	log = addVisitorToLog(log, &logSize, date2, time2, visitor2);
	for (int i = 0; i < logSize; i++) {
		printLogEntry(log[i]);
	}
	free(log);

}
