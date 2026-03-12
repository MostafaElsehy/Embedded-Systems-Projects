byte increaseButtonPin = 11;
byte decreaseButtonPin = 12;

byte segmentPins[] = {8, 7, 6, 5, 4, 3, 2};

byte segmentNumbers[10][7] = {
  {1,1,1,1,0,1,1}, // zero
  {1,1,0,0,0,0,0}, // one
  {0,1,1,0,1,1,1}, // two
  {1,1,1,0,1,0,1}, // three
  {1,1,0,1,1,0,0}, // four
  {1,0,1,1,1,0,1}, // five
  {1,0,1,1,1,1,1}, // six
  {1,1,1,0,0,0,0}, // seven
  {1,1,1,1,1,1,1}, // eight
  {1,1,1,1,1,0,1}  // nine
};

byte counter = 0;

void setup() {
  for(byte i = 0; i < 7; i++)
  {
    pinMode(segmentPins[i], OUTPUT);
  }

  pinMode(increaseButtonPin, INPUT_PULLUP);
  pinMode(decreaseButtonPin, INPUT_PULLUP);

  showNumberOnSegment(counter);   // show 0 at start
}

void loop() {

  bool isIncreaseButtonClicked = !digitalRead(increaseButtonPin);
  bool isDecreaseButtonClicked = !digitalRead(decreaseButtonPin);

  if(isIncreaseButtonClicked)
  {
    increaseByOneOnSegment();
  }

  else if(isDecreaseButtonClicked)
  {
    decreaseByOneOnSegment();
  }
}

void showNumberOnSegment(byte number)
{
  for(byte i = 0; i < 7; i++)
  {
    digitalWrite(segmentPins[i], segmentNumbers[number][i]);
  }
}

void increaseByOneOnSegment()
{
  counter++;

    if(counter > 9)
    {
      counter = 0;
    }

    showNumberOnSegment(counter);
    delay(300);
}

void decreaseByOneOnSegment()
{
  if(counter == 0)
    {
      counter = 9;
    }
    else
    {
      counter--;
    }

    showNumberOnSegment(counter);
    delay(300);
}