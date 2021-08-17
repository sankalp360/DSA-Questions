#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int knapsack(int n, int w, int value[], int weight[])
{

    if (n == 0 || w == 0)
    {
        return 0;
    }

    if (weight[n - 1] > w)
    {
        return knapsack(n - 1, w, value, weight);
    }

    int included = knapsack(n - 1, w - weight[n - 1], value, weight) + value[n - 1];
    int nonIncluded = knapsack(n - 1, w, value, weight);
    return max(included, nonIncluded);
}

int main()
{
    int n = 3;
    int w = 50;
    int value[] = {100, 50, 150};
    int weight[] = {10, 20, 30};
    cout << knapsack(n, w, value, weight) << endl;
    return 0;
}
