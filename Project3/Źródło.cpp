#include <cstdlib> 
#include <ctime> 
#include <iostream>
#include <chrono>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

void insertionSortString(vector <string>& data)
{
	auto start = chrono::high_resolution_clock::now();
	string value_min;
	int j;

	for (int i = 1; i < data.size(); i++)
	{
		value_min = data[i];
		j = i - 1;

		while (j >= 0 && value_min < data[j])
		{
			data[j + 1] = data[j];
			j--;
		}
		data[j + 1] = value_min;
	}

	auto finish = chrono::high_resolution_clock::now();
	chrono::duration<double> elapsed = finish - start;
	cout << "Insertion sort time for strings " << elapsed.count() << endl;
}

void insertionSort(vector <int>& data)
{
	auto start = chrono::high_resolution_clock::now();
	int value_min, j;

	for (int i = 1; i < data.size(); i++)
	{
		value_min = data[i];
		j = i - 1;

		while (j >= 0 && value_min < data[j])
		{
			data[j + 1] = data[j];
			j--;
		}
		data[j + 1] = value_min;
	}

	auto finish = chrono::high_resolution_clock::now();
	chrono::duration<double> elapsed = finish - start;
	cout << "Insertion sort time " << elapsed.count() << endl;
}

void insertionSort2String(vector <string>& data)
{
	auto start = chrono::high_resolution_clock::now();

	data.insert(data.begin(), data[0]);

	int i, j;
	string value_min;

	for (i = 1; i < data.size(); ++i)
	{
		value_min = data[i];
		data[0] = value_min;
		j = i - 1;

		while (data[j] > value_min)
		{
			data[j + 1] = data[j];
			j--;
		}
		data[j + 1] = value_min;
	}

	data.erase(data.begin());

	auto finish = chrono::high_resolution_clock::now();
	chrono::duration<double> elapsed = finish - start;
	cout << "Insertion2 sort time for strings " << elapsed.count() << endl;
}

void insertionSort2(vector <int>& data)
{
	auto start = chrono::high_resolution_clock::now();

	data.insert(data.begin(), data[0]);

	int i, value_min, j;

	for (i = 1; i < data.size(); ++i)
	{
		value_min = data[i];
		data[0] = value_min;
		j = i - 1;

		while (data[j] > value_min)
		{
			data[j + 1] = data[j];
			j--;
		}
		data[j + 1] = value_min;
	}

	data.erase(data.begin());

	auto finish = chrono::high_resolution_clock::now();
	chrono::duration<double> elapsed = finish - start;
	cout << "Insertion2 sort time " << elapsed.count() << endl;
}

void bubbleSortString(vector <string>& data)
{
	auto start = chrono::high_resolution_clock::now();

	int i, j;

	for (i = 0; i < data.size(); i++)
	{
		for (j = 0; j < data.size() - 1; j++)
		{
			if (data[j] > data[j + 1])
				swap(data[j], data[j + 1]);
		}
	}

	auto finish = chrono::high_resolution_clock::now();
	chrono::duration<double> elapsed = finish - start;
	cout << "Bubble sort for strings " << elapsed.count() << endl;
}

void bubbleSort(vector <int>& data)
{
	auto start = chrono::high_resolution_clock::now();

	int i, j;

	for (i = 0; i < data.size(); i++)
	{
		for (j = 0; j < data.size() - 1; j++)
		{
			if (data[j] > data[j + 1])
				swap(data[j], data[j + 1]);
		}
	}

	auto finish = chrono::high_resolution_clock::now();
	chrono::duration<double> elapsed = finish - start;
	cout << "Bubble sort " << elapsed.count() << endl;
}

void bubbleSort2String(vector <string>& data)
{
	auto start = chrono::high_resolution_clock::now();

	int i, j;

	for (i = 0; i < data.size() - 1; i++)
	{
		for (j = 0; j < data.size() - i - 1; j++)
		{
			if (data[j] > data[j + 1])
				swap(data[j], data[j + 1]);
		}
	}

	auto finish = chrono::high_resolution_clock::now();
	chrono::duration<double> elapsed = finish - start;
	cout << "Bubble sort2 for strings " << elapsed.count() << endl;
}

void bubbleSort2(vector <int>& data)
{
	auto start = chrono::high_resolution_clock::now();

	int i, j;

	for (i = 0; i < data.size() - 1; i++)
	{
		for (j = 0; j < data.size() - i - 1; j++)
		{
			if (data[j] > data[j + 1])
				swap(data[j], data[j + 1]);
		}
	}

	auto finish = chrono::high_resolution_clock::now();
	chrono::duration<double> elapsed = finish - start;
	cout << "Bubble sort2 " << elapsed.count() << endl;
}

void bubblesort3String(vector <string>& data)
{
	auto start = chrono::high_resolution_clock::now();

	bool swapped = true;
	int begin = 0;
	int end = data.size() - 1;

	while (swapped)
	{
		swapped = false;

		for (int i = begin; i < end; i++)
		{
			if (data[i] > data[i + 1])
			{
				swap(data[i], data[i + 1]);
				swapped = true;
			}
		}

		if (!swapped)
			break;
		swapped = false;

		end--;

		for (int i = end - 1; i >= begin; i--)
		{
			if (data[i] > data[i + 1])
			{
				swap(data[i], data[i + 1]);
				swapped = true;
			}
		}

		begin++;
	}

	auto finish = chrono::high_resolution_clock::now();
	chrono::duration<double> elapsed = finish - start;
	cout << "Bubble sort3 for strings " << elapsed.count() << endl;
}

