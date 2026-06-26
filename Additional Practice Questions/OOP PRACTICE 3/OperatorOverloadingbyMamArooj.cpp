//using namespace std;
//#include<iostream>
//
//class polynomial
//{
//	int totalterms;
//	int* coeff;
//	int* exp;
//public:
//	polynomial()
//	{
//		totalterms = 0;
//		coeff = nullptr;
//		exp = nullptr;
//
//	}
//	polynomial(int t, int* c, int* e)
//	{
//		totalterms = t;
//		coeff = new int[t];
//		exp = new int[t];
//		for (int i = 0; i < t; i++)
//		{
//			coeff[i] = c[i];
//		}
//		for (int i = 0; i < t; i++)
//		{
//			exp[i] = e[i];
//		}
//
//	}
//	friend ostream &operator<<(ostream& output, const polynomial& obj)
//	{
//		for (int i = 0; i < obj.totalterms; i++) {
//			
//			if (i > 0 && obj.coeff[i] > 0)
//				output << "+";
//			else if (i > 0 && obj.coeff[i] < 0)
//				output << "  ";
//
//
//			output << obj.coeff[i] << "x" << "^" << obj.exp[i] ;
//			
//			
//		}
//		return output;
//		
//
//		cout << endl;
//	}
//	bool  operator!()const
//	{
//		for (int i = 0; i < totalterms; i++)
//		{
//			if (coeff[i] != 0 && exp[i] != 0)
//				return false;
//			else return true;
//		}
//	}
//	bool operator!=(const polynomial& obj)
//	{
//		for (int i = 0; i < totalterms; i++)
//		{
//			if (coeff[i] != obj.coeff[i] && exp[i] != obj.exp[i])
//				return true;
//			else return false;
//		}
//	}
//	/*polynomial operator+(const polynomial& obj)
//	{
//		polynomial temp;
//		for (int i = 0; i < totalterms; i++)
//		{ 
//			if(exp[i]==obj.exp[i])
//			temp.coeff[i] = coeff[i] + obj.coeff[i];
//			temp.coeff[i] = coeff[i];
//			temp.exp[i] = coeff[i] + obj.coeff[i];
//
//		}
//	}*/
//	//see chatgpt for this function.
//	
//};
//int main(){
//int coeff_p1[] = { 1,2,5 }; //coefficients for polynomial p1
//int exp_p1[] = { 4, 2, 0 };
////exponents for polynomial p1
//int coeff_p2[] = {4,3}; //coefficients for polynomial p2
//int exp_p2[] = {6,2}; //exponents for polynomial p2
//polynomial p1(3, coeff_p1, exp_p1);//creates p1 with 3 terms (p1 =1× ^ 4 + 2× ^ 2 + 5× ^ 0 )
//polynomial p2(2, coeff_p2, exp_p2);//creates p2 with 2 terms (p2 =4× ^ 6 + 3× ^ 2)
//cout << "p1 = " << p1 << endl;//prints p1 = x^4+2x^2+5
//cout << "p2 = " << p2 << endl; //prints p2 = 4x^6+3×^2
//if (!p1)
//cout << "p1 is zero"<<endl;/*if polynomial has only 1 term and its coeff and exp are zero. i.e. if p1 = 0.*/
//if (p1 != p2)
//cout<<"p1 is not equal to p2"<<endl;
////polynomial p3 = p1 + p2;
////adds p1 and p2 and saves result in p3.you may consume extra space for resultant polynomial in add function
////cout<<"р3 = " << p3 << endl;
////prints p3 = 4×^6+×^4+5×^2+5
//
//}