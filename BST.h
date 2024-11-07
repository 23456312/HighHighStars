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

    int countNodes(BSTNode* node) {
        if (!node) return 0;
        return 1 + countNodes(node->left) + countNodes(node->right);
    }

public:
   BST(): root(nullptr){}

    void addComment(Comment* comment){
        insert(root,comment);
    }

    void displayInOrder() {
        inOrderTraversal(root);
}

void searchByRating(int rating) {
        BSTNode* current = root;
        while (current) {
            if (current->comment->rating == rating) {
                cout << "Found Comment: " << current->comment->text << " with rating: " << rating << endl;
                return;
            }
            if (rating < current->comment->rating) {
                current = current->left;
            } else {
                current = current->right;
            }
        }
        cout << "No comment found with rating " << rating << endl;
    }

    int getNodeCount() {
        return countNodes(root);
    }

};

#endif