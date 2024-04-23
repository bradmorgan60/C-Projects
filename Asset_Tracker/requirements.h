/*
Asset Tracking System: 
Develop a system using C to track the location of assets (e.g., vehicles, packages) 
in real-time using GPS modules and transmit the data to a central server for monitoring.

Equipment used:
1. Arduino Uno
2. GPS Module
3. RFID Scanner
4. RFID Tag (used to transmit feedback signal)

Similar to a bar code, but we are able to track multiple objects at the same time

Requirements of the app:
1. You can add / remove items from the cart. 
    Adding items to the cart removes from inventory
    Removing items from cart adds back to inventory
    User should be able to add/remove items they desire.
    Recommended data structure -> list
    
2. 
*/

#define MAX_SIZE 100
typedef struct {
    int front;
    int back;
    int list[MAX_SIZE];

} Tracking_List;

typedef struct {
    int raw_material;
    int finished_good;
    int semit_fg;
} Products;