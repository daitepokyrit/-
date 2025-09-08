#include <iostream>
#include <vector>

int main() {
    std::vector<int> spisok = {1, 2, 3, 4};
    
 
    if (!spisok.empty()) {
        spisok.pop_back();
    }
    
   
    spisok.push_back(10);
    
    
    std::cout << "[";
    for (size_t i = 0; i < spisok.size(); ++i) {
        std::cout << spisok[i];
        if (i != spisok.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl; 
    
    return 0;
}
