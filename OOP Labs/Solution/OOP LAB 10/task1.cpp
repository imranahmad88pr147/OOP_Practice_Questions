using namespace std;
#include<iostream>
#include<conio.h>
class Animal
{
public:
  virtual	char* speak()
	{
		return (char*)"speak()called.";
	}
  virtual ~Animal() { cout<<" ~Animal() called."<<endl; }


};
class Dog :public Animal
{
public:
	char* speak()
	{
		return(char*)"woof!";
	}
	~Dog() { cout<<" ~Dog() called."<< endl; }
	
};
class Cat :public Animal
{
	char* speak()
	{
		return(char*)"meow!";
	}
	~Cat() { cout << " ~Cat() called."<<endl; }
};
class sheep :public Animal
{
	char* speak()
	{
		return(char*)"bleat";
	}
	
};
class cow :public Animal
{
	char* speak()
	{
		return(char*)"moo";
	}

};
class horse :public Animal
{
	char* speak()
	{
		return(char*)"neigh";
	}

};


int main()
{ 
	const int size = 5;
	Animal* myPets[size];
	int i = 0;
	cout << "MENU" << endl;
	while (i < size)
	{
		cout << "Press 1 for a Dog and 2 for a Cat 3 for a Horse 4 for a Sheep and 5 for a Cow" << endl;
		        char choice;
		        cin >> choice;
		
		switch(choice)
		{
		case'1':
			myPets[i] = new Dog;
			cout << " Dog added at position " << i << endl << endl;
			i++;
			break;
		case'2':
			myPets[i] = new Cat;
			cout << " Cat added at position " << i << endl << endl;
			i++;
			break;
		case'3':
			myPets[i] = new horse;
			cout << " Horse added at position " << i << endl << endl;
			i++;
			break;
		case'4':
			myPets[i] = new sheep;
			cout << " Sheep added at position " << i << endl << endl;
			i++;
			break;
		case'5':
			myPets[i] = new cow;
			cout << " Cow added at position " << i << endl << endl;
			i++;
			break;
		default:
			cout << "Invalid input.Enter again." << endl << endl;
			break;

		}
	}
	for (int i = 0; i < size; i++)
	   cout << myPets[i]->speak() << endl;
	
	for (int i = 0; i < size; i++)
		delete myPets[i];


}