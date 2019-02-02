# Water quality sensors iOS

<img src="https://raw.githubusercontent.com/sighmon/WaterQualitySensorsiOS/master/iOS-screenshot.jpg" width="100%" />

This is a Bluetooth (BLE) iOS app that receives water quality data from a corresponding [Arduino project](https://github.com/sighmon/water-quality-sensors), adds a timestamp and GPS coordinates, and saves that data to a file/website.

## Water quality data

Water quality data is logged from this sensor on the Arduino project:

* Atlas Scientific Conductivity Probe K 1.0

For more information see: [water-quality-sensors](https://github.com/sighmon/water-quality-sensors)

Then the iOS app adds:

* ISO 8601 formatted time, including the time zone.
* The position - latitude, longitude and accuracy.

## Bluetooth BLE hardware

I'm using the [RedBear BLE Nano 2](https://redbear.cc/product/ble-nano-2.html) for this project - the only limitation I've found so far is that it's a 3.3v board, and the rest of my project is 5v. Powering it via 5v is fine, but I need to step down the voltage on the serial line to the BLE Nano to avoid frying it.

## iOS demo project

This app is based on the [RedBear SimpleControls example project](https://github.com/RedBearLab/iOS/tree/master/Examples/SimpleControls_iOS).

### Icon

Based on the design from [Vadim Carazan](https://www.behance.net/gallery/68780443/Logo-Collection-III)
