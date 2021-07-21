#include <iostream>
#include <vector>
#include <cmath>
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

void evenOdd()
{ //1)Ввести два целочисленных массива − по 10 элементов в каждом. Сфор-
	// мировать новый массив, на четных местах которого будут элементы с
	// нечетными индексами из первого массива, а на нечетных – с четными
	// индексами из второго.
	const int size = 10;
	int arr[size];
	int arr1[size];
	int tmp[size];
	int a = 0;
	int b = 1;
	for (int i = 0; i < size; ++i)
	{
		arr[i] = i;
		arr1[i] = i * 2;
	}
	for (int i = 0; i < size; ++i)
	{
		if (i % 2 == 0)
		{
			tmp[i] = arr[b];
			b += 2;
		}
		else
		{

			tmp[i] = arr[a];
			a += 2;
		}
		cout << tmp[i] << " " << endl;
	}
}

void leastSignificantDigit()
{
	// 2)Ввести массив, состоящий из 8 элементов (восемь двузначных чисел)
	// целого типа. Получить новый массив, состоящий из цифр, находящихся в
	// младших разрядах элементов исходного массива.
	const int size = 8;
	int arr[size];
	int tmp[size];
	for (int i = 0; i < size; ++i)
	{
		arr[i] = i * 11;
		tmp[i] = arr[i] % 10;
		cout << tmp[i] << " ";
	}
}

void sumNumbers()
{
	// 3)Ввести целочисленный массив, состоящий из 17-ти элементов (двузнач-
	// ные целые числа). Вычислить сумму цифр этого массива.

	const int size = 8;
	int arr[size];
	int tmp[size];
	int numbers1 = 0;
	int numbers2 = 0;
	int count = 0;
	for (int i = 0; i < size; ++i)
	{
		arr[i] = i * 11;
		numbers1 = arr[i] % 10;
		numbers2 = arr[i] / 10;
		count += numbers2 + numbers1;
	}
	cout << "numbers count = " << count << endl;
}

void sortArrays()
{
	// 4)Ввести два массива действительных чисел, состоящих из 9 и 7 элементов.
	// Сформировать третий массив из упорядоченных по возрастанию значе-
	// ний обоих массивов.
	const int size = 9;
	double arr[size]{12, 5, 18, 32, -1, 46, 7, 9, 0};
	const int size2 = 7;
	double arr1[size2] = {1, 4, 2, 6, 9, 12, 4};
	double tmp[size + size2];
	for (int i = 0, k = 0; i < size + size2; ++i)
	{
		if (i < size)
		{
			tmp[i] = arr[i];
		}
		else
		{
			tmp[i] = arr1[k++];
		}
	}
	insertionSort(tmp, size + size2);
	for (int i = 0; i < size + size2; ++i)
	{
		cout << tmp[i] << endl;
	}
}

void identicalElements()
{
	// 5) Ввести два массива X и Y, состоящих из 10-ти элементов целого типа.
	// Сформировать массив S, состоящий из одинаковых элементов исходных
	// массивов.

	const int size = 10;
	int arr[size]{12, 5, 18, 2, -1, 2, 7, 2, 0, 3};
	int arr1[size]{2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
	vector<int> tmp;
	insertionSort2(arr, size);
	insertionSort2(arr1, size);
	int count = 0;

	for (int i = 0, k = 0; i < size && k < size;)
	{

		if (arr[i] == arr1[k])
		{
			tmp.push_back(arr[i]);
			++i;
			++k;
		}
		if (arr[i] < arr1[k])
		{
			++i;
		}
		else
		{
			++k;
		}
		count++;
	}

	for (int i = 0; i < tmp.size(); ++i)
	{
		cout << tmp[i] << " ";
	}
}

void formuls()
{
	// 6)Рассчитать значения 12-ти элементов массива Y по формуле
	// y i  i 2  2 i  19 , 3 cos i . Вывести на экран этот массив и новый, разместив
	// в нем первоначально элементы, значения которых меньше среднего
	// арифметического, а потом остальные, не меняя их последовательности.
	int size = 12;
	double arr[size];
	double arr1[size];
	int tmp[size];
	double average = 0;
	for (int i = 0; i < size; ++i)
	{
		arr[i] = pow(i, 2) - (2 * i) + 19.3 * cos(i);
		average += arr[i];
	}
	average /= size;
	int k = 0;
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] < average)
		{
			arr1[k] = arr[i];
			++k;
		}
	}
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] > average)
		{
			arr1[k] = arr[i];
			++k;
		}
		cout << arr1[i] << " ";
	}
	cout << endl;
}

