#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int op;
float a,b,c;
void display()
{
    printf("1.Add\n");
    printf("2.Sub\n");
    printf("3.Mult\n");
    printf("4.Div\n");
    printf("Press 5 for Quit the Program\n");
    printf("\n");
    printf("Choose Your Option between (1-4) : ");
    
    scanf("%d", &op);
}

void add()
{
    printf("\nEnter First Number : ");
    scanf("%f",&a);
    printf("\nEnter Second Number : ");
    scanf("%f",&b);
    printf("\n%f + %f = %f\n",a,b, a+b);
    printf("\n");
}

void sub()
{
    printf("\nEnter First Number : ");
    scanf("%f",&a);
    printf("\nEnter Second Number : ");
    scanf("%f",&b);
   printf("\n%f - %f = %f\n",a,b, a-b);
    printf("\n");
}

void mult()
{
    printf("\nEnter First Number : ");
    scanf("%f",&a);
    printf("\nEnter Second Number : ");
    scanf("%f",&b);
    printf("\n%f * %f = %f\n",a,b, a*b);
    printf("\n");
}

void divi()
{
    printf("\nEnter First Number : ");
    scanf("%f",&a);
    printf("\nEnter Second Number : ");
    scanf("%f",&b);
    printf("\n%f / %f = %f\n",a,b, a/b);
    printf("\n");
}
int main()
{
    while(1)
    {
        label1:

        system("cls");
        label:
        display();
        switch (op)
        {
            case 1:
            add();
            getch();
            break;
        
            case 2:
            sub();
            getch();
            break;
          
            case 3:
            mult();
            getch();
            break;

            case 4:
            divi();
            getch();
            break;

            case 5:
            printf("Quiting the Program...\n");
            getch();
            goto end;
            break;
 
            default:
            printf("Soory, please choose a number b/w (1-4)");
            getch();
            system("cls");
            goto label;  

        
        }

    }
    end:
return 0;
}