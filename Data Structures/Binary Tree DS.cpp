#include<bits/stdc++.h>
using namespace std;

template <class T>
class Node{
	T data;
	Node<T> *left, *right;
	Node(){
		this->left=this->right=NULL;
	}
	Node(T data)
	{
		this->data=data;
		this->left=this->right=NULL;
	}
};
template<class T>
class BinaryTree
{
	private:
		Node<T> *root;
		int size;
	public:
		BinaryTree(){
			this->root=NULL;
			this->size=0;
		}
		void Insert(int data)
		{
			Node<T>* newnode= new Node<T>(data);
			if(!this->root){
				this->root=newnode;
			}
			else{
				Node<T>* temp=this->root;
				queue<Node<T>*> q;
				q.push(temp);
				while(!q.empty())
				{
					temp=q.front();
					q.pop();
					if(temp->left==NULL){
						temp->left=newnode;
						return;
					}
					else{
						q.push(temp->left);
					}
					if(temp->right==NULL){
						temp->right=newnode;
						return;
					}
					else{
						q.push(temp->right);
					}
				}
				this->size++;
			}
		}
		void InorderTraversalHelper(Node<T>* temp)
		{
			InorderTraversalHelper(temp->left);
			cout << temp->data << " ";
			InorderTraversalHelper(temp->right);
		}
		void InorderTraversalRecursive()
		{
			Node<T>* temp=this->root;
			InorderTraversalHelper(temp);
		}
		void PreorderTraversalHelper(Node<T>* temp)
		{
			cout << temp->data << " ";
			PreorderTraversalHelper(temp->left);
			PreorderTraversalHelper(temp->right);
		}
		void PreorderTraversalRecursive()
		{
			Node<T>* temp=this->root;
			PreorderTraversalHelper(temp);
		}
		void PostorderTraversalHelper(Node<T>* temp)
		{
			PostorderTraversalHelper(temp->left);
			PostorderTraversalHelper(temp->right);
			cout << temp->data << " ";
		}
		void PostorderTraversalRecursive()
		{
			Node<T>* temp=this->root;
			PostorderTraversalHelper(temp);
		}
		
};
int main()
{
	BinaryTree<int> bt;
	
}
