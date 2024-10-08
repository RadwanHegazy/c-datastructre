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

void sort(){
    for (int i = 0; i < top; i++)
    {
        for (int j = 0; j < top-i; j++)
        {
            if (mystack[j] > mystack[j+1]){
                int tmp = mystack[j];
                mystack[j] = mystack[j+1];
                mystack[j+1] = tmp;
            }
        }
        
    }
    
}

int main (){

    push(1000);
    push(200);
    push(3000);
    push(23);
    push(2000);
    push(0);
    push(-22);

    print_stack();
    sort();

    print_stack();
    // int poped_element = pop();
    // print_stack();

    // printf("removed element : %i\n", poped_element);

    return 1;
}
