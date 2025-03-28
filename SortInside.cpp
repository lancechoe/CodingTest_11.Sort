/*
문제
배열을 정렬하는 것은 쉽다. 수가 주어지면, 그 수의 각 자리수를 내림차순으로 정렬해보자.

입력
첫째 줄에 정렬하려고 하는 수 N이 주어진다. N은 1,000,000,000보다 작거나 같은 자연수이다.

출력
첫째 줄에 자리수를 내림차순으로 정렬한 수를 출력한다.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    string N;
    cin >> N;

    // 문자열 N의 각 자리를 벡터에 저장
    vector<char> digits(N.begin(), N.end());

    // 내림차순으로 정렬
    sort(digits.rbegin(), digits.rend());

    // 정렬된 결과 출력
    for (char digit : digits) {
        cout << digit;
    }
    cout << '\n';

    return 0;
}