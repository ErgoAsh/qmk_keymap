#!/bin/bash

sleep 5
dfu-programmer atmega32u4 erase --force
dfu-programmer atmega32u4 flash crkbd_rev1_ergoash.hex
