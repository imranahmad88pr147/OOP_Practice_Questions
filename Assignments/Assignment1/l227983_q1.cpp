//using namespace std;
//#include<iostream>
//class Ragged {
//	int** OriginalArray;
//	int** RaggedArray;
//	int* ColumnsArray;
//	int r1;
//	int c1;
//	int r2;
//	int size2;
//public:
//	Ragged() {
//		OriginalArray = nullptr;
//		RaggedArray = nullptr;
//		ColumnsArray = nullptr;
//		r1 = 0;
//		c1 = 0;
//		r2 = 0;
//		size2 = 0;
//	}
//	Ragged(int row1,int col1) {
//		r1 = row1;
//		c1 = col1;
//		OriginalArray = new int* [r1];
//		for (int i = 0; i < r1; i++) {
//			OriginalArray[i] = new int[c1];
//		}
// ColumnsArray=new int[r1];
//	
//		RaggedArray = new int* [r1];
//		
//
//	}
//	void Input() {
//		cout << "Enter elements for the original array: " << endl;
//		for (int i = 0; i < r1; i++) {
//			for (int j = 0; j < c1; j++) {
//				cout << "Enter element for index " << i  << "," << j  << endl;
//				cin >> OriginalArray[i][j];
//
//			}
//		}
//	}
//	void RaggedArrayfunc() {
//	
//		for (int i = 0; i < r1; i++) {
//			int count = 0;
//			for (int j = 0; j < c1; j++) {
//				if (OriginalArray[i][j] != 0) {
//			
//					count++;//This count will get the  each required column number of Jagged Array i.e., Ragged Array. 
//				}
//			
//			
//			}
//			RaggedArray[i] = new int[count];
//			ColumnsArray[i] = count;
//			
// int k = 0;
// for (int j = 0; j < c1; j++) {
//	 if (OriginalArray[i][j] != 0) {
//		 RaggedArray[i][k] = OriginalArray[i][j];
//		 k++;//Incrementing columns of Ragged Array.
//	 }
//	   }
//		}
//	
//		r2 = r1;
//		
//	}
//	void RaggedArrayDisplay() {
//		cout << "Elements for the Ragged array: " << endl;
//		for (int i = 0; i < r2; i++) {
//			cout << "Row " << i << "->";
//			for (int j = 0; j < ColumnsArray[i]; j++) {
//				
//				cout  <<" "<< RaggedArray[i][j];
//
//			}
//			cout << endl;
//		}
//	}
//	
//	~Ragged() {
//		for (int i = 0; i < r1; i++) {
//		  delete[] OriginalArray[i];
//			        }
//	      delete[] OriginalArray;
//		  OriginalArray = nullptr;
//	    for (int i = 0; i < r2; i++) {
//		  delete[] RaggedArray[i];
//			        }
//		  delete[] RaggedArray;
//		  RaggedArray = nullptr;
//			
//		  delete[] ColumnsArray;
//	}
//};
//int main() {
//	int rows, columns;
//	cout << "Please Enter the number of rows: " << endl;
//	cin >> rows;
//	cout << "PLease Enter the number of columns: " << endl;
//	cin >> columns;
//	Ragged obj(rows,columns);
//	obj.Input();
//	obj.RaggedArrayfunc();
//	obj.RaggedArrayDisplay();
//	
//
//
//}