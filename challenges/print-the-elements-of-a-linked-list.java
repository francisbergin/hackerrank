/*
 * Node is defined as
 * class Node {
 *     int data;
 *     Node next;
 * }
 */
void Print(Node head) {
    Node node = head;
    while (node != null) {
        System.out.println(node.data);
        node = node.next;
    }
}
