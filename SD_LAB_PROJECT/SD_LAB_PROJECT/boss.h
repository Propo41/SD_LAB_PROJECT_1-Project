#ifndef boss_h
#define boss_h

#include "declarations.h"
#include "character.h"
#include "UIEffects.h"

//#include "hero.h"

int wait = 0;
bool temp_2 = true;
bool temp_3 = true;
bool temp_6 = true;
int temp_7 = 0;


int fissureLength = 400;
int moveBoss = false;
bool bossSegment = false;
int bossTrigger = 0;




void loadImagesBoss()
{

	//****************************************boss movement********************************************
	L1Boss.id[0] = iLoadImage("images\\character\\enemy\\boss\\movement\\standing.png"); //hero standing: looking left
	L1Boss.id[1] = iLoadImage("images\\character\\enemy\\boss\\movement\\1.png");
	L1Boss.id[2] = iLoadImage("images\\character\\enemy\\boss\\movement\\2.png");
	L1Boss.id[3] = iLoadImage("images\\character\\enemy\\boss\\movement\\3.png");
	L1Boss.id[4] = iLoadImage("images\\character\\enemy\\boss\\movement\\4.png");
	L1Boss.id[5] = iLoadImage("images\\character\\enemy\\boss\\movement\\5.png");
	L1Boss.id[6] = iLoadImage("images\\character\\enemy\\boss\\movement\\6.png");
	L1Boss.id[7] = iLoadImage("images\\character\\enemy\\boss\\movement\\7.png");
	L1Boss.id[8] = iLoadImage("images\\character\\enemy\\boss\\movement\\8.png");

	L1Boss.id[9] = iLoadImage("images\\character\\enemy\\boss\\movement\\fstanding.png");  // hero standing: looking right
	L1Boss.id[10] = iLoadImage("images\\character\\enemy\\boss\\movement\\f1.png");
	L1Boss.id[11] = iLoadImage("images\\character\\enemy\\boss\\movement\\f2.png");
	L1Boss.id[12] = iLoadImage("images\\character\\enemy\\boss\\movement\\f3.png");
	L1Boss.id[13] = iLoadImage("images\\character\\enemy\\boss\\movement\\f4.png");
	L1Boss.id[14] = iLoadImage("images\\character\\enemy\\boss\\movement\\f5.png");
	L1Boss.id[15] = iLoadImage("images\\character\\enemy\\boss\\movement\\f6.png");
	L1Boss.id[16] = iLoadImage("images\\character\\enemy\\boss\\movement\\f7.png");
	L1Boss.id[17] = iLoadImage("images\\character\\enemy\\boss\\movement\\f8.png");
	//*************************************************************************************************


	//****************************************BOSS ATTACK************************************************
	L1Boss.attackID[0] = iLoadImage("images\\character\\enemy\\boss\\attack\\L_01.png"); //enemy looking LEFT
	L1Boss.attackID[1] = iLoadImage("images\\character\\enemy\\boss\\attack\\L_02.png");
	L1Boss.attackID[2] = iLoadImage("images\\character\\enemy\\boss\\attack\\L_03.png");
	L1Boss.attackID[3] = iLoadImage("images\\character\\enemy\\boss\\attack\\L_04.png");
	L1Boss.attackID[4] = iLoadImage("images\\character\\enemy\\boss\\attack\\L_05.png");
	L1Boss.attackID[5] = iLoadImage("images\\character\\enemy\\boss\\attack\\L_06.png");
	L1Boss.attackID[6] = iLoadImage("images\\character\\enemy\\boss\\attack\\L_07.png");
	L1Boss.attackID[7] = iLoadImage("images\\character\\enemy\\boss\\attack\\L_08.png");
	L1Boss.attackID[8] = iLoadImage("images\\character\\enemy\\boss\\attack\\L_09.png");
	L1Boss.attackID[9] = iLoadImage("images\\character\\enemy\\boss\\attack\\L_10.png");
	L1Boss.attackID[10] = iLoadImage("images\\character\\enemy\\boss\\attack\\L_11.png");
	L1Boss.attackID[11] = iLoadImage("images\\character\\enemy\\boss\\attack\\L_12.png");
	L1Boss.attackID[12] = iLoadImage("images\\character\\enemy\\boss\\attack\\L_13.png");
	L1Boss.attackID[13] = iLoadImage("images\\character\\enemy\\boss\\attack\\L_14.png"); //fissure starts from here
	L1Boss.attackID[14] = iLoadImage("images\\character\\enemy\\boss\\attack\\L_15.png");
	L1Boss.attackID[15] = iLoadImage("images\\character\\enemy\\boss\\attack\\L_16.png");

	L1Boss.attackID[16] = iLoadImage("images\\character\\enemy\\boss\\attack\\R_16.png"); //enemy looking RIGHT
	L1Boss.attackID[17] = iLoadImage("images\\character\\enemy\\boss\\attack\\R_15.png");
	L1Boss.attackID[18] = iLoadImage("images\\character\\enemy\\boss\\attack\\R_14.png");
	L1Boss.attackID[19] = iLoadImage("images\\character\\enemy\\boss\\attack\\R_13.png");
	L1Boss.attackID[20] = iLoadImage("images\\character\\enemy\\boss\\attack\\R_12.png");
	L1Boss.attackID[21] = iLoadImage("images\\character\\enemy\\boss\\attack\\R_11.png");
	L1Boss.attackID[22] = iLoadImage("images\\character\\enemy\\boss\\attack\\R_10.png");
	L1Boss.attackID[23] = iLoadImage("images\\character\\enemy\\boss\\attack\\R_09.png");
	L1Boss.attackID[24] = iLoadImage("images\\character\\enemy\\boss\\attack\\R_08.png");
	L1Boss.attackID[25] = iLoadImage("images\\character\\enemy\\boss\\attack\\R_07.png");
	L1Boss.attackID[26] = iLoadImage("images\\character\\enemy\\boss\\attack\\R_06.png");
	L1Boss.attackID[27] = iLoadImage("images\\character\\enemy\\boss\\attack\\R_05.png");
	L1Boss.attackID[28] = iLoadImage("images\\character\\enemy\\boss\\attack\\R_04.png");
	L1Boss.attackID[29] = iLoadImage("images\\character\\enemy\\boss\\attack\\R_03.png"); //fissure starts from here
	L1Boss.attackID[30] = iLoadImage("images\\character\\enemy\\boss\\attack\\R_02.png");
	L1Boss.attackID[31] = iLoadImage("images\\character\\enemy\\boss\\attack\\R_01.png");
	//*****************************************************************************************




	//**********************************************FISSURE******************************************
	L1Boss.powerID[0] = iLoadImage("images\\character\\enemy\\boss\\power\\back_01.png"); //enemy looking left
	L1Boss.powerID[1] = iLoadImage("images\\character\\enemy\\boss\\power\\back_02.png");
	L1Boss.powerID[2] = iLoadImage("images\\character\\enemy\\boss\\power\\back_03.png");
	L1Boss.powerID[3] = iLoadImage("images\\character\\enemy\\boss\\power\\back_04.png");

	L1Boss.powerID[4] = iLoadImage("images\\character\\enemy\\boss\\power\\fFissure_01.png");  //enemy looking right
	L1Boss.powerID[5] = iLoadImage("images\\character\\enemy\\boss\\power\\fFissure_02.png");
	L1Boss.powerID[6] = iLoadImage("images\\character\\enemy\\boss\\power\\fFissure_03.png");
	L1Boss.powerID[7] = iLoadImage("images\\character\\enemy\\boss\\power\\fFissure_04.png");
	//*************************************************************************************************


	//*************************************BOSS DEATH*************************************************
	L1Boss.deathID[0] = iLoadImage("images\\character\\enemy\\boss\\dying\\dying_23.png");  // boss dying : looking right
	L1Boss.deathID[1] = iLoadImage("images\\character\\enemy\\boss\\dying\\dying_22.png");
	L1Boss.deathID[2] = iLoadImage("images\\character\\enemy\\boss\\dying\\dying_21.png");
	L1Boss.deathID[3] = iLoadImage("images\\character\\enemy\\boss\\dying\\dying_20.png");
	L1Boss.deathID[4] = iLoadImage("images\\character\\enemy\\boss\\dying\\dying_19.png");
	L1Boss.deathID[5] = iLoadImage("images\\character\\enemy\\boss\\dying\\dying_18.png");
	L1Boss.deathID[6] = iLoadImage("images\\character\\enemy\\boss\\dying\\dying_17.png");


	L1Boss.deathID[7] = iLoadImage("images\\character\\enemy\\boss\\dying\\dyingL_17.png"); // boss dying : looking left
	L1Boss.deathID[8] = iLoadImage("images\\character\\enemy\\boss\\dying\\dyingL_18.png");
	L1Boss.deathID[9] = iLoadImage("images\\character\\enemy\\boss\\dying\\dyingL_19.png");
	L1Boss.deathID[10] = iLoadImage("images\\character\\enemy\\boss\\dying\\dyingL_20.png");
	L1Boss.deathID[11] = iLoadImage("images\\character\\enemy\\boss\\dying\\dyingL_21.png");
	L1Boss.deathID[12] = iLoadImage("images\\character\\enemy\\boss\\dying\\dyingL_22.png");
	L1Boss.deathID[13] = iLoadImage("images\\character\\enemy\\boss\\dying\\dyingL_23.png");
	//************************************************************************************************


} // level 1

