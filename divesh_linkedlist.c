#include<stdio.h>
#include<stdlib.h>


// definition of node
struct node{
    int data;
    struct node* next;       
};

// two way list 
struct twoWayNode{
    int data;
    struct twoWayNode* next;
    struct twoWayNode* prev;
};

struct emplist{
    char empName[20];
    int age;
    int salary;
    struct strlist* next;
    
};

struct node* create();
void insertAtOnce(struct node** head,int n);
void insert2Way(struct twoWayNode** head,int n);
void insertAtEnd(struct node* ptr, int data);
void insertAtHead(struct node** ptr,int data);
void insertAt(struct node** ptr,int k ,int data);
void insertAfter(struct node* ptr,int item ,int data);
void deleteFirst(struct node **ptr);
void deleteLast(struct node* ptr);
void deleteAt(struct node** start, int k);
void deleteItem(struct node* ptr, int item);
void swapK(struct node ** hptr,int k);
void display(struct node* ptr);
void sortList(struct node** head);
struct node* copy(struct node* head);
struct node* concatenate(struct node* ptr1,struct node* ptr2);
struct node* getlist();

int main()
{
    //------for testing purpose only-----------

        // struct node* head =create();
        // insertAtHead(&head,8);
        // insertAtEnd(head,2);
        // insertAtEnd(head,5);
        // insertAtHead(&head,6);
        // insertAt(head,4,4);
        // insertAt(head,2,9);
        // insertAfter(head,5,7);
        // display(head);
        // deleteAt(head,5);
        // deleteLast(head);
        // deleteFirst(&head);
        // display(head);
        // deleteItem(head,2);
        // display(head);
    //------------------------------------------


    //----------------------user input loop------------------------------
    int ch,item,k,target,n;
    struct node* head =create();
    ch=1;
    while (ch!=6){
        printf("\nlinked list operations \n 1. insert \n 2. delete \n 3.view \n 4. insert at once  \n 5. swapK \n 6. EXIT \n 7. sort list \n 8. copy list \n 9. concatinate \n enter your choice : " );
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            int chi;
            printf(" 1.insert at beginning \n 2. insert at ending \n 3. insert at index \n 4. insert after \n enter your choice : ");
            scanf("%d",&chi);
            switch (chi)
            {
            case 1:
                
                printf("enter item you want to insert: ");
                scanf("%d",&item);
                insertAtHead(&head,item);
                break;
            
            case 2:
                printf("enter item you want to insert : ");
                scanf("%d",&item);
                insertAtEnd(head,item);
                break;
            
            case 3:
                printf("enter item you want to insert : ");
                scanf("%d",&item);
                printf("enter index you want to insert the item at : ");
                scanf("%d",&k);
                insertAt(&head,k,item);
                break;
            case 4:
                printf("enter item you want to insert : ");
                scanf("%d",&item);
                printf("insert the item after : ");
                scanf("%d",&target);
                insertAfter(head,target,item);
                break;
            default:
                printf("\n please enter a valid choice");
                break;
            }
        
        break;

        case 2:
            int chd;
            printf(" \n 1.delete at beginning \n 2. delete at ending \n 3. delete at index \n 4. delete item \n enter your choice: ");
            scanf("%d",&chd);
            switch (chd)
            {
                case 1:
                    deleteFirst(&head);
                    break;

                case 2:
                    deleteLast(head);
                    break;
                case 3:
                    printf("enter index you want to delete item from : ");
                    scanf("%d",&k);
                    deleteAt(&head,k);
                    break;
                case 4:
                    printf("enter item you want to delete : ");
                    scanf("%d",&item);
                    if (head->data==item)
                    {
                        deleteFirst(&head);
                    }
                    else
                    {
                        deleteItem(head,item);
                    }
                    break;

                default:
                    printf("please enter a valid choice \n");
                    break;
            }
        break;            
        case 3:
            display(head);
            break;
        case 4:
            printf("How many elements you want to insert : ");
            scanf("%d",&n);
            insertAtOnce(&head,n);
            break;

        case 5:
            printf("enter the value of k :");
            scanf("%d",&k);
            swapK(&head,k);
            break;
        case 6:
            break;
            
        case 7:
            sortList(&head);
            break;

        case 8:
            struct node* newList=copy(head);
            display(newList);
            break;
        case 9:

            struct node* new1 =getlist();
            struct node* new2 =getlist();
            struct node* ans =concatenate(new1,new2);
            display(ans);
            break;
        default:
            printf("please enter a valid choice");
            break;
        }
        
    }    
    return 0;
}

