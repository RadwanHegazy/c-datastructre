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


int get_index (int num){
    for (int i = 0; i < INDEX; i++)
    {
        if(list[i] == num){
            return i;
        }
    }
    
    return -1;
    
}


int find_smallest(){
    int small = list[0];
    for (int i = 0; i < INDEX; i++)
    {
        if (list[i] < small){
            small = list[i];
        }
    }

    return small;
}

// int sorted_list[225];
// int SORTED_INDEX = 0;

void sort_queue (){
    for (int i = 0; i < INDEX; i++)
    {
        for (int j = 0; j < INDEX-i-1; j++)
        {

            if(list[j] > list[j+1]){
                int tmp = list[j];
                list[j] = list[j+1];
                list[j+1] = tmp;
            }
        }
    }
    
    // return list;
}


void queue_size () {
    printf("Queue size is : %i\n", INDEX);
}


void main (){

    enqueue(5);
    enqueue(4);
    enqueue(3);
    enqueue(2);


    
    print_queue();
    printf("____After Sorting__\n");
    sort_queue();
    print_queue();
    
    
}