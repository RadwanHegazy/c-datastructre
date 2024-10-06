#include <stdio.h>

// Stack : LIFO Principle


int mystack[10];
int top = -1;

int push (int value){
    top++;
    mystack[top] = value;
}

int pop (){
    int removed_element = mystack[top];
    top--;
    return removed_element;
}

void print_stack(){
    int idx = top;
    for (int i = 0; i < top+1; i++)
    {
        printf("%i ", mystack[idx]);
        idx--;
    }
    printf("\n");
    
}

int main (){

    push(1);
    push(2);
    push(3);
    push(23);
    push(44);

    print_stack();
    int poped_element = pop();
    print_stack();

    printf("removed element : %i\n", poped_element);

    return 1;
}
