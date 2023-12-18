# include <stdio.h>
# define n 3
#include <stdlib.h>
void push();
void pop();
void display();
int stack[n];
int top = -1;

int main()
{

    int choice;
    printf("Enter the following numbers for stack operations.\n");
    printf("push -> 1 \n pop -> 2 \n display -> 3 \n exit -> 4\n");

   while(1){
        printf("\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1 : push();
                break;
        case 2 : pop();
                break;
        case 3 : display();
                break;
        case 4 : exit(0);
                break;
        default : printf("Invalid option\n");
    }
   }
   return 0;
}

void push()
{
    if(top>=n){
        printf("Stack is Full, Overflow condition\n");
    }
    else{
        top++;
        int x;
        printf("Enter the element \n");
        scanf("%d",&x);
        stack[top] = x;
        printf("%d is pushed into the stack\n",x);
    }
}

void pop()
{
    if(top==-1){
        printf("Stack is empty, Underflow condition\n");
    }
    else{
        printf("%d is popped from the stack\n", stack[top]);
        top--;
    }

}

void display()
{
    if(top<=n && top>=0){

         printf("The Stack elements are\n");

        for(int i = top ; i>=0 ; i--){
            printf("%d\t",stack[i]);
        }
        printf("\n");
    }
    else{
       printf("Stack is empty") ;
    }

}






