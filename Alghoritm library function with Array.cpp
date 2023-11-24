#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

template <typename T>
void printContainer(const T& container) {
    for (const auto& elem : container) {
        cout << elem << " ";
    }
    cout << endl;
}

int main() {
    // 1: max_element
    int numbers1[] = {2, 4, 6, 8, 10};
    auto maxIt = max_element(begin(numbers1), end(numbers1));
    cout << "Maximum element in the array: " << *maxIt << endl;

    // 2: min_element
    int numbers2[] = {1, 3, 5, 7, 9};
    auto minIt = min_element(begin(numbers2), end(numbers2));
    cout << "Minimum element in the array: " << *minIt << endl;

    // 3: reverse
    int numbers3[] = {1, 2, 3, 4, 5};
    reverse(begin(numbers3), end(numbers3));
    cout << "Reversed array: ";
    printContainer(numbers3);

    // 4: sort
    int numbers4[] = {5, 2, 8, 1, 7};
    sort(begin(numbers4), end(numbers4));
    cout << "Sorted array: ";
    printContainer(numbers4);

    // 5: unique
    int numbers5[] = {1, 2, 2, 3, 3, 4, 5, 5};
    auto uniqueIt = unique(begin(numbers5), end(numbers5));
    cout << "Array with duplicates removed: ";
    printContainer(numbers5);

    // 6: rotate
    int numbers6[] = {1, 2, 3, 4, 5};
    rotate(begin(numbers6), begin(numbers6) + 2, end(numbers6));
    cout << "Rotated array: ";
    printContainer(numbers6);

    // 7: fill
    int filledArray[5];
    fill(begin(filledArray), end(filledArray), 42);
    cout << "Array filled with 42: ";
    printContainer(filledArray);

    // 8: is_sorted
    int numberSort[] = {1, 2, 3, 4, 5};
    bool sortedNum = is_sorted(begin(numberSort), end(numberSort));
    cout << "Array is sorted: " << boolalpha << sortedNum << endl;

    // 9: all_of
    int numbers9[] = {2, 4, 6, 8, 10};
    bool allEven = all_of(begin(numbers9), end(numbers9), [](int num) { return num % 2 == 0; });
    cout << "All elements are even: " << boolalpha << allEven << endl;

    // 10: any_of 
    int numbers10[] = {1, 4, 5, 6, 9};
    bool anyOdd = any_of(begin(numbers10), end(numbers10), [](int num) { return num % 2 != 0; });
    cout << "Any element is odd: " << boolalpha << anyOdd << endl;

    // 11: none_of
    int numbers11[] = {2, 3, 6, 8, 10};
    bool noneOdd = none_of(begin(numbers11), end(numbers11), [](int num) { return num % 2 != 0; });
    cout << "No element is odd: " << boolalpha << noneOdd << endl;

    // 12: for_each
    int numbers12[] = {1, 2, 3, 4, 5};
    for_each(begin(numbers12), end(numbers12), [](int num) { cout << num << " "; });
    cout << endl;

    // 13: find 
    int numbers13[] = {10, 20, 30, 40, 50};
    auto it13 = find(begin(numbers13), end(numbers13), 30);
    if (it13 != end(numbers13)) {
        cout << "Value 30 found at position: " << distance(begin(numbers13), it13) << endl;
    }

    // 14: find_if
    int numbers14[] = {1, 2, 3, 4, 5};
    auto evenIt14 = find_if(begin(numbers14), end(numbers14), [](int num) { return num % 2 == 0; });
    if (evenIt14 != end(numbers14)) {
        cout << "First even element found: " << *evenIt14 << endl;
    }

    // 15: count
    int numbers15[] = {1, 2, 2, 3, 2, 4, 2, 5};
    int countOfTwos15 = count(begin(numbers15), end(numbers15), 2);
    cout << "Number of twos: " << countOfTwos15 << endl;

    // 16: count_if
    int numbers16[] = {1, 2, 3, 4, 5};
    int countEven16 = count_if(begin(numbers16), end(numbers16), [](int num) { return num % 2 == 0; });
    cout << "Number of even elements: " << countEven16 << endl;

    // 17: mismatch
    int numbers17[] = {1, 2, 3, 4, 5};
    int numbers18[] = {1, 2, 3, 5, 5};
    auto mismatchIt = mismatch(begin(numbers17), end(numbers17), begin(numbers18));
    if (mismatchIt.first != end(numbers17)) {
        cout << "First mismatch at position: " << distance(begin(numbers17), mismatchIt.first) << endl;
    }

    // 18: equal
    int numbers19[] = {1, 2, 3, 4, 5};
    int numbers20[] = {1, 2, 3, 4, 5};
    bool areEqual = equal(begin(numbers19), end(numbers19), begin(numbers20));
    cout << "The two arrays are equal: " << boolalpha << areEqual << endl;

    // 19: is_permutation
    int numbers21[] = {1, 2, 3, 4, 5};
    int numbers22[] = {5, 4, 3, 2, 1};
    bool isPermutation = is_permutation(begin(numbers21), end(numbers21), begin(numbers22));
    cout << "The second array is a permutation of the first: " << boolalpha << isPermutation << endl;

    
}
    
