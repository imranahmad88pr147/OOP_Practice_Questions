//using namespace std;
//#include<iostream>
//class Stack {
//	int* DynamicArray;
//	int size;
//public:
//	Stack() {
//		DynamicArray = nullptr;
//		size = 0;
//	}
//	Stack(int s) {
//		size = s;
//		DynamicArray = new int[size];
//	}
//	void Input() {
//		cout << "Enter elements for the Dynamic Array: " << endl;
//		for (int i = 0; i < size; i++) {
//			cout << "Enter element for index " << i << endl;
//			cin >> DynamicArray[i];
//		}
//	}
//	void Display() {
//		for (int i = 0; i < size; i++) {
//			cout << "Element at the index " << i << " is" << DynamicArray[i] << endl;
//		}
//	}
//	void Push(int n) {
//		this->size = ++size;
//		DynamicArray[size - 1] = n;
//
//	}
//	int Pop() {
//
//
//		size = size - 1;
//		return DynamicArray[size];
//		DynamicArray[size - 1] = 0;
//
//		//cout << size << "I am pop size" << endl;
//
//	}
//	void Reset() {
//
//		DynamicArray = nullptr;
//		size = 0;
//	}
//	
//	~Stack() {
//		delete[]DynamicArray;
//		DynamicArray = nullptr;
//	}
//};
//void menu() {
//	int choice1, choice2, number;
//	int size;
//	cout << "Enter size: " << endl;
//	cin >> size;
//	Stack obj(size);
//	while (true) {
//		cout << "Please choose from one of the following option\nPress 1 to Input Array\nPress 2 to Push an Element\nPress 3 to Pop an Element\nPress 4 to Reset Stack\nPress 5 to Display Stack" << endl;
//		cin >> choice1;
//		if (choice1 == 1) {
//			obj.Input();
//		}
//		else if (choice1 == 2) {
//			cout << "Enter the number you want to push in the stack: " << endl;
//			cin >> number;
//			obj.Push(number);
//			/*cout << "Do you want to see the menu again?\nPress 1 for YES and Press 0 for NO" << endl;
//			cin >> choice2;*/
//			break;
//		}
//		else if (choice1 == 3) {
//			cout << "Pop Element is: " << obj.Pop() << " It is successfully removed from the Stack!!" << endl;
//			cout << "Do you want to see the menu again?\nPress 1 for YES and Press 0 for NO" << endl;
//			cin >> choice2;
//			if (choice2 == 0)
//				break;
//			else {
//				menu();
//			}
//		}
//		else if (choice1 == 4) {
//			obj.Reset();
//			break;
//		}
//		else if (choice1 == 5) {
//			obj.Display();
//			break;
//		}
//	}
//}
//int main() {
//	
//	
//	menu();
//	
//
//}