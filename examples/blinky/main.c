//#include <sdk.h>

#define LED_PIN 1

int _start(void) {
  for (int i = 0; i < 7; i++) asm("nop");
  return 0;
  // REG(C3_GPIO)[GPIO_OUT_FUNC + 1] = BIT(9) | 128;  // Simple out, TRM 5.5.3
  // REG(C3_GPIO)[GPIO_OUT_EN] = 2;
  // REG(C3_GPIO)[1] = 2;
  // REG(C3_GPIO)[1] = 0;

  // for (;;) asm("nop");
#if 0
  sdk_log("hi\n");
  wdt_disable();
  // gpio_output(LED_PIN);
 for (;;) asm("nop");
#endif
  // gpio_write(LED_PIN, 1);
  // REG(C3_GPIO)[GPIO_OUT_EN] = 2;
  // REG(C3_GPIO)[1] = 2;
  //   REG(C3_GPIO)[1] = 0;
#if 0
  for (;;) {
    REG(C3_GPIO)[1] = 0;
    for (int i = 0; i < 999999; i++) asm("nop");
  }
  for (;;) asm("nop");
#endif

#if 0
  for (;;) {
    gpio_write(LED_PIN, 0);
    delay_ms(250);
    gpio_write(LED_PIN, 1);
    delay_ms(250);
  }
#endif

  // return 0;
}
