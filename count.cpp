#include <iostream>
#include <vector> 

using namespace std;

int main(){
    vector<int> arr(15);

    for(int i=0;i<15;++i){
        int temp;
        cin >> temp;
        arr.at(i) = temp;
    }

    for(auto &v : arr)
        cout << v << ' ';

    return 0;
}