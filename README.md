This is a full touch recovery, based on CWM.

The touch module is inspired mostly by <a href="https://github.com/scanno/CWM-Recovery-Modded-Touch-Vega">scanno touch recovery for Vega</a>, but also <a href="https://github.com/Napstar-xda/android_bootable_recovery">Napstar full touch recovery</a>. I had to make some changes to Napstar code, but he deserve all our gratitude for the full touch module. Also the ORS support is developed by Cannibal Open Touch Project Team.

To compile you need a device folder for your phone, a cm building environment and my source. 
But:
- Make sure you put a flag on your BoardConfig.mk for screen resolution, just like in twrp:
```
DEVICE_RESOLUTION := 540x960
```

Enjoy!


[![Gitter](https://badges.gitter.im/Join%20Chat.svg)](https://gitter.im/zhangyi1973/bootable_carliv_touch_recovery?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge&utm_content=badge)