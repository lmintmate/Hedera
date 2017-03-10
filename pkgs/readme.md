The packages include everything except the [Chrome Scrollbars](https://github.com/sixsixfive/Hedera/tree/master/Manual/Chromium) which need to be installed manually per drag and drop!

#### Debian(testing, unstable)

Please install those debian packages **ONLY!** with dpkg! - packagekit does not support all dpkg features so they will probably break!

    su -c "dpkg -i hedera-current_testing.deb || apt install -f"

you can also install suggested/recommended packages with your distributions package manager (eg: Synaptic>right click on the hedera package or "apt depends hedera")

#### *buntus (not supported, but could work)

Same as debian just use Sudo instead!

    sudo dpkg -i hedera-current_testing.deb || sudo apt install -f

Note: 

that *buntus usually come with ancient and heavy modified packages, so not all themes might work! Package relationships are made for Debian so this could be an issue on *buntus(in this case you could still modify the debian/controls file and build a deb as described in the ReadMe.) 


#### Others

Other packages can be found at the [ReadMe](https://github.com/sixsixfive/Hedera/blob/master/readme.md)
