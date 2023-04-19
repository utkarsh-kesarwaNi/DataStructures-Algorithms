// Given a list of 24-hour clock time points in "HH:MM" format, return the minimum minutes difference between any two time-points in the list.
#include <algorithm>
#include <iostream>
#include <limits.h>
#include <string.h>
#include <vector>
using namespace std;

int findMinDifference(vector<string> &timePoints) {
  vector<int> minutesArray;

  for (int i = 0; i < timePoints.size(); i++) {
    int hours = stoi(timePoints[i].substr(0, 2));
    int minutes = stoi(timePoints[i].substr(3, 2));

    int totalMinutes = hours * 60 + minutes;
    minutesArray.push_back(totalMinutes);
  }

  sort(minutesArray.begin(), minutesArray.end());

  int n = minutesArray.size();
  int minMinutes = INT_MAX;
  for (int i = 0; i < n - 1; i++) {
    int difference = minutesArray[i + 1] - minutesArray[i];
    minMinutes = min(minMinutes, difference);
  }
  int diff = minutesArray[0] + 1440 - minutesArray[n - 1];
  return min(minMinutes, diff);
}

int main() {
  vector<string> timePoints{"05:31", "22:08", "00:35"};
  cout << findMinDifference(timePoints);
  return 0;
}