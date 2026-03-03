# Rotary encoder

The SparkFun Rotary Encoder is a device that converts the angular position or motion of a shaft or axle into an analog or digital signal. It is commonly used in electronic projects for user input, such as volume control, menu navigation, or precise position adjustments. 

Unlike a potentiometer, the rotary encoder can rotate infinitely in either direction, making it ideal for applications requiring continuous rotation.

The SparkFun Rotary Encoder is a mechanical incremental encoder with a push-button switch.

Read more [here](https://github.com/sparkfun/Rotary_Encoder_Breakout-Illuminated)

----
### Technical Specifications

- Operating Voltage	3.3V to 5V

- Output Type	Digital (Quadrature Output)

- Number of Pulses	20 pulses per revolution

- Push-Button Switch	Integrated (momentary type)

- Shaft Rotation	Continuous (360°)

- Shaft Diameter	6mm

- Mounting Hole Spacing	15mm

---
### PINOUT

- SW	Push-button switch output (active LOW).

- A or CLK	Clock pin for quadrature signal (used to determine rotation and pulse count).

- B or DT	Data pin for quadrature signal (used to determine rotation direction).

- (+) Power supply pin (3.3V or 5V).
  
----
### Wiring

**FOR ROTATION:**

- Rotary Encoder Pin A (CLK signal 1) ---- to Arduino Pin 2

- Rotary Encoder Pin B (DT signal 2) ---- to Arduino Pin 3

- Rotary Encoder Pin C (GND) ---- to Arduino GND


**FOR PUSH BUTTON:**

- Rotary Encoder Pin PW ---- to Arduino Pin 4

- Rotary Encoder Pin G ---- to Arduino GND

**FOR RGB LED:**

Note: Each colour needs a resistor (220–330Ω).

- Rotary Encoder Pin R ---- to Arduino Pin 4

- Rotary Encoder Pin G ---- to Arduino Pin 4

- Rotary Encoder Pin B ---- to Arduino Pin 4

- Rotary Encoder Pin + ---- to Arduino Pin 4

----
### Code and instructions

[Starter tutorial: reading rotation steps and push button state](https://github.com/kingston-hackSpace/Rotary_encoder/blob/main/Rotary_and_button.ino)