void loadImagesBoss2() // level 2
{


}

void renderBoss(int mode)
{
	if (mode == MOVE)
	{
		iShowImage(L1Boss.x, L1Boss.y-5, L1Boss.width, L1Boss.height, L1Boss.id[L1Boss.index]);

	}
	 if (mode == ATTACK)
	{
		iShowImage(L1Boss.x, L1Boss.y-20, 500, 400, L1Boss.attackID[L1Boss.attackIndex]);

	}
	 if (mode == POWER)
	{
		 if (L1Boss.direction==RIGHT)
			iShowImage(L1Boss.x-100, L1Boss.y, 200,100, L1Boss.powerID[L1Boss.powerIndex]);
		 else
			 iShowImage(L1Boss.x +300, L1Boss.y, 200, 100, L1Boss.powerID[L1Boss.powerIndex]);

	}

	 if (mode == DYING)
	{

		 iShowImage(L1Boss.x, L1Boss.y, 500, 400, L1Boss.deathID[L1Boss.dyingIndex]);


	}
}

void bossFollowPlayer(int dir)
{
	if (dir == RIGHT) //if hero is on right side of boss, then boss will turn towards player
	{
		

		if (hero.x  > L1Boss.x + 100)
		{
			L1Boss.direction = LEFT; // boos will turn right

		}


	}
	else
	{
		//iSetColor(255, 255, 255);
	//	iLine(hero.x + 200, tileHeight - 10, hero.x + 200, tileHeight + 500);

		if (hero.x + 100 <= L1Boss.x + 200)
		{
			L1Boss.direction = RIGHT; // boos will turn left

		}

	
	}

}

