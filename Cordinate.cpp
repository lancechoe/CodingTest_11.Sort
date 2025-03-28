/*
문제
2차원 평면 위의 점 N개가 주어진다. 좌표를 y좌표가 증가하는 순으로, y좌표가 같으면 x좌표가 증가하는 순서로 정렬한 다음 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 점의 개수 N (1 ≤ N ≤ 100,000)이 주어진다. 둘째 줄부터 N개의 줄에는 i번점의 위치 xi와 yi가 주어진다. (-100,000 ≤ xi, yi ≤ 100,000) 좌표는 항상 정수이고, 위치가 같은 두 점은 없다.

출력
첫째 줄부터 N개의 줄에 점을 정렬한 결과를 출력한다.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 정렬 기준을 위한 비교 함수
bool compare(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.second == b.second) return a.first < b.first; // y좌표가 같으면 x좌표 오름차순
    return a.second < b.second; // y좌표 오름차순
}

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> points(N);

    // 입력 받기
    for (int i = 0; i < N; i++) {
        cin >> points[i].first >> points[i].second;
    }

    // 정렬
    sort(points.begin(), points.end(), compare);

    // 정렬된 결과 출력
    for (const auto& p : points) {
        cout << p.first << " " << p.second << '\n';
    }

    return 0;
}
