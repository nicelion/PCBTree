# PCBTree
A Christmas tree shaped circuit board that every nerd will love!

## About
PCBTree fills it's name quite well as it is, exactly what it says: A PCB tree. The Christmas tree shaped printed circuit board is populated with 6 green LEDs and 6 red LEDs and two yellow LEDs, all controlled by an ATTiny85 to allow the red and green LEDs to flash to you liking.

## Instruction

### How to operate
If you were given a PCBTree, below is some basic information on how it can be used.

#### Plugging In and Turning On
To first turn on PCBTree, one must plug in the provided 5V AC-DC adapter into the barrel jack connector located on the beck of the device, and into the wall. 

Once this is done, the switch on the back of the device must also be switched to the "on" state, and PCBTree will then turn on.

#### Adjusting Blink Speed
A dial, professionally, a potentiometer, can be found on the base, towards the front. This dial can be used to adjust the speed the LEDs will flash. The equation is below:

<p align="center">
  <img src="https://latex.codecogs.com/png.latex?\LARGE&space;50&space;\geq&space;p_{pot}&space;\geq&space;500" title="\LARGE 50 \geq p_{pot} \geq 500" />
  <br>
  <img src="https://latex.codecogs.com/png.latex?\LARGE&space;Speed&space;=&space;(a_{pot}&space;\times&space;1.25)" title="\LARGE Speed = (a_{pot} \times 1.25)" />
</p>

The potentiometer give the microcontroller a value, between 50 and 500, and the delay between the flashing will be the potentiometer value, multiplied by 1.25 in miliseconds.

For example, if the potentiometer result is 300, the delay between the flashes will be 375 miliseconds.

However, if the potentiometer's value is 50, or all the way off, the red and green LEDs will not flash and if the potetiometer returns 500, then the red and green LEDs will shine constantly. The yellow star led will shine always unless the unit is turned off.
