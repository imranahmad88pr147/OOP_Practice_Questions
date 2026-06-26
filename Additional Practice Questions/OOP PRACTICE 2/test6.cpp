//using namespace std;
//#include<iostream>
//class BankAccount {
//	string Name;
//	long int AccountNumber;
//	string AccountType;
//	int Balance;
//public:
//	BankAccount() {
//		Name = "";
//		AccountNumber = 0;
//		AccountType = "";
//		Balance = 0;
//	}
//	BankAccount(string n, long int aN, string aT, int B) {
//		Name = n;
//		AccountNumber = aN;
//		AccountType = aT;
//		Balance = B;
//	}
//	void Deposit() {
//		int amount;
//		cout << "Enter amount to deposit: " << endl;
//		cin >> amount;
//		Balance = Balance + amount;
//		//return *this;
//	}
//	void CheckBalance() {
//		cout << "Your Account Balance is: " << Balance << endl;
//	}
//
//};
//void menu() {
//	int choice1, i = 0;
//	cout << "\tWelcome To Scammers Bank!!!!!\n";
//	int users = 0;
//	BankAccount* ObjectsArray;
//	ObjectsArray = new BankAccount[users++];
//	BankAccount obj;
//	do {
//		cout << "Press 1 To Deposit Amount\nPress 2 To Withdraw Amount\nPress 3 To Display Details\nPress 4 To Check Balance" << endl;
//		cin >> choice1;
//		if (choice1 == 1) {
//			ObjectsArray[users].Deposit();
//			//obj.Deposit();
//		}
//		else if (choice1 == 4) {
//			ObjectsArray[users].CheckBalance();
//			//obj.CheckBalance();
//		}
//		cout << "Wana terminate the program??" << endl;
//		cin >> i;
//	} while (i != -1);
//	
//}
//int main() {
//	
//	menu();
//
//	
//}
//#include <iostream>
//using namespace std;
//
//class BankAccount {
//private:
//	string Name;
//	long int AccountNumber;
//	string AccountType;
//	int Balance;
//
//public:
//	BankAccount() {
//		Name = "";
//		AccountNumber = 0;
//		AccountType = "";
//		Balance = 0;
//	}
//
//	BankAccount(string n, long int aN, string aT, int B) {
//		Name = n;
//		AccountNumber = aN;
//		AccountType = aT;
//		Balance = B;
//	}
//
//	void Deposit() {
//		int amount;
//		cout << "Enter amount to deposit: ";
//		cin >> amount;
//		Balance = Balance + amount;
//	}
//
//	void CheckBalance() {
//		cout << "Your Account Balance is: " << Balance << endl;
//	}
//};
//
//void menu() {
//	int choice1, i = 0;
//	cout << "\tWelcome To Scammers Bank!!!!!\n";
//	int users = 0;
//	BankAccount* ObjectsArray = new BankAccount[100];
//
//	do {
//		cout << "Press 1 To Deposit Amount\nPress 2 To Withdraw Amount\nPress 3 To Display Details\nPress 4 To Check Balance\nPress 5 To Create New Account" << endl;
//		cin >> choice1;
//
//		if (choice1 == 1) {
//			ObjectsArray[users].Deposit();
//			//users++;
//		}
//		else if (choice1 == 4) {
//			ObjectsArray[users].CheckBalance();
//			//users++;
//		}
//		else if (choice1 == 5) {
//			users++;
//			cout << "Your userid is: " << users << endl;
//
//		}
//
//		cout << "Want to terminate the program? Enter -1 to exit: ";
//		cin >> i;
//	} while (i != -1);
//
//	//delete[] ObjectsArray;
//}
//
//int main() {
//	menu();
//	return 0;
//}
