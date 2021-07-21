#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void insertionSort(T *arr, int size)
{
	for (int i = 1; i < size; ++i)
	{
		int j = i - 1;
		T key = arr[i];
		while (arr[j] < key && j >= 0)
		{
			arr[j + 1] = arr[j];
			--j;
		}
		arr[j + 1] = key;
	}
}

template <typename T>
void insertionSort2(T *arr, int size)
{
	for (int i = 1; i < size; ++i)
	{
		int j = i - 1;
		T key = arr[i];
		while (arr[j] > key && j >= 0)
		{
			arr[j + 1] = arr[j];
			--j;
		}
		arr[j + 1] = key;
	}
}

void findEven()
{
	// 1)   Ввести массив, состоящий из 14 элементов целого типа. Найти количест-
	//      во элементов четных по значению.
	const int size = 14;
	int arr[size];
	for (int i = 0; i < size; ++i)
	{
		arr[i] = i;
	}

	int count = 0;
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] % 2 == 0)
		{
			++count;
		}
	}
	cout << count << endl;
}

void arithmeticAverage()
{
	//2) Ввести массив, состоящий из 12 элементов целого типа. Получить новый
	// массив, заменив значение пятого элемента среднеарифметическим
	// исходного массива.

	const int size = 12;
	int arr[size];
	int count = 0;
	for (int i = 0; i < size; ++i)
	{
		arr[i] = i;
		count += arr[i];
	}
	arr[5] = count / size;
	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << endl;
	}
}

void absoluteMeaning()
{
	//3) Задан целочисленный массив, состоящий из 11 элементов. Найти количе-
	// ство элементов, абсолютное значение которых больше среднего арифме-
	// тического
	int count = 0;
	int average = 0;
	int size = 11;
	int arr[11] = {4, 6, 7, -1, -6, 5, 4, 6, 67, 8, -80};
	for (int i = 0; i < size; ++i)
	{
		average += arr[i];
	}
	average /= size;
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] < 0)
		{
			if (average < arr[i] * -1)
			{
				++count;
			}
		}
		else
		{
			if (average < arr[i])
			{
				++count;
			}
		}
	}
	cout << count << endl;
}

void maximumAndFirst()
{
	//4) Ввести целочисленный массив, состоящий из 10 элементов. Поменять
	// местами максимальный и первый элементы.
	const int size = 10;
	int arr[size];
	int count = 0;
	int rezindex = 0;
	for (int i = 0; i < size; ++i)
	{
		arr[i] = i;
		count += arr[i];
	}
	for (int i = 0; i < size; ++i)
	{
		if (arr[rezindex] < arr[i])
		{
			rezindex = i;
		}
	}
	swap(arr[rezindex], arr[0]);
	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << ",";
	}
}

void swapMinMax()
{
	// 5)Ввести целочисленный массив, состоящий из 9 элементов. Поменять
	//   местами максимальный и минимальный элементы массива

	const int size = 9;
	int arr[size];
	int count = 0;
	int max = 0;
	int min = 0;
	for (int i = 0; i < size; ++i)
	{
		arr[i] = i;
		count += arr[i];
	}

	for (int i = 0; i < size; ++i)
	{
		if (arr[max] < arr[i])
		{
			max = i;
		}
		if (arr[min] > arr[i])
		{
			min = i;
		}
	}
	swap(arr[min], arr[max]);
	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << ",";
	}
}

void EvenAndOdd()
{
	//6) Ввести массив, состоящий из 20 элементов целого типа. Определить
	// каких элементов больше четных или нечетных по значению
	const int size = 20;
	int arr[size];
	int even = 0;
	int odd = 0;
	for (int i = 0; i < size; ++i)
	{
		arr[i] = i;
		if (arr[i] % 2 == 0)
		{
			++even;
		}
		else
		{
			++odd;
		}
	}
	if (odd < even)
		cout << "even>odd" << endl;
	if (odd > even)
	{
		cout << "odd >even" << endl;
	}
	else
	{
		cout << "odd==even" << endl;
	}
}

