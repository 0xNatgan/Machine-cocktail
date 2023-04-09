const int CITRON = 2;
const int ANANAS = 3;
const int FRAISE = 4;
const int LIMONADE = 5;
const int MENTHE = 7;
const int BOUTTON_1 = 8;
const int BOUTTON_2 = 9;
const int BOUTTON_3 = 10;
const int BOUTTON_4 = 11;
const int BOUTTON_5 = 12;
//const int BOUTTON_6 = 7;


// recettes

//COCKTAIL1


int COCKTAIL_1[1] = {MENTHE};
const long int COCKTAIL1_DUREE[1] = {30000};
int INGREDIENTS_1 = 1;

/*
int COCKTAIL_1[3] = {MENTHE,FRAISE,LIMONADE};
const long int COCKTAIL1_DUREE[3] = {6000,10000,15000};
int INGREDIENTS_1 = 3;*/

//COCKTAIL2
int COCKTAIL_2[3] = {CITRON,FRAISE,ANANAS};
const long int COCKTAIL2_DUREE[3] = {4000,7000,19000};
int INGREDIENTS_2 = 3;

//COCKTAIL3
int COCKTAIL_3[2] = {CITRON,ANANAS};
const long int COCKTAIL3_DUREE[2] = {5000,25000};
int INGREDIENTS_3 = 2;

//COCKTAIL4
int COCKTAIL_4[3] = {CITRON,ANANAS,LIMONADE};
const long int COCKTAIL4_DUREE[3] = {4000,12000,14000};
int INGREDIENTS_4 = 3;

//COCKTAIL5
int COCKTAIL_5[3] = {MENTHE,CITRON,ANANAS};
const long int COCKTAIL5_DUREE[3] = {3000,5000,22000};
int INGREDIENTS_5 = 3;


void setup() {
  Serial.begin(9600);
  Serial.println("----------------On--------------");
  pinMode(CITRON, OUTPUT);
  pinMode(ANANAS, OUTPUT);
  pinMode(FRAISE, OUTPUT);
  pinMode(LIMONADE, OUTPUT);
//  pinMode(MENTHE, OUTPUT);
  pinMode(MENTHE, OUTPUT);
  pinMode(BOUTTON_1, INPUT);
  pinMode(BOUTTON_2, INPUT);
  pinMode(BOUTTON_3, INPUT);
  pinMode(BOUTTON_4, INPUT);
  pinMode(BOUTTON_5, INPUT);
  //PinMode(BOUTTON_6, INPUT);
  delay(2000);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(BOUTTON_1)){
    Serial.println("B1");
    cocktail(COCKTAIL_1, COCKTAIL1_DUREE,INGREDIENTS_1);
  }
  if(digitalRead(BOUTTON_2)){
    Serial.println("B2");
    cocktail(COCKTAIL_2,COCKTAIL2_DUREE, INGREDIENTS_2);
  }

  if(digitalRead(BOUTTON_3)){
    Serial.println("B3");
    cocktail(COCKTAIL_3, COCKTAIL3_DUREE, INGREDIENTS_3);
  }

  if(digitalRead(BOUTTON_4)){
    Serial.println("B4");
    cocktail(COCKTAIL_4, COCKTAIL4_DUREE, INGREDIENTS_4);
  }
  if(digitalRead(BOUTTON_5)){
    Serial.println("B5");
    cocktail(COCKTAIL_5, COCKTAIL5_DUREE, INGREDIENTS_5);
  }
 //if(digitalRead(BOUTTON_6)){
   // Serial.println("B6");
  //  cocktail(COCKTAIL_6, COCKTAIL6_DUREE, INGREDIENTS_6);
  //}
}

void cocktail(int recette[], long int duree_recette[], int ingredients){
  Serial.println("ingredients");
  Serial.println(ingredients);
  Serial.println("pins");
  for(int i = 0; i < ingredients; i++){
    digitalWrite(recette[i], HIGH);
    Serial.println(recette[i]);
  }
  for(int j = 0; j < ingredients; j = j+1){
    delay(duree_recette[j]);
    digitalWrite(recette[j], LOW);
  }
  Serial.println("fin");
  delay(1000);
}
