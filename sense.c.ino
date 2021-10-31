// Examine sensor outputs.
#define BAUDRATE 9600

// read pins
int readAO = 4, // Analog pin 
    readDO = 3; // Digital pin

// values
double  digitalVal  = 0, 
        analogVal   = 0;

void setup() 
{
  Serial.begin(BAUDRATE);
  pinMode(readAO, INPUT);
  pinMode(readDO, INPUT);
}

void loop() 
{
  // Read
  digitalVal  = analogRead(readDO);
  analogVal   = analogRead(readAO);  

  // Print
  Serial.print("Analog:   ");
  Serial.println(readAO);
  Serial.print("Digital:  ");  
  Serial.println(readDO);

  delay(1000);
}
