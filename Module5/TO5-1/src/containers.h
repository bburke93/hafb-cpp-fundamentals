#ifndef CONTAINERS_H_
#define CONTAINERS_H_

#include <string>
#include <vector>
#include <map>
#include <string>

struct Data
{
    int id;
    std::string gender;
    std::string school;
    std::string state;
};

void Load_Data(std::vector<Data> &data, const std::string &in_file);

void Display_by_State(std::map<std::string, int> &st_count);

#endif /* !CONTAINERS_H_ */
