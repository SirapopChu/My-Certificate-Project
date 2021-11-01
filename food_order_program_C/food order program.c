/*
 ============================================================================
 Name        : food.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
			printf( "	      ****Welcome to RQ School lunch selection System****\n");
			fflush( stdout );
			printf(" 		 ____________________________________________\n");
			fflush( stdout );
			printf("		|         	This is our menu             |\n");
			fflush( stdout );
			printf("		|____________________________________________|\n");
			fflush( stdout );
			printf("		|          1 for appetizer(select 2)         |\n");
			fflush( stdout );
			printf("		|          2 for main dish(select 1)         |\n");
			fflush( stdout );
			printf("		|          3 for soup(select1)               |\n");
			fflush( stdout );
			printf("		|          4 for dessert(select2)            |\n");
			printf("		|____________________________________________|\n");
			fflush( stdout );
			printf("==================================((Menu))=============================\n");
			fflush( stdout );
			printf("================================[Appetizer]============================\n");
			fflush( stdout );
			printf("0.Mussel with Sauce 	    					200THB\n");
			fflush( stdout );
			printf("1.Korean pancake    						350THB\n");
			fflush( stdout );
			printf("2.Kimchi Pizza (Kimchijeon)					300THB\n");
			fflush( stdout );
			printf("3.Pizza Toast 							550THB\n");
			fflush( stdout );
			printf("4.Macaroni cheese           					180THB\n");
			fflush( stdout );
			printf("5.Cold Cut Plate            					550THB\n");
			fflush( stdout );
			printf("6.Fried Calamari						250THB\n");
			printf("7.Crab Cakes with Cream         				180THB\n");
			fflush( stdout );
			printf("8.Hogs in a Blanket            					450THB\n");
			fflush( stdout );
			printf("9.Caesar Salad							250THB\n");
			fflush( stdout );
			printf("=======================================================================\n");
			fflush( stdout );
			printf("=======================================================================\n");
			fflush( stdout );
			char *food1name[] = {"Mussel with Sauce","Korean pancake","Kimchi Pizza (Kimchijeon)",
								"Pizza Toast ",
								" Macaroni cheese","Cold Cut Plate","Fried Calamari",
								"Crab Cakes with Cream","Hogs in a Blanket","Caesar Salad"};
			int food1price[10] = {500,350,600,550,180,650,250,180,450,250};
			printf("                                                                                 \n");
			printf("                                                                                 \n");

			printf("==================================((Menu))=============================\n");
			fflush( stdout );
			printf("================================[Main dish]============================\n");
			fflush( stdout );
			printf("0.Creamy Tomato Pasta 	    					300THB\n");
			fflush( stdout );
			printf("1.Baked Honey Mustard Chicken   				550THB\n");
			fflush( stdout );
			printf("2.Red and White Tortellini					200THB\n");
			fflush( stdout );
			printf("3.Classic Meatloaf 						450THB\n");
			fflush( stdout );
			printf("4.Pot Roast           						200THB\n");
			fflush( stdout );
			printf("5.Crockpot Chicken and Dumplings            			300THB\n");
			fflush( stdout );
			printf("6.Honey Orange Fish Fillets					350THB\n");
			fflush( stdout );
			printf("7.Spicy Pork Tenderloin with Apples and Sweet Potatoes        	400THB\n");
			fflush( stdout );
			printf("8.Braised Chicken Legs With Grapes and Fennel           	530THB\n");
			fflush( stdout );
			printf("9.Seared Scallops With Brown Butter and Lemon Pan Sauce		660THB\n");
			fflush( stdout );
			printf("=======================================================================\n");
			fflush( stdout );
			printf("=======================================================================\n");
			fflush( stdout );
			char *food2name[] = {"Creamy Tomato Pasta","Baked Honey Mustard Chicken","Red and White Tortellini",
								"Classic Meatloaf"," Pot Roast","Crockpot Chicken and Dumplings",
								"Honey Orange Fish Fillets","Spicy Pork Tenderloin with Apples and Sweet Potatoes",
								"Braised Chicken Legs With Grapes and Fennel",
								"Seared Scallops With Brown Butter and Lemon Pan Sauce"};
			int food2price[10] = {300,550,200,450,200,300,350,400,530,660};
			printf("                                                                              \n");
			printf("                                                                              \n");


			printf("==================================((Menu))=============================\n");
			fflush( stdout );
			printf("===================================[soup]==============================\n");
			fflush( stdout );
			printf("0.Spiced carrot & lentil soup	    				250THB\n");
			fflush( stdout );
			printf("1.Mushroom soup						   	350THB\n");
			fflush( stdout );
			printf("2.Healthy mushroom soup						200THB\n");
			fflush( stdout );
			printf("3.Cauliflower soup						300THB\n");
			fflush( stdout );
			printf("4.Tomato soup          						200THB\n");
			fflush( stdout );
			printf("=======================================================================\n");
			fflush( stdout );
			printf("=======================================================================\n");
			fflush( stdout );
			char*food3name[] = {"Spiced carrot & lentil soup","Mushroom soup","Healthy mushroom soup",
								"Cauliflower soup","Tomato soup"};
			int food3price[5] = {250,350,200,300,200};
			printf("                                                                               \n");
			printf("                                                                              \n");

			printf("==================================((Menu))=============================\n");
			fflush( stdout );
			printf("===================================[Dessert]===========================\n");
			fflush( stdout );
			printf("0.Soffle Cheesecake	    					200THB\n");
			fflush( stdout );
			printf("1.Puddings   							250THB\n");
			fflush( stdout );
			printf("2.Strawberry Crumble						200THB\n");
			fflush( stdout );
			printf("3.Chocloate Lava Cake						350THB\n");
			fflush( stdout );
			printf("4.Figgy Pudding           					200THB\n");
			fflush( stdout );
			printf("5.Chocolate Mud Brownie            				150THB\n");
			fflush( stdout );
			printf("6.Fudge cake							250THB\n");
			fflush( stdout );
			printf("7.Strawberry platter        					300THB\n");
			fflush( stdout );
			printf("8.Matcha Bingsu           					500THB\n");
			fflush( stdout );
			printf("9.French Toast							400THB\n");
			fflush( stdout );
			printf("=======================================================================\n");
			fflush( stdout );
			printf("=======================================================================\n");
			fflush( stdout );
			char *food4name[] = {"Soffle Cheesecake","Puddings","Strawberry Crumble","Chocolate Lava Cake",
								 "Figgy Pudding","Chocolate Mud Brownie",
							  	  "Fudge cake","Strawberry platter","Matcha Bingsu","French Toast"};
			int food4price[10]={200,250,200,350,200,150,250,300,500,400};
			fflush( stdout );
			printf("***********************************************************************\n");
			printf("				What do you want to eat?\n");
			printf("***********************************************************************\n");
			fflush( stdout );
			printf("                                                                              \n");

			int appt_food01;
			int appt_food02;
			setbuf(stdout, NULL);
			printf("++Appetizer(select 2)--> ");
			scanf("%d  %d",&appt_food01,&appt_food02);

			if((appt_food01 && appt_food02) == 0||1||2||3||4||5||6||7||8||9){
			printf(">>%s 		: 			       %dBAHT\n",food1name[appt_food01],food1price[appt_food01]);
			printf(">>%s 	: 			       %dBAHT\n",food1name[appt_food02],food1price[appt_food02]);
			printf("***********************************************************************\n");
			}
			else{
				printf("Error Please Try again");
				return EXIT_SUCCESS;
			}

			int mdfood;
			setbuf(stdout, NULL);
			printf("++Main dish(select1)--> ");
			scanf("%d",&mdfood);
			if(mdfood == 0||1||2||3||4||5||6||7||8||9){
			printf(">>%s 		: 			       %dBAHT\n",food2name[mdfood],food2price[mdfood]);
			printf("***********************************************************************\n");
			}
			else{
				printf("Error Please Try again");
				return EXIT_SUCCESS;
			}
			int soup;
			setbuf(stdout, NULL);
			printf("++soup(select1)--> ");
			scanf("%d",&soup);
			if(soup == 0||1||2||3||4||5||6||7||8||9){
			printf(">>%s 			: 			       %dBAHT\n",food3name[soup],food3price[soup]);
			printf("***********************************************************************\n");
			}
			else{
				printf("Error Please Try again");
				return EXIT_SUCCESS;
			}

			int dst01;
			int dst02;
			setbuf(stdout, NULL);
			printf("++dessert(select2)--> ");
			scanf("%d  %d",&dst01,&dst02);
			if((dst01&&dst02) == 0||1||2||3||4||5||6||7||8||9){
			printf(">>%s 	: 			       %dBAHT\n",food4name[dst01],food4price[dst01]);
			printf(">>%s 			: 			       %dBAHT\n",food4name[dst02],food4price[dst02]);
			printf("***********************************************************************\n");
			}

			else{
				printf("Error Please Try again");
				return EXIT_SUCCESS;
			}
			printf("_______________________________________________________________________\n");
			printf("_____________________________________RECEIPT___________________________\n");
			printf("_______________________________________________________________________\n");
			printf("1 x %s 		: 			       %dBAHT\n",food1name[appt_food01],food1price[appt_food01]);
			printf("1 x %s 	: 			       %dBAHT\n",food1name[appt_food02],food1price[appt_food02]);
			printf("1 x %s 		: 			       %dBAHT\n",food2name[mdfood],food2price[mdfood]);
			printf("1 x %s 		: 			       %dBAHT\n",food3name[soup],food3price[soup]);
			printf("1 x %s 	: 			       %dBAHT\n",food4name[dst01],food4price[dst01]);
			printf("1 x %s 			: 			       %dBAHT\n",food4name[dst02],food4price[dst02]);
			printf("_______________________________________________________________________\n");
			printf("_______________________________________________________________________\n");
			int total = food1price[appt_food01]+food1price[appt_food02]+food2price[mdfood]+food3price[soup]+food4price[dst01]+food4price[dst02];
			printf("Total	x(6) 			: 		 	     %d BAHT\n",total);
			return EXIT_SUCCESS;

}