void differenceBetweenSumOfElements()
{
	// 7)Дан массив вещественных чисел Z(16) . Определить разность между
	// суммой элементов c четными индексами и суммой элементов, индексы
	// которых кратны трем

	const int size = 16;
	double arr[size];
	int count1 = 0;
	int count2 = 0;
	for (int i = 0; i < size; ++i)
	{
		arr[i] = i * 2, 3;
		if (i % 2 == 0)
		{
			count1 += arr[i];
		}

		if (i % 3)
		{
			count2 += arr[i];
		}
	}
	cout << count1 - count2 << endl;
}

void maxOdd()
{
	// 8) В заданном целочисленном массиве R(9) определить индекс наибольшего
	// из нечетных по значению положительных элементов
	const int size = 9;
	int R[size]{2, -45, 8, 8, -4, 8, 6, 8, 8};
	int maxindex = 0;
	for (int i = 0; i < size; ++i)
	{
		if (R[maxindex] <= R[i] && R[i] > 0 && R[i] % 2 != 0)
		{
			maxindex = i;
		}
	}
	if (maxindex == 0 && R[maxindex] % 2 == 0)
	{
		cout << "in thet array isn,t  odd number";
	}
	else
	{
		cout << maxindex;
	}
}

void sort2Arrays()
{
	// 9)Ввести с клавиатуры массив X, состоящий из 15 элементов целого типа.
	// Рассчитать элементы массива Y по формуле y i  cos x i  2 , 97 lg i .
	// Сформировать третий массив из упорядоченных по убыванию значений
	// обоих массивов.

	cout << "enter 15 integer for x" << endl;
	const int size = 15;
	int x[size];
	int y[size];
	int k = 0;
	for (int i = 0; i < size; ++i)
	{
		cin >> x[i];
		y[i] = cos(pow(x[i], 2)) + 2.97 * pow(log(pow(i, 2)), 2);
	}
	int b[size * 2];
	for (int i = 0; i < size * 2; ++i)
	{
		if (size > i)
		{
			b[i] = x[i];
		}
		if (size < i)
		{
			b[i] = y[k++];
		}
	}

	insertionSort(b, size * 2);
	for (int i = 0; i < size * 2; ++i)
	{
		cout << b[i] << " ";
	}
	cout << endl;
}

void formula2()
{
	// 10)Ввести с клавиатуры массив X, состоящий из 17 элементов целого типа.
	// Рассчитать элементы массива Y по формуле
	//    x i  3  7 , 5 , если cos  x i   0
	// y i  
	//  x i 2  5 e sin  x i  , если cos  x i   0
	// Упорядочить массив Y по возрастанию, массив X по убыванию и сфор-
	// мировать новый массив R, элементами которого являются четные по
	// индексу элементы массива X и Y.

	cout << "enter 17 integer for x" << endl;
	const int size = 17;
	int x[size];
	int y[size];
	int k = 0;
	for (int i = 0; i < size; ++i)
	{
		cin >> x[i];
		if (cos(x[i]) > 0)
		{
			y[i] = pow(x[i], 3) - 7.5;
		}
		if (cos(x[i]) <= 0)
		{
			y[i] = pow(x[i], 2) - 5 * pow(M_E, (sin(x[i])));
		}
	}

	insertionSort(x, size);
	insertionSort2(y, size);
	int R[size];
	for (int i = 0, j = 0; i < size; ++i)
	{
		if (i % 2 == 0)
		{
			R[i] = x[j];
		}
		else
		{
			R[i] = y[j];
			j += 2;
		}
		cout << R[i] << " ";
	}
	cout << endl;
}

void sumOfNumbers()
{
	// 11)Ввести массив, состоящий из 9 элементов (девять двузначных чисел)
	// целого типа. Получить новый массив, состоящий из сумм цифр элементов
	// исходного массива
	cout << "Ввести массив, состоящий из 9 элементов (девять двузначных чисел)" << endl;
	const int size = 9;
	int arr[size];
	int arr2[size];
	for (int i = 0; i < size; ++i)
	{
		cin >> arr[i];
		arr2[i] = arr[i] / 10 + arr[i] % 10;
		cout << arr2[i] << " ";
	}
	cout << endl;
}

