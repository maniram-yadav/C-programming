#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

//                    @Author : Maniram Yadav
struct doublylist
{
    int data;
    struct doublylist *next;
    struct doublylist *prev;
};

typedef struct doublylist dll;
dll *start=NULL,*end=NULL;

dll *create(dll *start){


    int number,i;
    dll *temp,*ptr;

     printf("Enter number of Nodes :  ");
     scanf("%d",&number);

     for(i=0;i<number;i++){

            ptr=(dll *)malloc(sizeof(dll));
            scanf("%d",&ptr->data);
            ptr->next=NULL;
            ptr->prev=NULL;

            if(start==NULL){
                start=ptr;
                temp=ptr;
                end=ptr;
                }
            else{
                temp->next=ptr;
                ptr->prev=temp;
                temp=temp->next;
                end=ptr;
                }


                }
     return start;

}


 void printforward(dll *first){

     while(first!=NULL){
            printf("   %d",first->data);
        first=first->next;
     }

 }


 void printbackward(dll *back){

     while(back!=NULL){
        printf("   %d",back->data);
        back=back->prev;
     }
 }

dll *insrtbeg(dll *start){

dll *ptr,*temp;
ptr=(dll *)malloc(sizeof(dll));
printf("\nEnter node value :  ");
scanf("%d",&ptr->data);

ptr->next=NULL;
ptr->prev=NULL;

ptr->next=start;
start->prev=ptr;

start=ptr;

return start;
}



dll *insertmid(dll *start,int item,int position){

int i;
dll *temp,*ptr;
temp=start;

for(i=1;i<position-1;i++){
    temp=temp->next;
}

if(temp==NULL)
{
printf("Wrong position ");
return start;
}

else if(position==1&&start==NULL){
    ptr=(dll *)malloc(sizeof(dll));
    ptr->data=item;
    ptr->next=NULL;
    ptr->prev=NULL;
    start=ptr;
    end=ptr;
    return start;
}
else if(i==position&&temp->next==NULL){

    ptr=(dll *)malloc(sizeof(dll));
    ptr->data=item;
    ptr->next=NULL;

    ptr->prev=temp;
    temp->next=ptr;
    end=temp;
    return start;
}
else{

    ptr=(dll *)malloc(sizeof(dll));
    ptr->data=item;

    ptr->next=temp->next;
    temp->next->prev=ptr;

     ptr->prev=temp;
     temp->next=ptr;
    return start;
}

}


dll *insertend(dll *start){

dll *ptr,*temp;

temp=start;
ptr=(dll *)malloc(sizeof(dll));
printf("\n Enter Node value :  ");
scanf("%d",&ptr->data);
ptr->next=NULL;
ptr->prev=NULL;

if(start==NULL){

    start=ptr;
    end=ptr;
    return start;
}
else{
    while(temp->next!=NULL)
        temp=temp->next;

    temp->next=ptr;
    ptr->prev=temp;
    end=ptr;

    return start;
}

}


dll *deletebeg(dll *start){

dll *temp;

temp=start;
if(start==NULL){

    printf("Empty DLink list");
    return start;
}
else{
    start=start->next;
    start->prev=NULL;
    free(temp);
    return start;
}
}

dll *deleteend(dll *start){

dll *temp,*ptr;
ptr=start;

while(ptr->next->next!=NULL){
ptr=ptr->next;}

temp=ptr->next;
ptr->next=NULL;

end=ptr;
free(temp);

return start;

}

dll *deletemid(dll *start,int position){

int i;
dll *temp,*ptr;

ptr=start;

for(i=1;i<position;i++){

    ptr=ptr->next;
}

temp=ptr->next;

ptr->next=temp->next;
ptr->next->prev=ptr;

free(temp);
return start;
}



int main(){

int option,item,position;

do{

printf("\n-----------------------------------------------------------------------------------------");
printf("\n--------------------  Doubly Link List --------------------------------");

printf("\n1 :  Create ");

printf("\n2 :  Insert at Beginning");
printf("\n3 :  Insert in middle");
printf("\n4 :  Insert at the end");

printf("\n5 :  Delete at beginning");
printf("\n6 :  Delete at middle");
printf("\n7 :  Delete at the end");

printf("\n8 :  Reverse List");
printf("\n9 :  Print Forward List");
printf("\n10 :  Print Reverse List");
printf("\n11 :  Count the node");
printf("\n12 :  Exit");
printf("\n---:  Enter the option :-  ");

scanf("%d",&option);
switch(option){
    case 1:
              start=create(start);
               break;
    case 2:
              start=insrtbeg(start);
               break;
    case 3:
              printf("\n Enter node  value : ");
              scanf("%d",&item);

              printf("\n Enter position   : ");
              scanf("%d",&position);

              start= insertmid(start,item,position);
               break;
    case 4:
             start=insertend(start);
               break;
    case 5:
               start=deletebeg(start);
               break;
    case 6:

                     printf("\n Enter position   : ");

              scanf("%d",&position);

            start=deletemid(start,position);
               break;
    case 7:
               start=deleteend(start);
               break;
    case 8:
               break;
    case 9:
               printforward(start);
               break;
    case 10:
               printbackward(end);
               break;
    case 11:
               break;
    case 12:
               break;
    default :
               printf("\n Wrong option ");
               break;
}

}while(option!=12);


return 0;
}
