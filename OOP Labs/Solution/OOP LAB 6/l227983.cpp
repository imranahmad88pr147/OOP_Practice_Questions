#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

class Helper
{
public:
    static int StringLenght(char* str)
    {

        return strlen(str);

        return 0;
    }

    static char* GetStringFromBuffer(char* str)
    {
        static char* new_String;
        new_String = new char[StringLenght(str)];
        strcpy(new_String, str);
        return new_String;
    }
};

class Car
{
    static int totalCars; // initialize it to zero yourself

    int model;

    char* make;

    char* name;

    char* color;

public:
    Car()
    {
        model = 0;

        color = make = name = 0;

        totalCars++;
    }

    static int GetTotalCars();

    void ReadDataFromFile(ifstream& fin)
    {
        char temp[20];

        fin >> model;
        fin >> temp;
        make = Helper::GetStringFromBuffer(temp);
        fin >> temp;
        name = Helper::GetStringFromBuffer(temp);
        fin >> temp;
        color = Helper::GetStringFromBuffer(temp);
    }

    void PrintListView()
    {
        cout << model << " " << make << " " << name << " " << color << endl;
    }

    void PrintDetailView()
    {
    }

    ~Car()

    {

        cout << "Destroying ";
        totalCars--;

        PrintListView();

        delete[] make;
        delete[] color;
        delete[] name;
    }

    void Input()

    {
        char temp[20];
        int m;
        cout << "Enter New Car Information:\n";
        cout << "Enter Model:\t";
        cin >> m;
        cin.ignore();
        model = m;
        cout << "Enter Make:\t";
        cin.get(temp, 20);
        cin.ignore();

        make = Helper::GetStringFromBuffer(temp);
        cout << "Enter Name:\t";
        cin.get(temp, 20);
        cin.ignore();

        name = Helper::GetStringFromBuffer(temp);
        cout << "Enter Color:\t";
        cin.get(temp, 20);
        cin.ignore();

        color = Helper::GetStringFromBuffer(temp);
    }
};

int Car::totalCars = 0;

int Car::GetTotalCars()
{
    return totalCars;
}

Car* ReadDataFromFile(const char* fileName)
{
    ifstream fin;

    int totalCars = 0;

    char buffer[80];

    fin.open(fileName);

    if (fin.is_open())
    {
        fin >> totalCars;
       // cout << totalCars;

        fin.getline(buffer, 80, '\n'); // We are not saving comment

      //  cout << buffer << endl;

        Car* carsList = new Car[totalCars];

        int i = 0;

        while (!fin.eof())
        {
            carsList[i].ReadDataFromFile(fin);
            i++;
        }

        return carsList;
    }

    else

    {

        return 0;
    }
}

int main()
{

    Car* carsList = ReadDataFromFile("CarsData.txt");

    int count = 0;

    if (carsList != 0)

    {
        count = Car::GetTotalCars(); // Calling static function

        cout << "Total Number of Cars in System:\t" << count << endl;

        // Test one Print at a time.

        cout << "\nCars List:\n\n";
        {
            for (int i = 0; i < count; i++)

            {

                carsList[i].PrintListView();
            }
        }

        // Comment above printing and Test Printing 2

        cout << "\nCars List:\n\n";

        {

            Car temp = carsList[0];

            temp.PrintListView();

            for (int i = 1; i < count; i++)

            {

                temp = carsList[i];

                temp.PrintListView();
            }
        }

        // if (carsList)
            // delete[] carsList;
    }

    cout << "Total Number of Cars in System:\t" << Car::GetTotalCars() - 3 << endl
        << endl
        << endl;

    Car testCar;

    testCar.Input(); // Take car data from user

    testCar.PrintDetailView();

    cout << "Total Number of Cars in System:\t" << testCar.GetTotalCars() - 3 << endl << endl << endl;
}