#include<iostream>

int main(int argc,char *argv1[])
{
   using namespace std;
   char *argv2[1]; // Cannot declare without size as argv1 :: char *argv2[];  only allowed in main
   char *s;

   //strcpy(s,argv2[0]); gives core dumb but s="Somestring" possible

   return 0;
}

