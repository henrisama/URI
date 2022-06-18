#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
  int day, final_day;
  int hour, final_hour;
  int minute, final_minute;
  int second, final_second;
  string trash;
  
  cin >> trash >> day;
  cin >> hour >> trash >> minute >> trash >> second;

  cin >> trash >> final_day;
  cin >> final_hour >> trash >> final_minute >> trash >> final_second;

  second = final_second - second;
  minute = final_minute - minute;
  hour = final_hour - hour;
  day = final_day - day;

  if(second < 0){ second += 60; minute--; }
  if(minute < 0){ minute += 60; hour--; }
  if(hour < 0){ hour+=24; day--;}

  cout << day << " dia(s)" << endl;
  cout << hour << " hora(s)" << endl;
  cout << minute << " minuto(s)" << endl;
  cout << second << " segundo(s)" << endl;

  return 0;
}