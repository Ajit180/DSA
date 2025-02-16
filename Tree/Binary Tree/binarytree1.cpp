#include <iostream>
#include <queue>
#include<stack>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;

        // whenever the new node will get it will be like
        //  data -> d
        //  left = NULL or Right == NULL
    }
};

node *buildTree(node *root)
{

    cout << "Enter the Data :" << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter the data to insert at left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter the data to insert at right of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

void buildFromLevelOrderTraversal(node* &root){
       
       queue<node*>q;
      cout<<"Enter a Data For Root "<<endl;
      int data;
      cin>>data;
      root = new node(data);
      q.push(root);
      while(!q.empty()){

        node*temp = q.front();
        q.pop();

        cout<<"Enter left node for: "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;

        if (leftdata!=-1)
        {
            temp->left= new node(leftdata);
            q.push(temp->left);
        }


        cout<<"Enter Right node for: "<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;

        if (rightdata!=-1)
        {
            temp->right= new node(rightdata);
            q.push(temp->right);
        }
        
      }

}

void levelordertraversal(node *root)
{

    queue<node *> q; // A queue q is initialized to assist with the level-order traversal
    q.push(root);    // The root node (1) is pushed into the queue, followed by a NULL marker.
    q.push(NULL);    // This NULL is used to indicate the end of the current level.

    while (!q.empty()) // The loop runs as long as there are nodes in the queue
    {
        node *temp = q.front();
        q.pop(); // The front node of the queue is assigned to temp and removed from the queue.

        if (temp == NULL) // If temp is NULL, it means we have completed processing all nodes at the current level
        {
            cout << endl; // Print a newline to separate levels.

            if (!q.empty()) // If the queue is not empty (indicating there are more nodes to process in subsequent levels),
                            // push another NULL marker to denote the end of the next level.
            {
                // queue has still some child nodes
                q.push(NULL);
            }
        }

        // Process Non-NULL Nodes:
        else
        {
            cout << temp->data << " "; // Print the data of the current node

            if (temp->left) // f the left child exists, push it to the queue.
            {
                q.push(temp->left);
            }

            if (temp->right) // If the right child exists, push it to the queue.
            {
                q.push(temp->right);
            }
        }
    }
}

void inorderTraversal(node *root)
{
    // here we used the recursion call

    if (root == NULL) // This is the Base case when call will stop
    {
        return;
    }
    else
    {
        inorderTraversal(root->left);
        cout << root->data << " ";
        inorderTraversal(root->right);
    }
}

void inorderUsingIteration(node *root){
    stack<node*>s;
    node* current = root;
    //We start by initializing an empty stack s and setting the current node to the root

    while (current!=NULL|!s.empty())
    {    
        while (current!=NULL)// Reach the leftmost node of the current node
        {
            s.push(current);
            current = current->left;
        }
        current= s.top();// Current must be NULL at this point
        s.pop();

        cout<<current->data<<"  ";
        // We have visited the node and its left subtree. Now, it's right subtree's turn
        current = current->right;
        
    }
    
}

void preoderTraversal(node *root)
{

    if (root == NULL)
    {
        return;
    }
    else
    {
        cout << root->data << " ";
        preoderTraversal(root->left);
        preoderTraversal(root->right);
    }
}

void postorderTraversal(node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout << root->data << " ";
    }
}

int main()
{

    node *root = NULL;

    // creating tree
    //root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    buildFromLevelOrderTraversal(root);
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1 
    

    cout << "Printing the level order Traversal output " << endl;
    levelordertraversal(root);
    // cout << "inorder Traversal is : ";
    // inorderTraversal(root);
    // cout << endl<< "Preorder Traveral is: ";
    // preoderTraversal(root);
    // cout << endl<< "Postorder Traversal is: ";
    // postorderTraversal(root);
    cout << "inorder Traversal using the iteration is : ";
    inorderUsingIteration(root);

    return 0;
}