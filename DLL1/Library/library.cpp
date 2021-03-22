#include "library.h"






 float task1_dll(int a1, int a2, int a3, int a4)
 {
     float res=0;
     res= a1*(a2+( static_cast < float >(a3)/a4));

    return res;

 }
 void task2_dll()
 {
     int inVariable=0;
     int result;
     std::cout<<"Mr User, we need your help, Please Enter your integer value...";
     std::cin>>inVariable;
     result=(inVariable<=21)? (inVariable-21):((inVariable-21)*2);
     std::cout<<"Mr User, Houston problem solved.. Your result is :"<<result;
 }
 void task3_dll()
 {

     int  massive_of_Task3[3][3][3];
     int i,j,k;
     std::cout<<"\nvisualisation of 3 way massive one of ways will be represented as a pages(layers),\n all others as a regular 2-way massive ( matrix)\n";
     for (i=0;i<3;i++)
     {
       std::cout <<"\t\t\t "<<i<<" Page of 2 way massive\n\n";
        for(j=0;j<3;j++)
        {
           for(k=0;k<3;k++)
           {
               massive_of_Task3[i][j][k]=(i+1)*100+(j+1)*10+k+1;              //initialisation
               std::cout <<" "<<massive_of_Task3[i][j][k];                   //print out initialized massive member in console
           }
         std::cout<<"\n";                                                    //strange problem cannot type in QT std::cout<<endl; but easyly builded in code blocks adjustments
        }
     std::cout<<"\n";
     }
     int *pArr=nullptr;
     pArr=&massive_of_Task3[0][0][0];
     //cheking totaly same but with using Addresses access and pointers
     std::cout<<"\nPrinting addresses and conditions of values\n";
     for (i=0;i<3;i++)
     {
        std::cout <<"\t\t\t "<<i<<" Page of 2 way massive\n\n";
        for(j=0;j<3;j++)
        {
           for(k=0;k<3;k++)
           {
               std::cout <<" "<<pArr<<" ="<<*(pArr);
               pArr++;
           }
        std::cout<<"\n";
        }
     std::cout<<"\n";
     }
     std::cout<<"We have to find element with address [1][1][1] "<<massive_of_Task3[1][1][1]<<"\n";
     pArr=&massive_of_Task3[0][0][0];

     std::cout<<"\n\tADDRESS="<<pArr+1*3*3+1*3+1;
     std::cout<<"\n\tInside box="<<*(pArr+1*3*3+1*3+1);
 }
