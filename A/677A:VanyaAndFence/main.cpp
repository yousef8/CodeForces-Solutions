#include <iostream>
#include <vector>

using namespace std;

int main() {
  unsigned int n, h;
  
  int road_width{0};

  cin >> n >> h;
  vector<int> friends;
  friends.reserve(n);

  for (int i{0}; i < n; i++){
    int f_h;
    cin >> f_h;
    friends.push_back(f_h);
  }

  for (auto f : friends){
    if (f <= h)
      road_width++;
    else
      road_width += 2;
  }

  cout << road_width;
  return 0;
}