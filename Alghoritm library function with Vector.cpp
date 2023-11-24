#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    // 1: max_element
    vector<int> numbers1 = {2, 4, 6, 8, 10};
    auto maxIt = max_element(numbers1.begin(), numbers1.end());
    cout << "Maximum element in the vector: " << *maxIt << endl;

    // 2: min_element
    vector<int> numbers2 = {1, 3, 5, 7, 9};
    auto minIt = min_element(numbers2.begin(), numbers2.end());
    cout << "Minimum element in the vector: " << *minIt << endl;

    // 3: reverse
    vector<int> numbers3 = {1, 2, 3, 4, 5};
    reverse(numbers3.begin(), numbers3.end());
    cout << "Reversed vector: ";
    for (int num : numbers3) {
        cout << num << " ";
    }
    cout << endl;

    // 4: sort
    vector<int> numbers4 = {5, 2, 8, 1, 7};
    sort(numbers4.begin(), numbers4.end());
    cout << "Sorted vector: ";
    for (int num : numbers4) {
        cout << num << " ";
    }
    cout << endl;

    // 5: unique
    vector<int> numbers5 = {1, 2, 2, 3, 3, 4, 5, 5};
    auto uniqueIt = unique(numbers5.begin(), numbers5.end());
    numbers5.erase(uniqueIt, numbers5.end());
    cout << "Vector with duplicates removed: ";
    for (int num : numbers5) {
        cout << num << " ";
    }
    cout << endl;

    // 6: rotate
    vector<int> numbers6 = {1, 2, 3, 4, 5};
    rotate(numbers6.begin(), numbers6.begin() + 2, numbers6.end());
    cout << "Rotated vector: ";
    for (int num : numbers6) {
        cout << num << " ";
    }
    cout << endl;

    // 7: fill
    vector<int> filledVector(5);
    fill(filledVector.begin(), filledVector.end(), 42);
    cout << "Vector filled with 42: ";
    for (int num : filledVector) {
        cout << num << " ";
    }
    cout << endl;

	// 8: is_sorted
    vector<int> NumberSort = {1, 2, 3, 4, 5};
    bool sortedNum = is_sorted(NumberSort.begin(), NumberSort.end());
    cout << "Vector is sorted: " << boolalpha << sortedNum << endl;
    
    // 9: all_of
    vector<int> numbers9 = {2, 4, 6, 8, 10};
    bool allEven = all_of(numbers9.begin(), numbers9.end(), [](int num) 
    { return num % 2 == 0; });
    cout << "All elements are even: " << boolalpha << allEven << endl;

    // 10: any_of 
    vector<int> numbers10 = {1, 4, 5, 6, 9};
    bool anyOdd = any_of(numbers10.begin(), numbers10.end(), [](int num) { return num % 2 != 0; });
    cout << "Any element is odd: " << boolalpha << anyOdd << endl;

    // 11: none_of
    vector<int> numbers11 = {2, 3, 6, 8, 10};
    bool noneOdd = none_of(numbers11.begin(), numbers11.end(), [](int num) { return num % 2 != 0; });
    cout << "No element is odd: " << boolalpha << noneOdd << endl;

    // 12: for_each
    vector<int> numbers12 = {1, 2, 3, 4, 5};
    for_each(numbers12.begin(), numbers12.end(), [](int num) { cout << num << " "; });
    cout << endl;

    // 13: find 
    vector<int> numbers13 = {10, 20, 30, 40, 50};
    auto it13 = find(numbers13.begin(), numbers13.end(), 30);
    if (it13 != numbers13.end()) {
        cout << "Value 30 found at position: " << distance(numbers13.begin(), it13) << endl;
    }

    // 14: find_if
    vector<int> numbers14 = {1, 2, 3, 4, 5};
    auto evenIt14 = find_if(numbers14.begin(), numbers14.end(), [](int num) { return num % 2 == 0; });
    if (evenIt14 != numbers14.end()) {
        cout << "First even element found: " << *evenIt14 << endl;
    }

    // 15: count
    vector<int> numbers15 = {1, 2, 2, 3, 2, 4, 2, 5};
    int countOfTwos15 = count(numbers15.begin(), numbers15.end(), 2);
    cout << "Number of twos: " << countOfTwos15 << endl;

    // 16: count_if
    vector<int> numbers16 = {1, 2, 3, 4, 5};
    int countEven16 = count_if(numbers16.begin(), numbers16.end(), [](int num) { return num % 2 == 0; });
    cout << "Number of even elements: " << countEven16 << endl;

    // 17: mismatch
    vector<int> numbers17 = {1, 2, 3, 4, 5};
    vector<int> numbers18 = {1, 2, 3, 5, 5};
    auto mismatchIt = mismatch(numbers17.begin(), numbers17.end(), numbers18.begin());
    if (mismatchIt.first != numbers17.end()) {
        cout << "First mismatch at position: " << distance(numbers17.begin(), mismatchIt.first) << endl;
    }

    // 18: equal
    vector<int> numbers19 = {1, 2, 3, 4, 5};
    vector<int> numbers20 = {1, 2, 3, 4, 5};
    bool areEqual = equal(numbers19.begin(), numbers19.end(), numbers20.begin());
    cout << "The two ranges are equal: " << boolalpha << areEqual << endl;

    // 19: is_permutation
    vector<int> numbers21 = {1, 2, 3, 4, 5};
    vector<int> numbers22 = {5, 4, 3, 2, 1};
    bool isPermutation = is_permutation(numbers21.begin(), numbers21.end(), numbers22.begin());
    cout << "The second range is a permutation of the first: " << boolalpha << isPermutation << endl;

    // 20: search
    vector<int> numbers23 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> subsequence = {4, 5, 6};
    auto searchIt = search(numbers23.begin(), numbers23.end(), subsequence.begin(), subsequence.end());
    if (searchIt != numbers23.end()) {
        cout << "Subsequence found starting at position: " << distance(numbers23.begin(), searchIt) << endl;
    }
	// 21: transform
    vector<int> numbers24 = {1, 2, 3, 4, 5};
    vector<int> squaredNumbers(numbers24.size());

    transform(numbers24.begin(), numbers24.end(), squaredNumbers.begin(), [](int num) {
        return num * num;
    });

    cout << "Squared numbers: ";
    for (int num : squaredNumbers) {
        cout << num << " ";
    }
    cout << endl;

    // 22: binary_search
    vector<int> numbers25 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    bool isPresent25 = binary_search(numbers25.begin(), numbers25.end(), 5);
    cout << "Is 5 present in the vector: " << boolalpha << isPresent25 << endl;

    // 23: next_permutation
    vector<int> numbers26 = {1, 2, 3};
    cout << "All permutations of {1, 2, 3}: ";
    do {
        for (int num : numbers26) {
            cout << num << " ";
        }
        cout << endl;
    } while (next_permutation(numbers26.begin(), numbers26.end()));

    // 24: prev_permutation
    vector<int> numbers26_2 = {3, 2, 1};
    cout << "All permutations of {3, 2, 1}: ";
    do {
        for (int num : numbers26_2) {
            cout << num << " ";
        }
        cout << endl;
    } while (prev_permutation(numbers26_2.begin(), numbers26_2.end()));

    // 25: random_shuffle
    vector<int> numbers27 = {1, 2, 3, 4, 5};
    random_shuffle(numbers27.begin(), numbers27.end());
    cout << "Vector after random shuffle: ";
    for (int num : numbers27) {
        cout << num << " ";
    }
    cout << endl;

    // 26: partial_sort
    vector<int> numbers28 = {5, 2, 8, 1, 7};
    partial_sort(numbers28.begin(), numbers28.begin() + 3, numbers28.end());
    cout << "Partial sorted vector (top 3 elements): ";
    for (int num : numbers28) {
        cout << num << " ";
    }
    cout << endl;

    // 27: nth_element
    vector<int> numbers29 = {5, 2, 8, 1, 7};
    nth_element(numbers29.begin(), numbers29.begin() + 2, numbers29.end());
    cout << "Vector after nth_element (third element is in its sorted position): ";
    for (int num : numbers29) {
        cout << num << " ";
    }
    cout << endl;

    // 28: merge
    vector<int> numbers30_1 = {1, 3, 5};
    vector<int> numbers30_2 = {2, 4, 6};
    vector<int> mergedNumbers(numbers30_1.size() + numbers30_2.size());

    merge(numbers30_1.begin(), numbers30_1.end(), numbers30_2.begin(), numbers30_2.end(), mergedNumbers.begin());

    cout << "Merged vector: ";
    for (int num : mergedNumbers) {
        cout << num << " ";
    }
    cout << endl;

    // 29: includes
    vector<int> numbers31_1 = {1, 2, 3, 4, 5};
    vector<int> numbers31_2 = {2, 4};
    bool includes31 = includes(numbers31_1.begin(), numbers31_1.end(), numbers31_2.begin(), numbers31_2.end());
    cout << "First vector includes the second vector: " << boolalpha << includes31 << endl;

    // 30: set_union
    vector<int> numbers32_1 = {1, 2, 3};
    vector<int> numbers32_2 = {2, 3, 4};
    vector<int> unionNumbers(numbers32_1.size() + numbers32_2.size());

    set_union(numbers32_1.begin(), numbers32_1.end(), numbers32_2.begin(), numbers32_2.end(), unionNumbers.begin());

    cout << "Union of vectors: ";
    for (int num : unionNumbers) {
        cout << num << " ";
    }
    cout << endl;

    // 31: set_intersection
    vector<int> numbers33_1 = {1, 2, 3};
    vector<int> numbers33_2 = {2, 3, 4};
    vector<int> intersectionNumbers(numbers33_1.size() + numbers33_2.size());

    set_intersection(numbers33_1.begin(), numbers33_1.end(), numbers33_2.begin(), numbers33_2.end(), intersectionNumbers.begin());

    cout << "Intersection of vectors: ";
    for (int num : intersectionNumbers) {
        cout << num << " ";
    }
    cout << endl;

    // 32: set_difference
    vector<int> numbers34_1 = {1, 2, 3};
    vector<int> numbers34_2 = {2, 3, 4};
    vector<int> differenceNumbers(numbers34_1.size() + numbers34_2.size());

    set_difference(numbers34_1.begin(), numbers34_1.end(), numbers34_2.begin(), numbers34_2.end(), differenceNumbers.begin());

    cout << "Difference of vectors: ";
    for (int num : differenceNumbers) {
        cout << num << " ";
    }
    cout << endl;

    // 33: minmax_element
    vector<int> numbers35 = {2, 4, 6, 8, 10};
    auto minmaxPair = minmax_element(numbers35.begin(), numbers35.end());
    cout << "Minimum element in the vector: " << *minmaxPair.first << endl;
    cout << "Maximum element in the vector: " << *minmaxPair.second << endl;

    // 34: lexicographical_compare
    vector<int> numbers36_1 = {1, 2, 3};
    vector<int> numbers36_2 = {1, 2, 4};
    bool lexicographicalComparison = lexicographical_compare(numbers34_1.begin(), numbers36_1.end(), numbers36_2.begin(), numbers36_2.end());
    cout << "First vector is lexicographically less than the second vector: " << boolalpha << lexicographicalComparison << endl;


    // 35: is_partitioned
    vector<int> numbers37 = {1, 2, 3, 4, 5, 6};
    auto partitionIt37 = partition_point(numbers37.begin(), numbers37.end(), [](int num) { return num % 2 == 0; });
    bool partitioned37 = is_partitioned(numbers37.begin(), numbers37.end(), [partitionIt37](int num) { return num < *partitionIt37; });
    cout << "Is the range partitioned: " << boolalpha << partitioned37 << endl;

    // 36: copy
    vector<int> numbers38 = {1, 2, 3, 4, 5};
    vector<int> copiedNumbers38(numbers38.size());
    copy(numbers38.begin(), numbers38.end(), copiedNumbers38.begin());
    cout << "Copied vector: ";
    for (int num : copiedNumbers38) {
        cout << num << " ";
    }
    cout << endl;

    // 37: copy_if
    vector<int> numbers39 = {1, 2, 3, 4, 5};
    vector<int> evenNumbers39;
    copy_if(numbers39.begin(), numbers39.end(), back_inserter(evenNumbers39), [](int num) { return num % 2 == 0; });
    cout << "Even numbers: ";
    for (int num : evenNumbers39) {
        cout << num << " ";
    }
    cout << endl;

    // 38: copy_n
    vector<int> numbers40 = {1, 2, 3, 4, 5};
    vector<int> copiedNumbers40(3);
    copy_n(numbers40.begin(), 3, copiedNumbers40.begin());
    cout << "Copied vector (first 3 elements): ";
    for (int num : copiedNumbers40) {
        cout << num << " ";
    }
    cout << endl;

    // 39: copy_backward
    vector<int> numbers41 = {1, 2, 3, 4, 5};
    vector<int> copiedNumbers41(numbers41.size());
    copy_backward(numbers41.begin(), numbers41.end(), copiedNumbers41.end());
    cout << "Copied  vector: ";
    for (int num : copiedNumbers41) {
        cout << num << " ";
    }
    cout << endl;

    // 40: move
    vector<string> strings42 = {"one", "two", "three"};
    vector<string> movedStrings42(make_move_iterator(strings42.begin()), make_move_iterator(strings42.end()));
    cout << "Original vector size: " << strings42.size() << endl;
    cout << "Moved vector size: " << movedStrings42.size() << endl;

    // 41: move_backward
    vector<string> strings43 = {"one", "two", "three"};
    vector<string> movedStrings43(strings43.size());
    move_backward(strings43.begin(), strings43.end(), movedStrings43.end());
    cout << "Original vector size: " << strings43.size() << endl;
    cout << "Moved backward vector size: " << movedStrings43.size() << endl;

    // 42: swap
    int a44 = 5, b44 = 10;
    swap(a44, b44);
    cout << "a: " << a44 << ", b: " << b44 << endl;

    // 43: swap_ranges
    vector<int> numbers45_1 = {1, 2, 3, 4, 5};
    vector<int> numbers45_2 = {6, 7, 8, 9, 10};
    swap_ranges(numbers45_1.begin(), numbers45_1.end(), numbers45_2.begin());
    cout << "Swapped ranges vector 1: ";
    for (int num : numbers45_1) {
        cout << num << " ";
    }
    cout << endl;
    cout << "Swapped ranges vector 2: ";
    for (int num : numbers45_2) {
        cout << num << " ";
    }
    cout << endl;

    // 44: iter_swap
    vector<int> numbers46 = {1, 2, 3};
    iter_swap(numbers46.begin(), numbers46.end() - 1);
    cout << "Swapped first and last elements: ";
    for (int num : numbers46) {
        cout << num << " ";
    }
    cout << endl;
    
  
}
	

