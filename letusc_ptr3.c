#include <stdio.h>
#include <stdlib.h>
#include<math.h>

struct point{
    
    int x;
    int y;
};

void side_length(struct point p1, struct point p2, struct point p3, double *a, double *b, double *c){
    
    double A, B, C;
  
    A=sqrt((pow((p2.x-p1.x),2))+(pow((p2.y-p1.y),2)));
    B=sqrt((pow((p3.x-p2.x),2))+(pow((p3.y-p2.y),2)));
    C=sqrt((pow((p1.x-p3.x),2))+(pow((p1.y-p3.y),2)));
    
    printf("the sided a, b and c are %f, %f, %f \n", A, B, C);

    
    *a=A;
    *b=B;
    *c=C;

}

/*void area(float, float, float, double *);*/

void area(double x, double y, double z, double *ar){
    
    double m, s;
    s = (x+y+z) / 2;
    m = sqrt(s*(s-x)*(s-y)*(s-z));
    *ar = m;
    
}

int main(int argc, char const *argv[]){
    
    struct point p1, p2, p3;
    
    double a, b, c, ar=0;
    
    printf("Enter the coordianates for the points p1 (x1, y1),  p2 (x2, y2), p3 (x3, y3)\n");
    scanf("%d %d %d %d %d %d", &p1.x, &p1.y, &p2.x, &p2.y, &p3.x, &p3.y);
    
    //printf("the coordianates of the triangle are %d %d %d %d %d %d", p1.x, p1.y, p2.x, p2.y, p3.x, p3.y);
    
    side_length(p1, p2, p3, &a, &b, &c);
    
    if((a+b) < c || (a+b) == c){
        printf("The following coordianates do not for a triangle");
    }

    else{
        area(a, b, c, &ar);
        printf("The area of triangle is %f", ar);
    }   
    
    return 0;
}
