//
// Created by Gergely on 2019. 06. 14..
//

#ifndef MERGESORT_UTIL_MSORT_H
#define MERGESORT_UTIL_MSORT_H

#include <vector>
#include <algorithm>



template<class T, class Pred = std::less<T> >
class mergesort_util {

	T* arr;
	bool isSorted;
	int sizeOf;

public:

	mergesort_util(T* arr, int sizeArr, bool sort) : arr(arr), isSorted(sort), sizeOf(sizeArr) {}

	mergesort_util(T* arr, int sizeArr) : arr(arr), sizeOf(sizeArr) {
		Pred pred;
		std::sort(arr, arr + sizeOf, pred);
	}

	void split(int from, int to) {
		T o;
		for (size_t i = from; i < to; i+=2)
		{
			if (arr[i] > arr[i + 1]) {
				o = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = o;
			}
		}
	}

	void set_merge_on() {
		isSorted = true;
	}

	void sort() {
		Pred pred;
		std::sort(arr, arr + sizeOf,pred);
	}

	void toString() {
		for (size_t i = 0; i < sizeOf; i++)
		{
			std::cout << arr[i] << " ";
		}
		std::cout << "\n";
	}

};

template<class T,class Pred >
void mergesort(T* arr, int sizeOf, Pred pred){
	std::sort(arr, arr + sizeOf, pred);
}

template<class T>
void mergesort(T* arr, int sizeOf) {
	std::sort(arr, arr + sizeOf);
}

template<class T, class Pred>
void mergesort(std::vector<T>& vec, Pred pred) {
	std::sort(vec.begin(),vec.end(),pred);
}

template<class T>
void mergesort(std::vector<T>& vec) {
	std::sort(vec.begin(), vec.end());
}

#endif //MERGESORT_UTIL_MSORT_H