void realType()
{
	//7) Задан массив, состоящий из 15 элементов вещественного типа. Опреде-
	//   лить количество элементов, значения которых больше первого элемента.

	const int size = 15;
	double arr[size];
	const int first = 0;
	arr[first] = 12;
	int count = 0;

	for (int i = 1; i < size; ++i)
	{
		arr[i] = i * 2;
		if (arr[first] < arr[i])
		{
			++count;
		}
	}
	cout << count;
}

void minMax()
{
	// 8) Задан массив, состоящий из 16 элементов вещественного типа. Опреде-
	// лить индексы (местоположение) максимального и минимального элемен-
	// тов
	const int size = 16;
	double arr[size];
	int max = 0;
	int min = 0;
	for (int i = 0; i < size; ++i)
	{
		arr[i] = i;
	}

	for (int i = 0; i < size; ++i)
	{
		if (arr[max] < arr[i])
		{
			max = i;
		}
		if (arr[min] > arr[i])
		{
			min = i;
		}
	}

	cout << "min index =" << min << " "
	     << "max index=" << max;
}

void differenceAndAverage()
{
	// 9) Дан массив, состоящий из 15 элементов целого типа. Получить новый
	// массив, как разность между элементами исходного массива и его средне-
	// го арифметического.

	int average = 0;
	int size = 15;
	int arr[size];
	for (int i = 0; i < size; ++i)
	{
		arr[i] = i * 2;
		average += arr[i];
	}
	average /= size;
	for (int i = 0; i < size; ++i)
	{
		arr[i] = average - arr[i];
		cout << arr[i] << "  ";
	}
	cout << endl;
}

void sum()
{
	// 10) Ввести целочисленный массив, состоящий из 17 элементов (положитель-
	// ных и отрицательных). Найти сумму элементов, абсолютное значение
	// которых больше среднеарифметического модулей отрицательных эле-
	// ментов.

	int average = 0;
	int count = 0;
	int size = 17;
	int addindex = 0;
	int arr[size] = {4, 6, 7, -1, -6, 5, 4, 6, 67, 8, -80, 12, 13, -5, 45, 26, -60};
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] < 0)
		{
			average += arr[i];
			++count;
		}
	}
	average /= count;
	for (int i = 0; i < size; ++i)
	{
		if (average < abs(arr[i]))
		{
			addindex += arr[i];
		}
	}

	cout << addindex;
}

void even()
{
	// 11)Ввести целочисленный массив, состоящий из 14 элементов. Вычислить
	// количество и сумму четных по значению положительных элементов

	int sum = 0;
	int count = 0;
	int size = 14;
	int arr[size] = {4, 6, 7, -1, -6, 5, 4, 6, 67, 8, -80, 12, 13, -5};
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] > 0 && arr[i] % 2 == 0)
		{
			sum += arr[i];
			++count;
		}
	}
	cout << "even sum == " << sum << " "
	     << "even count= " << count << endl;
}

void descending()
{
	// 12)Ввести массив, состоящий из 12 элементов действительного типа. Распо-
	// ложить элементы в порядке убывания. Вычислить сумму максимального
	// и минимального элементов массива

	const int size = 12;
	double arr[size];
	int max = 0;
	int min = 0;
	for (int i = 0; i < size; ++i)
	{
		arr[i] = i;
	}

	insertionSort(arr, size);
	for (int i = 0; i < size; ++i)
	{
		if (arr[max] < arr[i])
		{
			max = i;
		}
		if (arr[min] > arr[i])
		{
			min = i;
		}
		cout << arr[i] << "   ";
	}
	cout << endl;
	cout << min << max;
}

void sumAnddifferenceMinMax()
{
	//  13)Ввести целочисленный массив, состоящий из 15 элементов. Определить
	// сумму и разность максимального и минимального элементов.

	const int size = 15;
	int arr[size];
	int max = 0;
	int min = 0;
	for (int i = 0; i < size; ++i)
	{
		arr[i] = i + 3;
	}

	for (int i = 0; i < size; ++i)
	{
		if (arr[max] < arr[i])
		{
			max = i;
		}
		if (arr[min] > arr[i])
		{
			min = i;
		}
	}
	cout << "sum min and max = " << arr[max] + arr[min] << "diference max and min = " << arr[max] - arr[min] << endl;
}

