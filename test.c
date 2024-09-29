#include <stdio.h>
#include <stdlib.h>
int main(){

struct node
{
    int data;
    struct node *next;
};
struct node *head, *newnode, *temp;
head=NULL;
int choice = 1;
while(choice){
newnode = (struct node*)malloc(sizeof(struct node));
printf("Enter the data to linked list:\n");
scanf("%d", &newnode->data);
newnode->next = NULL;

if(head == 0){
    head = temp = newnode;
}
else{
    temp->next = newnode;
    temp = newnode;
}
printf("Enter your choice(0/1)\n");
scanf("%d", &choice);
}
temp = head;

printf("the elements are: \n");
while (temp != NULL)
{
  printf("%d\n", temp->data);
  temp = temp->next;
}

int newdata;
newnode = (struct node*)malloc(sizeof(struct node));
printf("Please enter the data to add at the front: \n");
scanf("%d", &newdata);
newnode->data = newdata;
newnode->next = head;
head = newnode;

printf("We get\n");
temp = head;
while (temp != NULL)
{
    printf("%d\n", temp->data);
    temp = temp->next;
}















    return 0;
}