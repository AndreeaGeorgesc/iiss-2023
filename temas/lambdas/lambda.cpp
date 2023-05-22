#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    
    // Doubling the numbers using a lambda function
    std::vector<int> doubled_numbers;
    std::transform(numbers.begin(), numbers.end(), std::back_inserter(doubled_numbers),
                   [](int x) { return x * 2; });
    
    // Print the doubled numbers
    for (int num : doubled_numbers) {
        std::cout << num << " ";
    }
    
    return 0;
}
