#include <stdio.h>
#include "pico/stdlib.h"

int main() {
  stdio_init_all();
  gpio_init(25);
  gpio_init(28);
  gpio_set_dir(25,true);
  gpio_set_dir(28,false);
  
  while (true) { 
    
        char val = gpio_get(28);
        char led = gpio_get(25);
        
        if(val==1){
          if(led==1){
          gpio_put(25,false);
          }

          else if (led==0){
            gpio_put(25,true);
          }

          
          
         }
        }
sleep_ms(500);
  }
