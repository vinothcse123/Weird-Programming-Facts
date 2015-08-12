/* address symbol for array object */

int main()
{
   int a[10]={1,2,3,4,5,6,7,8,9,10};

   int *p1=a;
   int (*p2)[5] = (int (*)[5])  &a;

   p1++;
   p2++;

   printf("\n  p1 :: %d ", *p1  ); 
   printf("\n  p2 :: %d ", **p2  ); 


   return 0;
}
