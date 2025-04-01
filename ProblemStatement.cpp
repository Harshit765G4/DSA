#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> sortByOrder(vector<int>& A1, vector<int>& A2) {
    unordered_map<int, int> freq;
    for (int num : A1) {
        freq[num]++;
    }
    
    vector<int> result;
    for (int num : A2) {
        if (freq.find(num) != freq.end()) {
            result.insert(result.end(), freq[num], num);
            freq.erase(num);
        }
    }
    
    vector<int> remaining;
    for (auto& [key, value] : freq) {
        remaining.insert(remaining.end(), value, key);
    }
    
    sort(remaining.begin(), remaining.end());
    result.insert(result.end(), remaining.begin(), remaining.end());
    
    return result;
}

int main() {
    vector<int> A1 = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8};
    vector<int> A2 = {2, 1, 8, 3};
    
    vector<int> sortedArr = sortByOrder(A1, A2);
    
    for (int num : sortedArr) {
        cout << num << " ";
    }
    
    return 0;
}