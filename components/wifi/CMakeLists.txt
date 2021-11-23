set(COMPONENT_ADD_INCLUDEDIRS include)
set(COMPONENT_SRCS "wifi_scan.c")
set(COMPONENT_PRIV_REQUIRES "spi_flash" "nvs_flash")
register_component()