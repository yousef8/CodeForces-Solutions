#include <iostream>
#include <deque>

using namespace std;


int main()
{
	int n, s {0}, d {0};
	cin >> n;
  deque<int> cards;

  for (int i{0}; i < n; i++){
    int card;
    cin >> card;
    cards.push_back(card);
  }

  bool is_sereja = 1;
  while (!cards.empty())
  {
    if (cards.front() > cards.back()){
      (is_sereja) ? s += cards.front() : d += cards.front();
      cards.pop_front();
    }
    else {
      (is_sereja) ? s += cards.back() : d += cards.back();
      cards.pop_back();
    }
    is_sereja = !is_sereja;
  }

  cout << s << " " << d;
	return 0;
}
