#include <stdio.h>
int hcf(int a, int b, int *h){
    int temp,r, q, i;
    int x, y;
    
    if(a<b){
        x=a;
        y=b;
    }
    else if(a>b){
        x=b;
        y=a;
    }
    
    
    for(i=0; i<=100; i++){
    
    q=y/x;
    r=y%x;
    y=x;
    x=r;

    if(r==0){
    break;
    }
    
    }
    
    *h=y;
    
    
      
}


int main()
{
    int a, b, h;
    
    printf("Please enter any two digits \n");
    scanf("%d %d", &a, &b);
    
    hcf(a, b, &h);
    
    printf("The H.C.F of the digits %d and %d is %d ", a, b, h);
    
    return 0;
}
