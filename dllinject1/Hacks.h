#pragma once 

#include <Windows.h>
#include "d3d9.h"
#include <ctime>
#include <iostream>

#define D3DHOOK_TEXTURES
#define MAX_MENU_ITEMS 6

#define WALLHACK 0



class Hacks {
public:
	int m_stride;

	void Hacks::CreateFont(IDirect3DDevice9* device, std::string choiceFont);
	void Hacks::InitializeMenuItems();
	void Hacks::DrawText(LPCSTR TextToDraw, int x, int y, D3DCOLOR color); 
	void Hacks::DrawMenu(IDirect3DDevice9 *device);
	void Hacks::DrawFilledRectangle(IDirect3DDevice9 *device, int x, int y, int w, int h, D3DCOLOR color);
	void Hacks::DrawBorderedRectangle(IDirect3DDevice9* device, int x, int y, int w, int h, int thickness, D3DCOLOR color);
	void Hacks::KeyboardInput(); 

	LPDIRECT3DTEXTURE9 texRed;
	LPDIRECT3DTEXTURE9 texGreen;
	LPDIRECT3DTEXTURE9 texBlue;
	LPDIRECT3DTEXTURE9 texWhite;
	LPDIRECT3DTEXTURE9 texBlack;

	D3DVIEWPORT9 viewport; 
	LPD3DXFONT m_Font;

	struct d3dMenuItem {
		bool on;
		std::string name; 
	};

	d3dMenuItem hack[MAX_MENU_ITEMS];


};