#include <stdio.h>

struct list
{
    int num;
    struct list* next; 
}LIST;

int main(void){
    struct list a = {10, 0}, b = {20, 0}, c = {30, 0};
    struct list* head = &a;
    struct list* current;
    
    current = head;
    a.next = &b;
    b.next = &c;

    while(current){
        printf("%d\t", current->num);
        current = current->next;
    }

}