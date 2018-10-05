#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct student 
{
	char USN[10];
	char name[20];
	char branch[10];
	int sem;
	char phn[10];
	
};

struct Node
{
	struct student info;
	struct Node *link;
};

struct Node *head,*lastnode;

struct student record()
{
	struct student info;
	printf("enter the USN :");
	scanf("%s",info.USN);
	
	printf("enter the Name : ");
	scanf("%s",info.name);
	
	printf("enter the branch : ");
	scanf("%s",info.branch);
	
	printf("enter the semester : ");
	scanf("%d",&info.sem);
	
	printf("enter the phn no. :");
	scanf("%s",info.phn );
	
	return info;
}

struct Node *getInfo(struct student info)
{
	struct Node *temp;
	
	temp = (struct Node*)malloc(sizeof(struct Node));
	
	temp->info = info;
	temp->link = head;
	
	head = temp;
	
	return head;
}

void attactFront(struct student info)
{
	struct Node *node;
	
	node->info= info;
	node->link = head;
	head = node;
	
	return head;
	
}

void delFront()
{
	struct Node *node;
	
	node = head->link;
	head->link = node->link;
	
	free(node);
}

void attachrear(struct student info)
{
	struct Node *node;
	
	node = getInfo(info);
	lastnode->link = node;
	lastnode = node;
	
	lastnode->link = head;
}
