#include<iostream>
#include"LinkList_Jianchao_Ji.h"
#include"Node_Jianchao_Ji.h"

using namespace std;

LinkedList::LinkedList()
{
	myHead = NULL;
	myTail = NULL;
}

LinkedList::~LinkedList()
{

}

int LinkedList::size() const
{
	int length=0;
	Node *ptr = myHead;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		length++;
	}
	return length;
}

void LinkedList::addToStart(Node *ptr)
{
	/*When the list is empty the head point equal to tail point*/
	if (myHead == NULL)
	{
		myHead = myTail = ptr;
	}
	else
	{
		ptr->next = myHead;
		myHead = ptr;
	}
}

void LinkedList::addToEnd(Node *ptr)
{
	/*When the list is empty the head point equal to tail point*/
	if (myHead == NULL)
	{
		myHead = myTail = ptr;
	}
	else
	{
		myTail->next = ptr;
		myTail = ptr;
	}
}

void LinkedList::printList()
{
	Node *ptr = myHead;
	cout << "List" << endl;
	cout<< "Item No Item Name" << endl;
	while (ptr != NULL)
	{
		cout << ptr->itemNo << " " << ptr->itemName << endl;
		ptr = ptr->next;
	}
	cout << endl << endl;
}

bool LinkedList::removeFromStart()
{
	Node *ptr = myHead;
	/*When the list is empty return false*/
	if (this->size()==0)
		return false;
	/*When there is only one item in the list delete it*/
	else if (this->size() == 1)
	{
		delete myTail;
		myHead = myTail = NULL;
		return true;
	}
	else
	{
		ptr = ptr->next;
		delete myHead;
		myHead = ptr;
		return true;
	}
}

bool LinkedList::removeFromEnd()
{
	Node *ptr = myHead;
	/*When the list is empty return false*/
	if (this->size()==0)
		return false;
	/*When there is only one item in the list delete it*/
	else if (this->size() == 1)
	{
		delete myTail;
		myHead = myTail = NULL;
		return true;
	}
	else
	{
		while (ptr->next->next!=NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = NULL;
		delete myTail;
		myTail = ptr;
		return true;
	}
}

void LinkedList::removeNodeFromList(int count)
{
	Node *ptr = myHead;
	Node *deletePtr=NULL;
	int i;
	/*When the list is empty output that this is a blank list*/
	if (ptr == NULL)
	{
		cout << "This is a blank list." << endl;
	}
	else if (count > this->size()&& ptr != NULL)
	{
		cout << "The number is out of the list." << endl;
	}
	/*When there is only one item in the list delete it*/
	  else if (ptr->next == NULL)
	{
		  delete ptr;
		myHead = myTail = NULL;
	}
	/*When the number equal to the size of the list use the function of delete from the end*/
	  else if (count == this->size())
	  {
		  this->removeFromEnd();
	  }
	/*When the number is one ,use the function of delete from the start*/
	  else if(count == 1)
	 {
		this->removeFromStart();
	  }
	   else
	 {
		for (i = 1; i < count-1; i++)
		{
			ptr = ptr->next;
		}
		deletePtr = ptr->next;
		ptr->next= ptr->next->next;
		delete deletePtr;
	 }
}

void LinkedList::removeNodeFromList(string name)
{
	int  count=1;
	bool flat = false;
	Node* ptr = myHead;
	/*Record the number of the item that we want to delete and use the function of removeNodeFromList*/
	while (ptr != NULL)
	{
		if (ptr->itemName == name)
		{
			flat = true;
			break;
		}
		count++;
		ptr = ptr->next;
	}
	/*flat is used to record if the item we want to delete is in the list*/
	if (flat)
	{
		this->removeNodeFromList(count);
	}
	else
	{
		cout << "The element you want to delete is not in the list." << endl;
	}

}