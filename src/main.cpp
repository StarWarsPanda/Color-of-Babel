#include <tice.h>
#include <sys/lcd.h>
#include <string.h>

#include <Keys.h>

int main()
{
	size_t i = 0;
	uint16_t* vram = (uint16_t*)lcd_Ram;

	memset(lcd_Ram, 0, LCD_SIZE);

	do
	{
		kb_Scan();

		vram[i]++;

		while (vram[i] >= UINT16_MAX)
		{
			vram[i] = 0;
			i++;
			vram[i]++;
		}

		i = 0;
	} while (!Key_Clear);

	return 0;
}
