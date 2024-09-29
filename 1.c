#include <stdio.h>
#include <stdlib.h>

void main(){
struct node
{
   int data;
   struct node *next;
   
};

struct  node *head, *newnode, *temp;
head = NULL;
int choice = 1;
while(choice){
newnode = (struct node*)malloc(sizeof(struct node));
printf("Enter the data to add in the linked list: ");
scanf("%d", &newnode->data);
newnode->next = 0;
if(head == 0){
    head = temp = newnode;
}
else{
temp->next = newnode;
temp = newnode;
}

printf("Enter your choice (0/1):");
scanf("%d", &choice);
}
temp = head;
printf("The elements of the linked list are:\n");
while (temp != NULL)
{
   printf("%d\n", temp->data);

temp = temp->next;

}

















  getch();
}