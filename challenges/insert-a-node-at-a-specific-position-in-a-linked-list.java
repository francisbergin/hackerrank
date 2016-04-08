Node InsertNth(Node head, int data, int position) {
    Node node = new Node();
    node.data = data;

    if (head == null) {
        head = node;
    } else if (position == 0) {
        node.next = head;
        head = node;
    } else {
        Node prevNode = head;
        while (--position != 0) {
            prevNode = prevNode.next;
        }
        node.next = prevNode.next;
        prevNode.next = node;
    }

    return head;
}
