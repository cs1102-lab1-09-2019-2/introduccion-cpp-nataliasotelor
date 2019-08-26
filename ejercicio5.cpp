#include<iostream>
#include<vector>

void print(std::vector <int> const &a) {
   
   for(int i=0; i < a.size(); i++)
      std::cout << a[i] << ' ';
}

int main() {
   std::vector<int> a = {1,2,3,4,5};
   print(a);
   return 0;
}
