/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp= head; //  head pe temp intitialize

         if (head == nullptr) return nullptr; //if LL IS EMPTY

        while(temp!=NULL && temp->next!=NULL) { // JABTAK TEMP AUR TEMP KA NEXT POINTER NULL NAHI HO JAATA

        if(temp->val == temp->next->val){
            
       //AGAR TEMP KI VALUE AUR TEMP K BNEXT KI VALUE EQUAL HO TOH ie nodes are equal

         ListNode* nodeTodelete= temp->next; // ek naya nodeTodelete banado taki confusion na ho node delete karne mein
               
            temp->next = temp->next->next; //temp k next pointer me temp ke next ke nxt ko rakhdo
            
          
            delete  nodeTodelete; // delete the duplicate node
        }
        else {                    // if ajancent nodes are not equal
                temp=temp->next;  //temp me temp next ka pointer rakhdo i.e.temp ek aage badhado
        }
 }
  return head;
    }
};