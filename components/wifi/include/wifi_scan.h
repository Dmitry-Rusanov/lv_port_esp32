#ifndef _WIFI_SCAN_H_
#define _WIFI_SCAN_H_
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/event_groups.h"
#include "esp_system.h"
#include "esp_wifi.h"
#include "esp_log.h"
#include "esp_event.h"

//#include "nvs_flash.h"



#define DEFAULT_SCAN_LIST_SIZE 10//CONFIG_EXAMPLE_SCAN_LIST_SIZE


uint8_t ssid[DEFAULT_SCAN_LIST_SIZE][33]; 


void print_auth_mode(int authmode);
void print_cipher_type(int pairwise_cipher, int group_cipher);
void wifi_scan(void);

#endif