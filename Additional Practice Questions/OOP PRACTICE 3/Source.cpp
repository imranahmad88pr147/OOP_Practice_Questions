//using namespace std;
//#include<iostream>
//#include<string>
//class Event {
//	char* event_name;
//	char* event_venue;
//	char event_date[11];
//	char event_time[9];
//public:
//	Event()
//	{
//		event_name = nullptr;
//		event_venue = nullptr;
//		event_time[0] = 0;
//		event_date[0] = 0;
//	}
//	Event(const char* eventName, const char* eventVenue, const char* date, const char* time)
//	{
//		event_name = new char[sizeof(eventName)];
//		event_venue = new char[sizeof(eventVenue)];
//		for (int i = 0; i < sizeof(eventName); i++)
//		{
//			event_name[i] = eventName[i];
//		}
//		for (int i = 0; i < sizeof(eventVenue); i++)
//		{
//			event_venue[i] = eventVenue[i];
//		}
//		for (int i = 0; i < sizeof(date); i++)
//		{
//			event_date[i] = date[i];
//		}
//		for (int i = 0; i < sizeof(time); i++)
//		{
//			event_time[i] = time[i];
//		}
//	}
//	void UserInput()
//	{
//		char eventname[20];
//		eventname[0] = 0;
//		char eventvenue[50];
//		eventvenue[0] = 0;
//		cout << "Enter Event Date in format dd/mm/yy : " << endl;
//		cin.getline(event_date, 11);
//		cout << "Enter Event Time in format hh:mmAM/PM : " << endl;
//		cin.getline(event_time, 9);
//		cout << "Enter Event Name: " << endl;
//		cin.getline(eventname, 20);
//		event_name = new char[sizeof(eventname)];
//		for (int i = 0; sizeof(eventname); i++)
//		{
//			event_name[i] = eventname[i];
//		}
//		cout << "Enter Event Venue: " << endl;
//		cin.getline(eventvenue, 50);
//		event_venue = new char[sizeof(eventvenue)];
//		for (int i = 0; i < sizeof(eventvenue); i++)
//		{
//			event_venue[i] = eventvenue[i];
//		}
//	}
//	void DisplayAllEvents()
//	{
//		cout << endl;
//		cout << "Event Name: " << event_name << endl;
//		cout << "Event Venue: " << event_venue << endl;
//		cout << "Event Date: " << event_date << endl;
//		cout << "Event Time: " << event_time << endl;
//		cout << endl;
//
//	}
//	void setEventName(char* n)
//	{
//		event_name = NULL;
//		delete event_name;
//		event_name = new char[sizeof(n)];
//		for (int i = 0; i < sizeof(n); i++)
//		{
//			event_name[i] = n[i];
//		}
//
//	}
//	void setEventVenue(char* v)
//	{
//		event_venue = NULL;
//		delete event_venue;
//		event_venue = new char[sizeof(v)];
//		for (int i = 0; i < sizeof(v); i++)
//		{
//			event_venue[i] = v[i];
//		}
//	}
//	void setEventDate(char* d)
//	{
//
//		//strcpy_s(event_time, time,11);
//		for (int i = 0; i < sizeof(d) - 1; i++)
//		{
//			event_date[i] = d[i];
//		}
//	}
//	void setEventTime(char* t)
//	{
//		for (int i = 0; i < sizeof(t) - 1; i++)
//		{
//			event_time[i] = t[i];
//		}
//	}
//
//};
//int main()
//{
//
//	int choice = 1;
//	Event* events = new Event[3];
//	int eventnumber = 0;
//	//events[0].DisplayAllEvents(events, eventnumber)
//	cout << "Menu Program" << endl;
//	do {
//		int choice1 = 5;
//		cout << "Add New Event through Overloaded Constructor,Enter 1 : " << endl;
//		cout << "Add New Event through Setters,Enter 2 : " << endl;
//		cout << "Display All Events,Enter 3 : " << endl;
//		cout << "Enter 0 to Exit: " << endl;
//		cin >> choice1;
//		if (choice1 == 1)
//		{
//			char eventname[20];
//			eventname[0] = 0;
//			char eventvenue[50];
//			eventvenue[0] = 0;
//			char eventdate[11];
//			eventdate[0] = 0;
//			char eventtime[9];
//			eventtime[0] = 0;
//			const char* eventnamee;
//			const char* eventvenuee;
//
//			cout << "Enter Event Date in format dd/mm/yy : " << endl;
//			cin.ignore();
//			cin.getline(eventdate, 11);
//			cout << "Enter Event Time in format hh:mmAM/PM : " << endl;
//			cin.getline(eventtime, 9);
//			cout << "Enter Event Name: " << endl;
//			cin.getline(eventname, 20);
//			eventnamee = eventname;
//			cout << "Enter Event Venue: " << endl;
//			cin.getline(eventvenue, 50);
//			eventvenuee = eventvenue;
//			events[eventnumber++] = Event(eventnamee, eventvenuee, eventdate, eventtime);
//			system("cls");
//		}
//		else if (choice1 == 3)
//		{
//			for (int i = 0; i < eventnumber; i++)
//			{
//				events[i].DisplayAllEvents();
//			}
//		}
//		else if (choice1 == 2)
//		{
//			char* eventnamee;
//			char eventname[20];
//			eventname[0] = 0;
//			char eventvenue[50];
//			eventvenue[0] = 0;
//			char eventdate[11];
//			eventdate[0] = 0;
//			char eventtime[9];
//			eventtime[0] = 0;
//			cout << "Enter Event Date in format dd/mm/yy : " << endl;
//			cin.ignore();
//			cin.getline(eventdate, 11);
//			cout << "Enter Event Time in format hh:mmAM/PM : " << endl;
//			cin.getline(eventtime, 9);
//			cout << "Enter Event Name: " << endl;
//
//			cin.getline(eventname, 20);
//			eventnamee = eventname;
//			cout << "Enter Event Venue: " << endl;
//			cin.getline(eventvenue, 50);
//			events[eventnumber].setEventDate(eventdate);
//			events[eventnumber].setEventTime(eventtime);
//			events[eventnumber].setEventName(eventname);
//			events[eventnumber].setEventVenue(eventvenue);
//			eventnumber++;
//		}
//		else if (choice1 == 0)
//		{
//
//			choice = 0;
//			break;
//		}
//
//	} while (choice != 0);
//}