void bossSpawn()
{
	L1Boss.initializeDimensions(250, 250); 
	L1Boss.initializeLocation(canvasWidth + 10, tileHeight - 2);
	L1Boss.setDirection(RIGHT);
	L1Boss.initializeMechanics(6, 10, 1, NULL); // change hp to 100
	L1Boss.setVisibility(true, false, false, false, false);
	L1_BossHPbar.createHPbar(850, 650, 876, 855, 876, 688, 855, 711, 1196, 711, 1211, 690); // total length is 356
	L1Boss.dyingIndex = 0;

}

void bossMovement()
{

	if (L1Boss.direction == RIGHT) //comes from right direction
	{

	//	L1Boss.attackIndex = 0;
	//	L1Boss.powerIndex = 0;


		L1Boss.x -= L1Boss.speed;
		L1Boss.index++;

		if (L1Boss.index >= 8)
		{
			L1Boss.index = 0;
		}


		if (hero.x >= L1Boss.x - 200 && hero.x <= L1Boss.x + 200) // if creep comes near hero, attack; +80 is the width of the body of player
		{
			if (temp_2) //calls only once. it is used for channeling attacks for boss. ie the boss does not attack consecutively. it attacks after a few seconds
			{
				L1Boss.attack = true; 
				temp_2 = false;
			}

				
			
		}
		
		bossFollowPlayer(RIGHT);

	}

	else						  //come from left direction
	{
		//L1Boss.attackIndex = 16;
		//L1Boss.powerIndex = 4;

		L1Boss.x += L1Boss.speed;
		L1Boss.index++;

		if (L1Boss.index >= 17)
		{
			L1Boss.index = 9;
		}

		if (hero.x <= L1Boss.x + 400 && hero.x >= L1Boss.x) //calls only once. it is used for channeling attacks for boss. ie the boss does not attack consecutively. it attacks after a few seconds
		{
			if (temp_2)
			{
				L1Boss.attack = true;
				temp_2 = false;

			}
			
		}

		bossFollowPlayer(LEFT);
	}
}

