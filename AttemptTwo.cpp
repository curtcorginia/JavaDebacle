#include <iostream>
#include <unordered_set>
#include <vector>
class DeviceIDHolder 
{
  public:
    std::unordered_set<std::string> u1;
    DeviceIDHolder(std::unordered_set<std::string> inputSet) 
    {
      u1 = inputSet;
    }
    
    bool isDevicePresent(std::string searchForThis) {
      std::unordered_set<std::string>::const_iterator got = u1.find (searchForThis);
      if(got != u1.end()) {
        return true;
      }
      return false;
    }
};

int main() {
  std::cout << "Hello World!\n";
  std::unordered_set<std::string> testInput;
  std::vector<std::string> testVec;
  testVec.push_back("0918391866121299");
  testVec.push_back("1927629546127805");
  testVec.push_back("1035547933158280");
  for(int i = 0; i < testVec.size(); i++)
  {
    testInput.insert(testVec[i]);
  }

  DeviceIDHolder didh(testInput);
  if(didh.isDevicePresent("0918391866121299") ) {
    std::cout << "\nTest 1 passed";
  }
  if(didh.isDevicePresent("9858711520456891") == false) {
    std::cout << "\nTest 2 passed";
  }


}