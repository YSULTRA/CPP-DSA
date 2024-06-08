#include <iostream>
using namespace std;

class Node
{
public:
  int value;
  Node *next;

  Node(int value)
  {
    this->value = value;
    this->next = NULL;
  }
};
Node *insertAtHead(Node *&head, int value)
{
  Node *newNode = new Node(value);
  newNode->next = head;
  return newNode;
}
Node *insertAtPosition(Node *&head, int value, int index)
{
  if (index == 0)
  {
    // case for head insertion
    insertAtHead(head, value);
  }
  else
  {
    Node *temp = head;
    int i = 0;
    while (i < index - 1)
    {
      temp = temp->next;
      i++;
    }
    Node *new_node = new Node(value);
    new_node->next = temp->next;
    temp->next = new_node;
    return head;
  }
}

Node *insertAtEnd(Node *&head, int value)
{
  Node *temp = head;
  Node *newNode = new Node(value);

  if (temp == NULL)
  {
    head = newNode;
  }
  else
  {
    while (temp->next != NULL)
    {
      temp = temp->next;
    }
    temp->next = newNode;
  }
  return head;
}

void printLinkedList(Node *&head)
{
  Node *temp = head;
  cout << "[ ";
  while (temp != NULL)
  {
    cout << temp->value << " , ";
    temp = temp->next;
  }
  cout << " ]";
}

void removeAtPosition(Node *&head, int position)
{
  if (head->next == NULL && position == 0)
  {
    delete head;
  }
  else if (position == 0)
  {
    Node *temp = head;
    head = head->next;
    delete temp;
  }
  else
  {
    Node *temp = head;
    int i = 0;
    while (i < position - 1 && temp != NULL)
    {
      temp = temp->next;
      i++;
    }
    if (temp == NULL)
    {
      return;
    }
    else
    {
      Node *dodelete = temp->next;
      temp->next = dodelete->next;
      delete dodelete;
    }
  }
}

Node *reverseLinkedList(Node *&head)
{

  if (head == NULL || head->next == NULL) {
        return head;
    }
  else
  {
    Node *prev = NULL;
    Node *curr = head;
    Node *next = NULL;
    while (curr != NULL)
    {
      next = curr->next;
      curr->next = prev;
      prev = curr;
      curr = next;
    }
    head = prev;
  }

  return head;
}
int main()
{

  Node *head = new Node(1);
  head = insertAtHead(head, 0);
  head = insertAtEnd(head, 2);
  head = insertAtEnd(head, 4);
  head = insertAtPosition(head, 3, 4);
  head = insertAtPosition(head, 5, 5);

  printLinkedList(head);
  // removeAtPosition(head,3);
  // cout<<endl;
  head = reverseLinkedList(head);
  printLinkedList(head);
}