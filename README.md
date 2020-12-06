
A Bluetooth "Cross Platform" Kotlin Multiplatform library for iOS and Android.

Bluetooth in general has the same functionality for all platforms, e.g. connect to device, fetch services, fetch characteristics.

This library is the glue that brings those together so that mobile developers can use one common api to perform the bluetooth actions.

The idea is to have a common api for using bluetooth as the principle of bluetooth is the same but each platform ios and android has different apis which means you have to duplicate the logic for each platform.

What this library isn't? It is not a cross platform library, this is a multiplatform library. The difference? each platform is compiled down to the native code, so when you use the library in iOS, you are consuming an obj-c library and same principle for Android.

## Compiling the Libraries

To build the requisite frameworks (iOS) and archive (Android) execute `./gradlew build`.

The exported iOS frameworks will be output to the following locations:

```
./build/bin/iosArm64/debugFramework/blue-falcon-ftms.framework
./build/bin/iosArm64/releaseFramework/blue-falcon-ftms.framework
./build/bin/iosX64/debugFramework/blue-falcon-ftms.framework
./build/bin/iosX64/releaseFramework/blue-falcon-ftms.framework
```

While the exported Android archives will be output to:

```
./build/outputs/aar/multiplatform-ftms-debug.aar
./build/outputs/aar/multiplatform-ftms-release.aar
```

You can also output the libraries to maven using `./gradlew build publishToMavenLocal`

### Integrating the Libraries - Android

1. Click on the Android Studio `Project` pane of the project you want to import the .aar into.
2. Right click the topmost directory.
3. Select `New` and then `Module`
4. Scroll down in the New Module wizard and select `Import .JAR/.AAR Package`
5. Select the .aar generated in the `Compiling the Libraries` section.
6. Use the library functions as normal.

If the libraries are published to a remote service (like bintray) they can be integrated by adding the repository with

```
repositories {
    maven { url  "https://dl.bintray.com/com.github.jamesjmtaylor/maven" }
}
```

and then

```
implementation "com.github.com.github.jamesjmtaylor:multiplatform-ftms-android:1.5.0"
```

### Integrating the Libraries - iOS

1. Create a `Frameworks` folder in the XCode project's main directerory.
2. Copy `./build/bin/iosArm64/debugFramework/blue-falcon-ftms.framework` (assuming you're building to an actual iPhone) into the frameworks folder.
3. In XCode drag the `Frameworks Directory` into the Project directory pane.
4. Open the xcproject file (in the same pane)
5. Select the main target
6. Scroll down to `Frameworks, Libraries, and Embedded Content` and click the `+` symbol
7. Click `Add Other in the bottom right of the popup.
8. Click `Add Filees...`
9. Navigate to the newly added `blue-falcon-ftms.framework` file and select it.
10. Use `import blue-falcon-ftms` in the files that you want to access methods.

If the libraries are published to a remote service (like bintray) they can be integrated by adding the repository with

```
implementation "com.github.com.github.jamesjmtaylor:multiplatform-ftms-android:1.5.0"
```

## Basic Usage

### iOS & MacOS

Create an instance of BlueFalcon and then call the scan method.

By passing in a string uuid of the service uuid, you can filter to scan for only devices that have that service.

```swift
let blueFalcon = BlueFalcon(serviceUUID: nil)
blueFalcon.scan()
```

### Android

#### Install

```kotlin
implementation 'dev.bluefalcon:library-android:0.7.0'
```

The Android sdk requires an Application context, we do this by passing in on the BlueFalcon constructor, in this example we are calling the code from an activity(this).

By passing in a string uuid of the service uuid, you can filter to scan for only devices that have that service.

```kotlin
try {
    val blueFalcon = BlueFalcon(this, null)
    blueFalcon.scan()
} catch (exception: PermissionException) {
    //request the ACCESS_COARSE_LOCATION permission
}
```

### BlueFalcon API

The basic functionality of the api is listed below, this should be a simplistic as possible and is the same in any platform.

```kotlin
    fun connect(bluetoothPeripheral: BluetoothPeripheral, autoConnect: Boolean)
    fun disconnect(bluetoothPeripheral: BluetoothPeripheral)
    fun scan()
    fun stopScanning()
    fun readCharacteristic(
        bluetoothPeripheral: BluetoothPeripheral,
        bluetoothCharacteristic: BluetoothCharacteristic
    )
    fun notifyCharacteristic(
        bluetoothPeripheral: BluetoothPeripheral,
        bluetoothCharacteristic: BluetoothCharacteristic,
        notify: Boolean
    )
    fun writeCharacteristic(
        bluetoothPeripheral: BluetoothPeripheral,
        bluetoothCharacteristic: BluetoothCharacteristic,
        value: String
    )
    fun readDescriptor(
        bluetoothPeripheral: BluetoothPeripheral,
        bluetoothCharacteristic: BluetoothCharacteristic,
        bluetoothCharacteristicDescriptor: BluetoothCharacteristicDescriptor
    )
    fun changeMTU(bluetoothPeripheral: BluetoothPeripheral, mtuSize: Int)
```

## Examples

This repo contains examples for kotlin MP, ios and android in the examples folder, install their dependencies, and run it locally:

### Kotlin MP

Open the kotlin MP example directory in InteliJ and then run the install targets.

### iOS & MacOS

To run the iOS example, simply perform a pod install and run from xcode.

```bash
pod install
```

### Android

Open the root directory of the project in Android Studio and run the Android app target from the ide.

## Support

For a **bug, feature request, or cool idea**, please [file a Github issue](https://github.com/Reedyuk/blue-falcon/issues/new).

### Two big little things

Keep in mind that Blue-Falcon is maintained by volunteers. Please be patient if you don’t immediately get an answer to your question; we all have jobs, families, obligations, and lives beyond this project.


[badge-android]: http://img.shields.io/badge/platform-android-brightgreen.svg?style=flat
[badge-native]: http://img.shields.io/badge/platform-native-lightgrey.svg?style=flat
[badge-js]: http://img.shields.io/badge/platform-js-yellow.svg?style=flat
[badge-mac]: http://img.shields.io/badge/platform-macos-lightgrey.svg?style=flat
