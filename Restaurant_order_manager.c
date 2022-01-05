
#include<stdio.h>
#include<stdlib.h>

struct Order
{
    char customer_name[25];
    char order[50];
    struct Order *next;
};

int counter = 0;

void takeOrder(struct Order** head_ref){
    
    struct Order* new_order = (struct Order*) malloc(sizeof(struct Order));
    char opt;
    printf("\nEnter Customer Name: ");
    scanf(" %[^\n]%*c", new_order->customer_name);
    printf("\nEnter Order: ");
    scanf(" %[^\n]%*c", new_order->order);
    printf("\nDo you want to edit order?   (y/n):\n");
    scanf("%c",&opt);
    if(opt == 'y'){
        printf("\nEnter Order: ");
        scanf(" %[^\n]%*c", new_order->order);
    }
    new_order->next = *head_ref;
    *head_ref = new_order;
    counter++;
}

void attendOrder(struct Order **head_ref,int position){
    
    if(*head_ref == NULL){
        printf("\nNo Orders.");
        return;
    }

    struct Order* temp = *head_ref;
    
    if(position == 1){
        
        printf("\nName - %s",temp->customer_name);
        printf("\nOrder - %s\n",temp->order);
        
        free(temp);
        temp = NULL;
        counter--;
        return;
    }
    
    for (int i = 0; temp != NULL && i < position - 1; i++){
        
        temp = temp->next;
        
        if(i == position - 2){
            printf("\nName - %s",temp->customer_name);
            printf("\nOrder - %s\n",temp->order);
        }
    }
    
    free(temp->next);
    temp->next = NULL;
    
    counter--;
}


void main(){
    int opt = 0;
    struct Order* head = NULL;
    
    while (1)
    {
        printf("\nCluckin' Bell Order Manager");
        printf("\n1. Take Order");
        printf("\n2. Attend Order\n3. Exit\nEnter Option: ");
        scanf("%d",&opt);
        
        if(opt == 3){
            printf("\nExiting...");
            break;
        }
        
        switch (opt)
        {
            case 1:
                takeOrder(&head);
                break;

            case 2:
                if(counter > 0){
                    attendOrder(&head,counter);
                }
                else
                    printf("\nAll orders already attended.\n");
                break;

            default:
                printf("\nInvalid Option.");
        }
    }
}
