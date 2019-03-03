#define SDL_MAIN_HANDLED
#include <SDL.h>
#include <stdio.h>


SDL_Window *win;
SDL_Renderer *ren;

void drawsquare(double x, double y, double l) {
	SDL_Rect rect = { x, y, l, l }; // x, y, width, height
	SDL_RenderFillRect(ren, &rect);
	SDL_RenderDrawRect(ren, &rect);
	SDL_RenderPresent(ren);
}

int drawBoxFractual(int x, int y, int l, int iter) {
	if (iter != 0) {
//  bottom left
		drawBoxFractual(x, y, l / 3, iter - 1);

//  top left
		drawBoxFractual(x + 2 * l / 3, y, l / 3, iter - 1);

//  center
		drawBoxFractual(x + l / 3, y + l / 3, l / 3, iter - 1);

//  bottom right
		drawBoxFractual(x, y + 2 * l / 3, l / 3, iter - 1);

//  top right
		drawBoxFractual(x + 2 * l / 3, y + 2 * l / 3, l / 3, iter - 1);


	} else {
		drawsquare(x, y, l);
		printf("(%d, %d), %d\n", x, y, l);
		return 0;
	}
}


void main(int argc, char *argv[]) {
	if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
		printf("SDL could not initialize");
	}

	SDL_CreateWindowAndRenderer(300, 300, 0, &win, &ren);
	SDL_SetRenderDrawColor(ren, 255, 255, 255, 255);
	SDL_RenderClear(ren);

	SDL_SetRenderDrawColor(ren, 0, 0, 0, 255);

//    drawBoxFractual(0, 0, 300, 1);
//    drawBoxFractual(0, 0, 300, 2);
	drawBoxFractual(0, 0, 300, 3);


	SDL_Event e;
	do { SDL_PollEvent(&e); } while (e.type != SDL_MOUSEBUTTONDOWN);
}


