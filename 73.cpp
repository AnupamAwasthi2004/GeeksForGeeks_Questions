class Solution {
    public:
    Node* deleteK(Node *head,int K){
      //Your code here
      Node *result =   NULL;
      if(K == 1){ 
         return result;
      }
      int i =1;
      Node * temp = head;
      Node * temp_back = head;
      while(temp != NULL){
          if(i%K == 0){
              temp_back->next = temp->next ;
              temp_back = temp;
              temp = temp->next;
              i++;
          }
          else {
               temp_back = temp;
               temp = temp->next;
              i++;
          }
      }
      return head;
    }
};