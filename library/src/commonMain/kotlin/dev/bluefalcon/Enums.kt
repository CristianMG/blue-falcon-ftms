package dev.bluefalcon

import kotlin.math.roundToInt

enum class SERVICES(val prefix: String, val uuid: String) {
    GenericAccess("00001800","00001800-0000-1000-8000-00805f9b34fb"),
    CyclingSpeedAndCadence("00001816","00001826-0000-1000-8000-00805f9b34fb"),
    FitnessMachine("00001826","00001826-0000-1000-8000-00805f9b34fb"),
    GenericAttribute("00001801","00001801-0000-1000-8000-00805f9b34fb"),
    HeartRate("0000180d","0000180d-0000-1000-8000-00805f9b34fb");

    companion object { fun getService(uuid: String): SERVICES {
        return SERVICES.values().first { it.uuid == uuid }
    }}
}
//NOTE: For Fitness Machine, FitnessMachineFeatures is the only characteristic that is read (all others are notify)
enum class CHARACTERISTICS(val uuid: String, val notify: Boolean){
    FitnessMachineStatus("00002ada-0000-1000-8000-00805f9b34fb", true), //See MACHINE_STATUS enum for all possible states
    IndoorBikeData("00002ad2-0000-1000-8000-00805f9b34fb", true), //See INDOOR_BIKE_DATA_FLAGS enum for all possible flags
    TrainingStatus("00002ad3-0000-1000-8000-00805f9b34fb", true), //See TRAINING_STATUSES enum for all possible states
    FitnessMachineControlPoint("00002ad9-0000-1000-8000-00805f9b34fb", true), //NOT USED: Starts request to control power/speed/incline/resistance/target (heart rate/calories/distance/cadence)
    FitnessMachineFeatures("00002acc-0000-1000-8000-00805f9b34fb", false), // When a bit is set to 1 (True), the Server supports the associated feature. Otherwise set to 0.
    HeartRateMeasurement("00002a37-0000-1000-8000-00805f9b34fb", true), //NOT USED; included as example
    HeartRateSensorLocation("00002a38-0000-1000-8000-00805f9b34fb", false), //NOT USED; included as example

    CscMeasurement("00002a5b-0000-1000-8000-00805f9b34fb",true),
    CscFeature("00002a5c-0000-1000-8000-00805f9b34fb",false),
    SensorLocation("00002a5d-0000-1000-8000-00805f9b34fb",false),
    ScControlPoint("00002a55-0000-1000-8000-00805f9b34fb",true);

    companion object { fun getCharacteristic(uuid: String): CHARACTERISTICS? {
        return CHARACTERISTICS.values().firstOrNull { it.uuid == uuid }
    }}
}

enum class FITNESS_MACHINE_STATUS(val hexValue: Byte) {
    ReservedForFutureUse(0x0),
    Reset(0x01),
    FitnessMachineStoppedOrPausedByUser(0x02),
    FitnessMachineStoppedSafetyKey(0x03),
    FitnessMachineStartedOrResumedByUser(0x04),
    TargetSpeedChanged(0x05),
    TargetInclineChanged(0x06),
    TargetResistanceLevelChanged(0x07),
    TargetPowerChanged(0x08),
    TargetHeartRateChanged(0x09),
    TargetedExpendedEnergyChanged(0x0A),
    TargetedNumberStepsChanged(0x0B),
    TargetedNumberStridesChanged(0x0C),
    TargetedDistanceChanged(0x0D),
    TargetedTrainingTimeChanged(0x0E),
    TargetedChangedTimeInTwoHeartRateZones(0x0F),
    TargetedChangedTimeInThreeHeartRateZones(0x10),
    TargetedChangedTimeInFiveHeartRateZones(0x11),
    IndoorBikeSimulationParametersChanged(0x12),
    WheelCircumferenceChanged(0x13),
    SpinDownStatusFITNESS(0x14),
    TargetedCadenceChanged(0x15);

    companion object { fun getEnum(hexValue: Byte): FITNESS_MACHINE_STATUS {
        return FITNESS_MACHINE_STATUS.values().first { it.hexValue == hexValue }
    }}
}

