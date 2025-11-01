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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
  
        //storing the values into the hash set
        unordered_set<int>hash(nums.begin(), nums.end());

        //head needs to be removed
        while(head!=nullptr && hash.count(head->val)>0){
            //store current head
            ListNode* temp = head;
            
            //point head to next node
            head = head->next;
            
            //delete stored head node ->leetcode gives runtime for deleting
            //delete temp;
        }

        // If the list is empty after removing head nodes,return nullptr
        if (head == nullptr) {
            return nullptr;
        }

        //move rest of the given values

        ListNode* current = head;

        while(current->next != nullptr){
            if(hash.count(current->next->val)) {
                ListNode* temp = current->next;
                current->next = current->next->next;
                //delete temp;
            }
            else{
                current=current->next;
            }
        }

        return head;
        
    }
};