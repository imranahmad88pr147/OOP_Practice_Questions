//
//using namespace std;
//#include<iostream>
//template<typename T>
//class Queue
//{
//	T* array;
//	int front; 
//	int rear;
//	int maxsize;
//	int currsize;
//public:
//	Queue()
//	{
//		front = -1;
//		rear = -1;
//		maxsize = 5;
//		currsize = 0;
//		array = new T[maxsize];
//	}
//	Queue(int size)
//	{
//		maxsize = size;
//		front = -1;
//		rear = -1;
//		currsize = 0;
//		array = new T[maxsize];
//		
//	}
//	int next(int index)
//	{
//		return(index + 1) % maxsize;//wrap aroundi.e. circular queue.
//	}
//	void enqueue(const T& value)
//	{
//		if (rear == maxsize - 1)
//		{
//			cout << "Queue is Full" << endl;
//		}
//		if (front && rear == -1)
//		{
//			front = 0; 
//			rear = 0;
//			array[rear] = value;//We are storing in array[rear] because everytime we have to insert on rear index.
//			currsize++;
//		}
//		else 
//		{
//			rear++;
//			array[rear] = value;
//			
//			currsize++;
//			//cout << currsize;
//
//		}
//		
//	}
//	void dequeue()
//	{
//		if (front == -1 && rear == -1)
//		{
//			//cout << rear;
//			cout << "Queue is empty " << endl;
//		}
//		else if (front == rear)//There is only one element in the queue that you are going to delete by dequeue.
//		{
//			front = rear = -1;
//			currsize--;
//			cout << "Last element Deleted! Queue is now empty" << endl;
//		}
//		else
//		{
//			//cout << array[front];
//			front++;
//			currsize--;
//		}
//	}
//	//void countingSort(int place, int range)
//	//{
//	//	
//
//	//	 
//
//	//	T* count = new T[range];
//	//	T* resultant = new T[maxsize];
//
//	//	// Initializing the count array with 0 number in all indices thyoiugh the following loop.
//	//	for (int i = 0; i < range; i++) {
//	//		count[i] = 0;
//	//	}
//
//	//	// Storing frequencies of each element in the count array at the specified digit place.i.e., one or ten or hundred place of the digit.
//	//	for (int i = 0; i < maxsize; i++) {
//	//		count[(array[i] / place) % 10 - min]++;
//	//	}
//
//	//	// Storing cumulative frequencies of each element in the count array
//	//	for (int i = 1; i < range; i++) {
//	//		count[i] = count[i] + count[i - 1];
//	//	}
//
//	//	// Storing the result of sort in the resultant array at the specified digit place
//	//	for (int i = maxsize - 1; i >= 0; i--) {
//	//		int currentDigit = (array[i] / place) % 10;
//	//		resultant[count[currentDigit - min] - 1] = array[i];
//	//		count[currentDigit - min]--; // Decrement the count
//	//	}
//	//	delete[] count;
//	//	delete[] array;
//	//	array = resultant;
//
//	//	print();
//	//}
//	//
//	//void countingSort(int place, int range) {
//	//	int* count = new int[range];
//	//	T* resultant = new T[maxsize];
//
//	//	for (int i = 0; i < range; i++) {
//	//		count[i] = 0;
//	//	}
//
//	//	for (int i = 0; i < maxsize; i++) {
//	//		count[array[i][place]]++;
//	//	}
//
//	//	for (int i = 1; i < range; i++) {
//	//		count[i] += count[i - 1];
//	//	}
//
//	//	for (int i = maxsize - 1; i >= 0; i--) {
//	//		resultant[count[array[i][place]] - 1] = array[i];
//	//		count[array[i][place]]--;
//	//	}
//
//	//	delete[] count;
//	//	//delete[] array;
//	//	array = resultant;
//	//}
//	void countingSort(int place, int range) {
//		int* count = new int[range];
//		T* resultant = new T[maxsize];
//
//		for (int i = 0; i < range; i++) {
//			count[i] = 0;
//		}
//
//		for (int i = 0; i < maxsize; i++) {
//			count[static_cast<int>(array[i][place])]++;
//		}
//
//		for (int i = 1; i < range; i++) {
//			count[i] += count[i - 1];
//		}
//
//		for (int i = maxsize - 1; i >= 0; i--) {
//			resultant[count[static_cast<int>(array[i][place])] - 1] = array[i];
//			count[static_cast<int>(array[i][place])]--;
//		}
//
//		// Copy the sorted values back to the original array
//		for (int i = 0; i < maxsize; i++) {
//			array[i] = resultant[i];
//		}
//
//		delete[] count;
//		delete[] resultant;
//	}
//
//
//	void countingSort(int place)
//	{
//		int max = (array[0] / place) % 10; // Initialize max with the digit at the given place
//		int min = (array[0] / place) % 10; // Initialize min with the digit at the given place
//
//		// Find the minimum and maximum values at the given digit place
//		for (int i = 1; i < maxsize; i++) {
//			int currentDigit = (array[i] / place) % 10;
//			if (currentDigit < min) {
//				min = currentDigit;
//			}
//			if (currentDigit > max) {
//				max = currentDigit;
//			}
//		}
//
//		int range = max - min + 1;
//		T* count = new T[range];
//		T* resultant = new T[maxsize];
//
//		// Initializing the count array with 0 number in all indices thyoiugh the following loop.
//		for (int i = 0; i < range; i++) {
//			count[i] = 0;
//		}
//
//		// Storing frequencies of each element in the count array at the specified digit place.i.e., one or ten or hundred place of the digit.
//		for (int i = 0; i < maxsize; i++) {
//			count[(array[i] / place) % 10 - min]++;
//		}
//
//		// Storing cumulative frequencies of each element in the count array
//		for (int i = 1; i < range; i++) {
//			count[i] = count[i] + count[i - 1];
//		}
//
//		// Storing the result of sort in the resultant array at the specified digit place
//		for (int i = maxsize - 1; i >= 0; i--) {
//			int currentDigit = (array[i] / place) % 10;
//			resultant[count[currentDigit - min] - 1] = array[i];
//			count[currentDigit - min]--; // Decrement the count
//		}
//		delete[] count;
//		delete[] array;
//		array = resultant;
//		
//		print();
//	}
//	// Tip: If our maaximum number is of 3 digits then our total passes or steps will be 3.
//	//i.e one for ones place and second for hundred place and third for hundreds place.
//
//	void RadixSort() {
//		
//		//The following condition means if my data type "T" and int will be same then this condition will be true otherwise it will be false.
//		if constexpr (is_same<T, int>::value) {
//			int max = array[0];
//
//			//Find the maximum value in the array
//			for (int i = 1; i < maxsize; i++) {
//				if (array[i] > max) {
//					max = array[i];
//				}
//			}
//			int count = 1;
//			for (int place = 1; max / place > 0; place *= 10) {
//				cout << "Pass " << count << endl;
//				count++;
//				countingSort(place);
//			}
//		}
//		else {
//
//
//
//
//		}
//
//	}
//	void print()
//	{
//		cout << "Queue: ";
//		for (int i = front; i < rear + 1; i++)
//		{
//			cout<<array[i]<<" ";
//		}
//		cout << array[0][3] << "D" << endl;
//		cout << endl;
//	}
//};
//int main()
//{
//	/*Queue<int> obj(8);
//	obj.enqueue(170);
//	obj.enqueue(45);
//	obj.enqueue(75);
//	obj.enqueue(90);
//	obj.enqueue(802);
//	obj.enqueue(24);
//	obj.enqueue(2);
//	obj.enqueue(66);
//	
//	obj.RadixSort();*/
//	Queue<string> obj(2);
//	obj.enqueue("abc");
//	obj.enqueue("bca");
//	//obj.RadixSort();
//	/*char abc = 'e';
//	int val = abc-'a';*/
//	obj.print();
//
//	
//
//	
//
//
//}
//
#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Queue {
    T* array;
    int front;
    int rear;
    int maxsize;
    int currsize;

