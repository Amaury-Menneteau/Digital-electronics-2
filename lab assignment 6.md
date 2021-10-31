# Lab 6: Amaury Menneteau

Link to your `Digital-electronics-2` GitHub repository:

https://github.com/Amaury-Menneteau/Digital-electronics-2



### LCD display module

1. In your words, describe what ASCII table is.
   * ASCII : It is a table where there are numbers linked to letters or symbols, in a code the numbers are used to determine what symbol the user want to write.

2. (Hand-drawn) picture of time signals between ATmega328P and LCD keypad shield (HD44780 driver) when transmitting three character data `De2`.

![20211031_181729](https://user-images.githubusercontent.com/91128744/139596116-68cf2c22-fa83-4ace-a0ea-f5923fad5936.jpg)


### Stopwatch

1. Flowchart figure for `TIMER2_OVF_vect` interrupt service routine which overflows every 16&nbsp;ms but it updates the stopwatch LCD approximately every 100&nbsp;ms (6 x 16&nbsp;ms = 100&nbsp;ms). Display tenths of a second and seconds `00:seconds.tenths`. Let the stopwatch counts from `00:00.0` to `00:59.9` and then starts again. The image can be drawn on a computer or by hand. Use clear descriptions of the individual steps of the algorithms.

![20211031_183627](https://user-images.githubusercontent.com/91128744/139596089-c5a9213b-dd67-49a0-9721-ff5e9e0b7972.jpg)


### Custom characters

1. Code listing with syntax highlighting of two custom character definition:

```c
uint8_t customChara[8] = {
    0b11011,
    0b11011,
    0b00000,
    0b00100,
    0b00100,
    0b10001,
    0b10001,
    0b11111
};

uint8_t customCharb[8] = {
    0b11011,
    0b11011,
    0b00000,
    0b00100,
    0b00100,
    0b00000,
    0b11111,
    0b10001
};
```


### Kitchen alarm

Consider a kitchen alarm with an LCD, one LED and three push buttons: start, +1 minute, -1 minute. Use the +1/-1 minute buttons to increment/decrement the timer value. After pressing the Start button, the countdown starts. The countdown value is shown on the display in the form of mm.ss (minutes.seconds). At the end of the countdown, the LED will start blinking.

1. Scheme of kitchen alarm; do not forget the supply voltage. The image can be drawn on a computer or by hand. Always name all components and their values.

![jdjdjdjd](https://user-images.githubusercontent.com/91128744/139596398-4db4dda1-d45f-44da-9d09-224214bb214d.png)

