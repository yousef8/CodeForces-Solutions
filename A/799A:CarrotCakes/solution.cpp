#include <iostream>

using namespace std;

int main() {
  int n, t, k, d, timer{0}, sec_timer{0}, cakes{0};
  float one_oven, two_oven;
  cin >> n >> t >> k >> d;

  while (cakes < n){
   timer += t;
   cakes += k;
  }
  one_oven = timer;

  timer = cakes = 0;

  while (cakes < n){
    timer += t;

    if (timer%t == 0)
      cakes += k;
    
    if (timer > d){
      sec_timer += t;
      if (sec_timer%t == 0)
        cakes += k;
    }
  }

  two_oven = timer;

  if (one_oven <= two_oven)
    cout << "NO\n";
  else
    cout << "YES\n";
  return 0;
}