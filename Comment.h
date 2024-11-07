/*
 * Autor: Sebastian Perez
 * Fecha: Octubre 2024
 * Programa: High High Stars!
 * Desc: [Insert here]
 */

 #ifndef COMMENT_H
 #define COMMENT_H

 #include <iostream>
 #include <sstream>
 #include <vector>
 #include <string>
#include <fstream>

using namespace std;
struct Comment {
    string text;
    int rating;
    Comment* next;
    Comment* prev;
};

class CommentList {
private:
Comment* head;
Comment* tail;
Comment* partition(Comment* low, Comment* high) {
    int pivot = high->rating;
    Comment* i = low->prev;

    for (Comment* j = low; j != high; j = j->next) {
        if (j->rating <= pivot) {
            i = (i == nullptr) ? low : i->next;
            swap(i->rating, j->rating);
            swap(i->text, j->text);
        }
    }
    i = (i == nullptr) ? low : i->next;
    swap(i->rating, high->rating);
    swap(i->text, high->text);
    return i;
}

void _quickSort(Comment* low, Comment* high) {
    if (high != nullptr && low != high && low != high->next) {
        Comment* p = partition(low, high);
        _quickSort(low, p->prev);
        _quickSort(p->next, high);
    }
}

public:
CommentList() : head(nullptr), tail(nullptr) {}

void addComment(const string& text, int rating) {
    Comment* newComment = new Comment{text, rating, nullptr, nullptr};
    if (!head) {
        head = tail = newComment;
    } else {
        newComment->next = head;
        head->prev = newComment;
        head = newComment;
    }
}

void displayComments() {
    Comment* current = head;
    while (current) {
        cout << "Rating: " << current->rating << " - Comment: " << current->text << endl;
        current = current->next;
    }
}
void saveComments(const string& filename) {
    ofstream file(filename);
    Comment* current = head;
    while (current) {
        file << current->text << endl;
        file << current->rating << endl;
        current = current->next;
    }
}

void quickSort() {
    _quickSort(head, tail);
}

void survey() {
    string questions[] = {
        "How satisfied were you with your overall experience?",
        "How likely are you to recommend our service to others?",
        "How would you rate the quality of the service provided?",
        "How attentive was the staff to your needs?",
        "How satisfied were you with the quality of the product you received?",
        "How well did the product meet your expectations?",
        "How would you rate the cleanliness of our facility?",
        "Select the option that best represented your stay"
    };

    for (string question : questions) {
        cout << question << endl;
        cout << "1) ★" << endl;
        cout << "2) ★★" << endl;
        cout << "3) ★★★" << endl;
        cout << "4) ★★★★" << endl;
        cout << "5) ★★★★★" << endl;

        int rating;
        cin >> rating;
        if (rating < 1 || rating > 5) {
            cout << "Invalid rating. Please enter a number between 1 and 5." << endl;
            continue;
        }
        addComment(question, rating);
    }
}

Comment* getHead() const{
    return head;
}


};
 
#endif