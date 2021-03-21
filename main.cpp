/*
**********  Third task on C++ course                                         ****
**********  Filename >main.cpp                                               ****
**********  IDE > QT Creator 4.13.2||CodeBlocks 20.03 + GCC 10.2.0           ****
**********  Created by > "~ORDA~" , Anton Bondarenko                         ****
**********  Date 16.03.2021                                                  ****
*/


//DONE● Написать программу, вычисляющую выражение a * (b + (c / d)) и выводящую результат с плавающей точкой, где a, b, c, d – целочисленные константы.
//      Используйте static_cast или СStyle cast к float чтобы выполнить точное деление.
//DONE● Дано целое число. Если оно меньше или равно 21, то выведите на экран разницу между этим числом и числом 21.
//      Если же заданное число больше, чем 21, необходимо вывести удвоенную разницу между этим числом и 21. При выполнении задания следует использовать тернарный оператор (?:).
//DONE●*Описать трёхмерный целочисленный массив, размером 3х3х3 и указатель на значения внутри массива и при помощи операции разыменования вывести на экран значение центральной ячейки получившегося куба [1][1][1].
//●**Написать программу, вычисляющую выражение из первого задания, а переменные для неё объявлены и инициализировать в другом cpp файле. Используйте extern. Если вы сделали 4-е задание, то 1-е можно не делать. =)
//●DLL Library challenge................

#include <QCoreApplication>

#include "Resolve_File.h"
#include "main.h"
using namespace std;


extern    int a;
extern    int b;
extern    int c;
extern    int d;
extern    float res;
extern float result_Func(int a1, int a2, int a3, int a4);
//void Task_2_Function();



int main()
{
// ************TASK_1&4***************

cout<<"All functions prototypes are located in Resolve_file.h \nAll functions itself are located in Resolve_file.cpp"<<endl<<endl;
cout <<endl<< "Task 1_4 fucntion in process... main.cpp line 41"<<endl;
cout<<"your result is: "<<result_Func(a,b,c,d)<<endl;
// ************TASK_1&4****************



//************TASK_2******************
cout <<endl<< "\nTask 2 function  in process...  main.cpp line 47"<<endl;
Task_2_Function();
//************TASK_3******************
cout <<endl<< "\nTask 3 function  in process...  main.cpp line 50"<<endl;
char z;
cout<<"\n\when ready just press any key:";
cin>>z;
Task_3_Function();

cout<<"\n\t\t___END___OF___GAME"<<endl;

    return 0;
}