enum class TRAINING_STATUSES(val hexValue: Byte){
    Other(0x00),
    Idle(0x01),
    WarmingUp(0x02),
    LowIntensityInterval(0x03),
    HighIntensityInterval(0x04),
    RecoveryInterval(0x05),
    Isometric(0x06),
    HeartRateControl(0x07),
    FitnessTest(0x08),
    SpeedOutsideControlRegionLow(0x09),
    SpeedOutsideControlRegionHigh (0x0A),
    CoolDown(0x0B),
    WattControl(0x0C),
    ManualMode (0x0D),
    PreWorkout(0x0E),
    PostWorkout(0x0F);

    companion object { fun getEnum(hexValue: Byte): TRAINING_STATUSES {
        return TRAINING_STATUSES.values().first { it.hexValue == hexValue }
    }}
}

enum class FITNESS_GET_FEATURE(val bitNumber: Int){
    AverageSpeedSupported(0),
    CadenceSupported(1),
    TotalDistanceSupported(2),
    InclinationSupported(3),
    ElevationGainSupported(4),
    PaceSupported(5),
    StepCountSupported(6),
    ResistanceLevelSupported(7),
    StrideCountSupported(8),
    ExpendedEnergySupported(9),
    HeartRateMeasurementSupported(10),
    MetabolicEquivalentSupported(11),
    ElapsedTimeSupported(12),
    RemainingTimeSupported(13),
    PowerMeasurementSupported (14),
    ForceOnBeltAndPowerOutputSupported(15),
    UserDataRetentionSupported(16);

    companion object {
        fun getEnum(bitNumber: Int): FITNESS_GET_FEATURE {
            return FITNESS_GET_FEATURE.values().first { it.bitNumber == bitNumber }
        }
        fun convertBytesToFeatures(bytes: ByteArray): List<FITNESS_GET_FEATURE> {
            val features = mutableListOf<FITNESS_GET_FEATURE>()
            val bitSet = bytes.toBitSet()//BitSet.valueOf(bytes)
            for (i in 0 until bitSet.size()){
                if (bitSet.get(i)) features.add(getEnum(i))
            }
            return features.toList()
        }
    }
}

enum class FITNESS_SET_FEATURE(val bitNumber: Int){
    SpeedTargetSettingSupported(0),
    InclinationTargetSettingSupported(1),
    ResistanceTargetSettingSupported(2),
    PowerTargetSettingSupported(3),
    HeartRateTargetSettingSupported(4),
    TargetedExpendedEnergyConfigurationSupported(5),
    TargetedStepNumberConfigurationSupported(6),
    TargetedStrideNumberConfigurationSupported(7),
    TargetedDistanceConfigurationSupported(8),
    TargetedTrainingTimeConfigurationSupported(9),
    TargetedTimeTwoHeartRateZonesConfigurationSupported(10),
    TargetedTimeThreeHeartRateZonesConfigurationSupported(11),
    TargetedTimeFiveHeartRateZonesConfigurationSupported(12),
    IndoorBikeSimulationParametersSupported(13),
    WheelCircumferenceConfigurationSupported(14),
    SpinDownControlSupported(15),
    TargetedCadenceConfigurationSupported(16);

    companion object {
        fun getEnum(bitNumber: Int): FITNESS_SET_FEATURE {
            return FITNESS_SET_FEATURE.values().first { it.bitNumber == bitNumber }
        }
        fun convertBytesToFeatures(bytes: ByteArray): List<FITNESS_SET_FEATURE> {
            val features = mutableListOf<FITNESS_SET_FEATURE>()
            val bitSet = bytes.toBitSet()
            for (i in 0 until bitSet.size()){
                if (bitSet.get(i)) features.add(getEnum(i))
            }
            return features.toList()
        }
    }
}

