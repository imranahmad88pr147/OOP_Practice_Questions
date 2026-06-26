//using namespace std;
//#include<iostream>
//class SalesTrack {
//	int* DailySales;
//	int Totalsales;
//	int TotalDays;
//	int PerUnitPrice;
//public:
//	SalesTrack() {
//		DailySales = nullptr;
//		TotalDays = 0;
//		PerUnitPrice = 0;
//		Totalsales = 0;
//	}
//	SalesTrack(int d,int pp) {
//		TotalDays = d;
//		PerUnitPrice = pp;
//		DailySales = new int[d];
//	}
//	void setSales(int index, int s) {
//		DailySales[index] = s;//s means sales.
//	}
//	int getSales(int index) {
//		return DailySales[index];
//	}
//	~SalesTrack() {
//		delete[]DailySales;
//		DailySales = nullptr;
//	}
//	void Input() {
//		for (int i = 0; i < TotalDays; i++) {
//			cout << "Enter the sale for the DAY " << i + 1 << endl;
//			cin >> DailySales[i];
//
//		}
//
//	}
//	void TotalSales() {
//		
//		for (int i = 0; i < TotalDays; i++) {
//		    Totalsales += DailySales[i];
//		}
//		Totalsales = Totalsales * PerUnitPrice;
//		cout << "Total Sales are: " << Totalsales << endl;
//	}
//	void Average() {
//		int avg=0;
//		avg = Totalsales / TotalDays;
//		cout << "Average is: " << avg;
//
//	}
//	
//
//
//
//};
//int main() {
//	int Days, PerUnitPrice;
//		cout << "Enter the number of Days: " << endl;
//		cin >> Days;
//		cout << "Enter Per Unit Price: " << endl;
//		cin >> PerUnitPrice;
//		SalesTrack obj1(Days,PerUnitPrice);
//		while (true) {
//
//			int choice1;
//			cout << "\t|||||||Please select one of the following options|||||||" << endl;
//			cout << "Press 1 to Input Sales\nPress 2 to Calculate Total Sales\nPress 3 to Calculate Average Daily Sales" << endl;
//			cin >> choice1;
//
//			if (choice1 == 1) {
//
//				obj1.Input();
//
//			}
//			else if (choice1 == 2) {
//				obj1.TotalSales();
//
//				cout << "Press -1 to break the loop.If you don't want to break then press any other number! " << endl;
//				int breakage;
//				cin >> breakage;
//				if (breakage == -1)
//					break;
//			}
//			else if (choice1 == 3) {
//				obj1.Average();
//				break;
//
//
//			}
//
//
//		}
//}