#define A 8 
#define B 9
#define SW 11

int counter = 0;          // Variable to store the encoder position
int A_currentState;      // Current state of the CLK pin
int A_lastState;         // Previous state of the CLK pin
bool buttonPressed = false; // State of the push-button

void setup() {
  Serial.begin(9600);
  pinMode(A, INPUT_PULLUP);
  pinMode(B, INPUT_PULLUP);
  pinMode(SW, INPUT_PULLUP);

  A_lastState = digitalRead(A);
}

void loop() {
  A_currentState = digitalRead(A);

  if (A_currentState != A_lastState) {
    int BState = digitalRead(B);

    // Determine the direction of rotation
    if (BState != A_currentState) {
      counter++; // Clockwise rotation
    } else {
      counter--; // Counterclockwise rotation
    }

    Serial.print("Position: ");
    Serial.println(counter);
  }

  A_lastState = A_currentState;

  // Check if the push-button is pressed
  if (digitalRead(SW) == LOW) {
    if (!buttonPressed) {
      Serial.println("Button Pressed!");
      buttonPressed = true;
    }
  } else {
    buttonPressed = false;
  }

}