void sortAnArrr()
{
	// 12)Ввести массив, состоящий из 12 элементов действительного типа. Распо-
	// ложить элементы в порядке убывания. Определить количество проис-
	// шедших при этом перестановок.

	const int size = 12;
	int arr[size];
	int count = 0;
	for (int i = 0; i < size; ++i)
	{
		cin >> arr[i];
	}

	for (int i = 1; i < size; ++i)
	{
		int j = i - 1;
		double key = arr[i];
		while (arr[j] < key && j >= 0)
		{
			if (arr[j] < key)
			{
				++count;
			}
			arr[j + 1] = arr[j];
			--j;
		}
		arr[j + 1] = key;
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << count;
}

void mull3()
{
	// 13) Ввести с клавиатуры целочисленный массив, состоящий из 11 элементов.
	// Вычислить сумму нечетных по значению отрицательных элементов и
	// заменить элементы кратные трем на эту сумму.
	cout << "Ввести с клавиатуры целочисленный массив, состоящий из 11 элементов." << endl;
	const int size = 12;
	int arr[size];
	int sum = 0;
	for (int i = 0; i < size; ++i)
	{
		cin >> arr[i];
		if (arr[i] < 0 && arr[i] % 2 != 0)
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
		cout << arr[i] << ", ";
	}
	cout << endl;
}

void swapArr()
{
	// 14) Ввести массив, состоящий из 14 элементов действительного типа. Поме-
	// нять местами первую половину со второй. Определить количество
	// произведенных при этом перестановок

	const int size = 12;
	int arr[size];
	int sum = 0;
	for (int i = 0; i < size; ++i)
	{
		arr[i] = i;
	}

	for (int i = 0; i < size / 2; ++i)
	{
		swap(arr[i], arr[i + size / 2]);
	}

	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void valueAndIndex()
{
	// 15) Дан массив вещественных чисел. Определить элемент массива (значение
	// и индекс), который наиболее удален от заданного вещественного числа S
	const int size = 12;
	int arr[size];
	int sum = 0;
	for (int i = 0; i < size; ++i)
	{
		arr[i] = i;
	}
	cout << "enter s Number" << endl;
	double S;
	cin >> S;
	int index = 0;
	for (int i = 0; i < size; ++i)
	{
		if (S > arr[i])
		{
			index = i;
		}
	}

	if (size - index < size / 2)
	{
		cout << arr[0] << "index =0";
	}
	else
	{
		cout << arr[size - 1] << "index =" << size;
	}
}

void amountAndQuantity()
{
	// 16) Ввести целочисленный массив, состоящий из 10 элементов. Определить
	// сумму и количество элементов, расположенных до первого отрицатель-
	// ного числа.

	cout << " Ввести целочисленный массив, состоящий из 10 элементов." << endl;
	const int size = 12;
	int arr[size];
	int sum = 0;
	int count = 0;
	bool a = true;
	for (int i = 0; i < size; ++i)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < size; ++i)
	{
		if (arr[i] > 0 && a)
		{
			sum += arr[i];
			++count;
		}
		else
		{
			a = false;
		}
	}
	cout << "количество элементов, расположенных до первого отрицатель =" << count
	     << " сумму элементов, расположенных до первого отрицатель =" << sum;
}

void LocalMinimum()
{
	// 17)Определить количество локальных минимумов в заданном числовом
	// массиве. (Локальный минимум в числовом массиве – это последователь-
	// ность трех рядом стоящих чисел, в которой среднее число меньше стоя-
	// щих слева и справа от него).

	const int size = 12;
	int arr[size];
	int count = 0;
	for (int i = 0; i < size; ++i)
	{
		cin >> arr[i];
		//arr[i]=i;
	}

	for (int i = 1; i < size - 1; ++i)
	{
		if (arr[i - 1] > arr[i] && arr[i] < arr[i + 1])
		{
			++count;
		}
	}
	cout << "Локальный минимум в числовом массиве=" << count;
}

void LocalMaximum()
{
	// 18)Определить количество локальных максимумов в заданном числовом
	// массиве. (Локальный максимум в числовом массиве – это последователь-
	// ность трех рядом стоящих чисел, в которой среднее число больше стоя-
	// щих слева и справа от него).

	const int size = 12;
	int arr[size];
	int count = 0;
	for (int i = 0; i < size; ++i)
	{
		cin >> arr[i];
		//arr[i]=i;
	}

	for (int i = 1; i < size - 1; ++i)
	{
		if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1])
		{
			++count;
		}
	}
	cout << "Локальный минимум в числовом максимум =" << count;
}