struct node* create(){
    struct node* head=NULL;
    return head;
}


//   -------------- INSERTION -----------------


// insert the whole list at once

void insertAtOnce(struct node** head,int n){
    int count=0;
    int data;
    printf("enter %d items : ",n);
    if (*head==NULL)
    {
        scanf("%d",&data);
        insertAtHead(head,data);
        count++;
    }
    while (count<n)
    {
        scanf("%d",&data);
        insertAtEnd(*head,data);
        count++;
    }

}

// inserts at the end of the list

void insertAtEnd(struct node* ptr, int data)
{
    if (ptr==NULL)
    {
        printf("the list is empty , try inserting at head \n");
    }
    
    while (ptr->next != NULL)
    {
        ptr=ptr->next;
    }
    struct node* newNode=malloc(sizeof(struct node));
    newNode->data=data;
    ptr->next=newNode;
    newNode->next=NULL;

    
}


// inserts at the start of the list

void insertAtHead(struct node** ptr,int data){

    struct node* newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=data;
    newNode->next=(*ptr);
    (*ptr)=newNode;
}


// inserts at an given index

void insertAt(struct node** start,int k ,int data){

    struct node* newNode= (struct node*)malloc(sizeof(struct node));
    newNode->data=data;
    int count=0;

    if (k==1)
    {
       newNode->next = *start;
       *start = newNode;
       return;
    }
    
    struct node* ptr = *start;
    while (++count!=k-1 && ptr != NULL)
    {
        ptr=ptr->next;
    }
    if (ptr==NULL)
    {
        printf("index exceeds the node count !");
        return;
    }
    newNode->next = ptr->next;
    ptr->next=newNode;
}

// inserts after a given item

void insertAfter(struct node* ptr,int item ,int data){
    struct node* newNode= (struct node*)malloc(sizeof(struct node));
    newNode->data=data;
    while (ptr->data != item && ptr != NULL)
    {
        ptr=ptr->next;
    }

    if (ptr==NULL)
    {
        printf("item not found");
    }
    else
    {
    newNode->next = ptr->next;
    ptr->next=newNode;        
    }

}

//--------------------- DELETION -----------------------


// deletes the first node
void deleteFirst(struct node **ptr)
{
    int del;
    if (*ptr == NULL)
    {
        printf("list is already empty");
        return;
    }
    del=(*ptr)->data;
    *ptr=(*ptr)->next;
    printf("node deleted = %d \n",del);
}

// deletes the last node

void deleteLast(struct node* ptr)
{
    int del;
    while (ptr->next->next != NULL)
    {
        ptr = ptr->next;
    }
    del= ptr->next->data;
    ptr->next=NULL;
    printf("node deleted = %d \n",del);
}


// deletes node at a given index

void deleteAt(struct node** start, int k)
{
    int del;
    int count = 0;
    struct node* ptr =*start;
    if(k==1){
        *start=(*start)->next;
        return;
    }
    while (++count != k-1 && ptr != NULL )
    {
        ptr = ptr->next;
    }
    if (ptr==NULL)
    {
        printf("index exceeds the node count !");
        return;
    }
    del = ptr->next->data;
    ptr->next=ptr->next->next;
    printf("node deleted = %d \n",del);
}


// deletes a given item

void deleteItem(struct node* ptr, int item)
{
    while (ptr->next->data != item && ptr != NULL)
    {
        ptr=ptr->next;
    }
    if (ptr == NULL)
    {
        printf("%d does not exist in the list",item);
        return;
    }
    else
    {
    ptr->next=ptr->next->next;
    printf("node deleted = %d\n", item);
    }
}

