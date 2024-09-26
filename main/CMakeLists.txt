idf_component_register(SRCS "main.c" "firebase.c"  "bme280.c"
                    INCLUDE_DIRS "." 
                    REQUIRES esp_http_client driver json esp_wifi)