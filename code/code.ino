#define LED 6
#define BTN 5

int onOff = 0;
int lastValue = 0;

void swap();

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(BTN, INPUT);
}

void loop()
{
  digitalWrite(LED, onOff);
  swap();
}

void swap()
{
  int input = digitalRead(BTN);

  if (input == 1 && lastValue == 0)
  {
    lastValue = 1;
    switch (onOff)
    {
    case 0:
      onOff = 1;
      break;

    case 1:
      onOff = 0;
      break;
    }
  }

  lastValue = input;
}