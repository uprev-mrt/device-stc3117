/**
  * @file stc3117_dev.h
  * @author generated by mrt-device utility 
  * @link [https://github.com/uprev-mrt/mrtutils/wiki/mrt-device]
  * @brief values and constants for the stc3117 device registers
  * 
  */

#define STC3117_I2C_ADDRESS 0xE0
#define STC3117_REG_ADDR_SIZE 1


/*******************************************************************************
  Register Addresses                                                                              
*******************************************************************************/

#define STC_REG_MODE_ADDR                                          0x00 /* Mode register */
#define STC_REG_CTRL_ADDR                                          0x01 /* Control and status register */
#define STC_REG_SOC_ADDR                                           0x02 /* Battery SOC (LSB = 1/512 %) */
#define STC_REG_COUNTER_ADDR                                       0x04 /* Number of conversions */
#define STC_REG_CURRENT_ADDR                                       0x06 /* Battery current */
#define STC_REG_VOLTAGE_ADDR                                       0x08 /* Battery voltage (LSB = 2.2 mV) */
#define STC_REG_TEMPERATURE_ADDR                                   0x0A /* Temperature in degrees C (LSB = 1deg C ) */
#define STC_REG_AVG_CURRENT_ADDR                                   0x0B /* Battery average current or SOC change rate */
#define STC_REG_OCV_ADDR                                           0x0D /* OCV register (LSV = 0.55 mV) */
#define STC_REG_CC_CNF_ADDR                                        0x0F /* Battery average current or SOC change rate */
#define STC_REG_VM_CNF_ADDR                                        0x11 /* Voltage gas gauge algorithm parameter */
#define STC_REG_ALARM_SOC_ADDR                                     0x13 /* SOC alarm level in (LSB = 0.5%) */
#define STC_REG_ALARM_VOLTAGE_ADDR                                 0x14 /* Battery low voltage alarm level (LSB = 17.6 mV) */
#define STC_REG_CURRENT_THRES_ADDR                                 0x15 /* Current threshold for current monitoring (LSB = 47.04 uV ) */
#define STC_REG_CMONIT_COUNT_ADDR                                  0x16 /* Current monitoring counter */
#define STC_REG_CMONIT_MAX_ADDR                                    0x17 /* Maximum counter value for current monitoring */
#define STC_REG_ID_ADDR                                            0x18 /* Part type ID = 16h */
#define STC_REG_CC_ADJ_ADDR                                        0x1B /* Coulomb counter adjustment register */
#define STC_REG_VM_ADJ_ADDR                                        0x1D /* Voltage mode adjustment register */


/*******************************************************************************
  Fields                                                                              
*******************************************************************************/

/* MODE Register Fields */
    /* MODE -> Flags */
    #define STC_MODE_VMODE                                         0x01 /* Power saving voltage mode */
    #define STC_MODE_BIBATD_PU                                     0x02 /* BATD internal pull-up enable */
    #define STC_MODE_FORCE_CD                                      0x04 /* Force CD output high */
    #define STC_MODE_ALM_ENA                                       0x08 /* Enable Alarm function */
    #define STC_MODE_GG_RUN                                        0x10 /* creates a flag at bit 1 of the DUMMY register */
    #define STC_MODE_FORCE_CC                                      0x20 /* Force the relaxation timer to switch to the Coulomb counter (CC) state */
    #define STC_MODE_FORCE_VM                                      0x40 /* Force the relaxation timer to switch to voltage mode (VM) state */

/* SOC Register Fields */
    /* SOC -> SOC */
    #define STC_SOC_SOC_FIELD_MASK                                 0xFFFF /* Battery SOC (LSB = 1/512 %) */
    #define STC_SOC_SOC_FIELD_OFFSET                               0x0000

/* COUNTER Register Fields */
    /* COUNTER -> COUNTER */
    #define STC_COUNTER_COUNTER_FIELD_MASK                         0xFFFF /* Number of conversions */
    #define STC_COUNTER_COUNTER_FIELD_OFFSET                       0x0000

