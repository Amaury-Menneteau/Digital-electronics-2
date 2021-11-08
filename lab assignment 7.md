# Lab 7: Amaury_Menneteau

Link to this file in your GitHub repository:

https://github.com/Amaury-Menneteau/Digital-electronics-2


### Analog-to-Digital Conversion

1. Complete table with voltage divider, calculated, and measured ADC values for all five push buttons.

   | **Push button** | **PC0[A0] voltage** | **ADC value (calculated)** | **ADC value (measured)** |
   | :-: | :-: | :-: | :-: |
   | Right  | 0&nbsp;V | 0   | 0 |
   | Up     | 0.495&nbsp;V | 101 | 100 |
   | Down   |    1.202 V   | 246 | 255 |
   | Left   |    1.969 V   | 403 | 408 |
   | Select |    3.181 V   | 651 | 639 |
   | none   |    5 V   | 1023 | 1023 |

2. Code listing of ACD interrupt service routine for sending data to the LCD/UART and identification of the pressed button. Always use syntax highlighting and meaningful comments:

```c
/**********************************************************************
 * Function: ADC complete interrupt
 * Purpose:  Display value on LCD and send it to UART.
 **********************************************************************/
ISR(ADC_vect)
{
    uint16_t value = 0;
    char lcd_string[4] = "0000";

    value = ADC;                  // Copy ADC result to 16-bit variable
    itoa(value, lcd_string, 10);  // Convert decimal value to string

    // WRITE YOUR CODE HERE
    if(ADC == 0){
        lcd_gotoxy(8,1);
        lcd_puts("Right");
    }
    if(ADC == 100){
        lcd_gotoxy(8,1);
        lcd_puts("Up");
    }
    if(ADC == 246){
        lcd_gotoxy(8,1);
        lcd_puts("Down");
    }
    if(ADC == 403){
        lcd_gotoxy(8,1);
        lcd_puts("Left");
    }
    if(ADC == 651){
        lcd_gotoxy(8,1);
        lcd_puts("Select");
    }
    if(ADC == 1023){
        lcd_gotoxy(8,1);
        lcd_puts("none");
    }
}
```


### UART communication

1. (Hand-drawn) picture of UART signal when transmitting three character data `De2` in 4800 7O2 mode (7 data bits, odd parity, 2 stop bits, 4800&nbsp;Bd).

  ![20211108_122316](https://user-images.githubusercontent.com/91128744/140737841-89d30545-dad2-4a6a-a4b0-64fab3b43003.jpg)


2. Flowchart figure for function `get_parity(uint8_t data, uint8_t type)` which calculates a parity bit of input 8-bit `data` according to parameter `type`. The image can be drawn on a computer or by hand. Use clear descriptions of the individual steps of the algorithms.

   
![20211108_122321](https://user-images.githubusercontent.com/91128744/140737851-78336bc0-b67c-4e12-86eb-a3442be68fff.jpg)


### Temperature meter

Consider an application for temperature measurement and display. Use temperature sensor [TC1046](http://ww1.microchip.com/downloads/en/DeviceDoc/21496C.pdf), LCD, one LED and a push button. After pressing the button, the temperature is measured, its value is displayed on the LCD and data is sent to the UART. When the temperature is too high, the LED will start blinking.

1. Scheme of temperature meter. The image can be drawn on a computer or by hand. Always name all components and their values.

 ![20211108_124502](https://user-images.githubusercontent.com/91128744/140737863-ac6d59b6-5718-438b-aac3-df15dd41dfa6.jpg)

