#include "LinkedList.h"

int main() {
    LinkedList list;
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.print();
    list.remove();
    list.print();
    return 0;
}