/* CURRENT Register Fields */
    /* CURRENT -> CURRENT */
    #define STC_CURRENT_CURRENT_FIELD_MASK                         0xFFFF /* Battery current */
    #define STC_CURRENT_CURRENT_FIELD_OFFSET                       0x0000

/* VOLTAGE Register Fields */
    /* VOLTAGE -> VOLTAGE */
    #define STC_VOLTAGE_VOLTAGE_FIELD_MASK                         0xFFFF /* Battery voltage (LSB = 2.2 mV) */
    #define STC_VOLTAGE_VOLTAGE_FIELD_OFFSET                       0x0000

/* TEMPERATURE Register Fields */
    /* TEMPERATURE -> TEMPERATURE */
    #define STC_TEMPERATURE_TEMPERATURE_FIELD_MASK                 0xFF /* Temperature in degrees C (LSB = 1deg C ) */
    #define STC_TEMPERATURE_TEMPERATURE_FIELD_OFFSET               0x00

/* AVG_CURRENT Register Fields */
    /* AVG_CURRENT -> AVG_CURRENT */
    #define STC_AVG_CURRENT_AVG_CURRENT_FIELD_MASK                 0xFFFF /* Battery average current or SOC change rate */
    #define STC_AVG_CURRENT_AVG_CURRENT_FIELD_OFFSET               0x0000

/* OCV Register Fields */
    /* OCV -> OCV */
    #define STC_OCV_OCV_FIELD_MASK                                 0xFFFF /* OCV register (LSV = 0.55 mV) */
    #define STC_OCV_OCV_FIELD_OFFSET                               0x0000

/* CC_CNF Register Fields */
    /* CC_CNF -> CC_CNF */
    #define STC_CC_CNF_CC_CNF_FIELD_MASK                           0xFFFF /* Battery average current or SOC change rate */
    #define STC_CC_CNF_CC_CNF_FIELD_OFFSET                         0x0000

/* VM_CNF Register Fields */
    /* VM_CNF -> VM_CNF */
    #define STC_VM_CNF_VM_CNF_FIELD_MASK                           0xFFFF /* Voltage gas gauge algorithm parameter */
    #define STC_VM_CNF_VM_CNF_FIELD_OFFSET                         0x0000

/* ALARM_SOC Register Fields */
    /* ALARM_SOC -> ALARM_SOC */
    #define STC_ALARM_SOC_ALARM_SOC_FIELD_MASK                     0xFF /* SOC alarm level in (LSB = 0.5%) */
    #define STC_ALARM_SOC_ALARM_SOC_FIELD_OFFSET                   0x00

/* ALARM_VOLTAGE Register Fields */
    /* ALARM_VOLTAGE -> ALARM_VOLTAGE */
    #define STC_ALARM_VOLTAGE_ALARM_VOLTAGE_FIELD_MASK             0xFF /* Battery low voltage alarm level (LSB = 17.6 mV) */
    #define STC_ALARM_VOLTAGE_ALARM_VOLTAGE_FIELD_OFFSET           0x00

/* CURRENT_THRES Register Fields */
    /* CURRENT_THRES -> CURRENT_THRES */
    #define STC_CURRENT_THRES_CURRENT_THRES_FIELD_MASK             0xFF /* Current threshold for current monitoring (LSB = 47.04 uV ) */
    #define STC_CURRENT_THRES_CURRENT_THRES_FIELD_OFFSET           0x00

/* CMONIT_COUNT Register Fields */
    /* CMONIT_COUNT -> CMONIT_COUNT */
    #define STC_CMONIT_COUNT_CMONIT_COUNT_FIELD_MASK               0xFF /* Current monitoring counter */
    #define STC_CMONIT_COUNT_CMONIT_COUNT_FIELD_OFFSET             0x00

/* CMONIT_MAX Register Fields */
    /* CMONIT_MAX -> CMONIT_MAX */
    #define STC_CMONIT_MAX_CMONIT_MAX_FIELD_MASK                   0xFF /* Maximum counter value for current monitoring */
    #define STC_CMONIT_MAX_CMONIT_MAX_FIELD_OFFSET                 0x00

