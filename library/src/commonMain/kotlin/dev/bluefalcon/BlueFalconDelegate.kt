package dev.bluefalcon

import AdvertisementDataRetrievalKeys
import kotlin.js.JsName

interface BlueFalconDelegate {

    fun didDiscoverDevice(bluetoothPeripheral: BluetoothPeripheral, advertisementData: Map<AdvertisementDataRetrievalKeys, Any>)
    fun didConnect(bluetoothPeripheral: BluetoothPeripheral)
    fun didDisconnect(bluetoothPeripheral: BluetoothPeripheral)
    fun didDiscoverServices(bluetoothPeripheral: BluetoothPeripheral)
    fun didDiscoverCharacteristics(bluetoothPeripheral: BluetoothPeripheral)
    fun didCharacteristcValueChanged(
        bluetoothPeripheral: BluetoothPeripheral,
        bluetoothCharacteristic: BluetoothCharacteristic
    )
    fun didRssiUpdate(bluetoothPeripheral: BluetoothPeripheral)
    fun didUpdateMTU(bluetoothPeripheral: BluetoothPeripheral)
    fun didReadDescriptor(
        bluetoothPeripheral: BluetoothPeripheral,
        bluetoothCharacteristicDescriptor: BluetoothCharacteristicDescriptor
    )
    fun didWriteDescriptor(
        bluetoothPeripheral: BluetoothPeripheral,
        bluetoothCharacteristicDescriptor: BluetoothCharacteristicDescriptor
    )
    fun didWriteCharacteristic(
        bluetoothPeripheral: BluetoothPeripheral,
        bluetoothCharacteristic: BluetoothCharacteristic,
        success: Boolean
    )
}