//write an algo to swap Kth and k+1 th element

void swapK(struct node ** hptr,int k){
    int count=1;
    struct node* cur = *hptr;
    struct node* prev = NULL;
    struct node* agla = cur->next;
    
    if (k==1)
    { 
        *hptr=(*hptr)->next;
        cur->next=(*hptr)->next;
        (*hptr)->next=cur;

    }
    else
    {
        while (count != k && cur !=NULL)
        {
            prev=cur; 
            cur=agla;
            agla=agla->next;
            count++; 
        }
        if (cur==NULL)
        {
            printf("index doesn,t exist. ");
            return;
        }
        
        else if (cur->next==NULL)
        {
            printf("oops!, you entered the last index. ");
            return;
        }
        
        else{
            prev->next=cur->next;
            cur->next=agla->next;
            agla->next=cur;
        }

    }

}

// write an algorithm to sort a list (bubble sort)

void sortList(struct node** head)
{
    struct node* ptr= *head;
    int n=0;
    while (ptr!=NULL)
    {
        ptr=ptr->next;
        n++;
    }
    int i=0;
    while (i<n)
    {
        int j=1;
        ptr= *head;
        while (j<n-i)
        {

            if (ptr->data > ptr->next->data)
            {
                swapK(head,j);
                j++;

            }
            else
            {
                ptr=ptr->next;
                j++;
            }

        }
        
        i++;
    }

}


// prints the entire list

void display(struct node* ptr){
    printf("\n");
    while (ptr != NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
    
}

// write a program to copy a list into a new list

struct node* copy(struct node* ptr){
    struct node* prev=NULL;
    struct node* newHead=NULL;
    while (ptr!=NULL){
        {
        struct node* newNode= (struct node*)malloc(sizeof(struct node));
        newNode->data=ptr->data;
        newNode->next=NULL;
        if(prev==NULL){
           newHead= newNode;
        }
        else{
        prev->next=newNode;
        }
        prev=newNode;
        ptr=ptr->next;
        }
    }
    return newHead;
}

// write a program to concatinate two lists
struct node* concatenate(struct node* ptr1,struct node* ptr2){
    struct node* newHead = copy(ptr1);
    struct node* newHead2 = copy(ptr2);
    struct node* ptr=newHead;
    while (ptr->next!= NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=newHead2;

    return newHead;
}

// get list
struct node* getlist(){
    int n;
    printf("\nenter the number of nodes you want to insert: ");
    scanf("%d",&n);
    int count=0;
    int data;

    printf("enter %d items : ",n);
    struct node* head1=NULL;
    if (head1==NULL)
    {
        scanf("%d",&data);
        insertAtHead(&head1,data);
        count++;
    }
    while (count<n)
    {
        scanf("%d",&data);
        insertAtEnd(head1,data);
        count++;
    }


    return head1;
}
// two way list
void insert2Way(struct twoWayNode** head,int n){
    int count=0;
    int data;
    printf("enter %d items : ",n);
    if (*head==NULL)
    {
        scanf("%d",&data);
        struct twoWayNode* new = (struct twoWayNode*)malloc(sizeof(struct twoWayNode));
        new->data=data;
        new->prev=new;
        new->next=new;
        *head=new;
        count++;
    }
    struct twoWayNode* ptr = *head; 
    while (count<n)
    {
        scanf("%d",&data);
        while (ptr->next!=*head)
        {
            ptr=ptr->next;
        }
        struct twoWayNode* new = (struct twoWayNode*)malloc(sizeof(struct twoWayNode));
        new->data=data;
        new->prev=ptr;
        new->next=*head;
        ptr->next=new;
        count++;
    }
}






void deleteAt2(struct twoWayNode* ptr, int k)
{
    int del;
    int count = 0;
    while (++count != k-1 && ptr != NULL )
    {
        ptr = ptr->next;
    }
    if (ptr==NULL)
    {
        printf("index exceeds the node count !");
        return;
    }

    del = ptr->next->data;
    ptr->next=ptr->next->next;
    ptr->next->prev=ptr;
    printf("node deleted = %d \n",del);
}
