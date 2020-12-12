package dev.bluefalcon

const val DEFAULT_CHARACTERISTIC_DESCRIPTOR_WRITE_VALUE = "00002902-0000-1000-8000-00805f9b34fb" //Default descriptor write location
const val GATT_SERVICE_MASK = "0000FFFF-0000-0000-0000-000000000000"
const val MINIMUM_ACCEPTABLE_RSSI = -100f

internal val meetsMinimumAcceptableRssi: Predicate<BluetoothPeripheral> =
    { it.rssi ?: -999f >= MINIMUM_ACCEPTABLE_RSSI }

internal val truthyDeviceName: Predicate<BluetoothPeripheral> =
    { !it.name.isNullOrEmpty() }

internal val isViableDevice: Predicate<BluetoothPeripheral> =
    meetsMinimumAcceptableRssi and truthyDeviceName

//TODO: Need to replace this.
/*internal fun subscribeToCharacteristicFromService(gatt: BluetoothGatt?,
                                                  serviceId: UUID,
                                                  characteristicID: UUID,
                                                  descriptorID: UUID): Boolean {
    if (gatt == null) return false
    if (gatt.services.isEmpty()) return false //No services
    val gattService = gatt.services.firstOrNull {it.uuid == serviceId} ?: return false
    if (gattService.characteristics.size <= 0) return false //No characteristics for service

    val characteristic = gattService.characteristics.firstOrNull {it.uuid == characteristicID} ?: return false
    if (!gatt.setCharacteristicNotification(characteristic, true)) return false //Can't return notifications

    val gattDescriptor = characteristic.getDescriptor(descriptorID) ?: return false
    if (!gattDescriptor.setValue(BluetoothGattDescriptor.ENABLE_NOTIFICATION_VALUE)) return false //Notifications disabled

    return gatt.writeDescriptor(gattDescriptor)
}*/





