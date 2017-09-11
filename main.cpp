#include <bits/stdc++.h>
#include "read.h"
#include "sum.h"

using namespace std;

int main() {
    pair<int, int> a = read();
    int res = sum(a.first, a.second);
    cout << res << endl;
}
