//Q2.1)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TABLE_SIZE 200

struct Node{
    int key;
    char value[5];
    struct Node *next;
};

struct Node *hash_table[TABLE_SIZE];

void init_hash_table(){
    for(int i=0;i<TABLE_SIZE;i++){
        hash_table[i]=NULL;
    }
}

int hash_function(int key){
    return key % TABLE_SIZE;
}

void insert(int key,char value[]){
    int index=hash_function(key);
    struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->key=key;
    strcpy(new_node->value,value);
    new_node->next=hash_table[index];
    hash_table[index]=new_node;
}

char* search(int key){
    int index=hash_function(key);
    struct Node *temp=hash_table[index];
    while(temp!=NULL){
        if(temp->key==key){
            return temp->value;
        }
        temp=temp->next;
    }
    return "Not Found";
}

int main(){
    init_hash_table();
    insert(15840,"cGp");
    insert(16465,"cmW");
    insert(17941,"cX3");
    printf("Value for the key 15840 is: %s\n",search(15840));
    printf("Value for the key 16465 is: %s\n",search(16465));
    printf("Value for the key 17941 is: %s\n",search(17941));
    printf("Value for the key 30001 is: %s\n",search(30001));
    printf("Value for the key 55555 is: %s\n",search(55555));
    printf("Value for the key 77788 is: %s\n",search(77788));
    return 0;
}

/*
Q2.a) The mapping function unroll a value corresponding to a key.

Q2.b) The outputs for 30001, 55555, and 77788 will be "Not Found".

Q2.c) The upper limit of this mapping function before there will be collisions depends on the size of the hash table and the distribution of the input keys. A collision occurs when two different keys hash to the same index in the hash table. The size of the hash table should be at least equal to the number of unique keys.
*/

