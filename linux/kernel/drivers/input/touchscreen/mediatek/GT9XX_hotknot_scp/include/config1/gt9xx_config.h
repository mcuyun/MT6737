#ifndef _GT9XX_CONFIG_H_
#define _GT9XX_CONFIG_H_

/*STEP_1(REQUIRED):Change config table.*/
/*TODO: puts the config info corresponded to your TP here, the following is just
a sample config, send this config should cause the chip cannot work normally*/
#define CTP_CFG_GROUP1 {\
    0x46,0xD0,0x02,0x00,0x05,0x05,0x05,0x00,0x01,0x08,\
    0x1E,0x05,0x50,0x32,0x03,0x05,0x00,0x00,0xFF,0x7F,\
    0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x8B,0x2B,0x0C,\
    0x37,0x39,0x0C,0x08,0x03,0x14,0x01,0x42,0x33,0x1C,\
    0x1E,0x01,0x05,0x00,0x00,0x00,0x00,0x09,0x11,0x00,\
    0x7A,0x21,0x52,0x94,0xC5,0x02,0x07,0x00,0x00,0x00,\
    0xB0,0x24,0x00,0x99,0x2B,0x00,0x85,0x34,0x00,0x75,\
    0x3E,0x00,0x68,0x4B,0x00,0x68,0x00,0x00,0x00,0x00,\
    0xF0,0x4A,0x3A,0xFF,0xFF,0x27,0x00,0x00,0x00,0x00,\
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,\
    0x0F,0x03,0x04,0x10,0x42,0xF8,0x0F,0x19,0x00,0x00,\
    0x3C,0x28,0x18,0x16,0x14,0x12,0x10,0x0E,0x0C,0x0A,\
    0x08,0x06,0x04,0x02,0xFF,0xFF,0x00,0x00,0x00,0x00,\
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
    0x00,0x00,0x13,0x12,0x10,0x0F,0x0C,0x0A,0x08,0x06,\
    0x04,0x02,0x00,0x16,0x18,0x1C,0x1D,0x1E,0x1F,0x20,\
    0x21,0x22,0x24,0x26,0xFF,0xFF,0xFF,0xFF,0x00,0x00,\
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
    0x00,0x00,0x00,0x00,0x1D,0x01\
    }

#define CTP_CFG_GROUP1_CHARGER {\
}

/*TODO puts your group2 config info here,if need.*/
#define CTP_CFG_GROUP2 {\
}

/*TODO puts your group2 config info here,if need.*/
#define CTP_CFG_GROUP2_CHARGER {\
}

/*TODO puts your group3 config info here,if need.*/
#define CTP_CFG_GROUP3 {\
}

/*TODO puts your group3 config info here,if need.*/
#define CTP_CFG_GROUP3_CHARGER {\
}
/* TODO: define your config for Sensor_ID == 3 here, if needed*/
#define CTP_CFG_GROUP4 {\
}

/* TODO: define your config for Sensor_ID == 4 here, if needed*/
#define CTP_CFG_GROUP5 {\
}

/* TODO: define your config for Sensor_ID == 5 here, if needed*/
#define CTP_CFG_GROUP6 {\
}

#endif				/* _GT9XX_CONFIG_H_ */