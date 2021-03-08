
#include <iostream>
#include <Lib.h>
#include <chrono>
#include <cmath>

using namespace std;

int main() {
    //you must change/expand this code
    cout<<"n,TA(n),TB(n),TC(n),log(n),log(TA),log(TB),log(TC)"<<endl;
    for (int n = 100; n<= 3000; n=n+100){
        double nlog= log2(n);

    auto astart = chrono::steady_clock::now();
    Lib::algorithmA(n);
    auto aend = chrono::steady_clock::now();
    int timea=chrono::duration_cast<std::chrono::milliseconds>(aend-astart).count();
    double talog= log2(timea);


    auto bstart = chrono::steady_clock::now();
    Lib::algorithmB(n);
    auto bend = chrono::steady_clock::now();
    int timeb=chrono::duration_cast<std::chrono::milliseconds>(bend-bstart).count();
    double tblog= log2(timeb);

    auto cstart = chrono::steady_clock::now();
    Lib::algorithmC(n);
    auto cend = chrono::steady_clock::now();
    int timec=chrono::duration_cast<std::chrono::milliseconds>(cend-cstart).count();
    double tclog= log2(timec);

        cout<<n<<","
        <<chrono::duration_cast<std::chrono::milliseconds>(aend-astart).count()
        <<","<<chrono::duration_cast<std::chrono::milliseconds>(bend-bstart).count()
                <<","<<chrono::duration_cast<std::chrono::milliseconds>(cend-cstart).count()
                <<","<<nlog<<","<<talog<<","<<tblog<<","<<tclog
        <<endl;
    }
    cout << "Successful execution" <<endl;
    return 0;
}