void betweenNegativeAndZero()
{
	// 19) В заданном целочисленном массиве Z(15) положительных, отрицатель-
	// ных и нулевых чисел определить сумму и вывести последовательность
	// значений элементов, которые расположены между первым отрицатель-
	// ным и нулевым элементами

	const int size = 15;
	int arr[size];
	vector<int> tmp;
	int sum = 0;
	for (int i = 0; i < size; ++i)
	{
		cin >> arr[i];
		//arr[i]=i;
	}
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] < 0)
		{
			++i;
			while (arr[i] != 0 && i < size)
			{
				sum += arr[i];
				tmp.push_back(i);
				++i;
			}
			if (arr[i] == 0)
			{
				goto st;
			}
		}
	}
st:
	for (int i = 0; i < tmp.size(); ++i)
	{
		cout << tmp[i];
	}
	cout << endl;
	cout << "сумму  последовательность значений элементов=" << sum;
}

void decreaseMonotonously()
{
	// 20)В заданном числовом массиве определить и вывести индексы последова-
	// тельностей чисел, которые монотонно убывают (каждое следующее число
	// меньше предыдущего).

	int Z[15];
	int count = 0;
	cout << "Enter 15 array elements :" << endl;
	for (int i = 0; i < 15; ++i)
	{
		cin >> Z[i];
	}
	int min = 0;
	for (int i = 1; i < 15; ++i)
	{
		if (Z[min] > Z[i])
		{
			for (int j = min + 1; j < 16; ++j)
			{
				if (Z[min] > Z[j])
				{
					cout << min << " ";
					++min;
					++i;
				}
				else
				{
					cout << min << " ";
					break;
				}
			}
		}
		else
		{
			min = i;
		}
	}
}
//21?;
void deleteElems()
{
	// 21)В заданном целочисленном массиве удалить элементы, которые встреча-
	// ются более двух раз.
	const int size = 12;
	int arr[size];
	vector<int> tmp;
	for (int i = 0; i < size; ++i)
	{
		cin >> arr[i];
	}
	int key = arr[0];
	for (int i = 0; i < size; ++i)
	{
		for (int j = 1; j < size; ++j)
		{
			if (key == arr[j])
			{
			}
		}
	}
}

void newArr()
{
	// 22)Ввести массив, состоящий из 10-ти элементов целого типа. Сформиро-
	// вать новый, расположив сначала все отрицательные элементы и нули,
	// после чего - положительные, сохраняя порядок их следования

	const int size = 12;
	int arr[size]{4, -1, 8, 9, -10, 0, 3, 4, 2, 4, 0, -1};
	vector<int> tmp;
	/*for (int i = 0; i < size; ++i)
	{
		cin >> arr[i];
	}*/

	for (int i = 0; i < size; ++i)
	{
		if (arr[i] <= 0)
		{
			tmp.push_back(arr[i]);
		}
	}
	for (int j = 0; j < size; ++j)
	{
		if (arr[j] > 0)
		{
			tmp.push_back(arr[j]);
		}
		cout << tmp[j] << " ";
	}
	cout << endl;
}

void formuls3()
{
	const int size = 10;
	double X[size]{4, -1, 8, 9, -10, 0, 3, 4, 2, 4};
	double y[size];
	double p = 0;
	for (int i = 0; i < size; ++i)
	{
		y[i] = pow(X[i], 2) + 0.3;
	}
	double even = 0;
	double odd = 0;
	for (int i = 0; i < size; ++i)
	{
		if (i % 2 == 0)
		{
			even = X[i] * y[i];
		}
		else
		{
			odd = X[i] * y[i];
		}
	}

	p = odd / even;
	cout << p;
}

