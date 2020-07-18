#include<stdio.h>
#include<stdlib.h>

typedef struct node Node;

struct node
{
    int value;
    Node *next;
};

void pop();
void top();
void push(int num);
int size();
Node *head = NULL;
int main(){

    int op , num  ;


    while(1){

        printf("select Options\n");
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Top\n");
        printf("4.Size\n");
        printf("5.close\n");
        printf("Enter your option : \n");
        scanf("%d",&op);
     if(op<=0 || op >5 ){
        printf("Invalid input");
     }
                switch (op) {
                        case 1:
                                printf("Enter the data to insert:");
                                scanf("%d", &num);
                                push(num);
                                break;

                        case 2:
                                pop();
                                break;

                        case 3:
                                top();
                                break;

                        case 4:
                                printf("size is : %d \n",size());
                                break;



                        case 5:
                                exit(0);

                }
        }

        return 0;
  }


void push(int num){
   Node *newnode;


   newnode = (Node *)malloc(sizeof(Node));

   newnode->value = num;

   //if(head == NULL){
    newnode->next = NULL;
   ///}
   //else{
   newnode->next = head;
   head = newnode;
   //}
}

void pop(){
   Node *temp;
   temp = head;
   if (temp == NULL)
   {
        printf("It's empty .\n");
   }

   printf("pop value : %d\n",temp->value);

   head = temp->next;
   free(temp);

}

void top(){
    Node *temp;
    temp = head;

     if(temp == NULL){
         printf("It's empty. \n");
     }

     printf("top element is : %d \n",temp->value);

}

int size(){

    Node *temp;
    temp = head;
      int count = 0;
      if (temp == NULL)
      {
          return 0;
      }
      else
      {
           while (temp != NULL)
      {

          count++ ;
          temp = temp->next;

      }
      return count ;
      }


}
