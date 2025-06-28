#include<bits/stdc++.h>
using namespace std;

class Trienode {
public:
    char data;
    Trienode* children[26];
    bool isTerminal;
    int frequency;  // Count of words passing through this node

    Trienode(char ch) {
        data = ch;
        isTerminal = false;
        frequency = 0;
        for (int i = 0; i < 26; i++) {
            children[i] = nullptr;
        }
    }
};

class Trie {
public:
    Trienode* root;

    Trie(char ch) {
        root = new Trienode(ch);
    }

    void insertUtil(Trienode* node, string& str, int idx) {
      
        if (idx == str.size()) {
            node->isTerminal = true;
            return;
        }

        int pos = str[idx] - 'a';

        if (node->children[pos] == nullptr) {
            node->children[pos] = new Trienode(str[idx]);
        }

        node->children[pos]->frequency++; // Increment frequency for this path
        insertUtil(node->children[pos], str, idx + 1);
    }

    void insert(string& str) {
        insertUtil(root, str, 0);
    }

    void shortestprefix(Trienode* node, string& str, string& otpt) {
     
        for (int i = 0; i < str.size(); i++){
            
            int idx = str[i] - 'a';
            node = node->children[idx];
            otpt.push_back(str[i]);

            if (node->frequency == 1) {
                return;
            }
        }
    }

    void shortestuniqprefix(string& str, string& otpt) {
        shortestprefix(root, str, otpt);
    }
};

    void findPrefixes(string arr[], int n) {
      
        Trie* t = new Trie('\0');

        for (int i = 0; i < n; i++) {
            t->insert(arr[i]);
        }

        vector<string> ans;

        for (int i = 0; i < n; i++) {
            string prefix = "";
            t->shortestuniqprefix(arr[i], prefix);
            ans.push_back(prefix);
        }

        for (int i = 0; i < n; i++) {
            cout << "Shortest unique prefix for " << arr[i] << " is: " << ans[i] << endl;
        }
    }
 
int main()
{
    int n;
    cout << "Enter number of strings: ";
    cin >> n;
    string arr[n];
    cout << "Enter strings:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    findPrefixes(arr, n);
    cout << "Shortest unique prefixes found." << endl;
    return 0;
}