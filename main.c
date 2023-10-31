/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int choice;
    int x;
    int y;
    int res;
    char c;
    do
    {
    printf("1.addition\n" "2.subtraction\n" "3.multiplication" "\n4.division\n");
    printf("enter your choice:");
    scanf("%d",&choice);
    
    printf("enter first number:");
    scanf("%d",&x);
    printf("enter second number:");
    scanf("%d",&y);
    
    switch (choice) {
        case 1:
            res=x+y;
            printf("result is %d",res);
            break;
        case 2:
            res=x-y;
            printf("result is %d",res);
            break;
        case 3:
            res=x*y;
            printf("result is %d",res);
            break;
        case 4:
            res=x/y;
            printf("result is %d",res);
            break;
        default:
            printf("invalid number");
    }
    printf("do you want to continue? enter y");
    scanf("%s",&c);
        
    }while(c=='y');
    

    return 0;
}


