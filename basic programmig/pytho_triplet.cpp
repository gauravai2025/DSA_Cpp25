
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool checkRightTriangle(int xA, int yA, int xB, int yB, int xC, int yC) {
    int vectorABx = xB - xA, vectorABy = yB - yA;
    int vectorACx = xC - xA, vectorACy = yC - yA;
    int vectorBCx = xC - xB, vectorBCy = yC - yB;
    int vectorBAx = xA - xB, vectorBAy = yA - yB;
    int vectorCBx = xB - xC, vectorCBy = yB - yC;
    int vectorCAx = xA - xC, vectorCAy = yA - yC;

    if (1ll*vectorABx * vectorACx + 1ll*vectorABy * vectorACy == 0)
     return true;
    if (1ll*vectorBAx * vectorBCx + 1ll*vectorBAy * vectorBCy == 0) 
    return true;
    if (1ll*vectorCAx * vectorCBx + 1ll*vectorCAy * vectorCBy == 0) 
    return true;

    return false;
}


void gaurav()
{
     int xA, yA, xB, yB, xC, yC;
  
    cin >> xA >> yA >> xB >> yB >> xC >> yC;

    if (checkRightTriangle(xA, yA, xB, yB, xC, yC)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);  //   cin.tie(NULL);
    cout.tie(0); //  cout.tie(NULL);

     gaurav();


    return 0;
}
