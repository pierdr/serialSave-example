# serialSave-examples
--
<div style="text-align:center">
<img  width="256" src="http://payload532.cargocollective.com/1/23/757295/12942403/icon_1024.png"></img>
</div>

serialSave it's a tool for saving incoming signals from a microcontroller. 

You can download serialSave [here](https://itunes.apple.com/us/app/serialsave/id1249714035?mt=12).

### What do you need to know:
- serialSave is a Mac Application. 
- serialSave is _extremely_ easy!
- If you are using Arduino, you can use `Serial.print` to output your sensor value for serialSave to be saved in a CSV file in this way:<br>
`Serial.print(sensorValue)`<br>
`Serial.print('F')`
- You can also send multiple values (up to 8) if separated by a comma:<br>
`Serial.print(sensor1);`<br>
  `Serial.print(",");`<br>
  `Serial.print(sensor2);`<br>
  `Serial.print("F");`
- The character _F_ determins the end of a message.
- Check the sample code for your arduino.
  

