Node* reverseusingLoop(Node* head ) {
        Node* prev = NULL;
        Node* curr = head;

        while(curr != NULL ) {
                Node* temp = curr ->next;
                curr ->next = prev;
                prev = curr;
                curr = temp;
        }
        return prev;
}


Node* reverseusingRecursion(Node* prev, Node* curr) {
        //base case
        if(curr == NULL) 
                return prev;

        Node* temp = curr ->next;
        curr ->next = prev;
        prev = curr;
        curr = temp;

        //recursion sambhal lega
        return reverseusingRecursion(prev, curr);
}