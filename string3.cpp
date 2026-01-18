#include <iostream>
#include <string>
#include <algorithm>
void printPermutations(std::string str) {
    std::sort(str.begin(), str.end()); 
    do {
        std::cout << str << std::endl;
    } while (std::next_permutation(str.begin(), str.end()));
}
int main() {
    std::string str = "ABC";
    printPermutations(str);
    return 0;
}
void countWays(int n, int m)
{
   if(n<m) return 1;
   if(n==m) return 2;
   return countWays(n-1,m) + 
   countWays(n-m,m);
}
int main()
{
    cout<<countWays(4,2);
    return 0;
}