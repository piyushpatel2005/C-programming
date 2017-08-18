#include <stdio.h>

#define PLAYERS 5
#define GAMES 4

int scores[6][5];
float score_avg[6], best_avg;
int point_total, best_player;
int counter1, counter2;

int main()
{
  // Outer loop for each game.
  for(counter2 = 1; counter2 <= GAMES; counter2++)
  {
    printf("\nGetting scoring totals for Game #%d.\n", counter2);
    for(counter1 = 1; counter1 <= PLAYERS; counter1++)
    {
      printf("What did player #%d score in the game?", counter1);
      scanf("%d", &scores[counter1][counter2]);
    }
  }

  // Calculate average per player

  for(counter1 = 1; counter1 <= PLAYERS; counter1++)
  {
    point_total = 0;
    for(counter2 = 1; counter2 <= GAMES; counter2++)
    {
      point_total += scores[counter1][counter2];
    }
    score_avg[counter1] = (float) point_total / GAMES;
  }

  best_avg = 0;
  for(counter1 = 1; counter1 <= PLAYERS; counter1++)
  {
    if(score_avg[counter1] > best_avg)
    {
      best_avg = score_avg[counter1];
      best_player = counter1;
    }
  }

  printf("\nPlayer #%d had the best scoring average.\n", best_player);
  printf("at %.2f points per game.\n", score_avg[best_player]);
  return 0;
}
