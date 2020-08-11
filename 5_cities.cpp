#include <iostream>

using namespace std;

void find_shortest_path_5(int distance[5][5]) {
    int minPath = 100000;
    int fistCity = 0;
    for (int secondCity = 1; secondCity <= 4; secondCity++) {
        for (int thirdCity = 1; thirdCity <= 4; thirdCity++) {
            for (int fourthCity = 1; fourthCity <= 4; fourthCity++) {
                for (int fifthCity = 1; fifthCity <= 4; fifthCity++) {
                    
                    int orderOfCitiesInPath[5] = { fistCity, secondCity, thirdCity, fourthCity, fifthCity};
                    bool citiesDifferent = true;
                    for (int firstIndex = 0; firstIndex <= 4; firstIndex++) {
                        for (int secondIndex = 0; secondIndex <= 4; secondIndex++) {
                            if (firstIndex != secondIndex) {
                                
                                int first = orderOfCitiesInPath[firstIndex];
                                int second = orderOfCitiesInPath[secondIndex];
                                if (first == second) {
                                    citiesDifferent = false;
                                    
                                }
                            }
                        }
                    }

                    if (citiesDifferent == false)
                        continue;
                    else {
                        int currentPathDistance = 0;
                        currentPathDistance += distance[fistCity][secondCity];
                        currentPathDistance += distance[secondCity][thirdCity];
                        currentPathDistance += distance[thirdCity][fourthCity];
                        currentPathDistance += distance[fourthCity][fifthCity];
                        currentPathDistance += distance[fifthCity][fistCity];
                        if (currentPathDistance < minPath)
                            minPath = currentPathDistance;
                    }
                }
            }
        }
    }
    cout << "The shortest path is equal " << minPath;
}

int main() {
    const int n = 5;

    int distance[n][n];
    cout << "Enter the distances of roads betwen cities\n";

    for (int i = 0; i < n; i++) {
        cout <<"From " << i + 1 << " city\n";
        for (int j = 0; j < n; j++) {
            cin >> distance[i][j];
        }
    }

    find_shortest_path_5(distance);
}