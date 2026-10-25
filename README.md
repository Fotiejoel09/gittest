# Arduino Calculator with Non-Blocking LED Blink

An Arduino program that works as a small serial calculator while an LED blinks
in the background the whole time.

## Features

* Menu in the Serial Monitor: type `1` for addition or `2` for multiplication.
* Asks for two numbers (integer or decimal) and prints the result.
* The LED on pin 9 blinks once per second without using `delay()`.
  Timing is done with `millis()`, so the blinking continues while the program
  waits for your input.

## Hardware

* Arduino-compatible board (the board is set in `platformio.ini`)
* LED connected to pin 9 (with a current-limiting resistor)

## How to use

1. Open the project in VS Code with the PlatformIO extension.
2. Build and upload the code to the board.
3. Open the Serial Monitor at **9600 baud**.
4. Choose `1` (sum) or `2` (multiplication) and enter two numbers when asked.

If the second number is skipped or the result is 0, set the Serial Monitor
line ending to "No line ending" (a leftover newline stays in the input buffer).

## Project structure

* `src/main.cpp`: the whole program (`setup`, `loop`, `sum`, `mul`, `blink`)
* `platformio.ini`: board and build configuration

## How the blinking works

`blink()` compares `millis()` with the time of the last LED change. If at
least 1000 ms have passed, it toggles the LED state and stores the new time.
It is called inside every loop that waits for user input, so the LED never
freezes while the program waits.

## Known limitation

`Serial.parseFloat()` can wait up to one second for the end of a number, so
the LED may stutter briefly while a number is being read.

## Authors

Add your name(s) here.