/* ID Register Fields */
    /* ID -> ID */
    #define STC_ID_ID_FIELD_MASK                                   0xFF /* Part type ID = 16h */
    #define STC_ID_ID_FIELD_OFFSET                                 0x00

/* CC_ADJ Register Fields */
    /* CC_ADJ -> CC_ADJ */
    #define STC_CC_ADJ_CC_ADJ_FIELD_MASK                           0xFFFF /* Coulomb counter adjustment register */
    #define STC_CC_ADJ_CC_ADJ_FIELD_OFFSET                         0x0000

/* VM_ADJ Register Fields */
    /* VM_ADJ -> VM_ADJ */
    #define STC_VM_ADJ_VM_ADJ_FIELD_MASK                           0xFFFF /* Voltage mode adjustment register */
    #define STC_VM_ADJ_VM_ADJ_FIELD_OFFSET                         0x0000


/*******************************************************************************
  Default Values                                                                              
*******************************************************************************/

#define STC_COUNTER_DEFAULT                                        0x0000
#define STC_CURRENT_DEFAULT                                        0x0000
#define STC_VOLTAGE_DEFAULT                                        0x0000
#define STC_TEMPERATURE_DEFAULT                                    0x00
#define STC_AVG_CURRENT_DEFAULT                                    0x0000
#define STC_OCV_DEFAULT                                            0x0000
#define STC_CC_CNF_DEFAULT                                         0x018B
#define STC_VM_CNF_DEFAULT                                         0x0141
#define STC_ALARM_SOC_DEFAULT                                      0x02
#define STC_ALARM_VOLTAGE_DEFAULT                                  0xAA
#define STC_CURRENT_THRES_DEFAULT                                  0x0A
#define STC_CMONIT_COUNT_DEFAULT                                   0x78
#define STC_CMONIT_MAX_DEFAULT                                     0x78
#define STC_ID_DEFAULT                                             0x16
#define STC_CC_ADJ_DEFAULT                                         0x0000
#define STC_VM_ADJ_DEFAULT                                         0x0000

/*******************************************************************************
  Flag Set/Clear/Check                                                                             
*******************************************************************************/

/**
  *@brief sets flags on device
  *@param dev ptr to stc3117 device
  *@param reg ptr to register definition
  *@param mask mask of flags to set
  */
#define stc_set_flag(dev, reg, mask) regdev_set_flags(&(dev)->mRegDev,(reg), (mask))

/**
  *@brief clears flags on device
  *@param dev ptr to stc3117 device
  *@param reg ptr to register definition
  *@param mask mask of flags to set
  */
#define stc_clear_flag(dev, reg, mask) regdev_clear_flags(&(dev)->mRegDev,(reg), (mask))

/**
  *@brief checks flags on device
  *@param dev ptr to stc3117 device
  *@param reg ptr to register definition
  *@param mask mask of flags to set
  *@return true if all flags in mask are set 
  *@return false if any flags in mask are not set
  */
#define stc_check_flag(dev, reg, mask) regdev_check_flags(&(dev)->mRegDev,(reg), (mask))

/*******************************************************************************
  Field Getters                                                                              
*******************************************************************************/

/**
 * @brief reads the SOC field from the SOC register 
 * @param dev ptr to stc3117 device
 */
#define stc_get_soc(dev) regdev_read_field(&(dev)->mRegDev, &(dev)->mSoc, STC_SOC_SOC_FIELD_MASK )
/**
 * @brief reads the COUNTER field from the COUNTER register 
 * @param dev ptr to stc3117 device
 */
#define stc_get_counter(dev) regdev_read_field(&(dev)->mRegDev, &(dev)->mCounter, STC_COUNTER_COUNTER_FIELD_MASK )
/**
 * @brief reads the CURRENT field from the CURRENT register 
 * @param dev ptr to stc3117 device
 */
