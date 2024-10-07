#include <stdio.h>

int list[225];
int INDEX = 0;

void enqueue (int data){
    list[INDEX] = data;
    INDEX++;
};

int dequeue (){
    int first_element = list[0];
    int idx = 0;
    while (idx < INDEX)
    {
        list[idx] = list[idx+1];
        idx++;
    }
    
    INDEX--;
    return first_element;
}

void print_queue (){
    int idx=0;
    while (1)
    {
        if (list[idx]){
            printf("%i\n", list[idx]);
            idx++;
        }else{
            break;
        }
    }
    
}

void queue_size () {
    printf("Queue size is : %i\n", INDEX);
}


void main (){

    enqueue(100);
    enqueue(200);
    enqueue(300);
    enqueue(400);

    print_queue();
    queue_size();
    int poped = dequeue();

    printf("poped : %i\n", poped);
    queue_size();
    print_queue();
    

}