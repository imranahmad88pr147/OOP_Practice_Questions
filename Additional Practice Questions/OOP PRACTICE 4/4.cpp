using namespace std;
#include<iostream>
//
//class Number {
//public:
//	int* value;
//	Number(int v) {
//		value = new int(v);
//		cout << "Value: " << *value << endl;
//	}
//	~Number() {
//		cout << "Killed: " << *value << endl;
//		delete value;
//	}
//};
//class Question {
//public:
//	Number marks;
//	Question(int A) : marks(A) {
//		cout << "New Object \n";
//	}
//	Question(const Question& X) : marks(*X.marks.value + 10) {
//		cout << "ItsEasy" << endl;
//	}
//};
//void Difficult(Question why) {
//	Question Quest = why;
//}
//void main() {
//	Question Answer(1);
//	Difficult(Answer);
//}
//class Yes {
//public:
//	Yes() { cout << " Yes() "; }
//};
//class No{
//Yes y;
//public:
//No() { cout << " No() "; }
//};
//class Emotion{
//public:
//Emotion() {
//cout << "Emotion() ";
// }
//};
//class Sad : public Emotion{
//No n;
//public:
//Sad() { cout << "Sad() "; }
//};
//class Depress : public Sad{
//public:
//Depress() { cout << " Depress() "; }
//};
//int main() {
//	Depress why;
//	cout << "\n OH No! :( \n";
//	Sad noWay;
//}
//
//class Parent{
//int* b;
//public:
//Parent() { b = new int(10); }
//virtual void Print() {
//cout << "B = " << *b << endl;
//}
//~Parent() { delete b; }
//};
//class Child : public Parent{
//int* d;
//public:
//Child() { d = new int(20); }
//void Print() {
//Parent::Print();
//cout << "D = " << *d << endl;
//}
//~Child() { delete d; }
//};
//int main()
//{
//	Parent* pPtr = new Child();
//	pPtr->Print();
//	delete pPtr;
//}
