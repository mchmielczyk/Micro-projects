#include <vector>
using namespace std;
std::vector<int> tribonacci(vector<int> signature, int n)
{
    // Test if it can get proper result
    if (n < 3 || signature.size() < 3) {
        // If input array is too small to get through complex algorithm
        vector<int> result = {};
        for (int i = 0; i < n; i++)
        {
            result.push_back(signature[i]);
        }
        return result;
    }
    //If everything is okay proceed through algorithm
    vector<int> result(signature.begin(), signature.end());
    for (int i = 0; i < (n - 3); i++)
    {
        int number = result[i] + result[i + 1] + result[i + 2];
        result.push_back(number);
    }
    return result;
}
void main()
{
    vector<int> signature = { 0, 1, 1 }; //Example Tribonacci starting Input
    tribonacci(signature,10) // Example array size Input
}
// Expected Output "0,1,1,2,4,7,13,24,44,81"