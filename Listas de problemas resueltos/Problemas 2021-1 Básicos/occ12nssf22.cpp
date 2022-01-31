#include <iostream>

using namespace std;

string s, semana[] = {
  "domingo",
  "lunes",
  "martes",
  "miercoles",
  "jueves",
  "viernes",
  "sabado"
};
int d, np, ans, c;

int main() {

  cin >> np >> d >> s;

  while (semana[c] != s) {
    c = (c + 1) % 7;
  }

  for (int i = 1; i <= d; i++) {

    if (semana[c] != "domingo" && semana[c] != "sabado" && (np % 2 == i % 2)) {
      ans++;
    }
    c = (c + 1) % 7;

  }

  cout << ans << endl;

  return 0;
}