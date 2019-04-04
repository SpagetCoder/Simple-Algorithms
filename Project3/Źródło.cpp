#include <cstdlib> 
#include <ctime> 
#include <iostream>
#include <chrono>
#include <vector>


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
	cout << "Insertion sort time " << elapsed.count() << endl;
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
	cout << "Insertion2 sort time " << elapsed.count() << endl;
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
	cout << "Bubble sort " << elapsed.count() << endl;
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
	cout << "Bubble sort2 " << elapsed.count() << endl;
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

void Bubblesort3(vector <int>& data)
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

int main(int argc, char *argv[])
{
	int size;
	cout << "Give me number of elemets" << endl;
	cin >> size;

	vector <int> data;
	vector <int> data2;
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
	Bubblesort3(data2);
	check_if_sorted(data2);

	system("pause");

}