void bubblesort3(vector <int>& data)
{
	auto start = chrono::high_resolution_clock::now();

	bool swapped = true;
	int begin = 0;
	int end = data.size() - 1;

	while (swapped)
	{
		swapped = false;

		for (int i = begin; i < end; i++)
		{
			if (data[i] > data[i + 1])
			{
				swap(data[i], data[i + 1]);
				swapped = true;
			}
		}

		if (!swapped)
			break;
		swapped = false;

		end--;

		for (int i = end - 1; i >= begin; i--)
		{
			if (data[i] > data[i + 1])
			{
				swap(data[i], data[i + 1]);
				swapped = true;
			}
		}

		begin++;
	}

	auto finish = chrono::high_resolution_clock::now();
	chrono::duration<double> elapsed = finish - start;
	cout << "Bubble sort3 " << elapsed.count() << endl;
}

void selectionSortString(vector <string>& data)
{
	auto start = chrono::high_resolution_clock::now();

	int i, j, minIndex;
	string tmp;

	for (i = 0; i < data.size() - 1; i++)
	{
		minIndex = i;

		for (j = i + 1; j < data.size(); j++)

			if (data[j] < data[minIndex])
				minIndex = j;

		if (minIndex != i)
		{
			tmp = data[i];
			data[i] = data[minIndex];
			data[minIndex] = tmp;
		}
	}

	auto finish = chrono::high_resolution_clock::now();
	chrono::duration<double> elapsed = finish - start;
	cout << "Selection sort for strings " << elapsed.count() << endl;

}

void selectionSort(vector <int>& data)
{
	auto start = chrono::high_resolution_clock::now();

	int i, j, minIndex, tmp;

	for (i = 0; i < data.size() - 1; i++)
	{
		minIndex = i;

		for (j = i + 1; j < data.size(); j++)

			if (data[j] < data[minIndex])
				minIndex = j;

		if (minIndex != i)
		{
			tmp = data[i];
			data[i] = data[minIndex];
			data[minIndex] = tmp;
		}
	}

	auto finish = chrono::high_resolution_clock::now();
	chrono::duration<double> elapsed = finish - start;
	cout << "Selection sort " << elapsed.count() << endl;

}

void check_if_sortedString(vector<string>& data)
{
	int i = 1;
	int is_sorted = true;

	while ((i < data.size() && is_sorted))
	{
		if (data[i - 1] > data[i])
			is_sorted = false;

		i++;
	}

	if (!is_sorted)
		cout << "ERROR - DATA NOT SORTED" << endl << endl;

	else
		cout << "Data is sorted" << endl << endl;

}

void check_if_sorted(vector<int>& data)
{
	int i = 1;
	int is_sorted = true;

	while ((i < data.size() && is_sorted))
	{
		if (data[i - 1] > data[i])
			is_sorted = false;

		i++;
	}

	if (!is_sorted)
		cout << "ERROR - DATA NOT SORTED" << endl << endl;

	else
		cout << "Data is sorted" << endl << endl;

}

vector<string> generateRandomStrings(int n)
{
	ifstream file("text.txt");
	vector<string> all;

	string temp;
	while (file >> temp)
	{
		all.push_back(temp);
	}

	srand((unsigned int)time(NULL));
	vector<string> result;

	int size = all.size();

	for (int i = 0; i < n; ++i)
	{
		result.push_back(all[rand() % size]);
	}

	return result;
}

int main(int argc, char *argv[])
{
	int size;
	cout << "Give me number of elemets" << endl;
	cin >> size;

	vector <int> data;
	vector <int> data2;
	vector <string> dataString = generateRandomStrings(size);
	vector <string> dataStringCopy;

	srand((unsigned)time(0));

	for (int i = 0; i < size; i++)
	{
		data.push_back((rand() % size) + 1);
	}

	// selection sort
	data2 = data;
	selectionSort(data2);
	check_if_sorted(data2);
	// bubble sort
	data2 = data;
	bubbleSort(data2);
	check_if_sorted(data2);
	// insertion sort
	data2 = data;
	insertionSort(data2);
	check_if_sorted(data2);
	// insertion sort2
	data2 = data;
	insertionSort2(data2);
	check_if_sorted(data2);
	//bubble sort 2
	data2 = data;
	bubbleSort2(data2);
	check_if_sorted(data2);
	// bubble sort 3
	data2 = data;
	bubblesort3(data2);
	check_if_sorted(data2);

	/**
	String sort
	**/

	// selection sort
	dataStringCopy = dataString;
	selectionSortString(dataStringCopy);
	check_if_sortedString(dataStringCopy);
	// bubble sort
	dataStringCopy = dataString;
	bubbleSortString(dataStringCopy);
	check_if_sortedString(dataStringCopy);
	// insertion sort
	dataStringCopy = dataString;
	insertionSortString(dataStringCopy);
	check_if_sortedString(dataStringCopy);
	// insertion sort2
	dataStringCopy = dataString;
	insertionSort2String(dataStringCopy);
	check_if_sortedString(dataStringCopy);
	// bubble sort2
	dataStringCopy = dataString;
	bubbleSort2String(dataStringCopy);
	check_if_sortedString(dataStringCopy);
	// buble sort 3
	dataStringCopy = dataString;
	bubblesort3String(dataStringCopy);
	check_if_sortedString(dataStringCopy);


	system("pause");

}