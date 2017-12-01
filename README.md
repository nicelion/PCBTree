# PCBTree
Christmas tree circuit board


## About
PCBTree fills it's name quite well as it is, exactly what it says: A PCB tree. 

## Instruction

### How to operate
If you were given a PCBTree, below is some basic information on how it can be used.

#### Plugging In and Turning On
To first turn on PCBTree, one must plug in the provided 5V AC-DC adapter into the barrel jack connector located on the beck of the device, and into the wall. 

Once this is done, the switch on the back of the device must also be switched to the "on" state, and PCBTree will then turn on.

#### Adjusting Blink Speed
A dial, professionally, a potentiometer, can be found on the base, towards the front. This dial can be used to adjust the speed the LEDs will flash. The equation is below:

<p align="center">
  <img src="https://latex.codecogs.com/png.latex?\huge&space;50&space;\geq&space;p_{pot}&space;\geq&space;500" title="\huge 50 \geq p_{pot} \geq 500" />
  <br>
  <img src="https://latex.codecogs.com/png.latex?\huge&space;Speed&space;=&space;(a_{pot}&space;\times&space;1.25)" title="\huge Speed = (a_{pot} \times 1.25)" />
</p>

The potentiometer give the microcontroller a value, between 50 and 500, and the delay between the flashing will be the potentiometer value, multiplied by 1.25 in miliseconds.

For example, if the potentiometer result is 300, the delay between the flashes will be 375 miliseconds.

However, if the potentiometer's value is 50, or all the way off, the red and green LEDs will not flash and if the potetiometer returns 500, then the red and green LEDs will shine constantly. The yellow star led will shine always unless the unit is turned off.
