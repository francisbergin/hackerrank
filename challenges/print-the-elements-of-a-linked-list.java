void Print(Node head) {
    Node node = head;
    while (node != null) {
        System.out.println(node.data);
        node = node.next;
    }
}
