#include <stdio.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
int main()
{
    int n,i,val;
    struct node *new,*temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&val);
        new=(struct node *) malloc(sizeof(struct node));
        new->data=val;
        new->next=NULL;
        if(head==NULL)
        {
            head=new;
            temp=new;
        }
        else
        {
            temp->next=new;
            temp=temp->next;
        }
    }
    temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
    return 0;
}
