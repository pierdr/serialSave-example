/*******
 * 
 This is an example code to use with serialSave app. 
 
 made by Pierluigi Dalla Rosa (www.pierdr.com)

 * 
 */

#define SENSOR_INPUT_1 A0
#define SENSOR_INPUT_2 A1
 
void setup() {
  Serial.begin(115200);
}

void loop() {
  //Send the first sensor value
  Serial.print(analogRead(SENSOR_INPUT_1));
  //Separate the signals with commas
  Serial.print(",");
  //Send the second sensor value
  Serial.print(analogRead(SENSOR_INPUT_2));
  //The ending sequence is "F", serialSave will consider this as the return
  Serial.print("F");
  delay(1500);
}
