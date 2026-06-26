//#include<iostream>
//using namespace std;
//
//class stack
//{
//	int size;
//	int* DynamicArray;
//public:
//	stack(int s)
//	{
//		size = s;
//		DynamicArray = new int[size];
//	}
//	void input()
//	{
//		cout << "Enter elements for the Dynamic Array: " << endl;
//		for (int i = 0; i < size; i++)
//		{
//			cout << "Enter element for index " << i << endl;
//			cin >> DynamicArray[i];
//		}
//	}
//	int pop()
//	{
//		int a;
//		a = DynamicArray[size - 1];
//		--size;
//		int* temp = new int[size];
//		for (int i = 0; i < size; i++)
//		{
//			temp[i] = DynamicArray[i];
//		}
//		delete[]DynamicArray;
//		DynamicArray = temp;
//		return a;
//	}
//	void reset()
//	{
//		DynamicArray = 0;
//		size = 0;
//	}
//	void push(int n)
//	{
//		size++;
//		int* temp = new int[size];
//		for (int i = 0; i < size - 1; i++)
//		{
//			temp[i] = DynamicArray[i];
//		}
//		temp[size - 1] = n;
//		delete[]DynamicArray;
//		DynamicArray = temp;
//
//	}
//	void display()
//	{
//		if (size == 0)
//			cout << "nothing to show in the array " << endl;
//		else {
//			cout << "Displaying the dynamic array " << endl;
//			for (int i = 0; i < size; i++)
//			{
//				cout << DynamicArray[i] << " ";
//			}
//			cout << endl;
//		}
//	}
//	~stack()
//	{
//		delete[]DynamicArray;
//		DynamicArray = nullptr;
//	}
//};
//int display()
//{
//	int s;
//	cout << "press 1 to push element into dynamic array " << endl;
//	cout << "press 2 to pop element from the dynamic array " << endl;
//	cout << "press 3 to reset the dynamic array " << endl;
//	cout << "press 4 to display the dynamic array " << endl;
//	cout << "press -1 to treminate the program " << endl;
//	cout << "Select your choice :";
//	cin >> s;
//	return s;
//
//}
//int main()
//{
//	int size;
//	cout << "Enter the size of Dynamic Array " << endl;
//	cin >> size;
//	stack obj(size);
//	obj.input();
//	int s = display();
//	do {
//
//		switch (s)
//		{
//		case 1:
//			int n;
//			cout << "enter element to push into the array " << endl;
//			cin >> n;
//			obj.push(n);
//			break;
//		case 2:
//			cout << "the element is poped " << endl << "the poped element is " << obj.pop() << endl;
//			break;
//		case 3:
//			obj.reset();
//			cout << "the array is successfully reset " << endl;
//			break;
//		case 4:
//			obj.display();
//			break;
//		default:
//			cout << "please select a valid choice and try again " << endl;
//		}
//		cout << "enter your choice ";
//		cin >> s;
//		
//		//s = display();
//	} while (s != -1);
//	cout << endl << " program terminated " << endl;
//}