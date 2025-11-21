#include <stdio.h>
#include <stdlib.h>

struct node{
    struct node* prev;
    int value;
    struct node* next;
};

void display(struct node* head);
struct node* addEmpty(struct node* head, int value);
struct node* addEnd(struct node* head, int value);

void delete(struct node* head);
int main(void){
    struct node* head = NULL;
    head = addEmpty(head, 45);
    head = addEmpty(head, 15);
    head = addEmpty(head, 23);
    head = addEmpty(head, 39);
    head = addEmpty(head, 55);
    head = addEnd(head, 60);
    display(head);
    delete(head);
    display(head);


    return 0;
}


struct node* addEmpty(struct node* head, int value){
    struct node* temp = malloc(sizeof(struct node));  
    if(temp == NULL){
        printf("Alocação falhou");
        return head;
    }
    temp->value = value;
    temp->prev = NULL;
    temp->next = NULL;


    if(head == NULL){
        
        head = temp;
    }else{
        temp->next = head;
        head->prev = temp;
        head = temp;
    }



    return head;
}

struct node* addEnd(struct node* head, int value){
    struct node* temp = malloc(sizeof(struct node));

    temp->next = NULL;
    temp->prev = NULL;  
    temp->value = value;
    if(head == NULL){
        printf("Lista está fazia");
        return head;
    }
    struct node* ptr;
    ptr = head;

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    temp->prev = ptr;
    ptr->next = temp;

    return head;
}
void display(struct node* head){

    struct node* ptr;
    ptr = head;

    while(ptr != NULL){
        printf("O valor: %d\n", ptr->value);
        ptr = ptr->next;
    }
    
}


void delete(struct node* head){
    
    struct node* ptr;
    ptr = head;
    
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->prev->next = NULL;
    free(ptr);

}

 