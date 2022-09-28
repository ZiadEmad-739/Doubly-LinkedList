#include <bits/stdc++.h>
using namespace std;

class node{
    int data = 0;
    node* next = nullptr;
    node* prev = nullptr;
public:
    node(int item){
        data = item;
    }
    int get_data(){
        return data;
    }
    node* get_next(){
        return next;
    }
    node* get_prev(){
        return prev;
    }
    void set_data(int d){
        data = d;
    }
    void set_next(node* n){
        next = n;
    }
    void set_prev(node* p){
        prev = p;
    }
};