void bossAttackLogic(int mode)
{
	if (temp_3) //resetting the values of power indexes. if not used here, a bug occurs.
	{
		if (L1Boss.direction == RIGHT)
		{
			L1Boss.dyingIndex = 0;
			L1Boss.powerIndex = 0;

		}
		else
		{
			L1Boss.powerIndex = 4;
			L1Boss.dyingIndex = 7;

		}

		temp_3 = false;
	}


	if (mode == ATTACK)
	{
		if (L1Boss.direction == RIGHT)
		{

			if (!L1Boss.power)
			{
				L1Boss.attackIndex++;
				//cout << "attack index : right :: " << L1Boss.attackIndex << endl;
			}

			if (L1Boss.attackIndex == 13)
			{
				wait++;
				L1Boss.power = true;
				L1Boss.channelPower = true;

				if (wait >= 60)
				{
					L1Boss.power = false;
					L1Boss.channelPower = false;
				    L1Boss.powerIndex = 0;
					temp_3 = true;


				}
			}

			if (L1Boss.attackIndex >= 15)
			{
				L1Boss.attack = false;
				wait = 0;
				L1Boss.attackIndex = 0;
				L1Boss.powerIndex = 0;

				temp_2 = true;

			}

		}
		else
		{


			if (!L1Boss.power)
			{
				L1Boss.attackIndex++;
			//	cout << "attack index : left :: " << L1Boss.attackIndex << endl;

			}

			if (L1Boss.attackIndex == 29)
			{
				wait++;
				L1Boss.power = true;
				L1Boss.channelPower = true;

				if (wait >= 100)
				{
					L1Boss.powerIndex = 4;

					L1Boss.power = false;
					L1Boss.channelPower = false;
					temp_3 = true;


				}

			}

			if (L1Boss.attackIndex >= 31)
			{
				L1Boss.attack = false;
				wait = 0;
				L1Boss.attackIndex = 16;
				temp_2 = true;
				L1Boss.powerIndex = 4;


			}



		}
	}


	if (mode == POWER)
	{
		if (L1Boss.direction == RIGHT)
		{
			
		//	cout << "power index right : " << L1Boss.powerIndex << endl;

			L1Boss.powerIndex++;
			if (L1Boss.powerIndex >= 3)
			{
				L1Boss.powerIndex = 3;
				//L1Boss.channelPower = false;
				//L1Boss.powerIndex = 0;
			}


		}
		else
		{

			
			//cout << "power index left : " << L1Boss.powerIndex << endl;

			L1Boss.powerIndex++;

			if (L1Boss.powerIndex >= 7)
			{

				L1Boss.powerIndex = 7;
			//	L1Boss.channelPower = false;

				//L1Boss.powerIndex = 4;
			}

		}

	}
}

void bossDamage(int mode, int attackType)
{

	//BOSS HP IS SET TO 100
	// hp bar is 356

	if (mode == DAMAGE)
	{
		if ((hero.x >= L1Boss.x && hero.x <= L1Boss.x + 100) || (hero.x <= L1Boss.x + 300 && hero.x >= L1Boss.x + 200)) // if boss comes near hero's range while hero.attack is true, then boss gets hurt
		{

		//	cout << "boss hp : " << L1Boss.HP << endl;

			if (attackType == LIGHT_ATTACK)
			{
				L1Boss.HP -= 5; // dies in 20 HITS

				L1_BossHurt.show = true;					 // damage efffects turned true


				L1_BossHPbar.variable1 += 10;
				L1_BossHPbar.variable2 += 10;
			}
			else if (attackType == HEAVY_ATTACK)
			{
				L1Boss.HP -= 10; // dies in 10

				L1_BossHPbar.variable1 += 20;
				L1_BossHPbar.variable2 += 20;

				L1_BossHurt.show = true;					// damage efffects turned true

			}

			if (L1Boss.HP <= 0) 
			{
				// boss 
				L1Boss.death = true;
				L1Boss.show = false;
				L1Boss.power = false;
				L1Boss.showHP = false;
				L1Boss.attack = false;
				L1Boss.channelPower = false;

				score += 50;

			}

		

		}

		
	

	}
	else if (mode == DYING)  // DYING ANIMATION FOR LEVEL 1 BOSS
	{


		if (temp_6) // used for initializing the sprite animation. or else it rotates twice
		{
			L1Boss.dyingIndex = 0;
			temp_6 = false;

		}


			L1Boss.dyingIndex++;

			L1Boss.x -= 20;

			L1Boss.y -= 1;


			if (L1Boss.dyingIndex >= 6)
			{
				temp_7++;

				L1Boss.dyingIndex = 6;

				if (temp_7 >= 40) //for how long the boss SLIDES on the floor before the game finishes
				{

					// victory!!!!!
					temp_7 = 0;

					L1Boss.dyingIndex = 0;
					L1Boss.death = false;


					MenuController = VICTORY_1;

					iPauseTimer(timer_AUTOMOTION);
					iPauseTimer(timer_ENEMYMOTION);
					iPauseTimer(timer_HEROMOTION);

					hero.x = 200; // bringing hero to left side

					gameWon_1 = true;
					gameStart = false;
					gameOver = false;
					
				}

			



			}

		
	/*	else
		{
			L1Boss.dyingIndex++;
			L1Boss.x -= 5;

			L1Boss.y -= 2;

			if (L1Boss.dyingIndex >= 7)
			{
				L1Boss.dyingIndex = 0;
				L1Boss.death = false;
				MenuController = VICTORY_1;


			}

		}*/
	}


}

/*
timer function. animation for damage effect for level 1 boss
*/
void L1BossHurtLogic() 
{
	L1_BossHurt.index++;
	if (L1_BossHurt.index >= 4)
	{
		L1_BossHurt.show = false;
		L1_BossHurt.index = 0;
	}
}




#endif