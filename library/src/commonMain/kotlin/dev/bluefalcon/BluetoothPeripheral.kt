package dev.bluefalcon

expect class BluetoothPeripheral {
    val name: String?
    val uuid: String
    var rssi: Float?
    val services: List<BluetoothService>
}

fun List<BluetoothPeripheral>.filterByService(service: Service): List<BluetoothPeripheral> {
    return filter { it.hasService(service) }
}

fun BluetoothPeripheral.hasService(service: Service): Boolean =
    services.any { it.name == service.uuid }
