/*
문제
N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.

입력
첫째 줄에 수의 개수 N(1 ≤ N ≤ 10,000,000)이 주어진다. 둘째 줄부터 N개의 줄에는 수가 주어진다. 이 수는 10,000보다 작거나 같은 자연수이다.

출력
첫째 줄부터 N개의 줄에 오름차순으로 정렬한 결과를 한 줄에 하나씩 출력한다.
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> count(10001, 0); // 입력값 범위: 1 ~ 10000

    // 입력받은 수의 개수를 기록
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        count[num]++;
    }

    // 오름차순 출력
    for (int i = 1; i <= 10000; i++) {
        while (count[i]--) {
            cout << i << '\n';
        }
    }

    return 0;
}
