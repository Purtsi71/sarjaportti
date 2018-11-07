/*
 * Ohjelma vastaanottaa komentoja sarjaportilta(kirjaimia:'h','j','k','l')
 * 'h' polttaa lediä 1/4 teholla
 * 'j' polttaa lediä 2/4 teholla
 * 'k' polttaa lediä 3/4 teholla
 * 'l' polttaa lediä 4/4 teholla
 */
 #define LED 12
 
void setup() {
  
Serial.begin(9600);
pinMode(LED, OUTPUT);
}
//Varataan muisti
int x;

void loop() {
  // Tarkista onko sarjaportissa luettavia merkkejä 
  x = Serial.available();
  if (x > 0){

    int tieto = Serial.read();
    if(tieto == 'h'){
      analogWrite(LED, 64);//polttaa lediä 1/4 teholla
    }
    if(tieto == 'j'){
      analogWrite(LED, 126);//polttaa lediä 1/4 teholla
    }
    if(tieto == 'k'){
      analogWrite(LED, 191);//polttaa lediä 1/4 teholla
    }
    if(tieto == 'l'){
      analogWrite(LED, 255);//polttaa lediä 1/4 teholla
    }
  }

  

}
