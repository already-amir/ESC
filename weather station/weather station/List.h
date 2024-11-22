#pragma once

#include <exception>

template <typename T>
class List  {

private:

	class Node
	{
		T data;
		Node* next;

		Node(T value) {
			data = value;
			next = nullptr;
		}

		friend class List;
	};

public:

	List();
	~List();


	
	 void insertBack(T& value) ;

	 T removeFront() ;
	

	 T front() ;
	 T back() ;

	 size_t size() ;

private:

	Node* m_head;
	Node* m_tail;
	size_t m_size;


};










template<typename T>
inline List<T>::List() : m_head(nullptr)
, m_tail(nullptr)
, m_size(0)
{
}

template<typename T>
inline List<T>::~List()
{
	Node* currentNode = m_head;
	while (currentNode != nullptr) {
		Node* nextNode = currentNode->next;
		delete currentNode;
		currentNode = nextNode;
	}
}

template<typename T>
inline void List<T>::insertBack(T& value)
{
	Node* newNode = new Node(value);

	if (m_tail == nullptr) {
		m_head = m_tail = newNode;
	}
	else {
		m_tail->next = newNode;
		m_tail = newNode;
	}

	m_size++;
}

template<typename T>
inline T List<T>::removeFront()
{
	//if list was empty the front function throw exception
	T frontData = front();

	Node* newHead = m_head->next;
	delete m_head;

	//there is no any data in list
	if (newHead == nullptr) {
		m_head = m_tail = nullptr;
	}
	else {
		m_head = newHead;
	}

	m_size--;
	return frontData;
}

template<typename T>
inline T List<T>::front()
{
	if (m_head) {
		return m_head->data;
	}

	throw std::exception("Empty List");
}

template<typename T>
inline T List<T>::back()
{
	if (m_tail) {
		return m_tail->data;
	}

	throw std::exception("Empty List");
}

template<typename T>
inline size_t List<T>::size()
{
	return m_size;
}
