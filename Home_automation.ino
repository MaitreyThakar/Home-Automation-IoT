#define BLYNK_TEMPLATE_ID "TMPL3-o1MIP2V"
#define BLYNK_TEMPLATE_NAME "Control Electric Bulb"
#define BLYNK_AUTH_TOKEN "kE2WMyvbcxxDr9PH-XZn6lYu5UlnA0mB"

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h> 
 
#include <BlynkSimpleEsp8266.h>
 

char auth[] = BLYNK_AUTH_TOKEN;

char ssid[] = "Maitrey";  // type your wifi name
char pass[] = "mait133006";  // type your wifi password

int LED1 = D4;
int LED2 = D6;
void setup()
{     
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);    
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
 
  }

void loop()
{
  Blynk.run(); 
  // digitalWrite(D4,HIGH);
 }
