// #include <bits/stdc++.h>
// using namespace std;
  
// struct Node {
//     int data;
//     struct Node* left;
//     struct Node* right;
// };
  
// struct Node* newNode(int data)
// {
//     struct Node* temp = new Node;
//     temp->data = data;
//     temp->left = temp->right = NULL;
//     return temp;
// }
  
// struct Node* insert(struct Node* root, int data)
// {
//     if (root == NULL)
//         return newNode(data);
//     if (data < root->data)
//         root->left = insert(root->left, data);
//     else if (data > root->data)
//         root->right = insert(root->right, data);
//     return root;
// }

// void inorder(struct Node* root)
// {
//     if (root != NULL) {
//         inorder(root->left);
//         cout << root->data << " ";
//         inorder(root->right);
//     }
// }
  

// struct Node* leafDelete(struct Node* root)
// {
//     if (root == NULL)
//         return NULL;
//     if (root->left == NULL && root->right == NULL) {
//         free(root);
//         return NULL;
//     }
  
//     root->left = leafDelete(root->left);
//     root->right = leafDelete(root->right);
  
//     return root;
// }
  

// int main()
// {
//     struct Node* root = NULL;
//     root = insert(root, 20);
//     insert(root, 10);
//     insert(root, 5);
//     insert(root, 15);
//     insert(root, 30);
//     insert(root, 25);
//     insert(root, 35);
//     cout << "Before " << endl;
//     inorder(root);
//     cout << endl;
//     leafDelete(root);
//     cout << "After deletion" << endl;
//     inorder(root);
//     return 0;
// }




// #include <iostream>
// using namespace std;
  
// struct node
// {
//     int data;
//     struct node* left;
//     struct node* right;
// };
  
// bool isIsomorphic(node* n1, node *n2)
// {
//  if (n1 == NULL && n2 == NULL)
//     return true;
  
//  if (n1 == NULL || n2 == NULL)
//     return false;
  
//  if (n1->data != n2->data)
//     return false;
  
//  return 
//  (isIsomorphic(n1->left,n2->left) && isIsomorphic(n1->right,n2->right))||
//  (isIsomorphic(n1->left,n2->right) && isIsomorphic(n1->right,n2->left));
// }
// node* newNode(int data)
// {
//     node* temp = new node;
//     temp->data = data;
//     temp->left = NULL;
//     temp->right = NULL;
  
//     return (temp);
// }
  
// int main()
// {
//     struct node *n1 = newNode(1);
//     n1->left= newNode(2);
//     n1->right= newNode(3);
//     n1->left->left= newNode(4);
//     n1->left->right = newNode(5);
//     n1->right->left  = newNode(6);
//     n1->left->right->left = newNode(7);
//     n1->left->right->right = newNode(8);
  
//     struct node *n2 = newNode(1);
//     n2->left         = newNode(3);
//     n2->right        = newNode(2);
//     n2->right->left   = newNode(4);
//     n2->right->right   = newNode(5);
//     n2->left->right   = newNode(6);
//     n2->right->right->left = newNode(8);
//     n2->right->right->right = newNode(7);
  
//     if (isIsomorphic(n1, n2) == true)
//        cout << "Yes";
//     else
//       cout << "No";
  
//     return 0;
// }


// #include<iostream>
// using namespace std;
 
// struct Pair
// {
//     int min;
//     int max;
// };
 
// struct Pair getMinMax(int arr[], int n)
// {
//     struct Pair minmax;    
//     int i;
     
//     if (n % 2 == 0)
//     {
//         if (arr[0] > arr[1])    
//         {
//             minmax.max = arr[0];
//             minmax.min = arr[1];
//         }
//         else
//         {
//             minmax.min = arr[0];
//             minmax.max = arr[1];
//         }
         
//         i = 2;
//     }
     
//     else
//     {
//         minmax.min = arr[0];
//         minmax.max = arr[0];
//         i = 1;
//     }
     
