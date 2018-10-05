#include<stdio.h>
#include<conio.h>

struct inventory
{
    char name[20];
    int number;
};
struct inventory function();

typedef struct
{
enum tagField {call=1, wait};
}let;

typedef struct restaurant
{
    char name[30];
    int groupSize;
    
    struct restaurant *nextNode;
} list;

int main()
{
	list check;
	let x;
    struct inventory items;
    printf("%d",x.call);
    items=function();
    printf("\nam in main\n");
    printf("\n%s\t",items.name);
    printf(" %d\t",items.number); 
    getch();
    return 0;
}

struct inventory function()
{
    struct inventory items;
    printf(" enter the item name\n ");
    scanf(" %s ",&items.name );
    printf(" enter the number of items\n ");
    scanf("%d",&items.number );
    return items;
}
