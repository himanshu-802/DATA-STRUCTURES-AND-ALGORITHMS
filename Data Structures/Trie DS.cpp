#include<bits/stdc++.h>
using namespace std;
#define ALPHABET_SIZE 256

class TrieNode
{
	public:
		bool IsWord;
		TrieNode* Children[ALPHABET_SIZE];
		TrieNode(){
			this->IsWord=false;
			for(int i=0;i<ALPHABET_SIZE;i++)
			{
				this->Children[i]=NULL:
			}
		}
};
template<class T>
class Trie{
	private:
		TrieNode* root;
	public:
		Trie()
		{
			root=new TrieNode();
		}
		void Insert(string str)
		{
			TrieNode* crawler= this->root;
			for(int i=0;i<str.size();i++)
			{
				if(crawler->Children[int(str[i])]==NULL){
					crawler->Children[int(str[i])]=new TrieNode();
				}
				crawler=crawler->Children[int(str[i])];
			}
			crawler->IsWord=true;
		}
		
		bool Search(string str)
		{
			TrieNode* crawler= this->root;
			for(int i=0;i<str.size();i++)
			{
				if(crawler->Children[int(str[i])] == NULL){
					return false;
				}
				crawler= crawler->Children[int(str[i])];
			}
			return (crawler->IsWord== true);
		}
		
		bool IsLeaf(TrieNode* crawler){
			for(int i=0;i<ALPHABET_SIZE;i++)
			{
				if(crawler->Children[i]){
					return false;
				}
			}
			return true;
		}
		
};
int main()
{
	
}
