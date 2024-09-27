#include <bits/stdc++.h>
using namespace std;

class TrieNode {
public:
    TrieNode* children[26]; // Pointers to children nodes for each letter
    int isTerminal;         // Tracks the number of times this node is the end of a word
    int prefix;             // Tracks how many words share this prefix

    // Constructor
    TrieNode() {
        for (int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
        isTerminal = 0;
        prefix = 0;
    }
};

class Trie {
public:
    TrieNode* root;

    // Constructor
    Trie() {
        root = new TrieNode();
    }

    // Insert a word into the trie
    void insert(string &word) {
        TrieNode* node = root;
        for (char ch : word) {
            int index = ch - 'A';
            if (node->children[index] == NULL) {
                node->children[index] = new TrieNode();
            }
            node = node->children[index];
            node->prefix++;  // Increment prefix count
        }
        node->isTerminal++;  // Mark end of word
    }

    // Count how many times a word is present in the trie
    int countWordsEqualTo(string &word) {
        TrieNode* node = root;
        for (char ch : word) {
            int index = ch - 'A';
            if (node->children[index] == NULL) {
                return 0;  // Word not found
            }
            node = node->children[index];
        }
        return node->isTerminal;  // Return the number of times this word was inserted
    }

    // Count how many words have a given prefix
    int countWordsStartingWith(string prefix) {
        TrieNode* node = root;
        for (char ch : prefix) {
            int index = ch - 'A';
            if (node->children[index] == NULL) {
                return 0;  // No words with this prefix
            }
            node = node->children[index];
        }
        return node->prefix;  // Return the number of words with this prefix
    }

    // Helper function to remove a word
    void removeUtil(TrieNode* node, string &word, int depth = 0) {
        if (depth == word.size()) {
            node->isTerminal--;  // Remove word from terminal count
            return;
        }

        int index = word[depth] - 'A';
        TrieNode* child = node->children[index];

        if (child != NULL) {
            removeUtil(child, word, depth + 1);
            child->prefix--;  // Decrease prefix count

            // If the child node has no children and is not terminal, delete it
            bool hasChildren = false;
            for (int i = 0; i < 26; i++) {
                if (child->children[i] != NULL) {
                    hasChildren = true;
                    break;
                }
            }

            if (child->prefix == 0 && child->isTerminal == 0 && !hasChildren) {
                delete child;
                node->children[index] = NULL;
            }
        }

        else
        return ;
    }

    // Erase one occurrence of a word from the trie
    void erase(string &word) {
        removeUtil(root, word);
    }
};

int main() {
    Trie *t = new Trie();   
    
    // Create std::string objects and pass them to functions
    string word1 = "HELLO";
    string word2 = "ABCD";
    string word3 = "GAURAV";
    string word4 = "TRIE";

    t->insert(word1);
    t->insert(word2);
    t->insert(word3);
    (*t).insert(word4);

    t->erase(word2);
    cout << endl;

    cout << "ABCD is present or not\n" << t->countWordsEqualTo(word2) << "\n";

    cout << "Prefix check:\n";
    cout << t->countWordsStartingWith("HEL") << "\n";

    return 0;
}
