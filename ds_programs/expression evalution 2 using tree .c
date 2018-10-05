#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>                  // not completed    not cpmpleted
#define MAX 20

int stack[100];
int top = -1;

struct et
{
    char value;
    struct et* left, *right;
};
 
// A utility function to check if 'c'
// is an operator
bool isOperator(char c)
{
    if (c == '+' || c == '-' ||
            c == '*' || c == '/' ||
            c == '^')
        return true;
    return false;
}
 
// Utility function to do inorder traversal
void inorder(struct et *t)
{
    if(t)
    {
        inorder(t->left);
        printf("%c ", t->value);
        inorder(t->right);
    }
}
 
// A utility function to create a new node
struct et* newNode(int v)
{
    struct et *temp = (struct et*)malloc(sizeof(struct et));
    temp->left = temp->right = NULL;
    temp->value = v;
    return temp;
};
 
 
 void push (int stack[], int item)
{   if (top == (MAX-1))
         printf("stack full");//status = 0;
    else
    {   //status = 1;
++top;
stack [top] = item;
    }
}



int pop (int stack[])
{  
int ret;
    if (top == -1)
    {   ret = 0;
//status = 0;
     return 0;
    }
    else
    {   //status = 1;
ret = stack [top];
--top;
    }
return ret;
}
 
// Returns root of constructed tree for given
// postfix expression
struct et* constructTree(char postfix[])
{
    //stack <et *> st;
    struct et *t, *t1, *t2;
    int i;
 
    // Traverse through every character of
    // input expression
    for ( i=0; i<strlen(postfix); i++)
    {
        // If operand, simply push into stack
        if (!isOperator(postfix[i]))
        {
            t = newNode(postfix[i]);
            push(stack,t);
        }
        else // operator
        {
            t = newNode(postfix[i]);
 
            // Pop two top nodes
            t1 = top(); // Store top
            pop(stack);      // Remove top
            t2 = top();
            st.pop();
 
            //  make them children
            t->right = t1;
            t->left = t2;
 
            // Add this subexpression to stack
            st.push(t);
        }
    }
 
    //  only element will be root of expression
    // tree
    t = st.top();
    st.pop();
 
    return t;
}

int main()
{
    char postfix[] = "ab+ef*g*-";
   struct et* r = constructTree(postfix);
    printf("infix expression is \n");
    inorder(r);
    return 0;
}
