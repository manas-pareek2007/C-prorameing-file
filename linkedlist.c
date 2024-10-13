#include<stdio.h>
struct node{
	
	int data;
	struct node *next;
};
int main(){
	//malloc calloc free
	//100 104  108

struct node *one =(struct node *)calloc(1,sizeof(struct node));


struct node *two =(struct node *)calloc(1,sizeof(struct node));

struct node *three =(struct node *)calloc(1,sizeof(struct node));
struct node *four =(struct node *)calloc(1,sizeof(struct node));
one->data=10;
one->next=two;
two->data=20;
two->next=three;
three->data=30;
three->next=four;
four->data=40;
four->next=NULL;


struct node *head=one;

while(head!=NULL){
	
	printf("%d\n",head->data);
	head=head->next;
}

}
