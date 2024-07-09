#include <iostream>
#include <string>

void callPyCrawler(const std::string& date, const std::string& from_station, const std::string& to_station) {
    std::string command = "crawler.exe " + date + " " + from_station + " " + to_station;
    std::system(command.c_str());
}