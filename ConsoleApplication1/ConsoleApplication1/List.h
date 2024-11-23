#pragma once
#include<exception>

template <typename T>
class List {
private:
    struct Node {
        T data;
        Node* next;
        Node(T value) : data(value), next(nullptr) {}
    };

    Node* m_head;
    Node* m_tail;
    size_t m_size;

public:
    List() : m_head(nullptr), m_tail(nullptr), m_size(0) {}
    ~List() {
        Node* current = m_head;
        while (current) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
    }

    void insertBack(T value) {
        Node* newNode = new Node(value);
        if (!m_tail) {
            m_head = m_tail = newNode;
        }
        else {
            m_tail->next = newNode;
            m_tail = newNode;
        }
        ++m_size;
    }

    T removeFront() {
        if (!m_head) throw std::exception("Empty List");
        Node* temp = m_head;
        T data = temp->data;
        m_head = m_head->next;
        if (!m_head) m_tail = nullptr;
        delete temp;
        --m_size;
        return data;
    }

    T front() {
        if (!m_head) throw std::exception("Empty List");
        return m_head->data;
    }

    size_t size() const { return m_size; }

    bool isEmpty() const { return m_size == 0; }
};
