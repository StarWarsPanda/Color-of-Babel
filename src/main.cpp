#include <tice.h>
#include <graphx.h>
#include <sys/lcd.h>

#include <Keys.h>

int main()
{
	uint32_t i = 0;
	bool pause = false;

	gfx_Begin();

	gfx_ZeroScreen();
	
	while (true)
	{
		do
		{
			kb_Scan();

			pause ^= Key_2nd;

			if (Key_Clear) goto end;

		} while (pause);

		lcd_Ram[i]++;

		while (lcd_Ram[i] >= UINT16_MAX)
		{
			lcd_Ram[i] = 0;
			i++;
			if (i >= LCD_SIZE) { i = 0; }
			lcd_Ram[i]++;
		}

		i = 0;
	}

end:
	gfx_End();

	return 0;
}