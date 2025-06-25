#include<stdio.h>
int main()
{
    

    int a=0;
    int b=1;
    int n=1000;
    
    int fabonical;

    for(a=0; a<= n; a++)
 {
    printf("%d\n",a);
    fabonical = a+b;
    a=b;
    b=fabonical;

}
  


return 0;

}