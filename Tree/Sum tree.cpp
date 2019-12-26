
int add(Node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    
    return(root->data + add(root->left) +add(root->right));
}


bool isSumTree(Node* root)
{
     // Your code here
     
     if(root==NULL)
     {
         return 1;
     }
     if(root->right==NULL && root->left==NULL)
     {
         return 1;
     }
     int leftsum=add(root->left);
     int rightsum=add(root->right);
     int total=leftsum+rightsum;
     
     if(root->data==total)
     {
         if(isSumTree(root->left) && isSumTree(root->right))
         {
             return 1;
         }
         
     }
    return 0; 
     }
    