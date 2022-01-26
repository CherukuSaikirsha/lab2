#include <math.h>
#include <stdio.h>
int main()
{
    int N,key,c,d;
   printf("enter number of elemnets N:");
   scanf("%d",&N);
   int a[N];
   if(N>0){
   for(c=0;c<N;c++)
   {                                         //array declared and input values are given dynamically//
       scanf("%d",&a[c]);
   }
    for (c = 1; c < N; c++) {                     //insertion sort algorithm implementation starts from here//
        key = a[c];
        d = c - 1;
    while (d >= 0 && a[d] > key) {
            a[d + 1] = a[d];
            d = d - 1;
        } 
        a[d + 1] = key;
    }                                            //insertion sort algorithm implementation ends from here//
    
    
    printf("sorted array is :");
  for (c = 0; c < N; c++)
   
        printf("%d ", a[c]);                     //printing the sorted array//
   }
   else 
   printf(" No elements in the array");  
 
}
