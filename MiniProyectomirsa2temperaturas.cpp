#include <isotream>
#include <vector>
#include <iomanip>

using namespace std;

intt main() {
    const int DIAS = 7;
    vector<double> temps;

    //capturar datos  con push y back
    for (int i = 0; i < DIAS; ++i) {
        double t;
        cout << "Temperatura del dia " << (i + 1) << ":";
        cin >> t;
        temps.push_back(t);
    }

    //Para dos decimales

}
