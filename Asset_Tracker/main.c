

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "requirements.h"

Tracking_List* create_list() {
    Tracking_List* x = (Tracking_List*)malloc(sizeof(Tracking_List));
    x->front = -1;
    x->back = -1;
}

void display_items(Tracking_List* x) {
    for (int i = x->front; i <= x->back; i++) {
        printf("%d ", x->list[i]);
    }
    printf("\n");
}

int is_empty(Tracking_List* x) {
    return x->list == -1;
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
        for (int i = 0; i < size; i++) {

        }
    }
}

int main() {
    printf("Welcome to the Asset Tracking System\n");
    printf("Max size of list is 100 items\n");
    printf("\n");

    printf("Enter");

    return 0;
}