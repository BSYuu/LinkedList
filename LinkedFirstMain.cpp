#include "LinkedFirst.h"

int main()
{
	LinkedList<int>* linkedlist = new LinkedList<int>;
	int readData;

	//1. ������ �Է�, Node ����, Node ����
	while (1)
	{
		cout <<"���� �Է� : " << endl;
		rewind(stdin);
		cin >> readData;
		if (readData < 1)
			break;
		
		linkedlist->AddNode(readData);
	}


	//2. Node�� ��ĵ, ������ ���
	cout<< "Node ������ ��ü ���" << endl;
	
	linkedlist->printAllNode();

	cout << "�� ��° ���ڸ� ��������ʴϱ�?" << endl;
	rewind(stdin);
	cin >> readData;

	cout << "Data : " << (*linkedlist)[readData] << endl;

	
	cout << "������ ���� �Է� : " << endl;
	rewind(stdin);
	cin >> readData;

	linkedlist->RemoveNode(readData);
	

	linkedlist->printAllNode();

	return 0;
}