// #define LED1
// #define LED2
// #define LED3
// void setup() {
//   DDRD = 0xFF;
//   DDRB |= (1 << DDB1);
//   DDRB |= (1 << DDB2);
//   DDRB |= (1 << DDB3);
// }
// unsigned char _7SEGEMENT[10] = { 0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F };
// void loop() 
// {
  
//    if(PORTD >=0)
//   {
//     PORTB |= (1 << PB1);
//    // delay(1000);

// for (int i = 0; i < 10; i++)
//      {
//       PORTD = _7SEGEMENT[i];
//       delay(1000);
      
//     }

//    PORTB &= (~(1<< PB1));
//    //delay(1000);
//    for (int i = 0; i < 10; i++)
//      {
//       PORTD = _7SEGEMENT[i];
//     //  delay(1000);
      
//     }
//   }

//   if(PORTD >=0)
//   {
//     PORTB |= (1 << PB2);
//    // delay(1000);

// for (int i = 3; i >= 0; i)
//      {
//       PORTD = _7SEGEMENT[i];
//       delay(1000);
      
//     }

//    PORTB &= (~(1<< PB2));
//   // delay(1000);
//    for (int i = 0; i < 10; i++)
//      {
//       PORTD = _7SEGEMENT[i];
//      // delay(1000);
      
//     }
//   }
//     if(PORTD >=0)
//   {
//     PORTB |= (1 << PB3);
//     //delay(1000);

// for (int i = 0; i < 10; i++)
//      {
//       PORTD = _7SEGEMENT[i];
//       delay(1000);
      
//     }

//    PORTB &= (~(1<< PB3));
//    //delay(1000);
//    for (int i = 0; i < 10; i++)
//      {
//       PORTD = _7SEGEMENT[i];
//       //delay(1000);
 
//     }
//   }

// }





#define LED1 PB1
#define LED2 PB2
#define LED3 PB3
unsigned char _7SEGEMENT[10] = { 0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F };
void _7_disp();

void setup() {
  DDRD = 0xFF;
  DDRB |= (1 << DDB1);
  DDRB |= (1 << DDB2);
  DDRB |= (1 << DDB3);
}

void loop()
 {
    PORTB |= (1 << LED1);
    _7_disp();
    PORTB &= (~(1 << LED1));

    PORTB |= (1 << LED2);
    for (int i = 3; i >= 0; i--)
   {
      PORTD = _7SEGEMENT[i];
      delay(1000);
    }
    PORTB &= (~(1 << LED2));

    PORTB |= (1 << LED3);
    _7_disp();
    PORTB &= (~(1 << LED3));
  }
  void _7_disp()
   {
    for (int i = 0; i < 10; i++) 
    {
      PORTD = _7SEGEMENT[i];
      delay(1000);
    }
   }
