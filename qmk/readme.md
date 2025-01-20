# myck

Proof of concept of a keyboard using [QMK](https://qmk.fm/) firmware.

* Keyboard Maintainer: [Yuki (aka Rubén Gómez)](https://github.com/yuki)
* Hardware Supported: *RP2040*

Link this folder into your qmk_firmware/keyboards/myck (the setup environment, by default, is in your $HOME):

```
ln -s $(pwd) ~/qmk_firmware/keyboards/myck
```

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

To compile and flash the firmware, do:

```
qmk flash -kb myck -km v0_1 -c
```

![myck](../img/myck_pcb.png)
