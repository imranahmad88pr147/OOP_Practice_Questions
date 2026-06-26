//#include <iostream>
//
//using namespace std;
//
//class Animal
//{
//public:
//    virtual char* speak()
//    {
//        return (char*)"speak()called.";
//    }
//};
//
//class Dog : public Animal
//{
//public:
//    char* speak()
//    {
//        return (char*)"woof!";
//    }
//};
//
//class Cat : public Animal
//{
//public:
//    char* speak()
//    {
//        return (char*)"meow!";
//    }
//};
//
//int main()
//{
//    const int size = 5;
//    Animal* myPets[size];
//
//    int i = 0;
//    while (i < size)
//    {
//        cout << "Press 1 for a Dog and 2 for a Cat" << endl;
//        char choice;
//        cin >> choice;
//
//        if (choice == '1')
//        {
//            myPets[i] = new Dog;
//            cout << "Dog added at position " << i << endl << endl;
//            i++;
//        }
//        else if (choice == '2')
//        {
//            myPets[i] = new Cat;
//            cout << "Cat added at position " << i << endl << endl;
//            i++;
//        }
//        else
//        {
//            cout << "Invalid input. Enter again." << endl << endl;
//            cin.clear();         // Clear any error flags on cin
//            cin.ignore(1000, '\n'); // Ignore up to 1000 characters until a newline is encountered
//        }
//    }
//
//    for (int i = 0; i < size; i++)
//    {
//        cout << myPets[i]->speak() << endl;
//        delete myPets[i]; // Don't forget to deallocate memory
//    }
//
//    return 0;
//}
