#include <vector>

#include "Step.h"

void merge(std::vector<int>& arr, int l, int m, int r, std::vector<Step>& steps) {
    std::vector<int> temp;

    int i = l;
    int j = m + 1;

    while (i <= m && j <= r) {
        steps.push_back({arr, i, j, "Comparing elements"});

        if (arr[i] <= arr[j])
            temp.push_back(arr[i++]);
        else
            temp.push_back(arr[j++]);
    }

    while (i <= m) temp.push_back(arr[i++]);
    while (j <= r) temp.push_back(arr[j++]);

    for (int k = 0; k < temp.size(); k++)
        arr[l + k] = temp[k];

    steps.push_back({arr, l, r, "Merged segment"});
}

void merge_sort(std::vector<int>& arr, int l, int r, std::vector<Step>& steps) {
    if (l >= r) return;

    int mid = (l + r) / 2;

    steps.push_back({arr, l, r, "Dividing array"});

    merge_sort(arr, l, mid, steps);
    merge_sort(arr, mid + 1, r, steps);

    merge(arr, l, mid, r, steps);
}

std::vector<Step> generate_merge_sort_steps(std::vector<int> arr) {
    std::vector<Step> steps;

    merge_sort(arr, 0, arr.size() - 1, steps);

    return steps;
}