#define stc_get_current(dev) regdev_read_field(&(dev)->mRegDev, &(dev)->mCurrent, STC_CURRENT_CURRENT_FIELD_MASK )
/**
 * @brief reads the VOLTAGE field from the VOLTAGE register 
 * @param dev ptr to stc3117 device
 */
#define stc_get_voltage(dev) regdev_read_field(&(dev)->mRegDev, &(dev)->mVoltage, STC_VOLTAGE_VOLTAGE_FIELD_MASK )
/**
 * @brief reads the TEMPERATURE field from the TEMPERATURE register 
 * @param dev ptr to stc3117 device
 */
#define stc_get_temperature(dev) regdev_read_field(&(dev)->mRegDev, &(dev)->mTemperature, STC_TEMPERATURE_TEMPERATURE_FIELD_MASK )
/**
 * @brief reads the AVG_CURRENT field from the AVG_CURRENT register 
 * @param dev ptr to stc3117 device
 */
#define stc_get_avg_current(dev) regdev_read_field(&(dev)->mRegDev, &(dev)->mAvgCurrent, STC_AVG_CURRENT_AVG_CURRENT_FIELD_MASK )
/**
 * @brief reads the OCV field from the OCV register 
 * @param dev ptr to stc3117 device
 */
#define stc_get_ocv(dev) regdev_read_field(&(dev)->mRegDev, &(dev)->mOcv, STC_OCV_OCV_FIELD_MASK )
/**
 * @brief reads the CC_CNF field from the CC_CNF register 
 * @param dev ptr to stc3117 device
 */
#define stc_get_cc_cnf(dev) regdev_read_field(&(dev)->mRegDev, &(dev)->mCcCnf, STC_CC_CNF_CC_CNF_FIELD_MASK )
/**
 * @brief reads the VM_CNF field from the VM_CNF register 
 * @param dev ptr to stc3117 device
 */
#define stc_get_vm_cnf(dev) regdev_read_field(&(dev)->mRegDev, &(dev)->mVmCnf, STC_VM_CNF_VM_CNF_FIELD_MASK )
/**
 * @brief reads the ALARM_SOC field from the ALARM_SOC register 
 * @param dev ptr to stc3117 device
 */
#define stc_get_alarm_soc(dev) regdev_read_field(&(dev)->mRegDev, &(dev)->mAlarmSoc, STC_ALARM_SOC_ALARM_SOC_FIELD_MASK )
/**
 * @brief reads the ALARM_VOLTAGE field from the ALARM_VOLTAGE register 
 * @param dev ptr to stc3117 device
 */
#define stc_get_alarm_voltage(dev) regdev_read_field(&(dev)->mRegDev, &(dev)->mAlarmVoltage, STC_ALARM_VOLTAGE_ALARM_VOLTAGE_FIELD_MASK )
/**
 * @brief reads the CURRENT_THRES field from the CURRENT_THRES register 
 * @param dev ptr to stc3117 device
 */
#define stc_get_current_thres(dev) regdev_read_field(&(dev)->mRegDev, &(dev)->mCurrentThres, STC_CURRENT_THRES_CURRENT_THRES_FIELD_MASK )
/**
 * @brief reads the CMONIT_COUNT field from the CMONIT_COUNT register 
 * @param dev ptr to stc3117 device
 */
#define stc_get_cmonit_count(dev) regdev_read_field(&(dev)->mRegDev, &(dev)->mCmonitCount, STC_CMONIT_COUNT_CMONIT_COUNT_FIELD_MASK )
/**
 * @brief reads the CMONIT_MAX field from the CMONIT_MAX register 
 * @param dev ptr to stc3117 device
 */
#define stc_get_cmonit_max(dev) regdev_read_field(&(dev)->mRegDev, &(dev)->mCmonitMax, STC_CMONIT_MAX_CMONIT_MAX_FIELD_MASK )
/**
 * @brief reads the ID field from the ID register 
 * @param dev ptr to stc3117 device
 */
