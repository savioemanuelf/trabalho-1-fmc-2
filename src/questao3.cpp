#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>

/**
 * +---=== Questão 3 ===---+ 
 * |
 * |
 * |
 * +-----------------------+
*/

std::vector<int> generateVector(int n, int m){
    std::vector<int> a;
    for (int i = 1; i <= m; i++){
        a.push_back(i * n);
    }
    return a;
}

int main() {
    std::vector<int>a = generateVector(6, 8);
    std::vector<int>b = generateVector(8, 10);

    std::unordered_map<int, int> frequence;

    for (const int &i : b){
        frequence[i]++;
    }

    std::cout << "A diferença dos dois conjuntos: ";
    for (const int &i : a){
        if (frequence.find(i) == frequence.end()){
            std::cout << i << " ";
        }
    }
    std::cout << "\n";

    return 0;
}
