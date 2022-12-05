
#include <stdio.h>

    
int swap_values(int *p1,int *p2){

    
    printf("first number%d\n",*p2);
    printf("second number%d",*p1);
    
}






int main() {
    int a,b;
    printf("Enter the first number");
    scanf("%d",&a);
    
    printf("enter second number");
    scanf("%d",&b);
    
    
    int*p1;
    p1=&a;
    
    
    int*p2;
    p2=&b;
    
    swap_values(&a,&b);
    
    
    return 0;
}