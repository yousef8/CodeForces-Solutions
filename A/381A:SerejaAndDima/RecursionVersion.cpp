#include <iostream>
#include <vector>

using namespace std;

int get_count(vector<int>::iterator b_it, vector<int>::iterator e_it, bool is_count) {
  if (*b_it == *e_it)
    return is_count * *b_it;

  if (*b_it > *e_it)
    return (is_count * *b_it) + get_count(++b_it, e_it, !is_count);

  return is_count * *e_it + get_count(b_it, --e_it, !is_count);
}

int main() {
  int n, s{0}, d{0};
  cin >> n;
  vector<int> cards;
  while (n)
  {
    int card;
    cin >> card;
    cards.push_back(card);
    --n;
  }

  cout << get_count(cards.begin(), --cards.end(), 1) << " " << get_count(cards.begin(), --cards.end(), 0) << "\n";
  return 0;
}