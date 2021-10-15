#include <iostream>
#include <unordered_map>
#include <vector>
class DeviceIDHolder 
{
  public:
    std::unordered_map<std::string, int> u1;
    DeviceIDHolder(std::unordered_map<std::string, int> inputHashmap) 
    {
      u1 = inputHashmap;
    }

    bool isDevicePresent(std::string searchForThis) {
      if(u1[searchForThis] >= 1) {
        return true;
      }
      return false;
    }
};

int main() {
  std::cout << "Hello World!\n";
  std::unordered_map<std::string,int> testInput;
  std::vector<std::string> testVec;
  testVec.push_back("iphone");
  testVec.push_back("iphone");
  testVec.push_back("ipad");
  for(int i = 0; i < testVec.size(); i++)
  {
    testInput[testVec[i]]++;
  }

  DeviceIDHolder didh(testInput);
  if(didh.isDevicePresent("iphone") ) {
    std::cout << "\nTest 1 passed";
  }
  if(didh.isDevicePresent("mac") == false) {
    std::cout << "\nTest 2 passed";
  }


}