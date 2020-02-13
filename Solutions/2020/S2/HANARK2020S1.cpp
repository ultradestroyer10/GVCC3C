/*
    Author: Hanbyul Park
    Purpose: CCC Solution
    Date: Feb 12, 2019
    Language: C++
*/
#include <iostream>
#include <string>

using namespace std;

int abs(int x) {
    if (x < 0) 
        return -x;
    else
    {
        return x;
    }
}

int main(void) {
    int N, temp, temp2;
    float v, Mv;

    cin >> N;
    int *time = new int [N]; // 1 5 3 4 2 3 2 3 2 2
    int *distance = new int [N];

    for (int i = 0; i < N; i++) {
        cin >> time[i] >> distance[i];
    }
    
    for (int i = 0; i < N ; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (time[j] > time[j+1]) {
                temp = time[j+1]; temp2 = distance[j+1];
                time[j+1] = time[j]; distance[j+1] = distance[j];
                time[j] = temp; distance[j] = temp2;
            }
        }
    }
    //#Debugging
    // cout << endl;
    // for (int i = 0; i < N; i++) {
    //     cout
    //         << time[i] << " "
    //         << distance[i] << endl;
    // }
    // cout << endl;

    Mv = 0;
    for (int i = 0; i < N - 1; i++) {
        float v = float ( (distance[i + 1] - distance[i]) ) 
            / float ( (time[i + 1] - time[i]) ); //distance / time
        v = abs(v);

        //cout << "#debug: " << v << endl;
        if (v > Mv) { 
            Mv = v;
        }
    }

    cout << Mv;

    delete[] time;
    return 0;
}