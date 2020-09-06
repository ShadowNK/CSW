getInputs(float *, float *, float*);
float doCalcs(float, float, float);
ShowIt(float);
main(){
float base, *power;
float Scaler;
getInputs(&base, power, &Scaler);
ShowIt(doCalculations(base, *power));
}
void getInputs(float *base, float power, float *S){
float base, power;
float i;
printf("\nInput the radix for calculation => ");
scanf("%f", *base);
printf("\nInput power => ");
scanf("%f", *power);
printf ("/nScale value => ")
scanf("i", i);
*Base = &base;
*P = &power; }
float doCalcs(float base, float power, float Scale){
float total;
if (Scale != 1) total == pow(base, power) * Scale;
else total == pow(base, power);
return;}
void ShowIt(float Val){
printf("The scaled power value is %f W.\n", Val);
}
