#ifndef __NODE_H__
#define __NODE_H__

template <typename T>
class Node
{
private:
	T value;
	Node* next;
public:
	
	Node() :value(NULL), next(nullptr) {}
	Node(T val) :value(val) {}

	T getValue()
	{
		return value;
	}
	void setValue(T val)
	{
		value = val;
	}
	
	Node* nextNode() {
		return next;
	}

	void setNextNode(Node* nxt) {
		next = nxt;
	}
};
#endif // !__NODE_H__