#define stc_get_id(dev) regdev_read_field(&(dev)->mRegDev, &(dev)->mId, STC_ID_ID_FIELD_MASK )
/**
 * @brief reads the CC_ADJ field from the CC_ADJ register 
 * @param dev ptr to stc3117 device
 */
#define stc_get_cc_adj(dev) regdev_read_field(&(dev)->mRegDev, &(dev)->mCcAdj, STC_CC_ADJ_CC_ADJ_FIELD_MASK )
/**
 * @brief reads the VM_ADJ field from the VM_ADJ register 
 * @param dev ptr to stc3117 device
 */
#define stc_get_vm_adj(dev) regdev_read_field(&(dev)->mRegDev, &(dev)->mVmAdj, STC_VM_ADJ_VM_ADJ_FIELD_MASK )


/*******************************************************************************
  Field Setters                                                                              
*******************************************************************************/

/**
 * @brief writes the SOC field to the SOC register 
 * @param dev ptr to stc3117 device
 */
#define stc_set_soc(dev, val) regdev_write_field(&(dev)->mRegDev, &(dev)->mSoc, STC_SOC_SOC_FIELD_MASK , (val) )
/**
 * @brief writes the AVG_CURRENT field to the AVG_CURRENT register 
 * @param dev ptr to stc3117 device
 */
#define stc_set_avg_current(dev, val) regdev_write_field(&(dev)->mRegDev, &(dev)->mAvgCurrent, STC_AVG_CURRENT_AVG_CURRENT_FIELD_MASK , (val) )
/**
 * @brief writes the OCV field to the OCV register 
 * @param dev ptr to stc3117 device
 */
#define stc_set_ocv(dev, val) regdev_write_field(&(dev)->mRegDev, &(dev)->mOcv, STC_OCV_OCV_FIELD_MASK , (val) )
/**
 * @brief writes the CC_CNF field to the CC_CNF register 
 * @param dev ptr to stc3117 device
 */
#define stc_set_cc_cnf(dev, val) regdev_write_field(&(dev)->mRegDev, &(dev)->mCcCnf, STC_CC_CNF_CC_CNF_FIELD_MASK , (val) )
/**
 * @brief writes the VM_CNF field to the VM_CNF register 
 * @param dev ptr to stc3117 device
 */
#define stc_set_vm_cnf(dev, val) regdev_write_field(&(dev)->mRegDev, &(dev)->mVmCnf, STC_VM_CNF_VM_CNF_FIELD_MASK , (val) )
/**
 * @brief writes the ALARM_SOC field to the ALARM_SOC register 
 * @param dev ptr to stc3117 device
 */
#define stc_set_alarm_soc(dev, val) regdev_write_field(&(dev)->mRegDev, &(dev)->mAlarmSoc, STC_ALARM_SOC_ALARM_SOC_FIELD_MASK , (val) )
/**
 * @brief writes the ALARM_VOLTAGE field to the ALARM_VOLTAGE register 
 * @param dev ptr to stc3117 device
 */
#define stc_set_alarm_voltage(dev, val) regdev_write_field(&(dev)->mRegDev, &(dev)->mAlarmVoltage, STC_ALARM_VOLTAGE_ALARM_VOLTAGE_FIELD_MASK , (val) )
/**
 * @brief writes the CURRENT_THRES field to the CURRENT_THRES register 
 * @param dev ptr to stc3117 device
 */
#define stc_set_current_thres(dev, val) regdev_write_field(&(dev)->mRegDev, &(dev)->mCurrentThres, STC_CURRENT_THRES_CURRENT_THRES_FIELD_MASK , (val) )
/**
 * @brief writes the CMONIT_MAX field to the CMONIT_MAX register 
 * @param dev ptr to stc3117 device
 */
#define stc_set_cmonit_max(dev, val) regdev_write_field(&(dev)->mRegDev, &(dev)->mCmonitMax, STC_CMONIT_MAX_CMONIT_MAX_FIELD_MASK , (val) )

/*******************************************************************************
  Configs                                                                            
*******************************************************************************/