void swapEven()
{
	// 14)Ввести целочисленный массив, состоящий из 17 элементов. Заменить
	// элементы кратные трем на сумму нечетных по значению элементов

	int sum = 0;
	int count = 0;
	int size = 17;
	int arr[size];
	for (int i = 0; i < size; ++i)
	{
		arr[i] = i * 2;
		if (arr[i] % 2 == 0)
		{
			sum += arr[i];
		}
	}
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] % 3 == 0)
		{
			arr[i] = sum;
		}
		cout << arr[i] << " ";
	}
}

void sortarray()
{
	// 15)Ввести массив, состоящий из 14 элементов действительного типа. Распо-
	// ложить элементы c 1 по 7 по возрастанию, а с 8 по 14 - в порядке убыва-
	// ния.

	int size = 14;
	double arr[size];

	double tmp1[size / 2];
	double tmp2[size / 2];
	int k = 0;
	for (int i = 0; i < size; ++i)
	{
		arr[i] = i * 2;
		if (i < size / 2)
		{
			tmp1[i] = arr[i];
		}
		else
		{
			tmp2[k++] = arr[i];
		}
	}

	insertionSort(tmp2, size / 2);
	insertionSort2(tmp1, size / 2);
	int j = 0;
	k = 0;
	for (int i = 0; i < size; ++i)
	{

		if (i < size / 2)
		{
			arr[i] = tmp1[j];
			++j;
		}
		else
		{
			arr[i] = tmp2[k];
			++k;
		}
		cout << arr[i] << " ";
	}
}

void between()
{
	// 16)Ввести массив, состоящий из 12 элементов действительного типа. Опре-
	// делить количество чисел, стоящих между максимальным и минимальным
	// элементами.

	const int size = 16;
	double arr[size];
	int max = 0;
	int min = 0;
	for (int i = 0; i < size; ++i)
	{
		arr[i] = i;
	}

	for (int i = 0; i < size; ++i)
	{
		if (arr[max] < arr[i])
		{
			max = i;
		}
		if (arr[min] > arr[i])
		{
			min = i;
		}
	}

	cout << max - min << endl;
}

void negativeProductivPositive()
{
	// 17)Ввести массив, состоящий из 15 элементов целого типа. Определить
	// количество отрицательных, произведение положительных и количество
	// нулевых элементов.

	const int size = 15;
	double arr[size];
	int negativ = 0;
	int productiv = 0;
	int positiv = 0;
	for (int i = 0; i < size; ++i)
	{
		arr[i] = i;
		if (arr[i] < 0)
		{
			++negativ;
		}
		if (arr[i] > 0)
		{
			positiv *= arr[i];
		}
		if (arr[i] == 0)
		{
			productiv++;
		}
	}
	cout << positiv << productiv << negativ << endl;
}

void maxMininterval()
{
	// 18)Ввести массив, состоящий из 12 элементов действительного типа. Опре-
	// делить границы интервала, в котором находятся значения элементов
	// массива

	const int size = 16;
	double arr[size];
	int max = 0;
	int min = 0;
	for (int i = 0; i < size; ++i)
	{
		arr[i] = i;
	}

	for (int i = 0; i < size; ++i)
	{
		if (arr[max] < arr[i])
		{
			max = i;
		}
		if (arr[min] > arr[i])
		{
			min = i;
		}
	}
	cout << "[" << min << "," << max << "]" << endl;
}

void sumArrPositivNumber()
{
	// 19) Дан массив − 19 элементов целого типа. Найти сумму элементов, распо-
	// ложенных до первого отрицательного элемента. Если отрицательных
	// элементов нет, то выдать соответствующее сообщение.

	const int size = 11;
	double arr[size] = {4, 6, 7, 1, 6, 5, 4, 6, 67, 8, 80};
	int positiv = 0;
	int count = 0;
	for (int i = 0; i < size; ++i)
	{

		if (arr[i] > 0)
		{
			positiv += arr[i];
		}
		else
		{
			++count;
		}
	}
	if (count != 0)
	{
		cout << positiv;
	}
	else
	{
		cout << "no negative";
	}
}

