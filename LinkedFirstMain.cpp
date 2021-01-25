#include "LinkedFirst.h"

int main()
{
	LinkedList<int>* linkedlist = new LinkedList<int>;
	int readData;

	//1. 데이터 입력, Node 생성, Node 연결
	while (1)
	{
		cout <<"정수 입력 : " << endl;
		rewind(stdin);
		cin >> readData;
		if (readData < 1)
			break;
		
		linkedlist->AddNode(readData);
	}


	//2. Node를 스캔, 데이터 출력
	cout<< "Node 데이터 전체 출력" << endl;
	
	linkedlist->printAllNode();

	cout << "몇 번째 숫자를 보고싶으십니까?" << endl;
	rewind(stdin);
	cin >> readData;

	cout << "Data : " << (*linkedlist)[readData] << endl;

	
	cout << "제거할 숫자 입력 : " << endl;
	rewind(stdin);
	cin >> readData;

	linkedlist->RemoveNode(readData);
	

	linkedlist->printAllNode();

	return 0;
}