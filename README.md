These are MicroPython board defintion files for the 1BitSy from 1BitSquared.

The product page can be found here: https://1bitsquared.com/products/1bitsy

Build the firmware using:
```
cd micropython/stmhal/boards
git clone https://github.com/dhylands/1BITSY.git
cd ..
make BOARD=1BITSY
```

Note: The MicroPython source code needs a one line change in order to build.
See: https://github.com/micropython/micropython/pull/2654/commits/e1e1891fcdc057dcd9150df477cd41e38cf22469
(Note: Once that PR lands, I'l remove this notice from this file).

The get the device in DFU mode, you can short the "BOOT DFU" pads on the back
of the board while plugging it to USB.

Once in DFU mode, you should be able to use the ```dfu-util --list``` command and see
something like this:
```
Found DFU: [0483:df11] ver=2200, devnum=64, cfg=1, intf=0, path="1-1.2", alt=3, name="@Device Feature/0xFFFF0000/01*004 e", serial="377936813435"
Found DFU: [0483:df11] ver=2200, devnum=64, cfg=1, intf=0, path="1-1.2", alt=2, name="@OTP Memory /0x1FFF7800/01*512 e,01*016 e", serial="377936813435"
Found DFU: [0483:df11] ver=2200, devnum=64, cfg=1, intf=0, path="1-1.2", alt=1, name="@Option Bytes  /0x1FFFC000/01*016 e", serial="377936813435"
Found DFU: [0483:df11] ver=2200, devnum=64, cfg=1, intf=0, path="1-1.2", alt=0, name="@Internal Flash  /0x08000000/04*016Kg,01*064Kg,07*128Kg", serial="377936813435"
```

Alternatively, you could also use the ```../tools/pydfu.py -l``` command and see
something like this:
```
Bus 1 Device 064: ID 0483:df11
Memory Layout
    0x8000000  4 pages of  16K bytes
    0x8010000  1 pages of  64K bytes
    0x8020000  7 pages of 128K bytes
```

Now you can flash MicroPython using:
```
make BOARD=1BITSY deploy
```
