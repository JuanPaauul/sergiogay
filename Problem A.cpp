#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
  map<int, string> sample_map{{1, "one"}, {3, "two"}};
  cout << sample_map[1] << " " << sample_map[4] << endl;
  sample_map.insert(pair<int, string>(4, "four"));
  cout << sample_map[1] << " " << sample_map[4] << endl;
  sample_map[5] = "five";
  cout << sample_map[1] << " " << sample_map[5] << endl;

  cout << "Estamos haciendo un trabajo a parte";
}