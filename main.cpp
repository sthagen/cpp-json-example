#include <iostream>
#include <string>

// this include is not working yet ...
#include <nlohmann/json.hpp>

// for convenience
using json = nlohmann::json;

int main() {
  auto j = R"(
    {
      "happy": true,
      "pi": 3.14156
    }
  )"_json;
  std::string s = j.dump();

  std::cout << "compact:  " << s << "\n";
  std::cout << "indented:\n" 
            << j.dump(4) << "\n";
  
}
