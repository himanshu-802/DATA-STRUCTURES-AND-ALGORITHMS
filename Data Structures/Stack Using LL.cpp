#include<bits/stdc++.h>
using namespace std;
template<class T>
class Node
{
	public:
		T data;
		Node* next;
		Node(){
			this->next=NULL;
		}
		Node(T data){
			this->data=data;
			this->next=NULL;
		}
};
template<class T>
class Stack
{
	public:
		Node<T>* head;
		int size;
	public:
		Stack()
		{
			this->head=NULL;
			this->size=0;
		}
		bool Empty()
		{
			return (this->head==NULL);
		}
		void Push(T data)
		{
			Node<T>* newnode= new Node<T>(data);
			newnode->next=this->head;
			this->head=newnode;
			this->size++;
		}
		void Pop()
		{
			if(this->Empty()){
				throw "ArrayStack Underflow";
			}
			else{
				Node<T>* temp=this->head;
				this->head=this->head->next;
				delete(temp);
				this->size--;
			}
		}
		T Top()
		{
			if(this->Empty())
			{
				throw "ArrayStack Underflow";
			}
			else{
				return this->head->data;
			}
		}
		int Size()
		{
			return (this->size);
		}
};
int main()
{
	Stack<int> s;
	s.Push(1);
	s.Push(2);
	cout<<s.Top();
	
}
