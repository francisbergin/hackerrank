Node Insert(Node head, int data) {
    Node node = head;
    while (node.next != null) {
        node = node.next;
    }
    node.next = new Node();
    node.next.data = data;
    return head;
}
