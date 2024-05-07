Node *removeDuplicates(Node *head)
{
 // your code goes here
      Node * temp = head;
      while(head!=NULL){
      if(head->next == NULL) break;
      else{
          while(head->next != NULL && head->data == head->next->data){
              head->next = head->next->next;
          }
        }
        head = head->next;
      }
      return temp;
}