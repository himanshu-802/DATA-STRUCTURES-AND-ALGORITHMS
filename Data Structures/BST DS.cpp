#include<bits/stdc++.h>
using namespace tsd;
template<class T>
class Node{
	public:
		T data;
		Node<T> *left,*right;
		Node(){
			this->left=this->right=NULL;
		}
		Node(T data){
			this->left=this->right=NULL;
			this->data=data;
		}
};
template<class T>
class BST{
	private:
		Node<T> *root;
		int size;
		Node<T>* InsertHelper(Node<T>*curr, T data)
		{
			if(curr==NULL){
				return new Node<T>(data);
			}
			if(curr->data>data){
				curr->left=InsertHelper(curr->left,data);
			}
			else{
				curr->right=InsertHelper(curr->right,data);
			}
			return curr;
		}
	public:
		BST(){
			this->root=NULL;
			this->size=0;
		}
		void Insert(T data)
		{
			Node<T>* curr=this->root;
			this->root= this->InsertHelper(curr,data);
			this->size++;
		}
		T GetMin(Node<T>* curr)
		{
			if(curr==NULL){
				throw "Cant find min value. BST empty!!";
			}
			else{
				while(curr->left){
					curr=curr->left;
				}
				return curr->data;
			}
		}
		
};
int main()
{
}

