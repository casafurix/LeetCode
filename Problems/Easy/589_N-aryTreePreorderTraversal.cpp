#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Node
{
public:
    int val;
    vector<Node *> children;

    Node() {}

    Node(int _val)
    {
        val = _val;
    }

    Node(int _val, vector<Node *> _children)
    {
        val = _val;
        children = _children;
    }
};

void traversal(Node *root, vector<int> &ans)
{
    ans.push_back(root->val);
    for (int i = 0; i < root->children.size(); i++)
    {
        traversal(root->children[i], ans);
    }
}

vector<int> preorder(Node *root)
{

    vector<int> ans;
    if (!root)
        return ans;

    traversal(root, ans);

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    return 0;
}