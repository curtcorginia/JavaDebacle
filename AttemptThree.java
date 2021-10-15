import java.util.*;

public class Main
{
  Set<String> allDevices = new HashSet<String>();
  
  
  public Main(HashSet<String> startingListOfDevices)
  {
    this.allDevices = startingListOfDevices; 
  }
  
  
  public boolean isDevicePresent(String inputDeviceName)
  {
    
    if(allDevices.contains(inputDeviceName)) {
      return true;
    }
    return false;
  }
  
	public static void main(String[] args)
	{
  	HashSet<String> testDevicesList = new HashSet<String>();
    
    testDevicesList.add("0918391866121299");
    testDevicesList.add("1927629546127805");
    testDevicesList.add("1035547933158280");
    
    Main myDeviceProcess = new Main(testDevicesList);
    
    if(myDeviceProcess.isDevicePresent("0918391866121299") ) {
      System.out.println("Test 1 passed");
    }
    if(myDeviceProcess.isDevicePresent("9858711520456891") == false) {
      System.out.println("Test 2 passed");
    }
  }
}
    
