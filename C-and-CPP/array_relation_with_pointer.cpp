#include<iostream>


int main()
{
   int a[3]={0};

   int *p1=a;

   int *p2= (int *)&a; // casting to int pointer
   int (*p3)[3]= &a; // &a returns array type

   return 0;
}

