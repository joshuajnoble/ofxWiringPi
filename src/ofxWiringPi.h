#include "include/mcp3002.h"  
#include "include/mcp4802.h"  
#include "include/softPwm.h"   
#include "include/sr595.h"       
#include "include/wiringPiSPI.h"
#include "include/mcp23008.h"  
#include "include/mcp23017.h"     
#include "include/mcp23x0817.h"  
#include "include/mcp3004.h"  
#include "include/pcf8574.h"  
#include "include/softServo.h"  
#include "include/wiringPi.h"     
#include "include/wiringSerial.h"
#include "include/mcp23016.h"  
#include "include/mcp23s08.h"     
#include "include/mcp23x08.h"    
#include "include/mcp3422.h"  
#include "include/pcf8591.h"
#include "include/softTone.h"
#include "include/wiringPiI2C.h"
#include "include/wiringShift.h"


class ofxWiringPi {

	void setupi2c() {
		system("gpio load i2c");
	}

	~ofxWiringPi() {

	}

};
