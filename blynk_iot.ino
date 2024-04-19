#define BLYNK_TEMPLATE_ID "TMPL6hLdK4L6_"
#define BLYNK_TEMPLATE_NAME "ledkoi"
#define BLYNK_AUTH_TOKEN "ZxYTtyMsP-p_fw3eX0z4qjzOAQbR8oe1"


#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>  
#include <BlynkSimpleEsp8266.h>
 

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "APEX";  // Enter your Wifi Username
char pass[] = "ashikf378@!#";  // Enter your Wifi password

BLYNK_WRITE(V0)
{
  int pinValue= param.asInt();
  digitalWrite(12,pinValue);
}
void setup()
{     
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);    
  pinMode(12,OUTPUT);
}

void loop()
{
  Blynk.run(); 
}
