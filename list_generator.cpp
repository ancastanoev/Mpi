#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

// Function to generate random list of lists
std::vector<std::vector<int>> generateRandomListOfLists(int numLists) {
    std::vector<std::vector<int>> listOfLists(numLists, std::vector<int>(10));
    for (int i = 0; i < numLists; ++i) {
        for (int j = 0; j < 10; ++j) {
            listOfLists[i][j] = rand() % 1000000;
        }
    }
    return listOfLists;
}

// Function to reverse each list in a list of lists
std::vector<std::vector<int>> reverseListOfLists(const std::vector<std::vector<int>>& listOfLists) {
    std::vector<std::vector<int>> reversedListOfLists = listOfLists;
    for (auto& list : reversedListOfLists) {
        std::reverse(list.begin(), list.end());
    }
    return reversedListOfLists;
}

// Function to create an almost sorted list of lists
std::vector<std::vector<int>> almostSortListOfLists(std::vector<std::vector<int>> listOfLists, double swapFraction = 0.05) {
    for (auto& list : listOfLists) {
        std::sort(list.begin(), list.end());
        int numSwaps = static_cast<int>(list.size() * swapFraction);

        for (int i = 0; i < numSwaps; ++i) {
            int idx1 = rand() % list.size();
            int idx2 = rand() % list.size();
            std::swap(list[idx1], list[idx2]);
        }
    }
    return listOfLists;
}

int main() {
    srand(time(0)); // Seed for random number generation
    std::vector<int> sizes = {1000, 10000, 100000, 3000000};

    for (int size : sizes) {
        // Generate random list of lists
        std::vector<std::vector<int>> randomListOfLists = generateRandomListOfLists(size);
        std::cout << "Random list of lists of size " << size << " generated." << std::endl;

        // Print the first list of 10 elements
        std::cout << "First list of random 10 elements: ";
        for (int elem : randomListOfLists[0]) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;

        // Generate reversed list of lists
        std::vector<std::vector<int>> reversedListOfLists = reverseListOfLists(randomListOfLists);
        std::cout << "Reversed list of lists of size " << size << " generated." << std::endl;

        // Print the first list of reversed 10 elements
        std::cout << "First list of reversed 10 elements: ";
        for (int elem : reversedListOfLists[0]) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;

        // Generate almost sorted list of lists
        std::vector<std::vector<int>> almostSortedListOfLists = almostSortListOfLists(randomListOfLists);
        std::cout << "Almost sorted list of lists of size " << size << " generated." << std::endl;

        // Print the first list of almost sorted 10 elements
        std::cout << "First list of almost sorted 10 elements: ";
        for (int elem : almostSortedListOfLists[0]) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