void differecSum()
{
	// 24)Ввести массив, состоящий из 10 элементов (десять двузначных чисел)
	// целого типа. Получить новый массив, состоящий из разностей цифр
	// элементов исходного массива.
	const int size = 10;
	int R[size]{22, 45, 28, 11, 74, 82, 61, 84, 86, 37};
	int k[size];
	for (int i = 0; i < size; i++)
	{
		k[i] = abs(R[i] / 10 - R[i] % 10);

		cout << k[i] << " ";
	}
	cout << endl;
}

void sortHalf()
{
	// 25) Ввести массив, состоящий из 15 элементов целого типа. Упорядочить
	// массив так, чтобы все отрицательные числа были расположены вначале
	// по возрастанию, а все положительные – в конце по убыванию

	const int size = 15;
	int arr[size] = {22, 45, 28, 11, 74, 82, 61, 84, 86, 37, -1, -4, -8, -4, -6};
	insertionSort2(arr, size);
	int count = 0;

	while (arr[count] < 0)
	{
		++count;
	}

	for (int i = count; i < size; ++i)
	{
		int j = i - 1;
		int key = arr[i];
		while (arr[j] < key && j >= count)
		{
			arr[j + 1] = arr[j];
			--j;
		}
		arr[j + 1] = key;
	}

	for (int i = 0; i < size; ++i)
	{

		cout << arr[i] << " ";
	}
	cout << endl;
}

void change0()
{
	// 26) Даны два массива действительных чисел по 12 элементов в каждом.
	// Заменить нулями те элементы первого массива, которые есть во втором.
	const int size = 12;
	double arr[size] = {1, 2, 3, 4, 24, 6, 7, 47, 91, 0, 9, 43};
	double arr1[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 9, 43};

	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			if (arr[i] == arr1[j])
			{
				arr[i] = 0;
			}
		}
		cout << arr[i] << " ";
	}
	cout << endl;
}

void monoton()
{
	// 27) Задан целочисленный массив. Определить количество участков массива,
	// на котором элементы монотонно возрастают (каждое следующее число
	// больше предыдущего)

	const int size = 15;
	int arr[size] = {22, 45, 28, 11, 74, 82, 61, 84, 86, 37, -1, -4, -8, -4, -6};
	int prev{};
	int count{};
	for (prev = 0; prev < size - 1; ++prev)
	{
		int current = prev + 1;
		if (arr[prev] < arr[current])
		{
			count++;
			while (arr[prev] < arr[current])
			{
				prev++;
				current = prev + 1;
			}
		}
	}
	cout << count;
}

void evenAndOdd(int *arr, int size)
{
	// 28)Задан целочисленный массив. Определить остаток от деления суммы
	// элементов с четными индексами на сумму элементов с нечетными индек-
	// сами.
	int even{};
	int odd{};
	for (int i = 0; i < size; ++i)
	{
		if (i % 2 == 0)
		{
			even += arr[i];
		}
		{
			odd += arr[i];
		}
	}
	cout << even % odd;
}

void changeMax(int *arr, int *arr2, int size)
{
	// 30)Ввести два массива действительных чисел. Определить максимальные
	// элементы в каждом массиве и поменять их местами.
	
	int max = 0;
	int max2 = 0;

	for (int j = 1; j < size; ++j)
	{
		if (arr[max] < arr[j])
		{
			max = j;
		}

		if (arr2[max2] < arr2[j])
		{
			max2 = j;
		}
	}
	int tmp = arr[max];
	arr[max] = arr2[max2];
	arr2[max2] = tmp;

	for (int j = 0; j < size; ++j)
	{
		cout << arr2[j] << " ";
	}
	cout << endl;
}

int main()
{
	//evenOdd();
	//leastSignificantDigit();
	//sumNumbers();
	//sortArrays();
	//identicalElements();
	//formuls();
	//differenceBetweenSumOfElements();
	//maxOdd();
	//sort2Arrays();
	//formula2();
	//sumOfNumbers();
	//sortAnArrr();
	//mull3();
	//swapArr();
	//valueAndIndex();
	//amountAndQuantity();
	//LocalMinimum();
	//LocalMaximum();
	//betweenNegativeAndZero();
	//decreaseMonotonously();
	//deleteElems();
	//newArr();
	//formuls3();
	// differecSum();
	//sortHalf();
	//change0();
	//monoton();
}