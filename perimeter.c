/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int l,b,h;
    int rad;
    int side;
    int per;
    int area;
    float area2;    
    int x;
    char c;
    
    do
    {
        printf("1.rectangle\n" "2.square\n" "3.circle\n" "4.triangle\n");
        printf("Enter your choice:");
        scanf("%d",&x);
        
        switch (x)
        {
            case 1:
            printf("Enter length of rectangle: ");
            scanf("%d",&l);
            printf("Enter width of rectangle: ");
            scanf("%d",&b);
            per=2*(l+b);
            area=l*b;
            printf("perimeter of rectangle is: %d",per);
            printf("\narea of rectangle is: %d",area);
            break;
            
            case 2:
            printf("Enter side of square: ");
            scanf("%d",&side);
            per=side*side;
            area=4*side;
            printf("perimeter of square is: %d",per);
            printf("\narea of square is: %d",area);
            break;
            
            case 3:
            printf("Enter radius of circle: ");
            scanf("%d",&rad);
            per=2*3.14*rad;
            area=3.14*rad*rad;
            printf("perimeter of circle is: %d",per);
            printf("\narea of circle is: %d",area);
            break;
            
            case 4:
            printf("enter base of triangle:");
            scanf("%d",&b);
            printf("enter height of triangle:");
            scanf("%d",&h);
            area2=0.5*(b*h);
            printf("\narea of triangle is: %.2f",area2);
            break;
            
            default:
            printf("invalid choice\n");
            break;
            
            
        }
        printf("\ndo you want to continue: enter y, \n");
        scanf("%s",&c);
    }
    
    while(c=='y');
    

    return 0;
}







