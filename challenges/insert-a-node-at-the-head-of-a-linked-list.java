Node Insert(Node head, int data) {
    Node node = new Node();
    node.next = head;
    node.data = data;
    head = node;
    return head;
}
