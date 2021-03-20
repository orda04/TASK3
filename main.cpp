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
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
// ************TASK_3******************
// *these variables will be moved at additional file *.cpp and will be used at Task #4
/*
    int a=2;
    int b=5;
    int c=7;
    int d=8;
    float res=0;
    res= a*(b+( static_cast < float >(c)/d));
*/

//************TASK_2******************
  int inVariable=0;
  int result;
  cout<<"Mr User we need your help, Please Enter your integer value...";
  cin>>inVariable;
  result=(inVariable<=21)? (inVariable-21):((inVariable-21)*2);
  cout<<"Mr User Houston problem solved.. Your result is :"<<result;

 //************TASK_3******************

int  massive_of_Task3[3][3][3];
int i,j,k;
cout<<"\nvisualisation of 3 way massive one of ways will be represented as a pages(layers), all others as a regular 2-way massive ( matrix)\n";
for (i=0;i<3;i++)
{
  cout <<"\t\t\t "<<i<<" Page of 2 way massive\n\n";
   for(j=0;j<3;j++)
   {
      for(k=0;k<3;k++)
      {
          massive_of_Task3[i][j][k]=(i+1)*100+(j+1)*10+k+1;
          cout <<" "<<massive_of_Task3[i][j][k];
      }
    cout<<endl;
   }
cout<<endl;
}
int *pArr=nullptr;
pArr=&massive_of_Task3[0][0][0];
//cheking totaly same but with using Addresses access and pointers
for (i=0;i<3;i++)
{
   cout <<"\t\t\t "<<i<<" Page of 2 way massive\n\n";
   for(j=0;j<3;j++)
   {
      for(k=0;k<3;k++)
      {
          cout <<" "<<pArr<<" ="<<*(pArr);
          pArr++;
      }
   cout<<endl;
   }
cout<<endl;
}
cout<<"We have to find element with address [1][1][1] "<<massive_of_Task3[1][1][1]<<endl;
pArr=&massive_of_Task3[0][0][0];

cout<<endl<<"\n\tADDRESS="<<pArr+1*3*3+1*3+1;
cout<<endl<<"\n\tInside box="<<*(pArr+1*3*3+1*3+1);

  cout<<"\n\t\t___END___OF___GAME"<<endl;
    return 0;
}
