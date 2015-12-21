#include<iostream>
using namespace std;

int main()
{
   char myarr[10]="HAI"; //Possible
   //myarr="123";  Reassigning is not possible
   printf("\n  :: %s\n ", myarr );


   char *mypoi="HELLO"; //possible
   mypoi="HAI"; //  possible
   //mypoi[0]='s'; Not possible changing the value of read only memeory


   mypoi=myarr; //Possible
   mypoi=mypoi+1; //possible
   //myarr=mypoi; Not possible cannot reassign the array





   return 0;
}

