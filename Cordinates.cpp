/*
문제
수직선 위에 N개의 좌표 X1, X2, ..., XN이 있다. 이 좌표에 좌표 압축을 적용하려고 한다.

Xi를 좌표 압축한 결과 X'i의 값은 Xi > Xj를 만족하는 서로 다른 좌표 Xj의 개수와 같아야 한다.

X1, X2, ..., XN에 좌표 압축을 적용한 결과 X'1, X'2, ..., X'N를 출력해보자.

입력
첫째 줄에 N이 주어진다.

둘째 줄에는 공백 한 칸으로 구분된 X1, X2, ..., XN이 주어진다.

출력
첫째 줄에 X'1, X'2, ..., X'N을 공백 한 칸으로 구분해서 출력한다.

제한
1 ≤ N ≤ 1,000,000
-109 ≤ Xi ≤ 109
*/


#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<int> original(N);
    vector<int> sortedValues;

    // 입력 받기
    for (int i = 0; i < N; i++) {
        cin >> original[i];
        sortedValues.push_back(original[i]);
    }

    // 중복 제거 & 정렬
    sort(sortedValues.begin(), sortedValues.end());
    sortedValues.erase(unique(sortedValues.begin(), sortedValues.end()), sortedValues.end());

    // 압축된 좌표 매핑
    unordered_map<int, int> indexMap;
    for (int i = 0; i < sortedValues.size(); i++) {
        indexMap[sortedValues[i]] = i;
    }

    // 결과 출력
    for (int i = 0; i < N; i++) {
        cout << indexMap[original[i]] << " ";
    }

    return 0;
}
