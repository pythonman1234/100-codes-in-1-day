#include <bits/stdc++.h>

using namespace std;

/* A binary tree node has data, pointer to left child
and a pointer to right child */

struct Node
{

    int data;

    struct Node *left, *right;
};

// Utility function to create a new tree node

Node *newNode(int data)
{

    Node *temp = new Node;

    temp->data = data;

    temp->left = temp->right = NULL;

    return temp;
}

/* Given a binary tree, print its nodes according to the
"bottom-up" postorder traversal. */

void printLevelOrder(struct Node *node)
{

    if (node == NULL)

        return;

    queue<struct Node *> q;

    while (node)
    {

        if (node->left)
        {

            q.push(node->left);
        }

        if (node->right)
        {

            q.push(node->right);
        }

        cout << node->data << " ";

        node = q.front();

        q.pop();
    }
}

int main()
{

    struct Node *root = newNode(1);

    root->left = newNode(2);

    root->right = newNode(3);

    root->left->left = newNode(4);

    root->left->right = newNode(5);

    // Function call

    cout << "Levelorder traversal of binary tree is \n";

    printLevelOrder(root);

    return 0;
}