#!/bin/bash

cd /home/ergoash/projects/qmk-firmware/users/ergoash/
qmk compile ./users/ergoash/ergoash.json
mv ../../crkbd_rev1_ergoash.hex .
