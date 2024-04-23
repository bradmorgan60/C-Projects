

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "requirements.h"


Tracking_List* create_list() {
    Tracking_List* x = (Tracking_List*)malloc(sizeof(Tracking_List));
    x->front = -1;
    x->back = -1;
    return x;
}

void display_items(Tracking_List* x) {
    for (int i = x->front; i <= x->back; i++) {
        printf("%d ", x->list[i]);
    }
    printf("\n");
}

int is_empty(Tracking_List* x) {
    return x->front == -1;
}

int is_full(Tracking_List* x) {
    return x->back == MAX_SIZE - 1;
}

void add_items(Tracking_List* x, int number) {
    int size = x->front - x->back + 1;
    if (is_full(x)) {
        printf("Tracking list is full. Please remove items\n");
        return;
    }
    if (is_empty(x)) {
        printf("Please add your items\n");
        x->front = 0;
    }
    
    x->back++;
    x->list[x->back] = number;
}

int main() {
    Tracking_List* x = create_list();
    int size = x->back - x->front + 1;
    int option;
    printf("Welcome to the Asset Tracking System\n");
    printf("Max size of list is 100 items\n");
    printf("\n");

    printf("Please select an option below: \n");

    printf("1. Add Item\n");
    printf("2. Remove Item\n");
    printf("3. Return Home\n");

    printf("Selection: ");
    scanf("%d", &option);
    

    switch (option)
    {
    case 1:

    for (int i = 0; i < size; i++) {
        int number;
        printf("Num-%d: ", i + 1);
        scanf("%d", &number);
        add_items(x, number);
    }
            

        break;
    
    case 2:
        printf("Remove item\n");
        break;
    
    case 3:
        printf("Returned Home\n");
        break;

    default:
        printf("Not a valid option\n");
    }

    

    return 0;
}