public:
    Queue(int size) {
        maxsize = size;
        front = -1;
        rear = -1;
        currsize = 0;
        array = new T[maxsize];
    }
    Queue() : maxsize(10), front(-1), rear(-1), currsize(0) {
        array = new T[maxsize];
    }
    T getFront()
    {
        return array[front];
    }
    int next(int index) {
        return (index + 1) % maxsize;
    }
    bool isEmpty()
    {
        if (front == -1 && rear == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void enqueue(const T& value) {
        if (rear == maxsize - 1) {
            resize();
            cout << "Queue is Full" << endl;
        }
        if (front == -1 && rear == -1) {
            front = 0;
            rear = 0;
            array[rear] = value;
            currsize++;
        }
        else {
            rear = next(rear);
            array[rear] = value;
            currsize++;
        }
    }

    T dequeue() {
        if (front == -1 && rear == -1) {
            cout << "Queue is empty " << endl;
            return T();// This will return empty string.
        }
        else if (front == rear) {
            T data = array[front];
            front = rear = -1;
            currsize--;
            return data;
          //  cout << "Last element Deleted! Queue is now empty" << endl;
        }
        else {
            T data = array[front];
            front = next(front);
            currsize--;
            return data;
        }
    }
   



    void resize() {
        int newMaxSize = maxsize * 2;
        T* newArray = new T[newMaxSize];

        int j = 0;
        for (int i = front; i != rear; i = next(i)) {
            newArray[j] = array[i];
            j++;
        }

        newArray[j] = array[rear];
        front = 0;
        rear = j;
        maxsize = newMaxSize;

        delete[] array;
        array = newArray;
    }
    int getMaxLength() {
        int maxLength = 0;
        for (int i = front; i <= rear; i++) {
            int currentLength = array[i].length();
            if (currentLength > maxLength) {
                maxLength = currentLength;
            }
        }
        return maxLength;
    }

   
     void RadixSort( int n)
        {
            int queue_index = 0;
            int gm = getMaxLength();
            for (int i = gm; i > 0; i--)
            {
                Queue<string>queuearray[26];
                for (int j = 0; j < n; j++)
                {
                    if (array[j].length() > i)
                    {
                        queue_index= static_cast<int>(array[j][array[j].length() - i])-97;
                    }
                    else
                    {
                        queue_index = 0;
                    }
                    queuearray[queue_index].enqueue(array[j]);
                }
                queue_index = 0;
                for (int i = 0; i < 26; i++)
                {
                    while (!queuearray[i].isEmpty())
                    {
                        array[queue_index++] = queuearray[i].dequeue();
                    }
                }
            }
        
        }

    void print() {
        cout << "Queue: ";
        for (int i = front; i <= rear; i++) {
            cout << array[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue<string> obj(2);
    obj.enqueue("imranZ");
    obj.enqueue("imranY");

    cout << "Original Queue: ";
    obj.print();

    int maxLength = obj.getMaxLength();
    obj.RadixSort(2);

    cout << "Sorted Queue: ";
    obj.print();

    return 0;
}

