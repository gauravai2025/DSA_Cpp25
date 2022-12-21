
#include <stdio.h>
int main()
{
int a[10], b[10];
printf("enter element of array\n");
for(int i=0;i<10;i++){
scanf("%d\n",&a[i]);}
for(int i=0;i<10;i++){
      b[i]=a[9-i];
      printf("%d\n",b[i]);}
    return 0;
}
