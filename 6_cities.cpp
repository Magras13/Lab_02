#include <iostream>

using namespace std;

void find_shortest_path_6(int distance[6][6]) {
    int minPath = 100000;
    int firstCity = 0;
    for (int secondCity = 1; secondCity <= 5; secondCity++) {
        for (int thirdCity = 1; thirdCity <= 5; thirdCity++) {
            for (int fourthCity = 1; fourthCity <= 5; fourthCity++) {
                for (int fifthCity = 1; fifthCity <= 5; fifthCity++) {
                    for (int sixthCity = 1; sixthCity <= 5; sixthCity++) {

                        int orderOfCitiesInPath[6] = { firstCity, secondCity, thirdCity, fourthCity, fifthCity, sixthCity };
                        bool citiesDifferent = true;
                        for (int firstIndex = 0; firstIndex <= 5; firstIndex++) {
                            for (int secondIndex = 0; secondIndex <= 5; secondIndex++) {
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
                            currentPathDistance += distance[firstCity][secondCity];
                            currentPathDistance += distance[secondCity][thirdCity];
                            currentPathDistance += distance[thirdCity][fourthCity];
                            currentPathDistance += distance[fourthCity][fifthCity];
                            currentPathDistance += distance[fifthCity][sixthCity];
                            currentPathDistance += distance[sixthCity][firstCity];
                            if (currentPathDistance < minPath)
                                minPath = currentPathDistance;
                        }
                    }
                }
            }
        }
    }
    cout << "The shortest path is equal " << minPath;
}

int main() {
    const int n = 6;

    int distance[n][n];
    cout << "Enter the distances of roads betwen cities\n";

    for (int i = 0; i < n; i++) {
        cout <<"From " << i + 1 << " city\n";
        for (int j = 0; j < n; j++) {
            cin >> distance[i][j];
        }
    }

    find_shortest_path_6(distance);
}