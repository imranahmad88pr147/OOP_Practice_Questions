//using namespace std;
//#include<iostream>
//#include<string>
//class Pizza {
//	int size;
//	int CheeseToppings;
//	int PepperoniToppings;
//	int HamToppings;
//public:
//	/*Pizza(int s,int c=0,int p=0, int h=0) {
//		size=s;
//		CheeseToppings = c;
//		PepperoniToppings = p;
//		HamToppings = h;
//	}*/
//	Pizza() {
//		size = 0;
//		CheeseToppings = 0;
//		PepperoniToppings = 0;
//		HamToppings = 0;
//	}
//	Pizza(int s, int c, int p, int h) {
//		size = s;
//		CheeseToppings = c;
//		PepperoniToppings = p;
//		HamToppings = h;
//		cout << "Parameterized Constructor Called!!" << endl;
//	}
//	void setSize(int s) {
//		size = s;
//	}
//	void setCheeseTopping(int c) {
//		CheeseToppings = c;
//	}
//	void setPepperoniTopping(int p) {
//		PepperoniToppings = p;
//	}
//	void setHamTopping(int h) {
//		HamToppings = h;
//	}
//	int getSize() {
//		return size;
//	}
//	int getCheeseTopping() {
//		return CheeseToppings;
//	}
//	int getPepperoniTopping() {
//		return PepperoniToppings;
//	}
//	int getHamTopping() {
//		return HamToppings;
//	}
//	double calcCost() {
//		double cost;
//		if (size == 1) {
//			cost = 10 + 2 * (CheeseToppings + PepperoniToppings + HamToppings);
//			return cost;
//		}
//		else if (size == 2) {
//			cost = 12 + 2 * (CheeseToppings + PepperoniToppings + HamToppings);
//			return cost;
//		}
//		else if (size == 3) {
//			cost = 14 + 2 * (CheeseToppings + PepperoniToppings + HamToppings);
//			return cost;
//		}
//		else {
//			cout << "Size is not Valid" << endl;
//		}
//	}
//	string getDescription() {
//		string desc;
//		string Size = " ";
//		if (size == 1) {
//			 Size = "Small";
//		}
//		else if (size == 2) {
//			Size = "Medium";
//		}
//		else if (size == 3) {
//			Size = "Large";
//		}
//		desc = Size +" Cheese Toppings: " + to_string(CheeseToppings) + " Ham Toppings: "+ to_string(HamToppings) + " Pepperoni Toppings: " + to_string(PepperoniToppings);
//		return desc;
//	}
//
//};
//int main() {
//	int choice2=1;
//	cout << "Welcome To Our Pizza Online Johar Town" << endl;
//	cout << "Do you want to order Pizza?\nPress 1 for YES and 0 for NO" << endl;
//	cin >> choice2;
//	if (choice2 == 1) {
//		do {
//			int size, choice1, c, h, p;
//			//Pizza pizza1(3, 1, 1, 2);
//			//cout<<pizza1.calcCost();
//			cout << "Enter the size of Pizza: \nPress 1 for Small\nPress 2 for Medium\nPress 3 for Large" << endl;
//			cin >> size;
//			cout << "Do you want to Add Toppings?\nPress 1 for YES and 0 for NO" << endl;
//			cin >> choice1;
//			if (choice1 == 1) {
//				cout << "Enter CheeseToppings: " << endl;
//				cin >> c;
//				cout << "Enter HamToppings: " << endl;
//				cin >> h;
//				cout << "Enter Pepperoni Toppings: " << endl;
//				cin >> p;
//				Pizza pizza1(size, c, p, h);
//				cout << "Total Cost is " << pizza1.calcCost() <<" $"<< endl;
//				cout << pizza1.getDescription() << endl;
//
//
//
//			}
//			else if (choice1 == 0) {
//				Pizza pizza1;
//				pizza1.setSize(size);
//				cout << "Total Cost is " << pizza1.calcCost() <<" $"<< endl;
//				cout << pizza1.getDescription() << endl;
//			}
//
//			cout << "If you want to terminate the program enter your -1 otherwise Press Any Key: " << endl;
//			cin >> choice2;
//			system("cls");
//
//
//
//		} while (choice2 != -1);
//	}
//	cout << "Program Terminated!" << endl;
//}