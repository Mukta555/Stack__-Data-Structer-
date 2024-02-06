#include <stdio.h>
#define CAPACITY 5
int stack[CAPACITY];
int top = -1;

void push(int x){
    if(top<CAPACITY){
        top= top+1;
        stack[top]=x;
        printf("Successfully added item:%d\n",x);
    } else{
        printf("No spaces\n");
    }
}


int pop(){

if (top>=0){
    int val = stack[top];
    top = top-1;
    return val;
}
      printf(" Exception from pop! Empty stack\n");
      return -1;
}



int peek(){

    if (top>=0){
        return stack[top];
    }
    printf("Exception from peek! Empty stack\n");

    return -1;

}

int main()
{
    printf("Implement my stack!\n");
    peek();
    push(10);
    push(20);
    push(30);
    printf("Pop item:%d\n",pop());
    push(40);
    printf("Top of stack:%d\n", peek());
    return 0;
}
