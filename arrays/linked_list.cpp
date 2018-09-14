/*
There are several operations that can be done to a linked list:

PushFront(key) adds an element to the front of the list
 - takes O(1) time
Key TopFront() returns the first element
 - takes O(1) time
PopFront() removes the first element from the list
 - takes O(1) time
PushBack(Key) adds an element to the back of the list
 - takes O(n) time with no tail
 - takes O(1) time with tail
Key TopBack() returns the last element in the list
 - takes O(n) time with no tail
 - takes O(1) time with tail
 PopBack() removes the last element in the list
 - takes O(n) time with or without tail
Boolean Find(Key) determines if a key is in the list
 - takes O(n)
Erase(key) removes an element with a key from the list
 - takes O(n)
AddBefore(Node, Key) adds a key before a given node
 - takes O(n)
AddAfter(Node, Key) adds a key after a given node
 - takes O(1)
Empty() checks if the list is empty
 - takes O(1)
FindElement(key) find an arbitrary element
 - takes O(n)
*/

#include <iostream>
using namespace std;

class list
{
  struct node
  {
    int data;
    node *next;
  };

private:
  // node *head;
  // node *tail;

public:
  node *head = NULL;
  node *tail = NULL;
  // list()
  // {
  //   node *head = NULL;
  //   node *tail = NULL;
  // }

  // struct node createNode(int value)
  // {
  //   node *temp = new node();
  //   temp->data = value;
  //   temp->next = NULL;
  //   if (head == NULL)
  //   {
  //     head = temp;
  //     tail = temp;
  //   }
  //   else
  //   {
  //   }
  //   cout << "temp = " << &temp << endl;
  //   cout << "temp data = " << temp->data << endl;
  //   cout << "temp next = " << temp->next << endl;
  //   cout << "create node head = " << head << endl;
  //   cout << "create node tail = " << tail << endl;

  //   return *temp;
  // }

  // void pushFront(int value)
  // {
  //   node newNode = createNode(value);
  //   cout << "newNode = " << &newNode << endl;
  //   cout << "newNode next = " << newNode.next << endl;
  //   cout << "newNode data = " << newNode.data << endl;
  //   if (head != NULL)
  //   {
  //     newNode.next = head;
  //     head = &newNode;
  //   }
  // }

  void pushFront(int value)
  {
    cout << "initial head is " << head << endl;
    node *temp = new node();
    temp->data = value;
    if (!head)
    {
      cout << "not head" << endl;
      head = temp;
      tail = temp;
      temp->next = NULL;
    }
    else
    {
      cout << "head" << endl;
      temp->next = head;
      head = temp;
    }
    cout << "temp = " << temp << endl;
    cout << "temp data = " << temp->data << endl;
    cout << "temp next = " << temp->next << endl;
    cout << "create node head = " << head << endl;
    cout << "create node tail = " << tail << endl;
  }

  void popFront()
  {
    node *temp = head;
    cout << "head to pop = " << head << endl;
    head = (*temp).next;
    cout << "head after popping = " << head << endl;
    delete temp;
  }

  void pushBack(int value)
  {
    // node *temp = head;
    // while (temp->next)
    // {
    //   temp = (*temp).next;
    // }
    node *newNode = new node();
    (*newNode).next = NULL;
    (*newNode).data = value;
    (*tail).next = newNode;
    tail = newNode;
  }

  void popBack()
  {
    node *temp = head;
    while (temp->next->next)
    {
      temp = temp->next;
    }
    // cout << "second last node is" << temp << endl;
    tail = temp;
    temp->next = NULL;
    node *oldTail = temp->next;
    // cout << "old tail is " << oldTail << endl;
    delete oldTail;
  }

  void displayList()
  {
    node *temp = new node();
    temp = head;
    int count = 0;
    while (temp->next)
    {
      cout << "node " << count << " = " << temp->data << endl;
      cout << "node address = " << temp << endl;
      count++;
      temp = temp->next;
    }
    if (!temp->next)
    {
      cout << "node " << count << " = " << temp->data << endl;
      cout << "node address = " << temp << endl;
    }
  }

  node *getHead()
  {
    return head;
  }

  node *getTail()
  {
    return tail;
  }
};

int main()
{

  list myList;
  cout << "head = " << myList.getHead() << endl;
  cout << "tail = " << myList.getTail() << endl;
  myList.pushFront(2);
  cout << "head = " << myList.getHead() << endl;
  cout << "tail = " << myList.getTail() << endl;
  myList.pushFront(3);
  cout << "head = " << myList.getHead() << endl;
  cout << "tail = " << myList.getTail() << endl;
  myList.pushFront(4);
  cout << "head = " << myList.getHead() << endl;
  cout << "tail = " << myList.getTail() << endl;
  myList.popFront();
  myList.pushBack(5);
  myList.pushBack(6);
  cout << "head = " << myList.getHead() << endl;
  cout << "tail = " << myList.getTail() << endl;
  myList.popBack();
  cout << "tail = " << myList.getTail() << endl;
  myList.displayList();
}