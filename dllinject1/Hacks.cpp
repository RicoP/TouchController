#include "Hacks.h"

int menuIndex = 0; 
D3DCOLOR fontRed   = D3DCOLOR_ARGB(255, 255, 0, 0);
D3DCOLOR fontGreen = D3DCOLOR_ARGB(255, 0, 255, 0);
D3DCOLOR fontBlue  = D3DCOLOR_ARGB(255, 0, 0, 255);
D3DCOLOR fontBlack = D3DCOLOR_ARGB(255, 0, 0, 0);
D3DCOLOR fontWhite = D3DCOLOR_ARGB(255, 255, 255, 255);


void Hacks::CreateFont(IDirect3DDevice9* device, std::string choiceFont) {
	D3DXCreateFont(device, 20, 0, FW_BOLD, 0, FALSE, DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, DEFAULT_QUALITY, DEFAULT_PITCH | FF_DONTCARE, choiceFont.c_str(), &m_Font);


}

void Hacks::InitializeMenuItems(){
	hack[WALLHACK].name = "foo"; 
}

void Hacks::DrawText(LPCSTR TextToDraw, int x, int y, D3DCOLOR color){
	RECT rect = { x - 120, y, x + 120, y + 15 };
	
	m_Font->DrawTextA(NULL, TextToDraw, -1, &rect, DT_NOCLIP, color);

}

void Hacks::DrawMenu(IDirect3DDevice9 *device){
	if (true) {
		DrawFilledRectangle(device, 55, 20, 200, 50, fontBlue);
		DrawBorderedRectangle(device, 55, 20, 200, 50, 4, fontRed);
		DrawTextA("hello world", 190, 30, fontWhite);


	}
}

void Hacks::DrawFilledRectangle(IDirect3DDevice9 *device, int x, int y, int w, int h, D3DCOLOR color){}

void Hacks::DrawBorderedRectangle(IDirect3DDevice9* device, int x, int y, int w, int h, int thickness, D3DCOLOR color){}

void Hacks::KeyboardInput(){}

