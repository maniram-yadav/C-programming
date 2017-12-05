#include<stdio.h>
#include<conio.h>
#include<malloc.h>

/*              @Author : Maniram Yadav         */



struct linklist {
int data;
struct linklist *next;
};




struct linklist* createlist(struct linklist *start){
    int num,i;

    printf("Enter numebr of node : ");
    scanf("%d",&num);


    for(i=0;i<num;i++)
    {

    struct linklist *ptr,*temp;
    ptr=(struct linklist *)malloc(sizeof(struct linklist));
     if(start==NULL)
        start=ptr;

    printf("Enter data %d:   ",i);
    scanf("%d",&ptr->data);

    ptr->next=NULL;
    temp=start;
    if(start!=ptr){
    while(temp->next!=NULL)
                 temp=temp->next;
    temp->next=ptr;
    }
    }

    return start;


    }




struct linklist* insertbeg(struct linklist *start,int item){

struct linklist *ptr,*temp;
ptr=(struct linklist *)malloc(sizeof(struct linklist));
ptr->data=item;
ptr->next=start;

temp=start;
start=ptr;

return start;
}



struct linklist* insertend(struct linklist *start,int item){

struct linklist *ptr,*temp;
ptr=(struct linklist *)malloc(sizeof(struct linklist));
ptr->data=item;
ptr->next=NULL;

temp=start;
while(temp->next!=NULL)
    temp=temp->next;
temp->next=ptr;

return start;
}


struct linklist* insertmid(struct linklist *start,int index,int item){


struct linklist *ptr,*temp,*p;
int i=1;

ptr=(struct linklist *)malloc(sizeof(struct linklist));
ptr->data=item;
ptr->next=NULL;
p=start;

            if(index==1)
            {
              ptr->next=p;
              start=ptr;

              }

              else

     while(i++<(index-1)&&p->next!= NULL)
     {
        p=p->next;
     }

     if(i==index&&index!=1)
     {

            ptr->next=p->next;
            p->next=ptr;

     }


    return start;
     }




struct linklist* delbeg(struct linklist *start){

 struct linklist *tmp;
 tmp=start;
 start=start->next;
 free(tmp);
 return start;

}


struct linklist* delend(struct linklist *start){

struct linklist *tmp,*p;
tmp=start;

while(tmp->next->next!=NULL)
{
    tmp=tmp->next;
}

  p=tmp->next;
  tmp->next=NULL;
  free(p);
  return start;
}


struct linklist* delmid(struct linklist *start,int index){

int i=1;
struct linklist *tmp,*p;
tmp=start;
if(index==1)
{
  p=start;
  start=start->next;
}
else
  while(i++<index-1)
  {
   tmp=tmp->next;
  }

  p=tmp->next;
  tmp->next=p->next;
  free(p);
return start;

}


struct linklist* reverse(struct linklist *start){
 struct linklist *revers,*temp,*p;
 revers=NULL;
 temp=start;
 while(temp!=NULL)
 {
     p=(struct linklist *)malloc(sizeof(struct linklist));
     p->data=temp->data;

     p->next=revers;
     revers=p;
     temp=temp->next;
 }

 return revers;
}


int count(struct linklist *start){
int i=0;
struct linklist *temp;
temp=start;
while(temp!=NULL){
       i++;
temp=temp->next;
}
return i;
}


void print(struct linklist *start){

  printf("List Element : ");
    while(start!=NULL)
       {
  printf("%d  ",start->data);
  start=start->next;

             }    }

int main(){

struct linklist *start=NULL,*revers=NULL;

int option,index,item,i=0;


do {
printf("\n  1 : Create\n");
printf("  2 : Insert at beginning\n");
printf("  3 : Insert at end\n");
printf("  4 : Insert at middle\n");
printf("  5 : Delete at beg\n");
printf("  6 : Delete at mid\n");
printf("  7 : Delete at end\n");
printf("  8 : Count Node\n");
printf("  9 : Print List\n");
printf("  10 : Reverse the list\n");
printf("  11 : Exit");

printf("\nEnter option :  ");

   scanf("%d",&option);

switch(option){
case 1:
        start=createlist(start);
    break ;
case 2:
      printf("Enter item : ");
     scanf("%d",&item);
       start=insertbeg(start,item);
    break ;
case 3:

      printf("Enter item : ");
     scanf("%d",&item);
       start=insertend(start,item);
    break ;
case 4:
       printf("Enter position and item :  ");
       scanf("%d %d",&index,&item);
       start=insertmid(start,index,item);
    break ;
case 5:
    start=delbeg(start);
    break ;
case 6:
    printf("Enter position : ");
    scanf("%d",&index);
    start=delmid(start,index);
    break ;
case 7:
    start=delend(start);
    break ;
case 8:

    i=count(start);
    printf(" Number of Nodes : %d",i);
    break ;
case 9:
     print(start);
    break ;
case 10:
    revers=reverse(start);
    print(revers);
    break ;
case 11:
    break ;
default :
    printf("Wrong Option");
    break;

}

}
while(option!=11);

return 0;

}
