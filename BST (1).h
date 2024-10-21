/*
 * Autor: Sebastian Perez
 * Fecha: Octubre 2024
 * Programa: High High Stars!
 * Desc: [Insert here]
 */

 #ifndef BST_H
 #define BST_H

 #include <iostream>
 #include <sstream>
 #include <vector>
 #include <string>
#include "Comment.h"
#include <fstream>

using namespace std;
struct BSTNode {
    Comment* comment;
    BSTNode* left;
    BSTNode* right;
    BSTNode(Comment* c) : comment(c), left(nullptr), right(nullptr) {}
};

class BST {
private:
    BSTNode* root;

    void insert(BSTNode*& node, Comment* comment){
        if(!node){
            node= new BSTNode(comment);
        }else if (comment ->rating < node -> comment-> rating){
            insert(node->left, comment);
        }else{
            insert(node->right, comment);
        }
    }

    void inOrderTraversal(BSTNode* node) {
        if (!node) return;
        inOrderTraversal(node->left);
        cout << "Rating: " << node->comment->rating << " - Comment: " << node->comment->text << endl;
        inOrderTraversal(node->right);
    }


public:
   BST(): root(nullptr){}

    void addComment(Comment* comment){
        insert(root,comment);
    }

    void displayInOrder() {
        inOrderTraversal(root);
}

};

#endif