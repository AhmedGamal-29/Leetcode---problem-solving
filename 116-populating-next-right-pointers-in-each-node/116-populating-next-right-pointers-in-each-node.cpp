

class Solution {
public:
    Node* connect(Node* root) {
        
        if(root == NULL)
            return NULL;
        
        Node* ans = new Node();
        
        queue<Node*> q;
        q.push(root);
        
        auto it = ans;
        while(!q.empty()){
            
            int size =q.size();
            auto it = q.front();
            for(int i=0;i<size;i++){

                Node* node = q.front();
                q.pop();

                
                if(node->left!=NULL){
                    q.push(node->left);
                    q.push(node->right);
                }
                
                
                
                if(it==root){
                    
                    it->next = NULL;
                }
                else{
                    
                    if(i==size-1)
                        it->next = NULL;
                    else{
                        it->next = q.front();
                        it = it->next;
                    }
                    
                }
                
            }
           
        }
        
        
        return root;
    }
};