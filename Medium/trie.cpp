

class Trie {
 struct TrieNode{
     bool isWord;
     unordered_map<char,TrieNode*>  children;
     TrieNode(): isWord(false){}
 };
public:
    /** Initialize your data structure here. */
    TrieNode * root;
    Trie() {
       root = new TrieNode();

    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
     TrieNode* cur = root;
     for(int i=0;i<word.size();i++){
         if(cur->children.find(word[i])== cur->children.end())
             cur->children[word[i]]= new TrieNode;
         cur = cur->children[word[i]];
     }
       cur->isWord = true; 
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
      TrieNode* cur =root;
      for(int i=0;i<word.size();i++){
          if(cur->children.find(word[i])== cur->children.end())
              return false;
          cur =cur->children[word[i]];
      }
      return cur->isWord;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
       TrieNode* cur = root;
        for(int i=0;i<prefix.size();i++){
            if(cur->children.find(prefix[i])== cur->children.end())
                return false;
            cur = cur->children[prefix[i]];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
