#include <iostream>

using namespace std;

void find_shortest_path_6(int distance[6][6], int s) {
    int minPath = 100000;
    int firstCity = s;
    int path[7];
    for (int secondCity = 0; secondCity <= 5; secondCity++) {
        for (int thirdCity = 0; thirdCity <= 5; thirdCity++) {
            for (int fourthCity = 0; fourthCity <= 5; fourthCity++) {
                for (int fifthCity = 0; fifthCity <= 5; fifthCity++) {
                    for (int sixthCity = 0; sixthCity <= 5; sixthCity++) {

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
                            if (currentPathDistance < minPath) {
                                minPath = currentPathDistance;
                                path[0] = firstCity;
                                path[1] = secondCity;
                                path[2] = thirdCity;
                                path[3] = fourthCity;
                                path[4] = fifthCity;
                                path[5] = sixthCity;
                                path[6] = firstCity;
                            }
                        }
                    }
                }
            }
        }
    }
    cout << "The shortest path is equal " << minPath << "\n";
    cout << "Path: ";
    for (int i = 0; i < 7; i++) {
        cout << path[i] << " ";
    }
}

void find_shortest_path_5(int distance[6][6], int s) {
    int minPath = 100000;
    int firstCity = s;
    int path[6];
    for (int secondCity = 0; secondCity <= 4; secondCity++) {
        for (int thirdCity = 0; thirdCity <= 4; thirdCity++) {
            for (int fourthCity = 0; fourthCity <= 4; fourthCity++) {
                for (int fifthCity = 0; fifthCity <= 4; fifthCity++) {

                    int orderOfCitiesInPath[5] = { firstCity, secondCity, thirdCity, fourthCity, fifthCity };
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
                        currentPathDistance += distance[firstCity][secondCity];
                        currentPathDistance += distance[secondCity][thirdCity];
                        currentPathDistance += distance[thirdCity][fourthCity];
                        currentPathDistance += distance[fourthCity][fifthCity];
                        currentPathDistance += distance[fifthCity][firstCity];
                        if (currentPathDistance < minPath) {
                            minPath = currentPathDistance;
                            path[0] = firstCity;
                            path[1] = secondCity;
                            path[2] = thirdCity;
                            path[3] = fourthCity;
                            path[4] = fifthCity;
                            path[5] = firstCity;
                        }
                    }
                }
            }
        }
    }
    cout << "The shortest path is equal " << minPath << "\n";
    cout << "Path: ";
    for (int i = 0; i < 6; i++) {
        cout << path[i] << " ";
    }
}

void find_shortest_path_4(int distance[6][6], int s) {
    int minPath = 100000;
    int firstCity = s;
    int path[5];
    for (int secondCity = 0; secondCity <= 3; secondCity++) {
        for (int thirdCity = 0; thirdCity <= 3; thirdCity++) {
            for (int fourthCity = 0; fourthCity <= 3; fourthCity++) {

                int orderOfCitiesInPath[4] = { firstCity, secondCity, thirdCity, fourthCity };
                bool citiesDifferent = true;
                for (int firstIndex = 0; firstIndex <= 3; firstIndex++) {
                    for (int secondIndex = 0; secondIndex <= 3; secondIndex++) {
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
                    currentPathDistance += distance[fourthCity][firstCity];
                    if (currentPathDistance < minPath) {
                        minPath = currentPathDistance;
                        path[0] = firstCity;
                        path[1] = secondCity;
                        path[2] = thirdCity;
                        path[3] = fourthCity;
                        path[4] = firstCity;
                    }
                }
            }
        }
    }
    cout << "The shortest path is equal " << minPath << "\n";
    cout << "Path: ";
    for (int i = 0; i < 5; i++) {
        cout << path[i] << " ";
    }
}

int main() {
    int k;
    cout << "Enter the number of cities\n";
    cin >> k;

    if (k < 4 || k > 6) {
        cout << "Inappropriate n";
        return 0;
    }

    int s;
    cout << "Enter the starting point\n";
    cin >> s;


    int distance[6][6];
    cout << "Enter the distances of roads betwen cities\n";

    for (int i = 0; i < k; i++) {
        cout << "From " << i + 1 << " city\n";
        for (int j = 0; j < k; j++) {
            cin >> distance[i][j];
        }
    }

    if (k == 6)
        find_shortest_path_6(distance, s);
    else if (k == 5)
        find_shortest_path_5(distance, s);
    else if (k == 4)
        find_shortest_path_4(distance, s);
}