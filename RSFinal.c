#include<stdio.h>
#include<string.h>
void main()
{
	int train,choice,n=1;
	float time;
	char loc[20];
	printf("Welcome to PBL Railway Portal\n");
	while(n==1)
	{
	printf("Enter your choice.\nTrain number\tTrain name\n1.111111\tAhemdabad Passenger\n2.110022\tPune Express\n3.111333\tNashik Express\n4.111444\tRatnagiri Express\n5.111555\tJaipur Superfast Express\n ");
	scanf("%d",&train);
	switch(train)
	{
		case 1 : printf("Ahmedabad Passenger\n");
				 printf("Select choice.\n1.Station\n2.Time\n3.Full schedule\n");
				 scanf("%d",&choice);
				 switch(choice)
				 {
				 	case 1 :
					 {
					  		    printf("Enter station (Case Sensitive)\n");
					 		    scanf("%s",loc);
							 	if(strcmp(loc,"Mumbai Central")==0)
							 	{
							 		printf("The train will start from Mumbai Central at am.\n");
							 	
								 }
				 				else if(strcmp(loc,"Dadar")==0)
				 				{
				 					printf("The train will reach at 00.35\n");
								 }
								else if(strcmp(loc,"Valsad")==0)
								{
									printf("The train will reach at 2.05\n");
								}
								else if(strcmp(loc,"Navsari")==0)
								{
									printf("The train will reach at 2.40\n");
								}
								else if(strcmp(loc,"Surat")==0)
								{
									printf("The train will reach at 3.20\n ");
								}
								else if(strcmp(loc,"Bharuch")==0)
				 				{
				 					printf("The train will reach at 4.00\n");
								 }
								else if(strcmp(loc,"Vadodra")==0)
								{
									printf("The train will reach at 4.30\n");
								}
								else if(strcmp(loc,"Anand")==0)
								{
									printf("The train will reach at4.45\n");
								}
								else if(strcmp(loc,"Ahmedabad")==0)
								{
									printf("The train will reach at 5.00am\n ");
								}
								else
								{
									printf("The Ahmedabad Passenger does not halt at %s",loc);
								}
								break;
						}
					case 2 : 
					    {	  
					     	 printf("Enter time\n");
							 scanf("%f",&time);
							 if(time>=00.00&&time<=00.05)
							 {
							 	printf("The train is at Mumbai Central\n");
							 }
							 else if(time>=00.06 && time<00.35)
							 {
							 	printf("The train has left Mumbai Central and is heading towards Dadar\n");
							 }
							 else if(time>=00.35 && time<00.41)
							 {
							 	printf("The train is at Dadar\n");
							 }
							  else if(time>=00.41 && time<2.05)
							 {
							 	printf("The train has left Dadar and is heading towards Valsad\n");
							 }
							 else if(time>=2.05 && time<2.11)
							 {
							 	printf("The train is at Valsad\n");
							 }
							  else if(time>=2.11 && time<2.40)
							 {
							 	printf("The train has left Valsad and is heading towards Navsari\n");
							 }
							 else if(time>=2.40 && time<2.46)
							 {
							 	printf("The train is at Navsari\n");
							 }
							  else if(time>=2.46 && time<3.20)
							 {
							 	printf("The train has left Navsari and is heading towards Surat\n");
							 }
							 else if(time>=3.20 &&time<3.31)
							 {
							 	printf("The train is at Surat\n");
							 }
								else if(time>=3.31 && time<4.00)
							 {
							 	printf("The train has left Surat and is heading towards Bharuch\n");
							 }
							 else if(time>=4.00 && time<4.06)
							 {
							 	printf("The train is at Bharuch\n");
							 }
							 else if(time>=4.06 && time<4.30)
							 {
							 	printf("The train has left Bharuch and is heading towards Vadodara\n");
							 }
							 else if(time>=4.30 && time<4.36)
							 {
							 	printf("The train is at Vadodara\n");
							 }else if(time>=4.36 && time<4.45)
							 {
							 	printf("The train has left Vadodara and is heading towards Anand\n");
							 }
							 else if(time>=4.45 && time<4.50)
							 {
							 	printf("The train is at Anand\n");
							 }else if(time>=4.50 && time<5.00)
							 {
							 	printf("The train has left Anand and is heading towards Ahmedabad\n");
							 }
							 else if(time==5.00)
							 {
							 	printf("The train is at Ahmedabad\n");
							 }else 
							 {
							 	printf("Invalid Time Entered\n");
							 }
							  break;
				    	}
				    case 3:
				    	{
				    		printf("Sr no\tStation\t\tArrival\tDeparture\tHalt\tDistance\n ");
				    		printf("1.\tMumbai Central\t--\t00.06\t\t--\t--\n 2.\tDadar\t\t00.35\t00.40\t\t5 Mins\t12km\n 3.\tValsad\t\t2.05\t2.10\t\t5 Mins\t183km\n 4.\tNavsari\t\t2.40\t2.45\t\t5 Mins\t202km\n 5.\tSurat\t\t3.20\t3.30\t\t10 Mins\t263km\n 6.\tBharuch\t\t4.00\t4.05\t\t5 Mins\t322km\n 7.\tVadodara\t4.30\t4.35\t\t5 Mins\t392km\n 8.\tAnand\t\t4.45\t4.50\t\t5 Mins\t427km\n 9.\tAhmedabad\t5.00\t--\t\t--\t491km\n");
						}
                          break;
                      }
                      break;

        case 2 : printf("Pune Express\n");
				 printf("Select choice.\n1.Station\n2.Time\n3.Full schedule\n");
				 scanf("%d",&choice);
				 switch(choice)
				 {
				 	case 1 :
					 {
					  		    printf("Enter station (Case Sensitive)\n");
					 		    scanf("%s",loc);
							 	if(strcmp(loc,"Mumbai CST")==0)
							 	{
							 		printf("The train will start from Mumbai CST at 7.00am.\n");
							 		
								 }
				 				else if(strcmp(loc,"Dadar")==0)
				 				{
				 					printf("The train will reach at 7.11\n");
								 }
								else if(strcmp(loc,"Thane")==0)
								{
									printf("The train will reach at 7.33\n");
								}
								else if(strcmp(loc,"Kalyan")==0)
								{
									printf("The train will reach at 7.53\n");
								}
								else if(strcmp(loc,"Neral")==0)
								{
									printf("The train will reach at 8.25\n ");
								}
								else if(strcmp(loc,"Karjat")==0)
				 				{
				 					printf("The train will reach at 8.43\n");
								 }
								else if(strcmp(loc,"Khandala")==0)
								{
									printf("The train will reach at 9.28\n");
								}
								else if(strcmp(loc,"Lonavala")==0)
								{
									printf("The train will reach at9.38\n");
								}
								else if(strcmp(loc,"Talegaon")==0)
								{
									printf("The train will reach at 10.08am\n ");
								}
								else if(strcmp(loc,"Khadki")==0)
								{
									printf("The train will reach at 10.44am\n ");
								}	
								else if(strcmp(loc,"Shivajinagar")==0)
								{
									printf("The train will reach at 10.49am\n ");
								}
									else if(strcmp(loc,"Pune Junction")==0)
								{
									printf("The train will reach at 11.05am\n ");
								}
								else
								{
									printf("The Pune Express does not halt at %s",loc);
								}
								break;
								}
					case 2 : 
					    {	  
					     	 printf("Enter time\n");
							 scanf("%f",&time);
							 if(time>=6.55 && time<07.06)
							 {
							 	printf("The train is at Mumbai CST\n");
							 }
							 else if(time>=07.06 && time<07.11)
							 {
							 	printf("The train has left Mumbai CST and is heading towards Dadar\n");
							 }
							 else if(time>=07.11 && time<07.14)
							 {
							 	printf("The train is at Dadar\n");
							 }
							  else if(time>=07.14 && time<7.33)
							 {
							 	printf("The train has left Dadar and is heading towards Thane\n");
							 }
							 else if(time>=7.33 && time<7.36)
							 {
							 	printf("The train is at Thane\n");
							 }
							  else if(time>=7.36 && time<7.53)
							 {
							 	printf("The train has left Thane and is heading towards Kalyan\n");
							 }
							 else if(time>=7.53 && time<7.56)
							 {
							 	printf("The train is at Kalyan\n");
							 }
							  else if(time>=7.56 && time<8.25)
							 {
							 	printf("The train has left Kalyan and is heading towards Neral\n");
							 }
							 else if(time>=8.25 && time<8.28)
							 {
							 	printf("The train is at Neral\n");
							 }
							else if(time>=8.28 && time<8.43)
							 {
							 	printf("The train has left Neral and is heading towards Karjat\n");
							 }
							 else if(time>=8.43 && time<8.46)
							 {
							 	printf("The train is at Karjat\n");
							 }
							 else if(time>=8.46 && time<9.28)
							 {
							 	printf("The train has left Karjat and is heading towards Khandala\n");
							 }
							 else if(time>=9.28 && time<9.31)
							 {
							 	printf("The train is at Khandala\n");
							 }
							 else if(time>=9.31 && time<9.38)
							 {
							 	printf("The train has left Khandala and is heading towards Lonavala\n");
							 }
							 else if(time>=9.38 && time<9.41)
							 {
							 	printf("The train is at Lonavala\n");
							 }
							 else if(time>=9.41 && time<10.08)
							 {
							 	printf("The train has left Lonavala and is heading towards Talegaon\n");
							 }
							 else if(time>=10.08 && time<10.11)
							 {
							 	printf("The train is at Talegaon\n");
							 }
							 else if(time>=10.11 && time<10.44)
							 {
							 	printf("The train has left Talegaon and is heading towards Khadki\n");
							 }
							 else if(time>=10.44 && time<10.47)
							 {
							 	printf("The train is at Khadki\n");
							 }
							 else if(time>=10.47 && time<10.49)
							 {
							 	printf("The train has left Khadki and is heading towards Shivajinagar\n");
							 }
							 else if(time>=10.49 && time<10.52)
							 {
							 	printf("The train is at Shivajinagar\n");
							 }
							 else if(time>=10.52 && time<11.05)
							 {
							 	printf("The train has left Shivajinagar and is heading towards Pune Junction\n");
							 }
							 else if(time=11.05)
							 {
							 	printf("The train is at Pune Junction\n");
							 }
							 else 
							 {
							 	printf("Invalid Time Entered\n");
							 }
							 
							  break;
				    	}
				    	
                    case 3:
				    	{
				    		printf("Sr no\tStation\t\tArrival\tDeparture \tHalt\tDistance\n ");
				    		printf("1.\tMumbai CST\t--\t07.00\t\t--\t--\n 2.\tDadar\t\t7.11\t07.13\t\t2 Mins\t12km\n 3.\tThane\t\t7.33\t7.35\t\t2 Mins\t42km\n 4.\tKalyan\t\t7.53\t7.55\t\t2 Mins\t62km\n 5.\tNeral\t\t8.25\t8.27\t\t2 Mins\t73km\n 6.\tKarjat\t\t8.43\t8.45\t\t2 Mins\t102\n 7.\tKhandala\t9.28\t9.30\t\t2 Mins\t123km\n 8.\tLonavala\t9.38\t9.40\t\t2 Mins\t156km\n 9.\tTalegaon\t10.08\t10.10\t\t2 Mins\t176km\n 10.\tKhadki\t\t10.44\t10.46\t\t2 Mins\t189km\n 11.\tShivajinagar\t10.49\t10.51\t\t2 Mins\t198km\n 12.\tPune Junction\t11.05\t--\t\t--\t212km\n");
						}
                          break;
                      }
                      break;
        case 3 :
				{
				  printf("Nashik Express\n");
				 printf("Select choice.\n1.Station\n2.Time\n3.Full schedule\n");
				 scanf("%d",&choice);
				 switch(choice)
				 {
				 	case 1 :
					 {
					  		    printf("Enter station (Case Sensitive)\n");
					 		    scanf("%s",loc);
							 	if(strcmp(loc,"LTT")==0)
							 	{
							 		printf("The train will start from Lokmanya Tilak Terminus at 22.45\n");
							 		
								 }
				 				else if(strcmp(loc,"Thane")==0)
				 				{
				 					printf("The train will reach at 23.03\n");
								 }
								else if(strcmp(loc,"Kalyan")==0)
								{
									printf("The train will reach at 23.25\n");
								}
								else if(strcmp(loc,"Kasara")==0)
								{
									printf("The train will reach at 00.33\n");
								}
								else if(strcmp(loc,"Igatpuri")==0)
								{
									printf("The train will reach at 1.18\n ");
								}
								else if(strcmp(loc,"Devlali")==0)
				 				{
				 					printf("The train will reach at 2.03\n");
								 }
								else if(strcmp(loc,"Nashik")==0)
								{
									printf("The train will reach at 2.13\n");
								}
							
								else
								{
									printf("The Nashik Express does not halt at %s",loc);
								}
								break;
						}
					case 2 : 
					    {	  
					     	 printf("Enter time\n");
							 scanf("%f",&time);
							 if(time==22.45)
							 {
							 	printf("The train is at Lokmanya Tilak Terminus\n");
							 }
							 else if(time>=22.46 && time<23.03)
							 {
							 	printf("The train has left Lokmanya Tilak Terminus  and is heading towards Thane\n");
							 }
							 else if(time>=23.03 && time<23.05)
							 {
							 	printf("The train is at Thane\n");
							 }
							  else if(time>=23.05 && time<23.25)
							 {
							 	printf("The train has left Thane and is heading towards Kalyan\n");
							 }
							 else if(time>=23.25 && time<23.28)
							 {
							 	printf("The train is at Kalyan\n");
							 }
							  else if(time>=23.28 && time<00.33)
							 {
							 	printf("The train has left Kalyan and is heading towards Kasara\n");
							 }
							 else if(time>=00.33 && time<00.35)
							 {
							 	printf("The train is at Kasara\n");
							 }
							  else if(time>=00.35 && time<1.18)
							 {
							 	printf("The train has left Kasara and is heading towards Igatpuri\n");
							 }
							 else if(time>=1.18 &&time<1.20)
							 {
							 	printf("The train is at Igatpuri\n");
							 }
								else if(time>=1.20 && time<2.03)
							 {
							 	printf("The train has left Igatpuri and is heading towards Devlali\n");
							 }
							 else if(time>=2.03 && time<2.05)
							 {
							 	printf("The train is at Devlali\n");
							 }
							 else if(time>=02.05 && time<2.13)
							 {
							 	printf("The train has left Devlali and is heading towards Nashik\n");
							 }
						
							 else if(time==02.13)
							 {
							 	printf("The train is at Nashik\n");
							 }else 
							 {
							 	printf("Invalid Time Entered\n");
							 }
							  break;
					}
				    	
				    case 3:
				    	{
						
				    		{
				    			printf("Sr no\tStation\t\tArrival\tDeparture\tHalt\tDistance\n ");
				    			printf("1.\tLTT\t\t--\t22.45\t\t--\t--\n 2.\tThane\t\t23.03\t23.05\t\t2 Mins\t17km\n 3.\tKalyan\t\t23.25\t23.28\t\t3 Mins\t37km\n 4.\tKasara\t\t00.33\t00.35\t\t2 Mins\t67km\n 5.\tIgatpuri\t1.18\t1.20\t\t2 Mins\t97km\n 6.\tDevlali\t\t2.03\t2.05\t\t2 Mins\t112km\n 7.\tNashik\t\t2.13\t--\t\t--\t176km\n");
							}
                          break;
                    }
                      }
                      break;
                      
        case 4 : printf("Ratnagiri Express\n");
				 printf("Select choice.\n1.Station\n2.Time\n3.Full schedule\n");
				 scanf("%d",&choice);
				 switch(choice)
				    {
				    	case 1 :
					    {
					  		    printf("Enter station (Case Sensitive)\n");
					 		    scanf("%s",loc);
							 	if(strcmp(loc,"Dadar")==0)
							 	{
							 		printf("The train will start from Dadar at 15.35\n");
							 		
								 }
				 				else if(strcmp(loc,"Thane")==0)
				 				{
				 					printf("The train will reach at 16.01\n");
								 }
								else if(strcmp(loc,"Diva")==0)
								{
									printf("The train will reach at 16.13\n");
								}
								else if(strcmp(loc,"Nilaje")==0)
								{
									printf("The train will reach at 16.16\n");
								}
								else if(strcmp(loc,"Taloja Panchand")==0)
								{
									printf("The train will reach at 16.36\n ");
								}
								else if(strcmp(loc,"Navade Road")==0)
				 				{
				 					printf("The train will reach at 16.12\n");
								 }
								else if(strcmp(loc,"Kalamboli")==0)
								{
									printf("The train will reach at 16.47\n");
								}
								else if(strcmp(loc,"Panvel")==0)
								{
									printf("The train will reach at16.58\n");
								}
								else if(strcmp(loc,"Chiplun")==0)
								{
									printf("The train will reach at 21.40\n ");
								}
								else if(strcmp(loc,"Ratnagiri")==0)
								{
									printf("The train will reach at 00.10 on Day 2\n ");
								}
								else
								{
									printf("The Ratnagiri Express does not halt at %s",loc);
								}
								break;
						}
					case 2 : 
					    {	  
					     	 printf("Enter time\n");
							 scanf("%f",&time);
							 if(time==15.35)
							 {
							 	printf("The train is at Dadar\n");
							 }
							 else if(time>=15.36 && time<16.01)
							 {
							 	printf("The train has left Dadar and is heading towards Thane\n");
							 }
							 else if(time>=16.01 && time<16.04)
							 {
							 	printf("The train is at Thane\n");
							 }
							  else if(time>=16.04 && time<16.13)
							 {
							 	printf("The train has left Thane and is heading towards Diva\n");
							 }
							 else if(time>=16.13 && time<16.16)
							 {
							 	printf("The train is at Diva\n");
							 }
							  else if(time>=16.16 && time<16.26)
							 {
							 	printf("The train has left Diva and is heading towards Nilaje\n");
							 }
							 else if(time>=16.26 && time<16.28)
							 {
							 	printf("The train is at Nilaje\n");
							 }
							  else if(time>=16.28 && time<16.36)
							 {
							 	printf("The train has left Nilaje and is heading towards Taloja Panchand\n");
							 }
							 else if(time>=16.36 &&time<16.38)
							 {
							 	printf("The train is at Taloja Panchand\n");
							 }
								else if(time>=16.38 && time<16.42)
							 {
							 	printf("The train has left Taloja Panchand and is heading towards Navade Road\n");
							 }
							 else if(time>=16.42 && time<16.44)
							 {
							 	printf("The train is at Navade Road\n");
							 }
							 else if(time>=16.44 && time<16.47)
							 {
							 	printf("The train has left Navade Road and is heading towards Kalamboli\n");
							 }
							 else if(time>=16.47 && time<16.49)
							 {
							 	printf("The train is at Kalamboli\n");
							 }else if(time>=16.49 && time<16.58)
							 {
							 	printf("The train has left Kalamboli and is heading towards Panvel\n");
							 }
							 else if(time>=16.58 && time<17.02)
							 {
							 	printf("The train is at Panvel\n");
							 }else if(time>=17.02 && time<21.40)
							 {
							 	printf("The train has left Panvel and is heading towards Chiplun\n");
							 }
							 else if(time>=21.40 && time<21.51)
							 {
							 	printf("The train is at Chiplun\n");
							 }else if(time>=21.51 && time<00.10)
							 {
							 	printf("The train has left Chiplun and is heading towards Ratnagiri\n");
							 }
							 else if(time==00.10)
							 {
							 	printf("The train is at Ratnagiri\n");
							 }else 
							 {
							 	printf("Invalid Time Entered\n");
							 }
							  break;
				    	}
				    case 3:
				    	{
				    		printf("Sr.no\tStation\t\tArrival\tDeparture\tHalt\tDistance\n ");
				    		printf("1.\tDadar\t\t--\t15.35\t\t--\t--\n 2.\tThane\t\t16.13\t16.15\t\t2 Mins\t24km\n 3.\tDiva\t\t16.13\t16.15\t\t2 Mins\t38km\n 4.\tNilaje\t\t16.27\t16.27\t\t1 Mins\t48km\n 5.\tTaloja Panchand\t16.36\t16.37\t\t1 Mins\t64km\n 6.\tNavade Road\t16.42\t16.43\t\t1 Mins\t72km\n 7.\tKalamboli\t16.47\t16.48\t\t1 Mins\t156km\n 8.\tPanvel\t\t16.58\t17.01\t\t3 Mins\t178km\n 9.\tChiplun\t\t21.40\t21.50\t\t10 Mins\t210km\n 10.\tRatnagiri\t00.10\t--\t\t--\t298km\n");
						}
                          break;
                      }
                      break;
        case 5 : printf("Jaipur Superfast\n");
				 printf("Select choice.\n1.Station\n2.Time\n3.Full schedule\n");
				 scanf("%d",&choice);
				 switch(choice)
				 {
				 	case 1 :
					 {
					  		    printf("Enter station\n");
					 		    scanf("%s",loc);
							 	if(strcmp(loc,"Mumbai Central")==0)
							 	{
							 		printf("The train will start from Mumbai Central at 1:05am\n");
							 		
								 }
				 				else if(strcmp(loc,"Dadar")==0)
				 				{
				 					printf("The train will reach Dadar at 1:25am\n");
								 }
								
								else if(strcmp(loc,"Panvel")==0)
								{
									printf("The train will reach Panvel at 2:15am\n");
								}
								else if(strcmp(loc,"Surat")==0)
								{
									printf("The train will reach Surat at 3:50\n ");
								}
								else if(strcmp(loc,"Vadodara")==0)
				 				{
				 					printf("The train will reach Vadodara at 4:45am\n");
								 }
								 else if(strcmp(loc,"Meghnagar")==0)
								{
									printf("The train will reach Meghnagar at 5:55am\n ");
								}
								else if(strcmp(loc,"Ratlam")==0)
								{
									printf("The train will reach Ratlam at 6.50am\n");
								}
								else if(strcmp(loc,"Vikramgarh Alot")==0)
								{
									printf("The train will reach Vikramgarh Alot at 7.30am\n");
								}
								else if(strcmp(loc,"Kota")==0)
								{
									printf("The train will reach kota at 8.15\n");
								}
								else if(strcmp(loc,"Sawai madhopur")==0)
								{
								printf("The train will reach Sawai Madhopur at 9.05am\n ");
								}
								else if(strcmp(loc,"Durgapur")==0)
								{
									printf("The train will reach Durgapur at 10:30am\n ");
								}
								else if(strcmp(loc,"Jaipur")==0)
								{
									printf("The train will reach Jaipur at 11:30am\n ");
								}
								else
								{
									printf("The Jaipur SF Express does not halt at %s",loc);
								}
								break;
						}
					case 2 : 
					    {
							 printf("Enter time\n");
							 scanf("%f",&time);
							 if(12.55<time&&time<1.05)
							 {
							 	printf("The train is at Mumbai Central \n");
							 }
							 else if(1.05<time&&time<1.25)
							 {
							 	printf("The train has left Mumbai Central and is heading towards Dadar\n");
							 }
							 else if(1.24<time&&time<1.31)
							 {
							 	printf("The train is at Dadar\n");
							 }
							  else if(1.30<time&&time<2.15)
							 {
							 	printf("The train has left Dadar and is heading towards Palghar\n");
							 }
							 else if(2.14<time&&time<2.18)
							 {
							 	printf("The train is at Palghar\n");
							 }
							  else if(2.18<time&&time<3.50)
							 {
							 	printf("The train has left Palghar and is heading towards Surat\n");
							 }
							 else if(3.49<time&&time<3.56)
							 {
							 	printf("The train is at Surat\n");
							 }
							  else if(3.55<time&&time<4.45)
							 {
							 	printf("The train has left Surat and is heading towards Vadodara\n");
							 	
							}
							 else if(4.44<time&&time<4.51)
							 {
							 	printf("The train is at Vadodara\n");
							 }
							else if(4.50<time&&time<5.54)
							 {
							 	printf("The train has left Vadodara and is heading towards Meghnagar\n");
							 	
							}
							
							else if(5.54<time&&time<5.59)
							 {
							 	printf("The train is at Meghnagar\n");
							 }
							else if(5.58<time&&time<6.50)
							 {
							 	printf("The train has left Meghnagar and is heading towards Ratlam\n");
							 	
							}
								 else if(6.49<time&&time<6.56)
							 {
							 	printf("The train is at Ratlam\n");
							 }
							else if(6.55<time&&time<7.30)
							 {
							 	printf("The train has left Ratlam and is heading towards Vikramgarh Alot\n");
							 	
							}
							 else if(7.29<time&&time<7.34)
							{
							 	printf("The train is at Vikramgarh Alot\n");
							 	
							}
							 else if(7.33<time&&time<8.15)
							{
							 	printf("The train has left Vikramgarh Alot and is heading towards Kota\n");
							 	
							}
							else if(8.14<time&&time<8.21)
							 {
							 	printf("The train is at Kota\n");	
							 }
							else if(8.20<time&&time<9.05)
							 {
							 	printf("The train has left Kota and is heading towards Sawai Madhopur\n");
							 	
							 }
								else if(9.04<time&&time<9.11)
							 {
							 	printf("The train is at Sawai Madhopur\n");
						     }
							 	else if(9.10<time&&time<10.30)
							 {
							 	printf("The train has left Sawai Madhopur and is heading towards Durgapur\n");
							 	
							 }
							 else if(10.29<time&&time<10.34)
							 {
							 	printf("The train is at Durgapur\n");
						     }
						     
						     	else if(10.33<time&&time<11.30)
							 {
							 	printf("The train has left Durgapur and is heading towards Jaipur\n");
							 	
							 }
							 
							
							else if(time==11.30)
							 {
							 	printf("The train is at Jaipur\n");
							 }
							 
							 else
							 {
							 	 printf("You have entered wrong time\n");
							 }
							 break;
						}
						case 3:
							{
								printf("The entire schedule of Jaipur superfast express:\n");
								printf("Station\t\tArrival\t\tDeparture\tHalt Time\tDistance \n");
								printf("Mumbai central\t-\t\t1.05am\t\t-\t\t--\nDadar\t\t1.25am\t\t1.30am\t\t5mins\t\t15km\nPalghar\t\t2.15am\t\t2.18am\t\t3mins\t\t60km\nSurat\t\t3.50am\t\t3.55am\t\t5mins\t\t263km\nVadodara\t4.45am\t\t4.50am\t\t5mins\t\t392km\nMeghnagar\t5.55am\t\t5.58am\t\t3mins\t\t573km\nRatlam\t\t6.50am\t\t6.55am\t\t5mins\t\t653km\nVikramgarh Alot\t7.30am\t\t7.33am\t\t3mins\t\t734km\nKota\t\t8.15am\t\t8.20am\t\t5mins\t\t920km\nSawai Madhopur\t9.05\t\t9.10am\t\t5mins\t\t1025km\nDurgapur\t10.30am\t\t10.33am\t\t3mins\t\t1151km\nJaipur\t\t11.30am\t\t-\t\t-\t\t1159km\n");
								        
								
							}
			}
	}
	
							
}
printf("Press 0 to exit and 1 to continue\n");
	scanf("%d",&n);				     
}
printf("Thank You for using Our Portal\n");         

   
}


                



