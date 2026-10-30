#include <iostream>
#include <vector> 

using namespace std;

int main(){
    vector<int> arr(10);

    for(int i=0;i<10;++i){
        int temp;
        cin >> temp;
        arr.at(i) = temp;
    }

    for(auto &v : arr)
        cout << v << ' ';

    return 0;
}