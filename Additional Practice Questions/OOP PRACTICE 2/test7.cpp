////#include <iostream>
////using namespace std;
////
////class BinaryNum {
////protected:
////    int* binNum; // integer array to save binary number
////    int noOfBits; // total no. of bits public:
////public:
////    BinaryNum() {
////        binNum = nullptr;
////        noOfBits = 0;
////    }
////
////    BinaryNum(string s1) {
////        noOfBits = s1.length();
////        binNum = new int[noOfBits];
////        for (int i = 0; i < noOfBits; i++) {
////            if (s1[i] != '0')
////                binNum[i] = s1[i];
////        }
////    }
////
////    void Print() {
////        if (binNum != nullptr) {
////            for (int i = 0; i < noOfBits; i++)
////                cout << binNum[i];
////        }
////        cout << endl;
////    }
////
////    friend ostream& operator<<(ostream& output, const BinaryNum& obj);
////};
////
////ostream& operator<<(ostream& output, const BinaryNum& obj) {
////    for (int i = 0; i < obj.noOfBits; i++) {
////       // output << obj.noOfBits[i];
////        output << obj.binNum[i];
////    }
////    return output;
////}
////
////int main() {
////    string s1 = "101";
////    string s2 = "1001";
////    BinaryNum b1;         // noOfBits = 0, binNum is NULL
////    BinaryNum b2(s1);     // noOfBits = 3, binNum is {1,0,1}
////    BinaryNum b3(s2); // noOfBits = 4, binNum is {1,0,0,1}
////
////    cout << "b1 = ";
////    cout << b1;  // Prints nothing
////
////    cout << "b2 = ";
////    cout << b2;  // Prints 101
////
////    return 0;
////}
//#include <iostream>
//using namespace std;
//
//class BinaryNum {
//protected:
//    int* binNum; // integer array to save binary number
//    int noOfBits; // total no. of bits public:
//public:
//    BinaryNum() {
//        binNum = nullptr;
//        noOfBits = 0;
//    }
//
//    BinaryNum(string s1) {
//        noOfBits = s1.length();
//        binNum = new int[noOfBits];
//        for (int i = 0; i < noOfBits; i++) {
//            if (s1[i] != '\0')
//                binNum[i] = s1[i] - 48;//MOST IMPORTANT POINT, string me as ASCII code store hota data.
//        }
//    }
//
//    void Print() {
//        if (binNum != nullptr) {
//            for (int i = 0; i < noOfBits; i++)
//                cout << binNum[i];
//        }
//        cout << endl;
//    }
//
//    friend ostream& operator<<(ostream& output, const BinaryNum& obj);
//};
//
//ostream& operator<<(ostream& output, const BinaryNum& obj) {
//    for (int i = 0; i < obj.noOfBits; i++) {
//        // output << obj.noOfBits[i];
//        output << obj.binNum[i];
//    }
//    return output;
//}
//
//int main() {
//    string s1 = "101";
//    string s2 = "1001";
//    BinaryNum b1;         // noOfBits = 0, binNum is NULL
//    BinaryNum b2(s1);     // noOfBits = 3, binNum is {1,0,1}
//    BinaryNum b3(s2); // noOfBits = 4, binNum is {1,0,0,1}
//
//    cout << "b1 = ";
//    cout << b1;  // Prints nothing
//
//    cout << "b2 = ";
//    cout << b2;  // Prints 101
//
//    return 0;
//}
