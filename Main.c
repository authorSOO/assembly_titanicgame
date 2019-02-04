

void Main(){

	int i,input,j,k,bot,cnt;

	int data[100];

	Init_LED();

	Init_Key();		

	i=0;j=0;



	Uart_Printf("==========TITANIC GAME==========\n");

	int titanic=0,flap=0;	

	input=rand()%31+1;

	Uart_Printf("RANDOM FROM '1' TO '31'\n");

	while(1){

		titanic+=BOTTON()-1;

		for(k=0;k<0xfffaa;k++);

		flap=TITANIC_GAME(input,titanic);

		Uart_Printf("CURRENT NUMBER : %d\n",titanic); 

		if(flap==1) {

			LED_ON_OFF(0);

			Uart_Printf("RANDOM NUMBER : %d\n",input); 

			Uart_Printf("CONGRATULATION");

			break;

		}


}
