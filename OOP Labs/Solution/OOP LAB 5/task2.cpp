using namespace std;

#include <iostream>

class Matrix
{

    int Rows;
    int Cols;
    int** array1;

public:
    Matrix()
    {
        Rows = 0;
        Cols = 0;
        array1 = nullptr;
    }

    Matrix(int r, int c)
    {
        Rows = r;
        Cols = c;

        array1 = new int* [Rows];
        for (int i = 0; i < Rows; i++)
        {
            array1[i] = new int[Cols];
        }
    }

    void Input()
    {
        cout << "Enter elements for 2D array" << endl;
        for (int i = 0; i < Rows; i++)
        {
            for (int j = 0; j < Cols; j++)
            {
                cout << "Enter element for index " << i << "," << j << endl;
                cin >> array1[i][j];
            }
        }
    }
    void Display()
    {
        // system("cls");
        cout << "Elements of 2D are: " << endl;
        for (int i = 0; i < Rows; i++)
        {
            for (int j = 0; j < Cols; j++)
            {
                cout << array1[i][j] << " ";
            }
            cout << endl;
        }
    }
    int getRows()
    {
        return Rows;
    }
    int getCols()
    {
        return Cols;
    }
    void setElement(int r, int c, int n)
    {
        cout << "i is: " << r << " and j is: " << c << endl;
        array1[r][c] = n;
        cout << "Element is set at " << r << "," << c << endl;
    }

    void AdditionofMatrices()
    {
        int r, c;
        cout << "Enter rows: " << endl;
        cin >> r;
        cout << "Enter columns: " << endl;
        cin >> c;

        if (r == Rows && c == Cols)
        {
            int** array2;
            array2 = nullptr;
            array2 = new int* [r];
            for (int i = 0; i < r; i++)
            {
                array2[i] = new int[c];
            }
            int** array4;
            array4 = nullptr;
            array4 = new int* [r];
            for (int i = 0; i < r; i++)
            {
                array4[i] = new int[c];
            }
            cout << "Enter elements for 2D array" << endl;
            for (int i = 0; i < Rows; i++)
            {
                for (int j = 0; j < Cols; j++)
                {
                    cout << "Enter element for index " << i << "," << j << endl;
                    cin >> array2[i][j];
                }
            }

            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < c; j++)
                {

                    array4[i][j] = array1[i][j] + array2[i][j];
                }
            }

            cout << "Elements of 2D are: " << endl;
            for (int i = 0; i < Rows; i++)
            {
                for (int j = 0; j < Cols; j++)
                {
                    cout << array4[i][j] << " ";
                }
                cout << endl;
            }

            for (int i = 0; i < Rows; i++) // Deleting Array2 which is created for this function to fulfill our requirement.
                delete[] array2[i];

            delete[] array2;
            array2 = nullptr;

            for (int i = 0; i < Rows; i++) // Deleting Array3 which is created for this function to fulfill our requirement.
                delete[] array4[i];

            delete[] array4;
            array4 = nullptr;
        }

        else if (r != Rows || c != Cols)
        {
            cout << "Matrices cannot be added!!" << endl;
            /*cout << "HELLO" << endl;
            cout << "r: " << r << endl;
            cout << "Rows: " << Rows << endl;
            cout << "c: " << c << endl;
            cout << "Cols: " << Cols << endl;*/
        }
    }

    void MultiplicationofMatrices()
    {
        int r, c;
        cout << "Enter rows: " << endl;
        cin >> r;
        cout << "Enter columns: " << endl;
        cin >> c;

        if (Cols == r)
        {
            int** array2;

            array2 = new int* [r];

            for (int i = 0; i < r; i++)
            {
                array2[i] = new int[c];
            }

            int array3[Rows][c];

            cout << "Enter elements for 2D array" << endl;
            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    cout << "Enter element for index " << i << "," << j << endl;
                    cin >> array2[i][j];
                }
            }

            for (int i = 0; i < Rows; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    array3[i][j] = 0;
                }
            }

            for (int i = 0; i < Rows; ++i)
                for (int j = 0; j < c; ++j)
                    for (int k = 0; k < Cols; ++k)
                    {
                        array3[i][j] = array3[i][j] + (array1[i][k] * array2[k][j]);
                    }

            cout << "Elements of 2D are: " << endl;

            for (int i = 0; i < Rows; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    cout << array3[i][j] << " ";
                }

                cout << endl;
            }
        }
    }
};
int main()
{
    int rows, cols, choice1 = 0, i, j, element;
    int** array4;
    cout << "Enter Rows: " << endl;
    cin >> rows;
    cout << "Enter Columns: " << endl;
    cin >> cols;
    Matrix obj(rows, cols);
    obj.Input();
    cout << "Do you want to set element\nPress 1 for YES and 0 for NO" << endl;
    cin >> choice1;
    if (choice1 == 1)
    {
        cout << "Enter the index at which you want to set Element" << endl;
        cout << "First value: " << endl;
        cin >> i;
        cout << "Second value: " << endl;
        cin >> j;
        cout << "Enter the Element that you want to set: " << endl;
        cin >> element;
        obj.setElement(i, j, element);
        obj.Display();
    }
    cout << "What you want to do \n";
    cout << "1. Add     2.Multiply\n";

    int mychoice;
    cin >> mychoice;

    if (mychoice == 1)
        obj.AdditionofMatrices();
    else
        obj.MultiplicationofMatrices();
}