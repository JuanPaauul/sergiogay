#include <iostream>
using namespace std;

int n, q, x1, x2, y, sum;
int beam[100], bi = 1, res[100], resi = 0;

int countEnemies()
{
  int res = 0;
  for (int i = 0; i < n; i++)
  {
    res = res + beam[i];
  }
  return res;
}

void solve()
{
  cin >> x1 >> x2 >> y;
  for (int i = 0; i < n; i++)
  {
    if (i + 1 > x1 && i + 1 < x2 && beam[i] != 0)
    {
      beam[i] = 0;
      beam[x1 - 1] = 1;
      beam[x2 - 1] = 1;
    }
  }
}

void testCases()
{
  for (int i = 0; i < q; i++)
  {
    solve();
  }
  res[resi] = countEnemies();
  resi++;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t, i = 0;
  cin >> t;
  beam[2] = 1;
  while (t--)
  {
    cin >> n >> q;
    i++;
    testCases();
  }
  for (int i = 0; i < resi; i++)
  {
    cout << res[i] << endl;
  }
}