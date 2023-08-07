#include <bits/stdc++.h> 

/*class TrieNode {                        //Definition of TrieNode class
public:
    TrieNode * children[26];
    bool isEnd;
    TrieNode()
    {
        isEnd=false;
        for(int i=0;i<26;i++)
            children[i]=NULL;
    }

};*/
bool isEmpty(TrieNode *root)
{
  for(int i=0;i<26;i++)
  {
    if(root->children[i]==NULL){
      return false;
    }
  }
  return true;
}
TrieNode* solve(TrieNode* root,string word,int i){
  if(root==NULL)
  return NULL;

  if(i==word.length()){
    root->isEnd = false;

    if(isEmpty(root))
    {
      delete(root);
      root = NULL;
    }
    return root;
  }
   int index = word[i]-'a';

  root->children[index] = solve(root->children[index],word,i+1);
   if(isEmpty(root) && !root->isEnd){

    delete(root);

    root = NULL;

  }

  return root;
}
TrieNode* solution::deleteWord(TrieNode* root, string word) {
  // Write your code here
  TrieNode* ans = solve(root,word,0);
  return ans;
}

