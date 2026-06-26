using namespace std;
#include<iostream>
#include<string>

class Book {
	string author;
	string title;
	string publisher;
	int price;
	int stock;
public:
	Book()
	{
		author = "";
		title = "";
		publisher = "Ahmed";
		price = 0;
		stock = 100;
	}
	Book(string a, string t, int p)
	{
		stock = 100;
		publisher = "Ahmed";
		author = a;
		title = t;
		price = p;
	}
	int getPrice()
	{
		return price;
	}
	string getauthor()
	{
		return author;
	}
	string gettitle()
	{
		return title;
	}
	int getstock()
	{
		return stock;
	}
    bool isAvailable(Book* obj, int size, string author, string title)
    {
        for (int i = 0; i < size; i++)
        {
            if (obj[i].getauthor() == author && obj[i].gettitle() == title)
            {
                return true;
            }
        }
        return false;
    }


};
int main()
{
    int size, price, copies;
    string author, title;
    bool found = false;
    cout << "How many books do you want to add: ";
    cin >> size;
    if (size == -1)
    {
        return 0;
    }
    cin.ignore();

    //store books in a list
    Book* ObjectsArray = new Book[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter \033[1mAuthor Name\033[0m for Book " << i + 1 << ": ";
        getline(cin, author);
        if (author == "-1")
        {
            return 0;
        }

        cout << "Enter \033[1mTitle\033[0m for Book " << i + 1 << ": ";
        getline(cin, title);
        cout << "Enter \033[1mprice\033[0m for Book " << i + 1 << ": $";
        cin >> price;
        cin.ignore();
        ObjectsArray[i] = Book(author, title, price);
    }

    cout << "\n\nEnter \033[1mAuthor Name\033[0m for Book to search: ";
    getline(cin, author);
    cout << "Enter \033[1mTitle\033[0m for Book to search: ";
    getline(cin, title);

    //search books in that list
    if (isAvailable(ObjectsArray, size, author, title))
    {
        cout << "Book is availabe!!!" << endl;
        cout << "How many copies you want?" << endl;
        cin >> copies;
        int cost;
        for (int i = 0; i < size; i++)
        {
            if (ObjectsArray[i].getauthor() == author && ObjectsArray[i].gettitle() == title)
            {
                if (ObjectsArray[i].getstock() >= copies)
                {
                    cost = copies * ObjectsArray[i].getPrice();
                    cout << "Here's your " << copies << " books costing $" << cost << endl;
                }
                else
                {
                    cout << "We only have " << ObjectsArray[i].getstock() << " copies of your desired book!!!!";
                    cout << endl;
                }
                found = true;
                break;
            }
        }
    }

    if (!found)
    {
        cout << "Book is not available!!!" << endl;
    }

    delete[] ObjectsArray;

    return 0;
}
