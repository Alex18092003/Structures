//#include <iostream>
//#include <locale.h>
//#include <stdio.h>
//#include <malloc.h>
//
//
//
//struct student {
//    char fam[20];
//    int ball[4];
//    float srball;
//};
//
//void excellent_students(struct student* students, int n) //определение отличников
//{
//    for (int i = 0; i < n; i++)
//    {
//        if (students[i].srball == 5)
//        {
//            printf("%s\n", students[i].fam);
//        }
//    }
//}
//
//void poor_student(struct student* students, int n) //определение двоечников
//{
//    for (int i = 0; i < n; i++)
//    {
//        if (students[i].srball == 2)
//        {
//            printf("%s\n", students[i].fam);
//        }
//    }
//}
//
//float srball_group(struct student* students, int n) //подсчет среднего балла группы
//{
//    float srb = 0, sum = 0;
//    for (int i = 0; i < n; i++)
//    {
//        sum += students[i].srball;
//    }
//    return srb = sum / n;
//}
//
//
//
//
//int main()
//{
//    setlocale(LC_ALL, "Rus");
//    printf("Задание 2: Есть  описание структуры student. Создать массив структур. Написать функции определения фамилий двоечников, отличников. Определить средний балл группы.\n");
//    struct student stud[] = { {"Ильин",{4,4,4,4}, 4.0}, {"Сергеев", {5,5,5,5}, 5.0}, {"Андреев", {2,2,2,2}, 2.0} };
//    int n = sizeof(stud) / sizeof(stud[0]);
//    printf("Отличники:\n");
//    excellent_students(stud, n);
//    printf("Двоечники:\n");
//    poor_student(stud, n);
//    float srb = srball_group(stud, n);
//    printf("Средний балл группы = %-3.2f\n", srb);
//
//
//    return 0;
//}
//
//
//
