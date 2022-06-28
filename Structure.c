#include<stdio.>

struct products{
    char name[30];
    float price;
};

int main(){

    struct products p1, p2, p3;
    float average;
    
    printf("\nEnter the name and price of the 1. product: ");
    scanf("%s %f", p1.name &p1.price);
    
    printf("\nEnter the name and price of the 2. product: ");
    scanf("%s %f", 2.name, &p2.price);
    
    printf("\nEnter the name and price of the 3. product: ");
    scanf("%s %f", p3.name, &p3.price);
    
    average = (p1.price + p2.price + p3.price) / 3;
    
    if(p1.price > average){
        printf("\nName of the 1. product: %s", p1.name);
        printf("\nPrice: %.2f", p1.price);
    }
    if(p2.price > average){
        printf("\nName of the 2. product: %s", p2.name);
        printf("\nPrice: %.2f", p2.price);
    }
    if(p3.price > average){
        printf("\nName of the 3. product: %s", p3.name);
        printf("\nPrice: %.2f", p3.price);
    }
    return 0;
}

