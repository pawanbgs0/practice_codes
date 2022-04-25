//MENU DRIVEN OPERATION FOR SINGLY LINKED LIST


#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node*next;
};
 struct node*head;

 void create();
 void display();
 void ib();
 void ie();
 void is();
 void db();
 void de();
 void ds();
 void reverse();
 void reverse_print();
  int main()
{
 int x,c,ch;
 create();
 
 do
 {
    printf("\n***Menu*");
    printf("\n1.Displaying the linked list:");
    printf("\n2.Inserting elements in the linked list:");
    printf("\n3.Deleting elements in the linked list:");
    printf("\n4.Reversing the linked list:");
    printf("\n5.Reverse printing the linked list:");
    printf("\n6.Exit");
    printf("\nEnter your choice:");
    scanf("%d",&c);
  switch(c)
  {
   case 1:display();
          break;
   case 2:
            
           printf("\n***Menu*");
           printf("\n1.Insert at beginning:");
           printf("\n2.Insert at end:");
           printf("\n3.Insert at specific position:");
           printf("\n4.Exit:");
           printf("\nEnter your choice:");
           scanf("%d",&ch);
           switch(ch)
           {
             case 1:ib();
                    break;
             case 2:ie();
                    break;
             case 3:is();
                    break;
             case 4:printf("\nExit:");
                    break;
             default:printf("\nWrong choice:");
            }
         break;
   case 3: 
           
           printf("\n***Menu*");
           printf("\n1.Delete at beginning:");
           printf("\n2.Delete at end:");
           printf("\n3.Delete at specific position:");
           printf("\n4.Exit:");
           printf("\nEnter your choice:");
           scanf("%d",&ch);
           switch(ch)
           {
             case 1:db();
                    break;
             case 2:de();
                    break;
             case 3:ds();
                    break;
             case 4:printf("\nExit:");
                    break;
             default:printf("\nWrong choice:");
            }
         break;
    case 4:reverse();
           break;
    case 5:reverse_print();
           break;
    case 6:printf("\nExit");
          break;
    default:printf("\nWrong choice:");
  }
   printf("\nDo you want to continue?(1:Yes,0:No)");
   scanf("%d",&x);     
   if(x==1)
    continue;
     else
     c=6;
    }
   
   while(c!=6);
   printf("\n");
}

 
 void create()
{ 
 struct node *p,*q;
 int i,n,item;
 printf("Enter number of nodes:");
 scanf("%d",&n);
 if(n<0)
 {
  printf("Invalid input:");
 }
 else if(n==0)
  {
   printf("No nodes to create:");
  }
 else
  {
   for(i=1;i<=n;i++) 
   {
    printf("Enter %dth term:\n",i);
    scanf("%d",&item);
    p=(struct node*)malloc(sizeof(struct node));

    p->data=item;
    p->next=NULL;
    if(head==NULL)
    {
     head=p;
    }
    else
     {
      q->next=p;
     }
      q=p;
    } 
    } 
  }  
 
void display()
 {
  struct node *q;
  q=head;
  if(head==NULL)
  printf("\nLinked list empty:");
  else
 {
  while(q!=NULL)
  {
  
   printf("%d->",q->data);
   q=q->next;
  }
 printf("NULL");
  }
 }
void ib()
{
 int num;
 struct node *ptr;
 printf("Enter data:");
 scanf("%d",&num);
 ptr=(struct node*)malloc(sizeof(struct node));
 if(head==NULL)
 {
  ptr->next=NULL;
  head=ptr;
 } 
 else
 {
  ptr->data=num;
  ptr->next=head;
  head=ptr;
 }
display();
}
void ie()
{
int no;
struct node *ptr,*temp;
printf("Enter data:");
scanf("%d",&no);
ptr=(struct node*)malloc(sizeof(struct node));
ptr->data=no;
ptr->next=NULL;
if(head==NULL)
{ 
 head=ptr;
}
 else
{
 temp=head;
 if(temp->next!=NULL)
 {
  temp=temp->next;
 }
 temp->next=ptr;
}
display();
}
void is()  
    {  
        struct node *ptr,*temp;  
        int item,loc,i; 
        printf("\nEnter data:");
        scanf("%d",&item); 
        printf("\nEnter the location");  
        scanf("%d",&loc); 
        ptr = (struct node*)malloc(sizeof(struct node)); 
        if(head == NULL)  
        {  
            head=ptr;  
        }  
        else  
        {  
                   
            ptr->data = item; 
            ptr->next=NULL; 
            temp=head;  
            for(i=1;i<loc-2;i++)  
            {  
                temp = temp->next;  
                if(temp == NULL)  
                {  
                    printf("\ncan't insert\n");  
                      
                }  
              
            }  
            ptr ->next = temp ->next;   
            temp ->next = ptr;   
            printf("\nNode inserted:");  
        }
display();
}
void db()
{
 struct node *p;
 p=head;
 head=head->next;
 free(p);
  
display();
}
void de()
{
 struct node *p=0,*q;
 if(head==NULL)
{
 head=p;
}
else
{
 q=head;
 p=q->next;
 while(p->next!=NULL)
{
 p=p->next;
 q=q->next;
}
 q->next=NULL;
 free(p);
}
display();
}
void ds()
{
 int no,i;
 struct node *p=0,*q;
 printf("Enter the node which you want to delete:");
 scanf("%d",&no);
 if(head==NULL)
 {
  head=p;
 }
 else
 {
  q=head;
  p=q->next;
  for(i=1;i<=no-2;i++)
  {
   p=p->next;
   q=q->next;
  }
 q->next=p->next;
 free(p);
 }
display();
}
void reverse()
{
 struct node *r=0,*q,*l;
 if(head==NULL)
 {
  head=r;
 }
 else
{
 l=NULL;
 q=head;
 r=q->next;
 while(q->next!=NULL)
  {
   q->next=l;
   l=q;
   q=r;
   r=r->next;
  }
 q->next=l;
}
 head=q;

display();
}
void reverse_print()
{
 struct node *q=0,*l;
 if(head==NULL)
 {
  head=q;
 }
 else
  { 
   l=NULL;
   while(l!=NULL)
    {
     q=head;
     while(q->next!=NULL)
     {
      q=q->next;
     }
     printf("%d,",q->data);
     l=q;
    }
   }
 display();
}