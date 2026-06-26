using namespace std;
#include<iostream>

class Item

{

	string d;
	int p;
	int dayy;
	int monthh;
	int yearr;

public:
	Item()
	{

	}

	Item(string device, int price, int day, int month, int year) {
		d = device;
		p = price;
		dayy = day;
		monthh = month;
		yearr = year;
	}
	string GetDevice()
	{
		return d;
	}
	int GetPrice()
	{
		//return getitem();
		return p;
	}
	
};
class Permanent :public Item
{
public:
	Permanent(string device, int price, int day, int month, int year) :Item(device, price, day, month, year)
	{

	}
};
class Perishable :public Item
{
public:
	Perishable(string device, int price, int day, int month, int year) :Item(device, price, day, month, year)
	{

	}
};
class Bulk_Item :public Item
{
	char* desc;
public:
	Bulk_Item(const char* description,string device, int price, int day, int month, int year) :Item(device, price, day, month, year)
	{
		int lengthofdescription = strlen(description);
		desc = new char[lengthofdescription + 1];
		for (int i = 0; i < lengthofdescription; i++)
		{
			desc[i] = description[i];
		}
		desc[lengthofdescription] = '\0';
	}

};

class Pharmacy
{
	int item_count;
	Item** items;
public:
	Pharmacy()
	{
		item_count = 0;
		items = nullptr;

	}
	Pharmacy(int i)
	{
		
		item_count = 0;
		items = new Item*[i];
	}
	void AddItem(Item* p)
	{
		items[item_count] = p;
		item_count++;
	}
	void DisplayItems()
	{
		for (int i = 0; i < item_count; i++) {
			cout << "Item: " << items[i]->GetDevice() << " | Price: " << items[i]->GetPrice() << std::endl;
			
		}
	}
	int getitem()
	{
	
		return item_count;
	}


};
int main()
{
	int itemCount = 4;
	Pharmacy ph(itemCount); //ph has a list of 4 items here
	Item* iptr = new Permanent("glucometer", 5000, 15, 11, 2016);
	// a glucometer of price 5000 and entry date 15 Nov 2016
	ph.AddItem(iptr);
	iptr = new Perishable("Panadol", 20, 16, 11, 2018);
	// 500mg Panadol tablet of price 20, expiry date 16 Nov 2018
	ph.AddItem(iptr);
	iptr = new Bulk_Item("Gloves","For Doctors Use Only" ,500, 12, 10, 2016);
	// glovesbox of cost 500 Rs. With entry date 12 Oct 2016
	ph.AddItem(iptr);
	iptr = new Bulk_Item("5CC Syringe","For Gays Only", 90, 15, 7, 2017);
	// Syring of cost 90 Rs. each with entry date 15 July 2017
	ph.AddItem(iptr);
	ph.DisplayItems();
	// this function should print complete information of items in list
	return 0;

}
