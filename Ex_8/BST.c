//
// Created by ramon on 4/8/2019.
// Binary Search tree with double pointer root
//TODO: successor function
//


#include <stdio.h>
#include <stdlib.h>
#include <mem.h>


struct TreeNode{
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};


//initialize node if its NULL
struct TreeNode* initialization(struct TreeNode** node, int val){
    (*node) = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    (*node)->val = val;
    (*node)->right = (*node)->left = NULL;
    return *node;
}


void insert(struct TreeNode** root, int val){
    if(val < (*root)->val){
        if((*root)->left != NULL){
            insert(&(*root)->left, val);
        } else {
            //if root->left is pointing to NULL, initialize new node with val
            (*root)->left = initialization(&(*root)->left, val);;
        }
    }
    if(val > (*root)->val){
        if((*root)->right != NULL){
            insert(&(*root)->right, val);
        } else {
            //if root->right is pointing to NULL, initialize new node with val
            (*root)->right = initialization(&(*root)->right, val);;

        }
    }
}

struct TreeNode* search(struct TreeNode* root, int val){
    static struct TreeNode* finder;// = (struct TreeNode*)malloc(sizeof(struct TreeNode));

    if(root->val == val){
        finder = root;
        printf("Found: %d\n",finder->val);
        return finder;
    }
    if(val < root->val){
        if(root->left != NULL){
            search((root->left), val);
            }

    }
    if(val > root->val){
        if(root->right != NULL){
            search(root->right, val);
        }
    }
    return finder;

}

//void delete(struct TreeNode** root, int val){
//    struct TreeNode* toDelete;//= (struct TreeNode*)malloc(sizeof(struct TreeNode));
//    toDelete = search(*root,val);
//
//
//
//    //case 1: No kids
//    if((toDelete)->left == NULL && (toDelete)->right == NULL){
//        struct TreeNode *temp;
//        temp = toDelete->right;
//        toDelete = temp;
//    }
//
//    //case 2: 1 child
//    else if((toDelete)->left != NULL && (toDelete)->right == NULL){
//        toDelete = (toDelete)->left;
//    }
//    else if((toDelete)->right != NULL && (toDelete)->left == NULL){
//        toDelete = (toDelete)->right;
//    }
//
//    else if((toDelete)->right != NULL && (toDelete)->left != NULL) {
//        //case 3: node with 2 children
//        struct TreeNode *smallest = toDelete;
//        while (smallest->right != NULL) {
//            if (smallest->right->left != NULL) {
//                if (smallest->right->left->val < smallest->right->val) {
//                    smallest = smallest->right->left;
//                    (toDelete)->right->left = (toDelete)->right->left->right;
//                    (toDelete)->val = smallest->val;
//                    break;
//                } else {
//                    break;
//                }
//            } else {
//                (toDelete)->val = (toDelete)->right->val;
//                (toDelete)->right = NULL;
//                break;
//            }
//
//        }
////        smallest = NULL;
//
//    }
////    free(toDelete);
//    (toDelete) = NULL;
////    free(smallest);
////    free(toDelete);
//}

void delete_v2(struct TreeNode** root, int val){
    if(root == NULL)
        return;
    if(val < (*root)->val){
        if((*root)->left != NULL){
            delete_v2((&(*root)->left), val);
        }

    }
    else if(val > (*root)->val){
        if((*root)->right != NULL){
            delete_v2(&(*root)->right, val);
        }
    } else {
        //case 1 and 2: No child or 1 child
        if((*root)->left == NULL && (*root)->right == NULL){
            (*root) = NULL;
        }
        else if((*root)->left != NULL && (*root)->right == NULL){
            struct TreeNode* temp;
            temp = *root;
            (*root) = (*root)->left;
            temp = NULL;
        } else if((*root)->right == NULL && (*root)->left == NULL){
            struct TreeNode* temp;
            temp = *root;
            (*root) = (*root)->right;
            temp = NULL;
        }
        else if((*root)->right != NULL && (*root)->left != NULL){
            struct TreeNode *smallest = *root;
            while(smallest->right != NULL){
                if (smallest->right->left != NULL) {
                    if (smallest->right->left->val < smallest->right->val) {
                        smallest = smallest->right->left;
                        (*root)->right->left = (*root)->right->left->right;
                        (*root)->val = smallest->val;
                        break;
                    } else {
                        break;
                    }
                } else {
                    (*root)->val = (*root)->right->val;
                    (*root)->right = NULL;
                    break;
                }
            }
        }
    }
}

void print(struct TreeNode* root){
    if(root == NULL)
        return;
    print(root->left);
    printf("%d ", root->val);
    print(root->right);

}


struct TreeNode* max(struct TreeNode* node){
    while(node->right != NULL){
        node = node->right;
    }
    return node;
}

struct TreeNode* min(struct TreeNode* node){
    while(node->left != NULL){
        node = node->left;
    }
    return node;
}

struct TreeNode* successorAbove(struct TreeNode* root, struct TreeNode* node){
    struct TreeNode* succ;// = NULL;
    while(root != node){
        if(node->val < root->val){
            succ = root;
            root = root->left;
        }
        else if(node->val > root->val){
            root = root->right;
        }
    }
    printf("Successor of %d is %d\n",node->val, succ->val);
    return succ;
}

struct TreeNode* successor(struct TreeNode* root, struct TreeNode* node){
    struct TreeNode* succ = NULL;
    if(node->right != NULL){
        succ = min(node->right);
        printf("Successor of %d is %d\n",node->val, succ->val);
    }
    else if(node->right == NULL && node->left != NULL){
        succ = max(node->right);
        printf("Successor of %d is %d\n",node->val, succ->val);
    }
    else
        succ = successorAbove(root, node);
    return succ;
}

int main(){
    struct TreeNode* root;
    initialization((&root),4);

    (root)->val = 4;
    (root)->left = (root)->right = NULL;
    insert(&root,2);
    insert(&root,3);
    insert(&root,8);
    insert(&root,6);
    insert(&root,7);
    insert(&root,9);
    insert(&root,12);
    insert(&root,1);
    print((root));
    delete_v2(&root,4);
    delete_v2(&root,7);
    delete_v2(&root,2);
    printf("\n");
    print((root));
    printf("\n");

    max(&*root);
    min(&*root);
    successor(root,search(root,9));
    successor(root, search(root,1));




}

