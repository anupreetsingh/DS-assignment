//Anupreet Singh 11911063 CSE
#include<stdio.h>
#include<stdlib.h>

struct Tree{
    char *str;
    struct Tree *left;
    struct Tree *right;
};

struct Tree *newNode(char *str){
    struct Tree *NewNode = (struct Tree*)malloc(sizeof(struct Tree));
    NewNode->str = str;
    NewNode->left = NULL;
    NewNode->right = NULL;
    return NewNode;
}

void inorder(struct Tree* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    printf("%s\t",root->str);
    inorder(root->right);
}

int main(){
    struct Tree *root = newNode("Arthi");
    root->left = newNode("Christy");
    root->right = newNode("Dorothy");
    root->right->left = newNode("Fraser");
    root->left->right = newNode("Eliza");
    printf("\n");
    inorder(root);
    root->left->left = newNode("David");
    printf("\nAfter adding David\n");
    inorder(root);
    return 0;
}
