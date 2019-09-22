#include <unordered_map>

bool findTriplets(int arr[], int n) {
    std::unordered_map<int, int> m;
    for (int i = 0; i < n; i++) {
        if (m.find(arr[i]) == m.end()) {
            m.insert(make_pair(arr[i], 0));
        }
        m[arr[i]]++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0 ; j < n; j++) {
            if (i == j) {
                continue;
            }

            m[arr[i]]--;
            m[arr[j]]--;

            int twoSum = arr[i] + arr[j];
    
            if (m.find(-twoSum) != m.end()) {
                if (m[-twoSum] > 0) {
                    return true;
                }
            }

            m[arr[i]]++;
            m[arr[j]]++;
        }
    }

    return false;
}