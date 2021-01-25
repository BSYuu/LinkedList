#ifndef __LINKED_FIRST_H__
#define __LINKED_FIRST_H__

#include <iostream>
#include "Node.h"

using namespace std;


#define LIST_LEN 100

template <typename T>
class LinkedList {
private:
	Node<T>* head;
	Node<T>* current;
	Node<T>* tail;

public:
	
	LinkedList()
	{
		Node<T>* dummy = new Node<T>;
		dummy->setNextNode(NULL);
		head = dummy;
		tail = head;
		current = NULL;
	}

	void AddNode(T val)
	{
		Node<T>* newNode = new Node<T>(val);
		newNode->setNextNode(NULL);
		if (tail == NULL)
		{
			tail = newNode;
		}
		else
		{
			tail->setNextNode(newNode);
		}

		if (tail->getValue() > newNode->getValue())
		{
			tail->setNextNode(NULL);
			Sort(newNode);
		}
		else
			tail = newNode;
	}

	void RemoveNode(T val)
	{
		while (this->head->nextNode()->getValue() == val)
		{
			Node<T>* buffer = this->head->nextNode()->nextNode();
			delete this->head->nextNode();
			this->head->setNextNode(buffer);
		}

		Node<T>* indexNode = this->head;

		while (indexNode->nextNode() != NULL)
		{
			if (indexNode->nextNode()->getValue() == val)
			{
				Node<T>* buffer = indexNode->nextNode()->nextNode();
				delete indexNode->nextNode();
				indexNode->setNextNode(buffer);
			}
			if(indexNode->nextNode()!=NULL)
				indexNode = indexNode->nextNode();
		}
	}

	void Sort(Node<T>* NodeToChange)
	{
		this->current = this->head;
		while (current->nextNode() != NULL && current->nextNode()->getValue() < NodeToChange->getValue())
			current = current->nextNode();

		NodeToChange->setNextNode(current->nextNode());
		current->setNextNode(NodeToChange);
	}

	void printAllNode()
	{
		current = head->nextNode();
		while (current != NULL)
		{
			cout << "Data : " << current->getValue() << endl;
			current = current->nextNode();
		}
	}

	T operator[](int index)
	{
		int cnt = 0;
		current = head->nextNode();
		while (cnt++ < index - 1)
		{
			current = current->nextNode();
		}
			
		return current->getValue();
	}
};




#endif