void swapMin()
{
	// 21)В заданном массиве М(12) действительных чисел увеличить минималь-
	// ный элемент в три раза и поменять местами с последним

	const int size = 16;
	double arr[size];
	int min = 0;
	for (int i = 0; i < size; ++i)
	{
		arr[i] = i + 2;
	}

	for (int i = 0; i < size; ++i)
	{

		if (arr[min] > arr[i])
		{
			min = i;
		}
	}
	arr[min] *= 3;
	swap(arr[min], arr[size - 1]);
	cout << arr[min] << arr[size - 1];
}

void sumAndcount()
{
	// 24)Ввести массив, состоящий из 12 элементов действительного типа. Опре-
	// делить количество и сумму чисел, значения которых меньше значения
	// последнего элемента.

	const int size = 12;
	double arr[size];
	int last = arr[size - 1];
	int count = 0;
	int sum = 0;
	for (int i = 0; i < size; ++i)
	{
		if (last > arr[i])
		{
			++count;
			sum += arr[i];
		}
	}
	cout << "sum=" << sum << "count=" << count;
}

void count()
{
	// 25)Дан массив, состоящий из 15 элементов целого типа (положительных и
	// отрицательных). Получить новый массив, элементы которого определя-
	// ются как разность между элементами исходного массива и суммой
	// положительных элементов заданного массива.

	int count = 0;
	int average = 0;
	int size = 15;
	int arr[size] = {4, 6, 7, -1, -6, 5, 4, 6, 67, 8, -80, 3, 45, 6};
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] > 0)
		{
			average += arr[i];
		}
	}
	vector<int> tmp;
	for (int i = 0; i < size; ++i)
	{
		tmp.push_back(arr[i] - average);
		cout << tmp[i];
	}
}

void evensSwapMax()
{
	// 27)В массиве целых чисел с количеством элементов 19 определить макси-
	// мальное число и заменить им все четные по значению элементы

	const int size = 19;
	int arr[size];
	int max = 0;
	for (int i = 0; i < size; ++i)
	{
		arr[i] = i;
	}

	for (int i = 0; i < size; ++i)
	{
		if (arr[max] < arr[i])
		{
			max = i;
		}
	}
	for (int j = 0; j < size; ++j)
	{
		if (arr[j] % 2 == 0)
		{
			arr[j] = arr[max];
		}
		cout << arr[j];
	}
}

void posSubNeg()
{
	//29)Дан массив, состоящий из 18 элементов действительного типа. Опреде-
	// лить частное от деления произведения всех положительных элементов и
	// суммы модулей всех отрицательных

	int size = 11;
	int arr[size] = {4, 6, 7, -1, -6, 5, 4, 6, 67, 8, -80};
	int negativ = 0;
	int positiv = 1;
	for (int i = 0; i < size; ++i)
	{
		if(arr[i]<0)
		{
			negativ+=arr[i];
		}
		if(arr[i]>0)
		{
			positiv*=arr[i];
		}
	}

	cout<<positiv-negativ;
}

void minSumAndIndex()
{
	const int size = 16;
	double arr[size];
	int max = 0;
	int min = 0;
	for (int i = 0; i < size; ++i)
	{
		arr[i] = i;
	}

	for (int i = 0; i < size; ++i)
	{
		
		if (arr[min] > arr[i])
		{
			min = i;
		}
	}
	cout<<arr[min]-min;
}

int main()
{
	//findEven();
	//arithmeticAverage();
	//absoluteMeaning();
	//maximumAndFirst();
	//swapMinMax();
	//EvenAndOdd();
	//realType();
	//minMax();
	//differenceAndAverage();
	//sum();
	//even();
	//descending();
	//sumAnddifferenceMinMax();
	//swapEven();
	//sortarray();
	//maxMininterval();
	//sumArrPositivNumber();
	//swapMin();
	//sumAndcount();
	// count();
	//evensSwapMax();
	//minSumAndIndex();
	//posSubNeg()
}
