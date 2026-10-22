class MyHashSet {
    struct Node{
        int val;
        Node* next;
        Node(int x){
            val = x;
            next = nullptr;
        }
    };
    vector<Node*> buckets;
    int bucketCount = 10;
public:
    MyHashSet(): buckets(bucketCount, nullptr) {}
    
    void add(int key) {
        int index = key % bucketCount;
        Node* current = buckets[index];
        while(current != nullptr){
            if(current->val == key) return;
            current = current->next;
        }
        Node* newnode = new Node(key);
        newnode->next = buckets[index];
        buckets[index] = newnode;
    }
    
    void remove(int key) {
        int index = key % bucketCount;
        Node* current = buckets[index];
        Node* prev = nullptr;
        while(current != nullptr){
            if(current->val == key){
                if (prev == nullptr) {
                    buckets[index] = current->next;
                } else {
                    prev->next = current->next;
                }
                delete current;
                return;
            }
            prev = current;
            current = current->next;
        }
    }
    
    bool contains(int key) {
        int index = key % bucketCount;
        Node* current = buckets[index];
        while(current != nullptr){
            if(current->val == key) return true;
            current = current->next;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */