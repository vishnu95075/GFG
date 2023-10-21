#include<iostream>
using namespace std;
class Node{
    private:
        int data;
        Node *left;
        Node *right;
    Node(int data){
        data = data;
        right=nullptr;
        left=nullptr;
    }
};


int main(){

    Node *n1=new Node(3);


    return 0;
}