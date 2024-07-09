/*coding-GBK*/
#include <iostream>
#include <string>

void callPyCrawler(const std::string& date, const std::string& from_station, const std::string& to_station) {
    std::string command = "crawler.exe " + date + " " + from_station + " " + to_station;
    FILE* pipe = _popen(command.c_str(), "r");
    _pclose(pipe);
}
int main(){
    std::string date = "2024-07-10";
    std::string from_station = "北京";
    std::string to_station = "上海";
    std::cout<<date<<from_station<<to_station<<std::endl;
    callPyCrawler(date, from_station, to_station);
    return 0;
}