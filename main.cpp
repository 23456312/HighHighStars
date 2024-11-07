/*
 * Autor: Sebastian Perez
 * Fecha: Octubre 2024
 * Programa: High High Stars!
 * Desc: [Desc]
 */

#include <iostream>
#include <sstream>
#include <cstring>
#include <string>
#include "Comment.h"
#include "BST.h"
#include <fstream>
using namespace std;

  void loadComments(CommentList& list, const string& filename) {
    ifstream file(filename);
    string line;
    int rating;
    while (getline(file, line)) {
        file >> rating;
        file.ignore(); 
        list.addComment(line, rating);
    }
}

void saveComments(const CommentList& list, const string& filename) {
    ofstream file(filename);
    Comment* current = list.getHead();
    while (current) {
        file << current->text << endl;
        file << current->rating << endl;
        current = current->next;
    }
}

int main() {
  CommentList commentList;
    BST bst;
    loadComments(commentList, "comments.txt");

    commentList.survey(); 

    cout << "Comments before sorting:" << endl;
    commentList.displayComments();
    commentList.quickSort();
    cout << "\nComments after sorting:" << endl;
    commentList.displayComments();
    commentList.saveComments("comments.txt"); 
    bst.displayInOrder();
    cout << "Enter rating to search for: ";
    int searchRating;
    cin >> searchRating;
    bst.searchByRating(searchRating);

    cout << "Total number of nodes in BST: " << bst.getNodeCount() << endl;
  return 0;
}
