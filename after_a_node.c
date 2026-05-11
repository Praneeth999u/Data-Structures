#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node * next ;
};

void linkedlisttraversal(struct node*ptr){
    while (ptr != NULL){
        printf("%d\t",ptr->data);
        ptr = ptr -> next ;
    }
}

struct node * DelAfterNode(struct node * head ){
    
}

int main(){
    struct node * head;
    struct node * second ;
    struct node * third ;

    head = (struct node *)malloc(sizeof(struct node ));
    second = (struct node *)malloc(sizeof(struct node ));
    third = (struct node *)malloc(sizeof(struct node ));

    head -> data = 7;
    head -> next = second ;

    second -> data = 10;
    second -> next = third;

    third ->data = 11;
    third -> next =  NULL;
    
    printf("before deletion\n");
    linkedlisttraversal( head );
    DelAfterNode(head);
    printf("\nafter deletion\n");
    linkedlisttraversal( head );
    return 0;

}