#pragma once

#include <iostream>

using namespace std;

class LinkedList
{
public:
	struct Node  //class, but public by default
	{
		int data;
		Node* next;
		Node(int data, Node* n = nullptr)
		{
			this->data = data;
			next = n;
		}

	};

	LinkedList()
	{
		size = 0;
		head = nullptr;
	}
	void PushBack(int data)
	{
		if (head == nullptr)
		{
			head = new Node(data);
		}
		else 
		{
			Node* temp = head;
			while (temp->next != nullptr)
			{
				temp = temp->next;
				temp = new Node(data);
			}
		}
	}
	void PushFront(int data)
	{
		//if (!head)
		//{
		//	head = new Node(data);                  Older code now one line
		//	//head->data = data;
		//	//head->next = nullptr;
		//
		//}
		//else
		//{
			head = new Node(data, head);   //O(1)
		//}
	}
	void PopBack()
	{

	}
	void PopFront()
	{

	}

private:
	Node* head = nullptr;
	Node* tail = nullptr;
	int size;


};