//     while (i < n - 1)
//     {        
//         if (arr[i] > arr[i + 1])        
//         {
//             if(arr[i] > minmax.max)    
//                 minmax.max = arr[i];
                 
//             if(arr[i + 1] < minmax.min)        
//                 minmax.min = arr[i + 1];    
//         }
//         else       
//         {
//             if (arr[i + 1] > minmax.max)    
//                 minmax.max = arr[i + 1];
                 
//             if (arr[i] < minmax.min)        
//                 minmax.min = arr[i];    
//         }
         
//         i += 2;
//     }        
//     return minmax;
// }
 
// int main()
// {
//     int arr[] = { 1000, 11, 445,
//                 1, 330, 3000 };
//     int arr_size = 6;
     
//     Pair minmax = getMinMax(arr, arr_size);
     
//     cout << "\nMaximum element is "
//         << minmax.max;
         
//     return 0;
// }
 



// #include <iostream>
// using namespace std;
 
// struct Node
// {
//     int data;
//     struct Node* left;
//     struct Node* right;
// };
 

// Node* newNode(int data)
// {
//     Node* node = new Node;
//     node->data = data;
//     node->left = NULL;
//     node->right = NULL;
 
//     return(node);
// }
 

// int isSimilar(Node* a, Node* b)
// {
//     if (a==NULL && b==NULL)
//         return 1;
 
//     if (a!=NULL && b!=NULL)
//     {
//         return
//         (
//             isSimilar(a->left, b->left) &&
//             isSimilar(a->right, b->right)
//         );
//     }
     
//     return 0;
// }
 

// int main()
// {
//     Node *root1 = newNode(10);
//     Node *root2 = newNode(100);
//     root1->left = newNode(7);
//     root1->right = newNode(15);
//     root1->left->left = newNode(4);
//     root1->left->right = newNode(9);
//     root1->right->right = newNode(20);
 
//     root2->left = newNode(70);
//     root2->right = newNode(150);
//     root2->left->left = newNode(40);
//     root2->left->right = newNode(90);
//     root2->right->right = newNode(200);
 
//     if (isSimilar(root1, root2))
//         printf("Similar");
//     else
//         printf("Dissimilar");
 
//     return 0;
// }


#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
 
struct Node
{
    int key;
    Node *left, *right;
};
 
Node* newNode(int key)
{
    Node* node = new Node;
    node->key = key;
    node->left = node->right = nullptr;
 
    return node;
}
 
void inorderTraversal(Node* root)
{
    if (root == nullptr) {
        return;
    }
 
    inorderTraversal(root->left);
    cout << root->key << ' ';
    inorderTraversal(root->right);
}
 
void preorderTraversal(Node* root)
{
    if (root == nullptr) {
        return;
    }
 
    cout << root->key << ' ';
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}
 
Node* construct(int start, int end, vector<int> const &preorder,
                int &pIndex, unordered_map<int, int> &map)
{
    if (start > end) {
        return nullptr;
    }
 
    Node *root = newNode(preorder[pIndex++]);
 
    int index = map[root->key];
 
    root->left = construct(start, index - 1, preorder, pIndex, map);
 
    root->right = construct(index + 1, end, preorder, pIndex, map);
 
    return root;
}
 
Node* construct(vector<int> const &inorder, vector<int> const &preorder)
{
    int n = inorder.size();
 
    unordered_map<int, int> map;
    for (int i = 0; i < n; i++) {
        map[inorder[i]] = i;
    }
 
    int pIndex = 0;
 
    return construct(0, n - 1, preorder, pIndex, map);
}
 
int main()
{
    vector<int> inorder = { 4, 2, 1, 7, 5, 8, 3, 6 };
    vector<int> preorder = { 1, 2, 4, 3, 5, 7, 8, 6 };
 
    Node* root = construct(inorder, preorder);
 
    cout << "The inorder traversal is "; inorderTraversal(root);
    cout << "\nThe preorder traversal is "; preorderTraversal(root);
 
    return 0;
}