enum class INDOOR_BIKE_DATA_FLAGS(val flagBitNumber: Int, val byteSize: Int, val signed: Boolean, val units: String, val resolution: Double){
    ExceedsAttMtuSize(0,0,false, "",0.0),
    InstantaneousSpeedPresent(0,2,false, "kph",0.01),
    AverageSpeedPresent(1,2,false, "kph", 0.01),
    InstantaneousCadence(2, 2,false, "per minute", 0.5),
    AverageCadencePresent (3, 2,false,"per minute", 0.5),
    TotalDistancePresent(4, 3,false, "m",1.0),
    ResistanceLevelPresent (5,2, true, "",1.0),//Unitless
    InstantaneousPowerPresent(6, 2,true, "watts",1.0),
    AveragePowerPresent(7,2,true,"watts",1.0),
    ExpendedEnergyPresent(8,5,false, "",1.0),//3 separate fields, Total(2)/PerHour(2)/PerMinute(1)
    HeartRatePresent(9,1,false, "bpm",1.0),
    MetabolicEquivalentPresent(10,1,false, "me", 0.1),
    ElapsedTimePresent(11,2,false, "seconds", 1.0),
    RemainingTimePresent(12,2,false,"seconds", 1.0);
    companion object {
        fun getEnum(bitNumber: Int): INDOOR_BIKE_DATA_FLAGS {
            return INDOOR_BIKE_DATA_FLAGS.values().first { it.flagBitNumber == bitNumber }
        }
        fun convertBytesToFeatures(bytes: ByteArray): List<INDOOR_BIKE_DATA_FLAGS> {
            val features = mutableListOf<INDOOR_BIKE_DATA_FLAGS>()
            val bitSet = bytes.copyOfRange(0,2).toBitSet()
            if (bitSet.get(0) == false) features.add(InstantaneousSpeedPresent)
            for (i in 0 until bitSet.size()){//TODO: Does not handle if bit 0 is true (Exceeds MTU size)
                log("Bitset bit $i = ${bitSet.get(i)}")
                if (bitSet.get(i)) features.add(getEnum(i))
            }
            return features.toList()
        }
        @ExperimentalUnsignedTypes
        fun convertBytesAndFeaturesToCharacteristics(bytes: ByteArray, flags: List<INDOOR_BIKE_DATA_FLAGS>): String{
            var currentByteIndex = 2 //First two bytes are used for flags.
            val sb = StringBuilder()
            log("3rd Party- flags: $flags")
            for (flag in flags){
                log("3rd Party- byte size: ${flag.byteSize}")
                val dataEndByteIndex = currentByteIndex + flag.byteSize
                val dataBytes = bytes.copyOfRange(currentByteIndex, dataEndByteIndex)
                currentByteIndex = dataEndByteIndex
                val int = if (!flag.signed) dataBytes.asUByteArray().toInt() else dataBytes.toInt()
                val doubleValue = (int * flag.resolution * 10).roundToInt().toDouble() / 10.0 //Removes rounding errors
                sb.append("${flag.name}: $doubleValue ${flag.units} \n")
            }

            return sb.toString()
        }
    }
}

enum class CONNECTION_STATUS(val bitNumber: Int){
    GATT_SUCCESS(0),
    GATT_READ_NOT_PERMITTED(0x2),
    GATT_WRITE_NOT_PERMITTED(0x3),
    GATT_INSUFFICIENT_AUTHENTICATION(0x5),
    GATT_REQUEST_NOT_SUPPORTED(0x6),
    GATT_INSUFFICIENT_ENCRYPTION(0xf),
    GATT_INVALID_OFFSET(0x7),
    GATT_INVALID_ATTRIBUTE_LENGTH(0xd),
    GATT_CONNECTION_CONGESTED(0x8f),
    GATT_FAILURE(0x101);

    companion object { fun getEnum(bitNumber: Int): CONNECTION_STATUS {
        return CONNECTION_STATUS.values().first { it.bitNumber == bitNumber }
    }}
}

enum class HEART_RATE_SENSOR_LOCATION(val intValue: Int) {
    OTHER(0),
    CHEST(1),
    WRIST(2),
    FINGER(3),
    HAND(4),
    EAR_LOBE(5),
    FOOT(6);

    companion object { fun getEnum(intValue: Int): HEART_RATE_SENSOR_LOCATION {
        return HEART_RATE_SENSOR_LOCATION.values().first { it.intValue == intValue }
    }}
}