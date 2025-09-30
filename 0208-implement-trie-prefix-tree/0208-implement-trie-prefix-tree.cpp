struct Node{
    Node *links[26];
    bool flag;

    void put(char ch, Node *node){
        links[ch-'a']=node;
    }

    bool contains(char ch){
        return (links[ch-'a']!= NULL);
    }
    Node* get(char ch){
        return links[ch-'a'];
    }
    void setend(){
        flag =true;
    }
    bool isEnd(){
        return flag;
    }

};


class Trie {
public:
    Node* root;
    Trie() {
        root = new Node();
    }
    
    void insert(string word) {
        Node *node=root;
        for(int i=0;i<word.size();i++){
            if(!node->contains(word[i])){
               node->put(word[i],new Node());
            }
            node = node->get(word[i]);
        }
        node->setend();
    }
    
    bool search(string word) {
         Node *node=root;
        for(int i=0;i<word.size();i++){
            if(!node->contains(word[i])){
                return false;
            }
            node = node->get(word[i]);
        }
        return node->isEnd();
    }
    
    bool startsWith(string word) {
         Node *node=root;
        for(int i=0;i<word.size();i++){
            if(!node->contains(word[i])){
                return false;
            }
            node = node->get(word[i]);
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

 
// struct Node{
//     Node *links[26];
//     bool flag = false;

//     bool containKey(char ch){
//         return (links[ch-'a'] != NULL);
//     }

//     void put(char ch,Node *node){
//         links[ch - 'a'] = node;
//     }

//     Node *get(char ch){
//         return links[ch - 'a'];
//     }

//     void setEnd(){
//         flag = true;
//     }

//     bool isEnd(){
//         return flag;
//     }

// };


// class Trie {
// public:
//     Node* root;

//     Trie() {
//         root = new Node();    
//     }
    
//     void insert(string word) {
        
//         Node *node = root;

//         for(int i=0;i<word.size();i++){
//             if(!node->containKey(word[i])){
//                 node->put(word[i],new Node());
//             }

//             node = node->get(word[i]);
//         }
//         node->setEnd();
//     }
    
//     bool search(string word) {
//         Node *node = root;
//         for(int i=0;i<word.size();i++){
//             if(!node->containKey(word[i])){
//                 return false;
//             }
//             node = node->get(word[i]);
//         }
//         return node->isEnd();
//     }
    
//     bool startsWith(string prefix) {
//         Node* node = root;
//         for(int i=0;i<prefix.size();i++){
//             if(!node->containKey(prefix[i])){
//                 return false;
//             }
//             node = node->get(prefix[i]);
//         }
//         return true;
//     }
// };

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */