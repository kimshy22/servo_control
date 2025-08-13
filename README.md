# Servo Control – ROS 2 Service-Based Arduino Servo Controller

This repository contains a **ROS 2 package** that controls a servo motor via an **Arduino** connected through a serial interface.  
It uses a custom ROS 2 **service** to set the servo angle.


##  Features
- ROS 2 Humble compatible
- Custom service definition: `SetServoAngle.srv`
- Communicates with Arduino over **serial**
- Simple service call to set servo position
- Easy to extend for barrier control or robotics projects


##  Package Structure

```plaintext
servo_control/
├── CMakeLists.txt
├── package.xml
├── srv/               # Service definitions
│   └── SetServoAngle.srv
├── src/               # ROS 2 node source
│   └── servo_service_node.cpp
├── launch/            # Launch files
│   └── servo_service.launch.py
└── arduino/           # Arduino sketch (optional)
    └── ServoSerial.ino
```

##  Setup Guide

### Prerequisites
- ROS 2 Humble (or newer)
- Arduino IDE
- Micro servo (e.g., SG90)
- `serial` library:  
  ```bash
  sudo apt install ros-humble-serial
  ```

### 1. Install Package
```bash
cd ~/ros2_ws/src
git clone https://github.com/yourusername/servo_control.git
cd ~/ros2_ws
colcon build --packages-select servo_control
source install/setup.bash
```

### 2. Upload Arduino Code
```cpp
#include <Servo.h>
Servo myservo;

void setup() {
  Serial.begin(9600);
  myservo.attach(9);  // Servo on pin 9
}

void loop() {
  if (Serial.available()) {
    int angle = Serial.parseInt();
    myservo.write(angle);
    Serial.print("Set to: ");
    Serial.println(angle);
  }
}
```

##  Usage
```bash
# Launch ROS node (auto-detects /dev/ttyUSB0)
ros2 launch servo_control servo_service.launch.py

# Set servo to 45 degrees
ros2 service call /set_servo_angle servo_control/srv/SetServoAngle "{angle: 45}"
```

##  Troubleshooting
| Issue | Solution |
|-------|----------|
| "Port not found" | Check `ls /dev/tty*` and update launch file |
| Servo jitters | Add capacitor to servo power line |
| No response | Verify baud rate matches (default: 9600) |

##  Service Definition
```yaml
# SetServoAngle.srv
int32 angle       # Requested angle (0-180)
---
bool success      # True if angle set
string message    # Status info
```

##  License
Apache 2.0 

*Pro Tip:* Use `rviz2` to visualize servo positions in real-time! 
```
