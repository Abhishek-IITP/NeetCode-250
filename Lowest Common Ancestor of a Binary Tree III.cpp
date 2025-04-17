class Solution {
public:
    Node* lowestCommonAncestor(Node* p, Node * q) {
        set<Node*>set;

        while(p!=NULL){
            set.insert(p);
            p= p->parent;
        }
        //p= <2,3,5>
        while(q!= NULL){
            if(set.count(q)){
                return q;
            }
            q=q->parent;
        }
        //q= <1,3,5>
        return NULL;
    }
};