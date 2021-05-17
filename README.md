# nrf52805_ble_uart
## TARGET:
Build a sample for nordic nrf52805.

## How to use:
```
## clone project
git clone https://github.com/fugreat/nrf52805_ble_uart

## add submodue(sdk)
git submodule init
git submodule update

## compile:
make

## download
make erase
make flash_softdevice
make flash

```

## Refence:
Refence from nordic :  
[developing-for-the-nrf52805-with-nrf5-sdk](https://devzone.nordicsemi.com/nordic/short-range-guides/b/getting-started/posts/developing-for-the-nrf52805-with-nrf5-sdk)
