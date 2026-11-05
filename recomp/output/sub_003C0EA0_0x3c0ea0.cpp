#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C0EA0
// Address: 0x3c0ea0 - 0x3c1880
void sub_003C0EA0_0x3c0ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C0EA0_0x3c0ea0");
#endif

    switch (ctx->pc) {
        case 0x3c0ea0u: goto label_3c0ea0;
        case 0x3c0ea4u: goto label_3c0ea4;
        case 0x3c0ea8u: goto label_3c0ea8;
        case 0x3c0eacu: goto label_3c0eac;
        case 0x3c0eb0u: goto label_3c0eb0;
        case 0x3c0eb4u: goto label_3c0eb4;
        case 0x3c0eb8u: goto label_3c0eb8;
        case 0x3c0ebcu: goto label_3c0ebc;
        case 0x3c0ec0u: goto label_3c0ec0;
        case 0x3c0ec4u: goto label_3c0ec4;
        case 0x3c0ec8u: goto label_3c0ec8;
        case 0x3c0eccu: goto label_3c0ecc;
        case 0x3c0ed0u: goto label_3c0ed0;
        case 0x3c0ed4u: goto label_3c0ed4;
        case 0x3c0ed8u: goto label_3c0ed8;
        case 0x3c0edcu: goto label_3c0edc;
        case 0x3c0ee0u: goto label_3c0ee0;
        case 0x3c0ee4u: goto label_3c0ee4;
        case 0x3c0ee8u: goto label_3c0ee8;
        case 0x3c0eecu: goto label_3c0eec;
        case 0x3c0ef0u: goto label_3c0ef0;
        case 0x3c0ef4u: goto label_3c0ef4;
        case 0x3c0ef8u: goto label_3c0ef8;
        case 0x3c0efcu: goto label_3c0efc;
        case 0x3c0f00u: goto label_3c0f00;
        case 0x3c0f04u: goto label_3c0f04;
        case 0x3c0f08u: goto label_3c0f08;
        case 0x3c0f0cu: goto label_3c0f0c;
        case 0x3c0f10u: goto label_3c0f10;
        case 0x3c0f14u: goto label_3c0f14;
        case 0x3c0f18u: goto label_3c0f18;
        case 0x3c0f1cu: goto label_3c0f1c;
        case 0x3c0f20u: goto label_3c0f20;
        case 0x3c0f24u: goto label_3c0f24;
        case 0x3c0f28u: goto label_3c0f28;
        case 0x3c0f2cu: goto label_3c0f2c;
        case 0x3c0f30u: goto label_3c0f30;
        case 0x3c0f34u: goto label_3c0f34;
        case 0x3c0f38u: goto label_3c0f38;
        case 0x3c0f3cu: goto label_3c0f3c;
        case 0x3c0f40u: goto label_3c0f40;
        case 0x3c0f44u: goto label_3c0f44;
        case 0x3c0f48u: goto label_3c0f48;
        case 0x3c0f4cu: goto label_3c0f4c;
        case 0x3c0f50u: goto label_3c0f50;
        case 0x3c0f54u: goto label_3c0f54;
        case 0x3c0f58u: goto label_3c0f58;
        case 0x3c0f5cu: goto label_3c0f5c;
        case 0x3c0f60u: goto label_3c0f60;
        case 0x3c0f64u: goto label_3c0f64;
        case 0x3c0f68u: goto label_3c0f68;
        case 0x3c0f6cu: goto label_3c0f6c;
        case 0x3c0f70u: goto label_3c0f70;
        case 0x3c0f74u: goto label_3c0f74;
        case 0x3c0f78u: goto label_3c0f78;
        case 0x3c0f7cu: goto label_3c0f7c;
        case 0x3c0f80u: goto label_3c0f80;
        case 0x3c0f84u: goto label_3c0f84;
        case 0x3c0f88u: goto label_3c0f88;
        case 0x3c0f8cu: goto label_3c0f8c;
        case 0x3c0f90u: goto label_3c0f90;
        case 0x3c0f94u: goto label_3c0f94;
        case 0x3c0f98u: goto label_3c0f98;
        case 0x3c0f9cu: goto label_3c0f9c;
        case 0x3c0fa0u: goto label_3c0fa0;
        case 0x3c0fa4u: goto label_3c0fa4;
        case 0x3c0fa8u: goto label_3c0fa8;
        case 0x3c0facu: goto label_3c0fac;
        case 0x3c0fb0u: goto label_3c0fb0;
        case 0x3c0fb4u: goto label_3c0fb4;
        case 0x3c0fb8u: goto label_3c0fb8;
        case 0x3c0fbcu: goto label_3c0fbc;
        case 0x3c0fc0u: goto label_3c0fc0;
        case 0x3c0fc4u: goto label_3c0fc4;
        case 0x3c0fc8u: goto label_3c0fc8;
        case 0x3c0fccu: goto label_3c0fcc;
        case 0x3c0fd0u: goto label_3c0fd0;
        case 0x3c0fd4u: goto label_3c0fd4;
        case 0x3c0fd8u: goto label_3c0fd8;
        case 0x3c0fdcu: goto label_3c0fdc;
        case 0x3c0fe0u: goto label_3c0fe0;
        case 0x3c0fe4u: goto label_3c0fe4;
        case 0x3c0fe8u: goto label_3c0fe8;
        case 0x3c0fecu: goto label_3c0fec;
        case 0x3c0ff0u: goto label_3c0ff0;
        case 0x3c0ff4u: goto label_3c0ff4;
        case 0x3c0ff8u: goto label_3c0ff8;
        case 0x3c0ffcu: goto label_3c0ffc;
        case 0x3c1000u: goto label_3c1000;
        case 0x3c1004u: goto label_3c1004;
        case 0x3c1008u: goto label_3c1008;
        case 0x3c100cu: goto label_3c100c;
        case 0x3c1010u: goto label_3c1010;
        case 0x3c1014u: goto label_3c1014;
        case 0x3c1018u: goto label_3c1018;
        case 0x3c101cu: goto label_3c101c;
        case 0x3c1020u: goto label_3c1020;
        case 0x3c1024u: goto label_3c1024;
        case 0x3c1028u: goto label_3c1028;
        case 0x3c102cu: goto label_3c102c;
        case 0x3c1030u: goto label_3c1030;
        case 0x3c1034u: goto label_3c1034;
        case 0x3c1038u: goto label_3c1038;
        case 0x3c103cu: goto label_3c103c;
        case 0x3c1040u: goto label_3c1040;
        case 0x3c1044u: goto label_3c1044;
        case 0x3c1048u: goto label_3c1048;
        case 0x3c104cu: goto label_3c104c;
        case 0x3c1050u: goto label_3c1050;
        case 0x3c1054u: goto label_3c1054;
        case 0x3c1058u: goto label_3c1058;
        case 0x3c105cu: goto label_3c105c;
        case 0x3c1060u: goto label_3c1060;
        case 0x3c1064u: goto label_3c1064;
        case 0x3c1068u: goto label_3c1068;
        case 0x3c106cu: goto label_3c106c;
        case 0x3c1070u: goto label_3c1070;
        case 0x3c1074u: goto label_3c1074;
        case 0x3c1078u: goto label_3c1078;
        case 0x3c107cu: goto label_3c107c;
        case 0x3c1080u: goto label_3c1080;
        case 0x3c1084u: goto label_3c1084;
        case 0x3c1088u: goto label_3c1088;
        case 0x3c108cu: goto label_3c108c;
        case 0x3c1090u: goto label_3c1090;
        case 0x3c1094u: goto label_3c1094;
        case 0x3c1098u: goto label_3c1098;
        case 0x3c109cu: goto label_3c109c;
        case 0x3c10a0u: goto label_3c10a0;
        case 0x3c10a4u: goto label_3c10a4;
        case 0x3c10a8u: goto label_3c10a8;
        case 0x3c10acu: goto label_3c10ac;
        case 0x3c10b0u: goto label_3c10b0;
        case 0x3c10b4u: goto label_3c10b4;
        case 0x3c10b8u: goto label_3c10b8;
        case 0x3c10bcu: goto label_3c10bc;
        case 0x3c10c0u: goto label_3c10c0;
        case 0x3c10c4u: goto label_3c10c4;
        case 0x3c10c8u: goto label_3c10c8;
        case 0x3c10ccu: goto label_3c10cc;
        case 0x3c10d0u: goto label_3c10d0;
        case 0x3c10d4u: goto label_3c10d4;
        case 0x3c10d8u: goto label_3c10d8;
        case 0x3c10dcu: goto label_3c10dc;
        case 0x3c10e0u: goto label_3c10e0;
        case 0x3c10e4u: goto label_3c10e4;
        case 0x3c10e8u: goto label_3c10e8;
        case 0x3c10ecu: goto label_3c10ec;
        case 0x3c10f0u: goto label_3c10f0;
        case 0x3c10f4u: goto label_3c10f4;
        case 0x3c10f8u: goto label_3c10f8;
        case 0x3c10fcu: goto label_3c10fc;
        case 0x3c1100u: goto label_3c1100;
        case 0x3c1104u: goto label_3c1104;
        case 0x3c1108u: goto label_3c1108;
        case 0x3c110cu: goto label_3c110c;
        case 0x3c1110u: goto label_3c1110;
        case 0x3c1114u: goto label_3c1114;
        case 0x3c1118u: goto label_3c1118;
        case 0x3c111cu: goto label_3c111c;
        case 0x3c1120u: goto label_3c1120;
        case 0x3c1124u: goto label_3c1124;
        case 0x3c1128u: goto label_3c1128;
        case 0x3c112cu: goto label_3c112c;
        case 0x3c1130u: goto label_3c1130;
        case 0x3c1134u: goto label_3c1134;
        case 0x3c1138u: goto label_3c1138;
        case 0x3c113cu: goto label_3c113c;
        case 0x3c1140u: goto label_3c1140;
        case 0x3c1144u: goto label_3c1144;
        case 0x3c1148u: goto label_3c1148;
        case 0x3c114cu: goto label_3c114c;
        case 0x3c1150u: goto label_3c1150;
        case 0x3c1154u: goto label_3c1154;
        case 0x3c1158u: goto label_3c1158;
        case 0x3c115cu: goto label_3c115c;
        case 0x3c1160u: goto label_3c1160;
        case 0x3c1164u: goto label_3c1164;
        case 0x3c1168u: goto label_3c1168;
        case 0x3c116cu: goto label_3c116c;
        case 0x3c1170u: goto label_3c1170;
        case 0x3c1174u: goto label_3c1174;
        case 0x3c1178u: goto label_3c1178;
        case 0x3c117cu: goto label_3c117c;
        case 0x3c1180u: goto label_3c1180;
        case 0x3c1184u: goto label_3c1184;
        case 0x3c1188u: goto label_3c1188;
        case 0x3c118cu: goto label_3c118c;
        case 0x3c1190u: goto label_3c1190;
        case 0x3c1194u: goto label_3c1194;
        case 0x3c1198u: goto label_3c1198;
        case 0x3c119cu: goto label_3c119c;
        case 0x3c11a0u: goto label_3c11a0;
        case 0x3c11a4u: goto label_3c11a4;
        case 0x3c11a8u: goto label_3c11a8;
        case 0x3c11acu: goto label_3c11ac;
        case 0x3c11b0u: goto label_3c11b0;
        case 0x3c11b4u: goto label_3c11b4;
        case 0x3c11b8u: goto label_3c11b8;
        case 0x3c11bcu: goto label_3c11bc;
        case 0x3c11c0u: goto label_3c11c0;
        case 0x3c11c4u: goto label_3c11c4;
        case 0x3c11c8u: goto label_3c11c8;
        case 0x3c11ccu: goto label_3c11cc;
        case 0x3c11d0u: goto label_3c11d0;
        case 0x3c11d4u: goto label_3c11d4;
        case 0x3c11d8u: goto label_3c11d8;
        case 0x3c11dcu: goto label_3c11dc;
        case 0x3c11e0u: goto label_3c11e0;
        case 0x3c11e4u: goto label_3c11e4;
        case 0x3c11e8u: goto label_3c11e8;
        case 0x3c11ecu: goto label_3c11ec;
        case 0x3c11f0u: goto label_3c11f0;
        case 0x3c11f4u: goto label_3c11f4;
        case 0x3c11f8u: goto label_3c11f8;
        case 0x3c11fcu: goto label_3c11fc;
        case 0x3c1200u: goto label_3c1200;
        case 0x3c1204u: goto label_3c1204;
        case 0x3c1208u: goto label_3c1208;
        case 0x3c120cu: goto label_3c120c;
        case 0x3c1210u: goto label_3c1210;
        case 0x3c1214u: goto label_3c1214;
        case 0x3c1218u: goto label_3c1218;
        case 0x3c121cu: goto label_3c121c;
        case 0x3c1220u: goto label_3c1220;
        case 0x3c1224u: goto label_3c1224;
        case 0x3c1228u: goto label_3c1228;
        case 0x3c122cu: goto label_3c122c;
        case 0x3c1230u: goto label_3c1230;
        case 0x3c1234u: goto label_3c1234;
        case 0x3c1238u: goto label_3c1238;
        case 0x3c123cu: goto label_3c123c;
        case 0x3c1240u: goto label_3c1240;
        case 0x3c1244u: goto label_3c1244;
        case 0x3c1248u: goto label_3c1248;
        case 0x3c124cu: goto label_3c124c;
        case 0x3c1250u: goto label_3c1250;
        case 0x3c1254u: goto label_3c1254;
        case 0x3c1258u: goto label_3c1258;
        case 0x3c125cu: goto label_3c125c;
        case 0x3c1260u: goto label_3c1260;
        case 0x3c1264u: goto label_3c1264;
        case 0x3c1268u: goto label_3c1268;
        case 0x3c126cu: goto label_3c126c;
        case 0x3c1270u: goto label_3c1270;
        case 0x3c1274u: goto label_3c1274;
        case 0x3c1278u: goto label_3c1278;
        case 0x3c127cu: goto label_3c127c;
        case 0x3c1280u: goto label_3c1280;
        case 0x3c1284u: goto label_3c1284;
        case 0x3c1288u: goto label_3c1288;
        case 0x3c128cu: goto label_3c128c;
        case 0x3c1290u: goto label_3c1290;
        case 0x3c1294u: goto label_3c1294;
        case 0x3c1298u: goto label_3c1298;
        case 0x3c129cu: goto label_3c129c;
        case 0x3c12a0u: goto label_3c12a0;
        case 0x3c12a4u: goto label_3c12a4;
        case 0x3c12a8u: goto label_3c12a8;
        case 0x3c12acu: goto label_3c12ac;
        case 0x3c12b0u: goto label_3c12b0;
        case 0x3c12b4u: goto label_3c12b4;
        case 0x3c12b8u: goto label_3c12b8;
        case 0x3c12bcu: goto label_3c12bc;
        case 0x3c12c0u: goto label_3c12c0;
        case 0x3c12c4u: goto label_3c12c4;
        case 0x3c12c8u: goto label_3c12c8;
        case 0x3c12ccu: goto label_3c12cc;
        case 0x3c12d0u: goto label_3c12d0;
        case 0x3c12d4u: goto label_3c12d4;
        case 0x3c12d8u: goto label_3c12d8;
        case 0x3c12dcu: goto label_3c12dc;
        case 0x3c12e0u: goto label_3c12e0;
        case 0x3c12e4u: goto label_3c12e4;
        case 0x3c12e8u: goto label_3c12e8;
        case 0x3c12ecu: goto label_3c12ec;
        case 0x3c12f0u: goto label_3c12f0;
        case 0x3c12f4u: goto label_3c12f4;
        case 0x3c12f8u: goto label_3c12f8;
        case 0x3c12fcu: goto label_3c12fc;
        case 0x3c1300u: goto label_3c1300;
        case 0x3c1304u: goto label_3c1304;
        case 0x3c1308u: goto label_3c1308;
        case 0x3c130cu: goto label_3c130c;
        case 0x3c1310u: goto label_3c1310;
        case 0x3c1314u: goto label_3c1314;
        case 0x3c1318u: goto label_3c1318;
        case 0x3c131cu: goto label_3c131c;
        case 0x3c1320u: goto label_3c1320;
        case 0x3c1324u: goto label_3c1324;
        case 0x3c1328u: goto label_3c1328;
        case 0x3c132cu: goto label_3c132c;
        case 0x3c1330u: goto label_3c1330;
        case 0x3c1334u: goto label_3c1334;
        case 0x3c1338u: goto label_3c1338;
        case 0x3c133cu: goto label_3c133c;
        case 0x3c1340u: goto label_3c1340;
        case 0x3c1344u: goto label_3c1344;
        case 0x3c1348u: goto label_3c1348;
        case 0x3c134cu: goto label_3c134c;
        case 0x3c1350u: goto label_3c1350;
        case 0x3c1354u: goto label_3c1354;
        case 0x3c1358u: goto label_3c1358;
        case 0x3c135cu: goto label_3c135c;
        case 0x3c1360u: goto label_3c1360;
        case 0x3c1364u: goto label_3c1364;
        case 0x3c1368u: goto label_3c1368;
        case 0x3c136cu: goto label_3c136c;
        case 0x3c1370u: goto label_3c1370;
        case 0x3c1374u: goto label_3c1374;
        case 0x3c1378u: goto label_3c1378;
        case 0x3c137cu: goto label_3c137c;
        case 0x3c1380u: goto label_3c1380;
        case 0x3c1384u: goto label_3c1384;
        case 0x3c1388u: goto label_3c1388;
        case 0x3c138cu: goto label_3c138c;
        case 0x3c1390u: goto label_3c1390;
        case 0x3c1394u: goto label_3c1394;
        case 0x3c1398u: goto label_3c1398;
        case 0x3c139cu: goto label_3c139c;
        case 0x3c13a0u: goto label_3c13a0;
        case 0x3c13a4u: goto label_3c13a4;
        case 0x3c13a8u: goto label_3c13a8;
        case 0x3c13acu: goto label_3c13ac;
        case 0x3c13b0u: goto label_3c13b0;
        case 0x3c13b4u: goto label_3c13b4;
        case 0x3c13b8u: goto label_3c13b8;
        case 0x3c13bcu: goto label_3c13bc;
        case 0x3c13c0u: goto label_3c13c0;
        case 0x3c13c4u: goto label_3c13c4;
        case 0x3c13c8u: goto label_3c13c8;
        case 0x3c13ccu: goto label_3c13cc;
        case 0x3c13d0u: goto label_3c13d0;
        case 0x3c13d4u: goto label_3c13d4;
        case 0x3c13d8u: goto label_3c13d8;
        case 0x3c13dcu: goto label_3c13dc;
        case 0x3c13e0u: goto label_3c13e0;
        case 0x3c13e4u: goto label_3c13e4;
        case 0x3c13e8u: goto label_3c13e8;
        case 0x3c13ecu: goto label_3c13ec;
        case 0x3c13f0u: goto label_3c13f0;
        case 0x3c13f4u: goto label_3c13f4;
        case 0x3c13f8u: goto label_3c13f8;
        case 0x3c13fcu: goto label_3c13fc;
        case 0x3c1400u: goto label_3c1400;
        case 0x3c1404u: goto label_3c1404;
        case 0x3c1408u: goto label_3c1408;
        case 0x3c140cu: goto label_3c140c;
        case 0x3c1410u: goto label_3c1410;
        case 0x3c1414u: goto label_3c1414;
        case 0x3c1418u: goto label_3c1418;
        case 0x3c141cu: goto label_3c141c;
        case 0x3c1420u: goto label_3c1420;
        case 0x3c1424u: goto label_3c1424;
        case 0x3c1428u: goto label_3c1428;
        case 0x3c142cu: goto label_3c142c;
        case 0x3c1430u: goto label_3c1430;
        case 0x3c1434u: goto label_3c1434;
        case 0x3c1438u: goto label_3c1438;
        case 0x3c143cu: goto label_3c143c;
        case 0x3c1440u: goto label_3c1440;
        case 0x3c1444u: goto label_3c1444;
        case 0x3c1448u: goto label_3c1448;
        case 0x3c144cu: goto label_3c144c;
        case 0x3c1450u: goto label_3c1450;
        case 0x3c1454u: goto label_3c1454;
        case 0x3c1458u: goto label_3c1458;
        case 0x3c145cu: goto label_3c145c;
        case 0x3c1460u: goto label_3c1460;
        case 0x3c1464u: goto label_3c1464;
        case 0x3c1468u: goto label_3c1468;
        case 0x3c146cu: goto label_3c146c;
        case 0x3c1470u: goto label_3c1470;
        case 0x3c1474u: goto label_3c1474;
        case 0x3c1478u: goto label_3c1478;
        case 0x3c147cu: goto label_3c147c;
        case 0x3c1480u: goto label_3c1480;
        case 0x3c1484u: goto label_3c1484;
        case 0x3c1488u: goto label_3c1488;
        case 0x3c148cu: goto label_3c148c;
        case 0x3c1490u: goto label_3c1490;
        case 0x3c1494u: goto label_3c1494;
        case 0x3c1498u: goto label_3c1498;
        case 0x3c149cu: goto label_3c149c;
        case 0x3c14a0u: goto label_3c14a0;
        case 0x3c14a4u: goto label_3c14a4;
        case 0x3c14a8u: goto label_3c14a8;
        case 0x3c14acu: goto label_3c14ac;
        case 0x3c14b0u: goto label_3c14b0;
        case 0x3c14b4u: goto label_3c14b4;
        case 0x3c14b8u: goto label_3c14b8;
        case 0x3c14bcu: goto label_3c14bc;
        case 0x3c14c0u: goto label_3c14c0;
        case 0x3c14c4u: goto label_3c14c4;
        case 0x3c14c8u: goto label_3c14c8;
        case 0x3c14ccu: goto label_3c14cc;
        case 0x3c14d0u: goto label_3c14d0;
        case 0x3c14d4u: goto label_3c14d4;
        case 0x3c14d8u: goto label_3c14d8;
        case 0x3c14dcu: goto label_3c14dc;
        case 0x3c14e0u: goto label_3c14e0;
        case 0x3c14e4u: goto label_3c14e4;
        case 0x3c14e8u: goto label_3c14e8;
        case 0x3c14ecu: goto label_3c14ec;
        case 0x3c14f0u: goto label_3c14f0;
        case 0x3c14f4u: goto label_3c14f4;
        case 0x3c14f8u: goto label_3c14f8;
        case 0x3c14fcu: goto label_3c14fc;
        case 0x3c1500u: goto label_3c1500;
        case 0x3c1504u: goto label_3c1504;
        case 0x3c1508u: goto label_3c1508;
        case 0x3c150cu: goto label_3c150c;
        case 0x3c1510u: goto label_3c1510;
        case 0x3c1514u: goto label_3c1514;
        case 0x3c1518u: goto label_3c1518;
        case 0x3c151cu: goto label_3c151c;
        case 0x3c1520u: goto label_3c1520;
        case 0x3c1524u: goto label_3c1524;
        case 0x3c1528u: goto label_3c1528;
        case 0x3c152cu: goto label_3c152c;
        case 0x3c1530u: goto label_3c1530;
        case 0x3c1534u: goto label_3c1534;
        case 0x3c1538u: goto label_3c1538;
        case 0x3c153cu: goto label_3c153c;
        case 0x3c1540u: goto label_3c1540;
        case 0x3c1544u: goto label_3c1544;
        case 0x3c1548u: goto label_3c1548;
        case 0x3c154cu: goto label_3c154c;
        case 0x3c1550u: goto label_3c1550;
        case 0x3c1554u: goto label_3c1554;
        case 0x3c1558u: goto label_3c1558;
        case 0x3c155cu: goto label_3c155c;
        case 0x3c1560u: goto label_3c1560;
        case 0x3c1564u: goto label_3c1564;
        case 0x3c1568u: goto label_3c1568;
        case 0x3c156cu: goto label_3c156c;
        case 0x3c1570u: goto label_3c1570;
        case 0x3c1574u: goto label_3c1574;
        case 0x3c1578u: goto label_3c1578;
        case 0x3c157cu: goto label_3c157c;
        case 0x3c1580u: goto label_3c1580;
        case 0x3c1584u: goto label_3c1584;
        case 0x3c1588u: goto label_3c1588;
        case 0x3c158cu: goto label_3c158c;
        case 0x3c1590u: goto label_3c1590;
        case 0x3c1594u: goto label_3c1594;
        case 0x3c1598u: goto label_3c1598;
        case 0x3c159cu: goto label_3c159c;
        case 0x3c15a0u: goto label_3c15a0;
        case 0x3c15a4u: goto label_3c15a4;
        case 0x3c15a8u: goto label_3c15a8;
        case 0x3c15acu: goto label_3c15ac;
        case 0x3c15b0u: goto label_3c15b0;
        case 0x3c15b4u: goto label_3c15b4;
        case 0x3c15b8u: goto label_3c15b8;
        case 0x3c15bcu: goto label_3c15bc;
        case 0x3c15c0u: goto label_3c15c0;
        case 0x3c15c4u: goto label_3c15c4;
        case 0x3c15c8u: goto label_3c15c8;
        case 0x3c15ccu: goto label_3c15cc;
        case 0x3c15d0u: goto label_3c15d0;
        case 0x3c15d4u: goto label_3c15d4;
        case 0x3c15d8u: goto label_3c15d8;
        case 0x3c15dcu: goto label_3c15dc;
        case 0x3c15e0u: goto label_3c15e0;
        case 0x3c15e4u: goto label_3c15e4;
        case 0x3c15e8u: goto label_3c15e8;
        case 0x3c15ecu: goto label_3c15ec;
        case 0x3c15f0u: goto label_3c15f0;
        case 0x3c15f4u: goto label_3c15f4;
        case 0x3c15f8u: goto label_3c15f8;
        case 0x3c15fcu: goto label_3c15fc;
        case 0x3c1600u: goto label_3c1600;
        case 0x3c1604u: goto label_3c1604;
        case 0x3c1608u: goto label_3c1608;
        case 0x3c160cu: goto label_3c160c;
        case 0x3c1610u: goto label_3c1610;
        case 0x3c1614u: goto label_3c1614;
        case 0x3c1618u: goto label_3c1618;
        case 0x3c161cu: goto label_3c161c;
        case 0x3c1620u: goto label_3c1620;
        case 0x3c1624u: goto label_3c1624;
        case 0x3c1628u: goto label_3c1628;
        case 0x3c162cu: goto label_3c162c;
        case 0x3c1630u: goto label_3c1630;
        case 0x3c1634u: goto label_3c1634;
        case 0x3c1638u: goto label_3c1638;
        case 0x3c163cu: goto label_3c163c;
        case 0x3c1640u: goto label_3c1640;
        case 0x3c1644u: goto label_3c1644;
        case 0x3c1648u: goto label_3c1648;
        case 0x3c164cu: goto label_3c164c;
        case 0x3c1650u: goto label_3c1650;
        case 0x3c1654u: goto label_3c1654;
        case 0x3c1658u: goto label_3c1658;
        case 0x3c165cu: goto label_3c165c;
        case 0x3c1660u: goto label_3c1660;
        case 0x3c1664u: goto label_3c1664;
        case 0x3c1668u: goto label_3c1668;
        case 0x3c166cu: goto label_3c166c;
        case 0x3c1670u: goto label_3c1670;
        case 0x3c1674u: goto label_3c1674;
        case 0x3c1678u: goto label_3c1678;
        case 0x3c167cu: goto label_3c167c;
        case 0x3c1680u: goto label_3c1680;
        case 0x3c1684u: goto label_3c1684;
        case 0x3c1688u: goto label_3c1688;
        case 0x3c168cu: goto label_3c168c;
        case 0x3c1690u: goto label_3c1690;
        case 0x3c1694u: goto label_3c1694;
        case 0x3c1698u: goto label_3c1698;
        case 0x3c169cu: goto label_3c169c;
        case 0x3c16a0u: goto label_3c16a0;
        case 0x3c16a4u: goto label_3c16a4;
        case 0x3c16a8u: goto label_3c16a8;
        case 0x3c16acu: goto label_3c16ac;
        case 0x3c16b0u: goto label_3c16b0;
        case 0x3c16b4u: goto label_3c16b4;
        case 0x3c16b8u: goto label_3c16b8;
        case 0x3c16bcu: goto label_3c16bc;
        case 0x3c16c0u: goto label_3c16c0;
        case 0x3c16c4u: goto label_3c16c4;
        case 0x3c16c8u: goto label_3c16c8;
        case 0x3c16ccu: goto label_3c16cc;
        case 0x3c16d0u: goto label_3c16d0;
        case 0x3c16d4u: goto label_3c16d4;
        case 0x3c16d8u: goto label_3c16d8;
        case 0x3c16dcu: goto label_3c16dc;
        case 0x3c16e0u: goto label_3c16e0;
        case 0x3c16e4u: goto label_3c16e4;
        case 0x3c16e8u: goto label_3c16e8;
        case 0x3c16ecu: goto label_3c16ec;
        case 0x3c16f0u: goto label_3c16f0;
        case 0x3c16f4u: goto label_3c16f4;
        case 0x3c16f8u: goto label_3c16f8;
        case 0x3c16fcu: goto label_3c16fc;
        case 0x3c1700u: goto label_3c1700;
        case 0x3c1704u: goto label_3c1704;
        case 0x3c1708u: goto label_3c1708;
        case 0x3c170cu: goto label_3c170c;
        case 0x3c1710u: goto label_3c1710;
        case 0x3c1714u: goto label_3c1714;
        case 0x3c1718u: goto label_3c1718;
        case 0x3c171cu: goto label_3c171c;
        case 0x3c1720u: goto label_3c1720;
        case 0x3c1724u: goto label_3c1724;
        case 0x3c1728u: goto label_3c1728;
        case 0x3c172cu: goto label_3c172c;
        case 0x3c1730u: goto label_3c1730;
        case 0x3c1734u: goto label_3c1734;
        case 0x3c1738u: goto label_3c1738;
        case 0x3c173cu: goto label_3c173c;
        case 0x3c1740u: goto label_3c1740;
        case 0x3c1744u: goto label_3c1744;
        case 0x3c1748u: goto label_3c1748;
        case 0x3c174cu: goto label_3c174c;
        case 0x3c1750u: goto label_3c1750;
        case 0x3c1754u: goto label_3c1754;
        case 0x3c1758u: goto label_3c1758;
        case 0x3c175cu: goto label_3c175c;
        case 0x3c1760u: goto label_3c1760;
        case 0x3c1764u: goto label_3c1764;
        case 0x3c1768u: goto label_3c1768;
        case 0x3c176cu: goto label_3c176c;
        case 0x3c1770u: goto label_3c1770;
        case 0x3c1774u: goto label_3c1774;
        case 0x3c1778u: goto label_3c1778;
        case 0x3c177cu: goto label_3c177c;
        case 0x3c1780u: goto label_3c1780;
        case 0x3c1784u: goto label_3c1784;
        case 0x3c1788u: goto label_3c1788;
        case 0x3c178cu: goto label_3c178c;
        case 0x3c1790u: goto label_3c1790;
        case 0x3c1794u: goto label_3c1794;
        case 0x3c1798u: goto label_3c1798;
        case 0x3c179cu: goto label_3c179c;
        case 0x3c17a0u: goto label_3c17a0;
        case 0x3c17a4u: goto label_3c17a4;
        case 0x3c17a8u: goto label_3c17a8;
        case 0x3c17acu: goto label_3c17ac;
        case 0x3c17b0u: goto label_3c17b0;
        case 0x3c17b4u: goto label_3c17b4;
        case 0x3c17b8u: goto label_3c17b8;
        case 0x3c17bcu: goto label_3c17bc;
        case 0x3c17c0u: goto label_3c17c0;
        case 0x3c17c4u: goto label_3c17c4;
        case 0x3c17c8u: goto label_3c17c8;
        case 0x3c17ccu: goto label_3c17cc;
        case 0x3c17d0u: goto label_3c17d0;
        case 0x3c17d4u: goto label_3c17d4;
        case 0x3c17d8u: goto label_3c17d8;
        case 0x3c17dcu: goto label_3c17dc;
        case 0x3c17e0u: goto label_3c17e0;
        case 0x3c17e4u: goto label_3c17e4;
        case 0x3c17e8u: goto label_3c17e8;
        case 0x3c17ecu: goto label_3c17ec;
        case 0x3c17f0u: goto label_3c17f0;
        case 0x3c17f4u: goto label_3c17f4;
        case 0x3c17f8u: goto label_3c17f8;
        case 0x3c17fcu: goto label_3c17fc;
        case 0x3c1800u: goto label_3c1800;
        case 0x3c1804u: goto label_3c1804;
        case 0x3c1808u: goto label_3c1808;
        case 0x3c180cu: goto label_3c180c;
        case 0x3c1810u: goto label_3c1810;
        case 0x3c1814u: goto label_3c1814;
        case 0x3c1818u: goto label_3c1818;
        case 0x3c181cu: goto label_3c181c;
        case 0x3c1820u: goto label_3c1820;
        case 0x3c1824u: goto label_3c1824;
        case 0x3c1828u: goto label_3c1828;
        case 0x3c182cu: goto label_3c182c;
        case 0x3c1830u: goto label_3c1830;
        case 0x3c1834u: goto label_3c1834;
        case 0x3c1838u: goto label_3c1838;
        case 0x3c183cu: goto label_3c183c;
        case 0x3c1840u: goto label_3c1840;
        case 0x3c1844u: goto label_3c1844;
        case 0x3c1848u: goto label_3c1848;
        case 0x3c184cu: goto label_3c184c;
        case 0x3c1850u: goto label_3c1850;
        case 0x3c1854u: goto label_3c1854;
        case 0x3c1858u: goto label_3c1858;
        case 0x3c185cu: goto label_3c185c;
        case 0x3c1860u: goto label_3c1860;
        case 0x3c1864u: goto label_3c1864;
        case 0x3c1868u: goto label_3c1868;
        case 0x3c186cu: goto label_3c186c;
        case 0x3c1870u: goto label_3c1870;
        case 0x3c1874u: goto label_3c1874;
        case 0x3c1878u: goto label_3c1878;
        case 0x3c187cu: goto label_3c187c;
        default: break;
    }

    ctx->pc = 0x3c0ea0u;

label_3c0ea0:
    // 0x3c0ea0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3c0ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_3c0ea4:
    // 0x3c0ea4: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x3c0ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_3c0ea8:
    // 0x3c0ea8: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x3c0ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_3c0eac:
    // 0x3c0eac: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3c0eacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3c0eb0:
    // 0x3c0eb0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3c0eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3c0eb4:
    // 0x3c0eb4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3c0eb4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c0eb8:
    // 0x3c0eb8: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x3c0eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_3c0ebc:
    // 0x3c0ebc: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x3c0ebcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3c0ec0:
    // 0x3c0ec0: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x3c0ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_3c0ec4:
    // 0x3c0ec4: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x3c0ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_3c0ec8:
    // 0x3c0ec8: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x3c0ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_3c0ecc:
    // 0x3c0ecc: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x3c0eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_3c0ed0:
    // 0x3c0ed0: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x3c0ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_3c0ed4:
    // 0x3c0ed4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3c0ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3c0ed8:
    // 0x3c0ed8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x3c0ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_3c0edc:
    // 0x3c0edc: 0x32c20007  andi        $v0, $s6, 0x7
    ctx->pc = 0x3c0edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)7);
label_3c0ee0:
    // 0x3c0ee0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3c0ee4:
    if (ctx->pc == 0x3C0EE4u) {
        ctx->pc = 0x3C0EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0EE0u;
        // 0x3c0ee4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0EE8u;
        goto label_3c0ee8;
    }
    ctx->pc = 0x3C0EE0u;
    {
        const bool branch_taken_0x3c0ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C0EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0EE0u;
        // 0x3c0ee4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0ee0) {
            ctx->pc = 0x3C0EFCu;
            goto label_3c0efc;
        }
    }
    ctx->pc = 0x3C0EE8u;
label_3c0ee8:
    // 0x3c0ee8: 0x32420007  andi        $v0, $s2, 0x7
    ctx->pc = 0x3c0ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)7);
label_3c0eec:
    // 0x3c0eec: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3c0ef0:
    if (ctx->pc == 0x3C0EF0u) {
        ctx->pc = 0x3C0EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0EECu;
        // 0x3c0ef0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0EF4u;
        goto label_3c0ef4;
    }
    ctx->pc = 0x3C0EECu;
    {
        const bool branch_taken_0x3c0eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c0eec) {
            ctx->pc = 0x3C0EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C0EECu;
            // 0x3c0ef0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C0EFCu;
            goto label_3c0efc;
        }
    }
    ctx->pc = 0x3C0EF4u;
label_3c0ef4:
    // 0x3c0ef4: 0x3a420008  xori        $v0, $s2, 0x8
    ctx->pc = 0x3c0ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)8);
label_3c0ef8:
    // 0x3c0ef8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3c0ef8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3c0efc:
    // 0x3c0efc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3c0efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_3c0f00:
    // 0x3c0f00: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3c0f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3c0f04:
    // 0x3c0f04: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x3c0f04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_3c0f08:
    // 0x3c0f08: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_3c0f0c:
    if (ctx->pc == 0x3C0F0Cu) {
        ctx->pc = 0x3C0F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0F08u;
        // 0x3c0f0c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0F10u;
        goto label_3c0f10;
    }
    ctx->pc = 0x3C0F08u;
    {
        const bool branch_taken_0x3c0f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0F08u;
        // 0x3c0f0c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0f08) {
            ctx->pc = 0x3C1008u;
            goto label_3c1008;
        }
    }
    ctx->pc = 0x3C0F10u;
label_3c0f10:
    // 0x3c0f10: 0x721018  mult        $v0, $v1, $s2
    ctx->pc = 0x3c0f10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3c0f14:
    // 0x3c0f14: 0x2d28021  addu        $s0, $s6, $s2
    ctx->pc = 0x3c0f14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
label_3c0f18:
    // 0x3c0f18: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x3c0f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_3c0f1c:
    // 0x3c0f1c: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x3c0f1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3c0f20:
    // 0x3c0f20: 0x1040024a  beqz        $v0, . + 4 + (0x24A << 2)
label_3c0f24:
    if (ctx->pc == 0x3C0F24u) {
        ctx->pc = 0x3C0F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0F20u;
        // 0x3c0f24: 0x1210c2  srl         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0F28u;
        goto label_3c0f28;
    }
    ctx->pc = 0x3C0F20u;
    {
        const bool branch_taken_0x3c0f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0F20u;
        // 0x3c0f24: 0x1210c2  srl         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0f20) {
            ctx->pc = 0x3C184Cu;
            goto label_3c184c;
        }
    }
    ctx->pc = 0x3C0F28u;
label_3c0f28:
    // 0x3c0f28: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x3c0f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_3c0f2c:
    // 0x3c0f2c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3c0f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3c0f30:
    // 0x3c0f30: 0x2f03c  dsll32      $fp, $v0, 0
    ctx->pc = 0x3c0f30u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) << (32 + 0));
label_3c0f34:
    // 0x3c0f34: 0x12a03c  dsll32      $s4, $s2, 0
    ctx->pc = 0x3c0f34u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 18) << (32 + 0));
label_3c0f38:
    // 0x3c0f38: 0x28750002  slti        $s5, $v1, 0x2
    ctx->pc = 0x3c0f38u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_3c0f3c:
    // 0x3c0f3c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x3c0f3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c0f40:
    // 0x3c0f40: 0x10000022  b           . + 4 + (0x22 << 2)
label_3c0f44:
    if (ctx->pc == 0x3C0F44u) {
        ctx->pc = 0x3C0F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0F40u;
        // 0x3c0f44: 0x2129821  addu        $s3, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0F48u;
        goto label_3c0f48;
    }
    ctx->pc = 0x3C0F40u;
    {
        const bool branch_taken_0x3c0f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0F40u;
        // 0x3c0f44: 0x2129821  addu        $s3, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0f40) {
            ctx->pc = 0x3C0FCCu;
            goto label_3c0fcc;
        }
    }
    ctx->pc = 0x3C0F48u;
label_3c0f48:
    // 0x3c0f48: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_3c0f4c:
    if (ctx->pc == 0x3C0F4Cu) {
        ctx->pc = 0x3C0F50u;
        goto label_3c0f50;
    }
    ctx->pc = 0x3C0F48u;
    {
        const bool branch_taken_0x3c0f48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c0f48) {
            ctx->pc = 0x3C0F64u;
            goto label_3c0f64;
        }
    }
    ctx->pc = 0x3C0F50u;
label_3c0f50:
    // 0x3c0f50: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x3c0f50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_3c0f54:
    // 0x3c0f54: 0xde230000  ld          $v1, 0x0($s1)
    ctx->pc = 0x3c0f54u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_3c0f58:
    // 0x3c0f58: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x3c0f58u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_3c0f5c:
    // 0x3c0f5c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_3c0f60:
    if (ctx->pc == 0x3C0F60u) {
        ctx->pc = 0x3C0F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0F5Cu;
        // 0x3c0f60: 0xfe030000  sd          $v1, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0F64u;
        goto label_3c0f64;
    }
    ctx->pc = 0x3C0F5Cu;
    {
        const bool branch_taken_0x3c0f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0F5Cu;
        // 0x3c0f60: 0xfe030000  sd          $v1, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0f5c) {
            ctx->pc = 0x3C0FC8u;
            goto label_3c0fc8;
        }
    }
    ctx->pc = 0x3C0F64u;
label_3c0f64:
    // 0x3c0f64: 0x12a0000e  beqz        $s5, . + 4 + (0xE << 2)
label_3c0f68:
    if (ctx->pc == 0x3C0F68u) {
        ctx->pc = 0x3C0F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0F64u;
        // 0x3c0f68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0F6Cu;
        goto label_3c0f6c;
    }
    ctx->pc = 0x3C0F64u;
    {
        const bool branch_taken_0x3c0f64 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0F64u;
        // 0x3c0f68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0f64) {
            ctx->pc = 0x3C0FA0u;
            goto label_3c0fa0;
        }
    }
    ctx->pc = 0x3C0F6Cu;
label_3c0f6c:
    // 0x3c0f6c: 0x1e283e  dsrl32      $a1, $fp, 0
    ctx->pc = 0x3c0f6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30) >> (32 + 0));
label_3c0f70:
    // 0x3c0f70: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3c0f70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c0f74:
    // 0x3c0f74: 0x0  nop
    ctx->pc = 0x3c0f74u;
    // NOP
label_3c0f78:
    // 0x3c0f78: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x3c0f78u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_3c0f7c:
    // 0x3c0f7c: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x3c0f7cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_3c0f80:
    // 0x3c0f80: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x3c0f80u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_3c0f84:
    // 0x3c0f84: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x3c0f84u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_3c0f88:
    // 0x3c0f88: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x3c0f88u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_3c0f8c:
    // 0x3c0f8c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3c0f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_3c0f90:
    // 0x3c0f90: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_3c0f94:
    if (ctx->pc == 0x3C0F94u) {
        ctx->pc = 0x3C0F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0F90u;
        // 0x3c0f94: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0F98u;
        goto label_3c0f98;
    }
    ctx->pc = 0x3C0F90u;
    {
        const bool branch_taken_0x3c0f90 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x3C0F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0F90u;
        // 0x3c0f94: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0f90) {
            ctx->pc = 0x3C0F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c0f78;
        }
    }
    ctx->pc = 0x3C0F98u;
label_3c0f98:
    // 0x3c0f98: 0x1000000c  b           . + 4 + (0xC << 2)
label_3c0f9c:
    if (ctx->pc == 0x3C0F9Cu) {
        ctx->pc = 0x3C0F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0F98u;
        // 0x3c0f9c: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0FA0u;
        goto label_3c0fa0;
    }
    ctx->pc = 0x3C0F98u;
    {
        const bool branch_taken_0x3c0f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0F98u;
        // 0x3c0f9c: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0f98) {
            ctx->pc = 0x3C0FCCu;
            goto label_3c0fcc;
        }
    }
    ctx->pc = 0x3C0FA0u;
label_3c0fa0:
    // 0x3c0fa0: 0x14283e  dsrl32      $a1, $s4, 0
    ctx->pc = 0x3c0fa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) >> (32 + 0));
label_3c0fa4:
    // 0x3c0fa4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3c0fa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c0fa8:
    // 0x3c0fa8: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x3c0fa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3c0fac:
    // 0x3c0fac: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x3c0facu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_3c0fb0:
    // 0x3c0fb0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x3c0fb0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3c0fb4:
    // 0x3c0fb4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3c0fb4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_3c0fb8:
    // 0x3c0fb8: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3c0fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_3c0fbc:
    // 0x3c0fbc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3c0fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3c0fc0:
    // 0x3c0fc0: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_3c0fc4:
    if (ctx->pc == 0x3C0FC4u) {
        ctx->pc = 0x3C0FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0FC0u;
        // 0x3c0fc4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0FC8u;
        goto label_3c0fc8;
    }
    ctx->pc = 0x3C0FC0u;
    {
        const bool branch_taken_0x3c0fc0 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x3C0FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0FC0u;
        // 0x3c0fc4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0fc0) {
            ctx->pc = 0x3C0FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c0fa8;
        }
    }
    ctx->pc = 0x3C0FC8u;
label_3c0fc8:
    // 0x3c0fc8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x3c0fc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c0fcc:
    // 0x3c0fcc: 0x2d1102b  sltu        $v0, $s6, $s1
    ctx->pc = 0x3c0fccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3c0fd0:
    // 0x3c0fd0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3c0fd4:
    if (ctx->pc == 0x3C0FD4u) {
        ctx->pc = 0x3C0FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0FD0u;
        // 0x3c0fd4: 0x2328023  subu        $s0, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0FD8u;
        goto label_3c0fd8;
    }
    ctx->pc = 0x3C0FD0u;
    {
        const bool branch_taken_0x3c0fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0FD0u;
        // 0x3c0fd4: 0x2328023  subu        $s0, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0fd0) {
            ctx->pc = 0x3C0FECu;
            goto label_3c0fec;
        }
    }
    ctx->pc = 0x3C0FD8u;
label_3c0fd8:
    // 0x3c0fd8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c0fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c0fdc:
    // 0x3c0fdc: 0x2e0f809  jalr        $s7
label_3c0fe0:
    if (ctx->pc == 0x3C0FE0u) {
        ctx->pc = 0x3C0FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0FDCu;
        // 0x3c0fe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0FE4u;
        goto label_3c0fe4;
    }
    ctx->pc = 0x3C0FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x3C0FE4u);
        ctx->pc = 0x3C0FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0FDCu;
        // 0x3c0fe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0FDCu, 0x3C0FE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C0FE4u;
label_3c0fe4:
    // 0x3c0fe4: 0x5c40ffd8  bgtzl       $v0, . + 4 + (-0x28 << 2)
label_3c0fe8:
    if (ctx->pc == 0x3C0FE8u) {
        ctx->pc = 0x3C0FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0FE4u;
        // 0x3c0fe8: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0FECu;
        goto label_3c0fec;
    }
    ctx->pc = 0x3C0FE4u;
    {
        const bool branch_taken_0x3c0fe4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x3c0fe4) {
            ctx->pc = 0x3C0FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C0FE4u;
            // 0x3c0fe8: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C0F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c0f48;
        }
    }
    ctx->pc = 0x3C0FECu;
label_3c0fec:
    // 0x3c0fec: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x3c0fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_3c0ff0:
    // 0x3c0ff0: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x3c0ff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c0ff4:
    // 0x3c0ff4: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x3c0ff4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3c0ff8:
    // 0x3c0ff8: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
label_3c0ffc:
    if (ctx->pc == 0x3C0FFCu) {
        ctx->pc = 0x3C0FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0FF8u;
        // 0x3c0ffc: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1000u;
        goto label_3c1000;
    }
    ctx->pc = 0x3C0FF8u;
    {
        const bool branch_taken_0x3c0ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C0FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0FF8u;
        // 0x3c0ffc: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0ff8) {
            ctx->pc = 0x3C0F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c0f40;
        }
    }
    ctx->pc = 0x3C1000u;
label_3c1000:
    // 0x3c1000: 0x10000213  b           . + 4 + (0x213 << 2)
label_3c1004:
    if (ctx->pc == 0x3C1004u) {
        ctx->pc = 0x3C1004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1000u;
        // 0x3c1004: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1008u;
        goto label_3c1008;
    }
    ctx->pc = 0x3C1000u;
    {
        const bool branch_taken_0x3c1000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1000u;
        // 0x3c1004: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1000) {
            ctx->pc = 0x3C1850u;
            goto label_3c1850;
        }
    }
    ctx->pc = 0x3C1008u;
label_3c1008:
    // 0x3c1008: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3c1008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3c100c:
    // 0x3c100c: 0x41042  srl         $v0, $a0, 1
    ctx->pc = 0x3c100cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_3c1010:
    // 0x3c1010: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x3c1010u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_3c1014:
    // 0x3c1014: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3c1014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3c1018:
    // 0x3c1018: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x3c1018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_3c101c:
    // 0x3c101c: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3c101cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3c1020:
    // 0x3c1020: 0x1460008b  bnez        $v1, . + 4 + (0x8B << 2)
label_3c1024:
    if (ctx->pc == 0x3C1024u) {
        ctx->pc = 0x3C1024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1020u;
        // 0x3c1024: 0x968021  addu        $s0, $a0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1028u;
        goto label_3c1028;
    }
    ctx->pc = 0x3C1020u;
    {
        const bool branch_taken_0x3c1020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C1024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1020u;
        // 0x3c1024: 0x968021  addu        $s0, $a0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1020) {
            ctx->pc = 0x3C1250u;
            goto label_3c1250;
        }
    }
    ctx->pc = 0x3C1028u;
label_3c1028:
    // 0x3c1028: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3c1028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3c102c:
    // 0x3c102c: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x3c102cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3c1030:
    // 0x3c1030: 0x2c620029  sltiu       $v0, $v1, 0x29
    ctx->pc = 0x3c1030u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)41) ? 1 : 0);
label_3c1034:
    // 0x3c1034: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x3c1034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3c1038:
    // 0x3c1038: 0x721818  mult        $v1, $v1, $s2
    ctx->pc = 0x3c1038u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3c103c:
    // 0x3c103c: 0x14400066  bnez        $v0, . + 4 + (0x66 << 2)
label_3c1040:
    if (ctx->pc == 0x3C1040u) {
        ctx->pc = 0x3C1040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C103Cu;
        // 0x3c1040: 0x76a821  addu        $s5, $v1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1044u;
        goto label_3c1044;
    }
    ctx->pc = 0x3C103Cu;
    {
        const bool branch_taken_0x3c103c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C1040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C103Cu;
        // 0x3c1040: 0x76a821  addu        $s5, $v1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c103c) {
            ctx->pc = 0x3C11D8u;
            goto label_3c11d8;
        }
    }
    ctx->pc = 0x3C1044u;
label_3c1044:
    // 0x3c1044: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3c1044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3c1048:
    // 0x3c1048: 0x410c2  srl         $v0, $a0, 3
    ctx->pc = 0x3c1048u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
label_3c104c:
    // 0x3c104c: 0x52f018  mult        $fp, $v0, $s2
    ctx->pc = 0x3c104cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
label_3c1050:
    // 0x3c1050: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3c1050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3c1054:
    // 0x3c1054: 0x2de8821  addu        $s1, $s6, $fp
    ctx->pc = 0x3c1054u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 30)));
label_3c1058:
    // 0x3c1058: 0x1e1040  sll         $v0, $fp, 1
    ctx->pc = 0x3c1058u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
label_3c105c:
    // 0x3c105c: 0x569821  addu        $s3, $v0, $s6
    ctx->pc = 0x3c105cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_3c1060:
    // 0x3c1060: 0x2e0f809  jalr        $s7
label_3c1064:
    if (ctx->pc == 0x3C1064u) {
        ctx->pc = 0x3C1064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1060u;
        // 0x3c1064: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1068u;
        goto label_3c1068;
    }
    ctx->pc = 0x3C1060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x3C1068u);
        ctx->pc = 0x3C1064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1060u;
        // 0x3c1064: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1060u, 0x3C1068u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C1068u;
label_3c1068:
    // 0x3c1068: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
label_3c106c:
    if (ctx->pc == 0x3C106Cu) {
        ctx->pc = 0x3C106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1068u;
        // 0x3c106c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1070u;
        goto label_3c1070;
    }
    ctx->pc = 0x3C1068u;
    {
        const bool branch_taken_0x3c1068 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3C106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1068u;
        // 0x3c106c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1068) {
            ctx->pc = 0x3C109Cu;
            goto label_3c109c;
        }
    }
    ctx->pc = 0x3C1070u;
label_3c1070:
    // 0x3c1070: 0x2e0f809  jalr        $s7
label_3c1074:
    if (ctx->pc == 0x3C1074u) {
        ctx->pc = 0x3C1074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1070u;
        // 0x3c1074: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1078u;
        goto label_3c1078;
    }
    ctx->pc = 0x3C1070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x3C1078u);
        ctx->pc = 0x3C1074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1070u;
        // 0x3c1074: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1070u, 0x3C1078u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C1078u;
label_3c1078:
    // 0x3c1078: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
label_3c107c:
    if (ctx->pc == 0x3C107Cu) {
        ctx->pc = 0x3C107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1078u;
        // 0x3c107c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1080u;
        goto label_3c1080;
    }
    ctx->pc = 0x3C1078u;
    {
        const bool branch_taken_0x3c1078 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3C107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1078u;
        // 0x3c107c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1078) {
            ctx->pc = 0x3C10CCu;
            goto label_3c10cc;
        }
    }
    ctx->pc = 0x3C1080u;
label_3c1080:
    // 0x3c1080: 0x2e0f809  jalr        $s7
label_3c1084:
    if (ctx->pc == 0x3C1084u) {
        ctx->pc = 0x3C1084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1080u;
        // 0x3c1084: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1088u;
        goto label_3c1088;
    }
    ctx->pc = 0x3C1080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x3C1088u);
        ctx->pc = 0x3C1084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1080u;
        // 0x3c1084: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1080u, 0x3C1088u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C1088u;
label_3c1088:
    // 0x3c1088: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3c1088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3c108c:
    // 0x3c108c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c108cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c1090:
    // 0x3c1090: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x3c1090u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3c1094:
    // 0x3c1094: 0x1000000e  b           . + 4 + (0xE << 2)
label_3c1098:
    if (ctx->pc == 0x3C1098u) {
        ctx->pc = 0x3C1098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1094u;
        // 0x3c1098: 0x2c3200b  movn        $a0, $s6, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C109Cu;
        goto label_3c109c;
    }
    ctx->pc = 0x3C1094u;
    {
        const bool branch_taken_0x3c1094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1094u;
        // 0x3c1098: 0x2c3200b  movn        $a0, $s6, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1094) {
            ctx->pc = 0x3C10D0u;
            goto label_3c10d0;
        }
    }
    ctx->pc = 0x3C109Cu;
label_3c109c:
    // 0x3c109c: 0x2e0f809  jalr        $s7
label_3c10a0:
    if (ctx->pc == 0x3C10A0u) {
        ctx->pc = 0x3C10A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C109Cu;
        // 0x3c10a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C10A4u;
        goto label_3c10a4;
    }
    ctx->pc = 0x3C109Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x3C10A4u);
        ctx->pc = 0x3C10A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C109Cu;
        // 0x3c10a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C109Cu, 0x3C10A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C10A4u;
label_3c10a4:
    // 0x3c10a4: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
label_3c10a8:
    if (ctx->pc == 0x3C10A8u) {
        ctx->pc = 0x3C10A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C10A4u;
        // 0x3c10a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C10ACu;
        goto label_3c10ac;
    }
    ctx->pc = 0x3C10A4u;
    {
        const bool branch_taken_0x3c10a4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x3c10a4) {
            ctx->pc = 0x3C10A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C10A4u;
            // 0x3c10a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C10D0u;
            goto label_3c10d0;
        }
    }
    ctx->pc = 0x3C10ACu;
label_3c10ac:
    // 0x3c10ac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3c10acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3c10b0:
    // 0x3c10b0: 0x2e0f809  jalr        $s7
label_3c10b4:
    if (ctx->pc == 0x3C10B4u) {
        ctx->pc = 0x3C10B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C10B0u;
        // 0x3c10b4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C10B8u;
        goto label_3c10b8;
    }
    ctx->pc = 0x3C10B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x3C10B8u);
        ctx->pc = 0x3C10B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C10B0u;
        // 0x3c10b4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C10B0u, 0x3C10B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C10B8u;
label_3c10b8:
    // 0x3c10b8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3c10b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3c10bc:
    // 0x3c10bc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3c10bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3c10c0:
    // 0x3c10c0: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x3c10c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3c10c4:
    // 0x3c10c4: 0x10000002  b           . + 4 + (0x2 << 2)
label_3c10c8:
    if (ctx->pc == 0x3C10C8u) {
        ctx->pc = 0x3C10C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C10C4u;
        // 0x3c10c8: 0x263200b  movn        $a0, $s3, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C10CCu;
        goto label_3c10cc;
    }
    ctx->pc = 0x3C10C4u;
    {
        const bool branch_taken_0x3c10c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C10C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C10C4u;
        // 0x3c10c8: 0x263200b  movn        $a0, $s3, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c10c4) {
            ctx->pc = 0x3C10D0u;
            goto label_3c10d0;
        }
    }
    ctx->pc = 0x3C10CCu;
label_3c10cc:
    // 0x3c10cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c10ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c10d0:
    // 0x3c10d0: 0x21ea023  subu        $s4, $s0, $fp
    ctx->pc = 0x3c10d0u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
label_3c10d4:
    // 0x3c10d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c10d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c10d8:
    // 0x3c10d8: 0x21e9821  addu        $s3, $s0, $fp
    ctx->pc = 0x3c10d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
label_3c10dc:
    // 0x3c10dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c10dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c10e0:
    // 0x3c10e0: 0x2e0f809  jalr        $s7
label_3c10e4:
    if (ctx->pc == 0x3C10E4u) {
        ctx->pc = 0x3C10E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C10E0u;
        // 0x3c10e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C10E8u;
        goto label_3c10e8;
    }
    ctx->pc = 0x3C10E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x3C10E8u);
        ctx->pc = 0x3C10E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C10E0u;
        // 0x3c10e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C10E0u, 0x3C10E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C10E8u;
label_3c10e8:
    // 0x3c10e8: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
label_3c10ec:
    if (ctx->pc == 0x3C10ECu) {
        ctx->pc = 0x3C10ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C10E8u;
        // 0x3c10ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C10F0u;
        goto label_3c10f0;
    }
    ctx->pc = 0x3C10E8u;
    {
        const bool branch_taken_0x3c10e8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3C10ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C10E8u;
        // 0x3c10ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c10e8) {
            ctx->pc = 0x3C111Cu;
            goto label_3c111c;
        }
    }
    ctx->pc = 0x3C10F0u;
label_3c10f0:
    // 0x3c10f0: 0x2e0f809  jalr        $s7
label_3c10f4:
    if (ctx->pc == 0x3C10F4u) {
        ctx->pc = 0x3C10F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C10F0u;
        // 0x3c10f4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C10F8u;
        goto label_3c10f8;
    }
    ctx->pc = 0x3C10F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x3C10F8u);
        ctx->pc = 0x3C10F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C10F0u;
        // 0x3c10f4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C10F0u, 0x3C10F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C10F8u;
label_3c10f8:
    // 0x3c10f8: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
label_3c10fc:
    if (ctx->pc == 0x3C10FCu) {
        ctx->pc = 0x3C10FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C10F8u;
        // 0x3c10fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1100u;
        goto label_3c1100;
    }
    ctx->pc = 0x3C10F8u;
    {
        const bool branch_taken_0x3c10f8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3C10FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C10F8u;
        // 0x3c10fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c10f8) {
            ctx->pc = 0x3C114Cu;
            goto label_3c114c;
        }
    }
    ctx->pc = 0x3C1100u;
label_3c1100:
    // 0x3c1100: 0x2e0f809  jalr        $s7
label_3c1104:
    if (ctx->pc == 0x3C1104u) {
        ctx->pc = 0x3C1104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1100u;
        // 0x3c1104: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1108u;
        goto label_3c1108;
    }
    ctx->pc = 0x3C1100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x3C1108u);
        ctx->pc = 0x3C1104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1100u;
        // 0x3c1104: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1100u, 0x3C1108u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C1108u;
label_3c1108:
    // 0x3c1108: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3c1108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3c110c:
    // 0x3c110c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c110cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c1110:
    // 0x3c1110: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x3c1110u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3c1114:
    // 0x3c1114: 0x1000000e  b           . + 4 + (0xE << 2)
label_3c1118:
    if (ctx->pc == 0x3C1118u) {
        ctx->pc = 0x3C1118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1114u;
        // 0x3c1118: 0x283200b  movn        $a0, $s4, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C111Cu;
        goto label_3c111c;
    }
    ctx->pc = 0x3C1114u;
    {
        const bool branch_taken_0x3c1114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1114u;
        // 0x3c1118: 0x283200b  movn        $a0, $s4, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1114) {
            ctx->pc = 0x3C1150u;
            goto label_3c1150;
        }
    }
    ctx->pc = 0x3C111Cu;
label_3c111c:
    // 0x3c111c: 0x2e0f809  jalr        $s7
label_3c1120:
    if (ctx->pc == 0x3C1120u) {
        ctx->pc = 0x3C1120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C111Cu;
        // 0x3c1120: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1124u;
        goto label_3c1124;
    }
    ctx->pc = 0x3C111Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x3C1124u);
        ctx->pc = 0x3C1120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C111Cu;
        // 0x3c1120: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C111Cu, 0x3C1124u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C1124u;
label_3c1124:
    // 0x3c1124: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
label_3c1128:
    if (ctx->pc == 0x3C1128u) {
        ctx->pc = 0x3C1128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1124u;
        // 0x3c1128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C112Cu;
        goto label_3c112c;
    }
    ctx->pc = 0x3C1124u;
    {
        const bool branch_taken_0x3c1124 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x3c1124) {
            ctx->pc = 0x3C1128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C1124u;
            // 0x3c1128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1150u;
            goto label_3c1150;
        }
    }
    ctx->pc = 0x3C112Cu;
label_3c112c:
    // 0x3c112c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c112cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c1130:
    // 0x3c1130: 0x2e0f809  jalr        $s7
label_3c1134:
    if (ctx->pc == 0x3C1134u) {
        ctx->pc = 0x3C1134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1130u;
        // 0x3c1134: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1138u;
        goto label_3c1138;
    }
    ctx->pc = 0x3C1130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x3C1138u);
        ctx->pc = 0x3C1134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1130u;
        // 0x3c1134: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1130u, 0x3C1138u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C1138u;
label_3c1138:
    // 0x3c1138: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3c1138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3c113c:
    // 0x3c113c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c113cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c1140:
    // 0x3c1140: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x3c1140u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3c1144:
    // 0x3c1144: 0x10000002  b           . + 4 + (0x2 << 2)
label_3c1148:
    if (ctx->pc == 0x3C1148u) {
        ctx->pc = 0x3C1148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1144u;
        // 0x3c1148: 0x263200b  movn        $a0, $s3, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C114Cu;
        goto label_3c114c;
    }
    ctx->pc = 0x3C1144u;
    {
        const bool branch_taken_0x3c1144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1144u;
        // 0x3c1148: 0x263200b  movn        $a0, $s3, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1144) {
            ctx->pc = 0x3C1150u;
            goto label_3c1150;
        }
    }
    ctx->pc = 0x3C114Cu;
label_3c114c:
    // 0x3c114c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c114cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c1150:
    // 0x3c1150: 0x1e1040  sll         $v0, $fp, 1
    ctx->pc = 0x3c1150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
label_3c1154:
    // 0x3c1154: 0x2be9823  subu        $s3, $s5, $fp
    ctx->pc = 0x3c1154u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 30)));
label_3c1158:
    // 0x3c1158: 0x2a2a023  subu        $s4, $s5, $v0
    ctx->pc = 0x3c1158u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_3c115c:
    // 0x3c115c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c115cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c1160:
    // 0x3c1160: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c1160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c1164:
    // 0x3c1164: 0x2e0f809  jalr        $s7
label_3c1168:
    if (ctx->pc == 0x3C1168u) {
        ctx->pc = 0x3C1168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1164u;
        // 0x3c1168: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C116Cu;
        goto label_3c116c;
    }
    ctx->pc = 0x3C1164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x3C116Cu);
        ctx->pc = 0x3C1168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1164u;
        // 0x3c1168: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1164u, 0x3C116Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C116Cu;
label_3c116c:
    // 0x3c116c: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
label_3c1170:
    if (ctx->pc == 0x3C1170u) {
        ctx->pc = 0x3C1170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C116Cu;
        // 0x3c1170: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1174u;
        goto label_3c1174;
    }
    ctx->pc = 0x3C116Cu;
    {
        const bool branch_taken_0x3c116c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3C1170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C116Cu;
        // 0x3c1170: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c116c) {
            ctx->pc = 0x3C11A0u;
            goto label_3c11a0;
        }
    }
    ctx->pc = 0x3C1174u;
label_3c1174:
    // 0x3c1174: 0x2e0f809  jalr        $s7
label_3c1178:
    if (ctx->pc == 0x3C1178u) {
        ctx->pc = 0x3C1178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1174u;
        // 0x3c1178: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C117Cu;
        goto label_3c117c;
    }
    ctx->pc = 0x3C1174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x3C117Cu);
        ctx->pc = 0x3C1178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1174u;
        // 0x3c1178: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1174u, 0x3C117Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C117Cu;
label_3c117c:
    // 0x3c117c: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
label_3c1180:
    if (ctx->pc == 0x3C1180u) {
        ctx->pc = 0x3C1180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C117Cu;
        // 0x3c1180: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1184u;
        goto label_3c1184;
    }
    ctx->pc = 0x3C117Cu;
    {
        const bool branch_taken_0x3c117c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3C1180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C117Cu;
        // 0x3c1180: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c117c) {
            ctx->pc = 0x3C11D0u;
            goto label_3c11d0;
        }
    }
    ctx->pc = 0x3C1184u;
label_3c1184:
    // 0x3c1184: 0x2e0f809  jalr        $s7
label_3c1188:
    if (ctx->pc == 0x3C1188u) {
        ctx->pc = 0x3C1188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1184u;
        // 0x3c1188: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C118Cu;
        goto label_3c118c;
    }
    ctx->pc = 0x3C1184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x3C118Cu);
        ctx->pc = 0x3C1188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1184u;
        // 0x3c1188: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1184u, 0x3C118Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C118Cu;
label_3c118c:
    // 0x3c118c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3c118cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3c1190:
    // 0x3c1190: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3c1190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3c1194:
    // 0x3c1194: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x3c1194u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3c1198:
    // 0x3c1198: 0x1000000e  b           . + 4 + (0xE << 2)
label_3c119c:
    if (ctx->pc == 0x3C119Cu) {
        ctx->pc = 0x3C119Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1198u;
        // 0x3c119c: 0x283200b  movn        $a0, $s4, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C11A0u;
        goto label_3c11a0;
    }
    ctx->pc = 0x3C1198u;
    {
        const bool branch_taken_0x3c1198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C119Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1198u;
        // 0x3c119c: 0x283200b  movn        $a0, $s4, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1198) {
            ctx->pc = 0x3C11D4u;
            goto label_3c11d4;
        }
    }
    ctx->pc = 0x3C11A0u;
label_3c11a0:
    // 0x3c11a0: 0x2e0f809  jalr        $s7
label_3c11a4:
    if (ctx->pc == 0x3C11A4u) {
        ctx->pc = 0x3C11A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C11A0u;
        // 0x3c11a4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C11A8u;
        goto label_3c11a8;
    }
    ctx->pc = 0x3C11A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x3C11A8u);
        ctx->pc = 0x3C11A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C11A0u;
        // 0x3c11a4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C11A0u, 0x3C11A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C11A8u;
label_3c11a8:
    // 0x3c11a8: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
label_3c11ac:
    if (ctx->pc == 0x3C11ACu) {
        ctx->pc = 0x3C11ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C11A8u;
        // 0x3c11ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C11B0u;
        goto label_3c11b0;
    }
    ctx->pc = 0x3C11A8u;
    {
        const bool branch_taken_0x3c11a8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x3c11a8) {
            ctx->pc = 0x3C11ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C11A8u;
            // 0x3c11ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C11D4u;
            goto label_3c11d4;
        }
    }
    ctx->pc = 0x3C11B0u;
label_3c11b0:
    // 0x3c11b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c11b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c11b4:
    // 0x3c11b4: 0x2e0f809  jalr        $s7
label_3c11b8:
    if (ctx->pc == 0x3C11B8u) {
        ctx->pc = 0x3C11B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C11B4u;
        // 0x3c11b8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C11BCu;
        goto label_3c11bc;
    }
    ctx->pc = 0x3C11B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x3C11BCu);
        ctx->pc = 0x3C11B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C11B4u;
        // 0x3c11b8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C11B4u, 0x3C11BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C11BCu;
label_3c11bc:
    // 0x3c11bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3c11bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3c11c0:
    // 0x3c11c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c11c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c11c4:
    // 0x3c11c4: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x3c11c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3c11c8:
    // 0x3c11c8: 0x10000002  b           . + 4 + (0x2 << 2)
label_3c11cc:
    if (ctx->pc == 0x3C11CCu) {
        ctx->pc = 0x3C11CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C11C8u;
        // 0x3c11cc: 0x2a3200b  movn        $a0, $s5, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C11D0u;
        goto label_3c11d0;
    }
    ctx->pc = 0x3C11C8u;
    {
        const bool branch_taken_0x3c11c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C11CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C11C8u;
        // 0x3c11cc: 0x2a3200b  movn        $a0, $s5, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c11c8) {
            ctx->pc = 0x3C11D4u;
            goto label_3c11d4;
        }
    }
    ctx->pc = 0x3C11D0u;
label_3c11d0:
    // 0x3c11d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c11d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c11d4:
    // 0x3c11d4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3c11d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c11d8:
    // 0x3c11d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c11d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c11dc:
    // 0x3c11dc: 0x2e0f809  jalr        $s7
label_3c11e0:
    if (ctx->pc == 0x3C11E0u) {
        ctx->pc = 0x3C11E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C11DCu;
        // 0x3c11e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C11E4u;
        goto label_3c11e4;
    }
    ctx->pc = 0x3C11DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x3C11E4u);
        ctx->pc = 0x3C11E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C11DCu;
        // 0x3c11e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C11DCu, 0x3C11E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C11E4u;
label_3c11e4:
    // 0x3c11e4: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
label_3c11e8:
    if (ctx->pc == 0x3C11E8u) {
        ctx->pc = 0x3C11E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C11E4u;
        // 0x3c11e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C11ECu;
        goto label_3c11ec;
    }
    ctx->pc = 0x3C11E4u;
    {
        const bool branch_taken_0x3c11e4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3C11E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C11E4u;
        // 0x3c11e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c11e4) {
            ctx->pc = 0x3C1218u;
            goto label_3c1218;
        }
    }
    ctx->pc = 0x3C11ECu;
label_3c11ec:
    // 0x3c11ec: 0x2e0f809  jalr        $s7
label_3c11f0:
    if (ctx->pc == 0x3C11F0u) {
        ctx->pc = 0x3C11F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C11ECu;
        // 0x3c11f0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C11F4u;
        goto label_3c11f4;
    }
    ctx->pc = 0x3C11ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x3C11F4u);
        ctx->pc = 0x3C11F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C11ECu;
        // 0x3c11f0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C11ECu, 0x3C11F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C11F4u;
label_3c11f4:
    // 0x3c11f4: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
label_3c11f8:
    if (ctx->pc == 0x3C11F8u) {
        ctx->pc = 0x3C11F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C11F4u;
        // 0x3c11f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C11FCu;
        goto label_3c11fc;
    }
    ctx->pc = 0x3C11F4u;
    {
        const bool branch_taken_0x3c11f4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3C11F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C11F4u;
        // 0x3c11f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c11f4) {
            ctx->pc = 0x3C1248u;
            goto label_3c1248;
        }
    }
    ctx->pc = 0x3C11FCu;
label_3c11fc:
    // 0x3c11fc: 0x2e0f809  jalr        $s7
label_3c1200:
    if (ctx->pc == 0x3C1200u) {
        ctx->pc = 0x3C1200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C11FCu;
        // 0x3c1200: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1204u;
        goto label_3c1204;
    }
    ctx->pc = 0x3C11FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x3C1204u);
        ctx->pc = 0x3C1200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C11FCu;
        // 0x3c1200: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C11FCu, 0x3C1204u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C1204u;
label_3c1204:
    // 0x3c1204: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3c1204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3c1208:
    // 0x3c1208: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3c1208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3c120c:
    // 0x3c120c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x3c120cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3c1210:
    // 0x3c1210: 0x1000000e  b           . + 4 + (0xE << 2)
label_3c1214:
    if (ctx->pc == 0x3C1214u) {
        ctx->pc = 0x3C1214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1210u;
        // 0x3c1214: 0x223200b  movn        $a0, $s1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1218u;
        goto label_3c1218;
    }
    ctx->pc = 0x3C1210u;
    {
        const bool branch_taken_0x3c1210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1210u;
        // 0x3c1214: 0x223200b  movn        $a0, $s1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1210) {
            ctx->pc = 0x3C124Cu;
            goto label_3c124c;
        }
    }
    ctx->pc = 0x3C1218u;
label_3c1218:
    // 0x3c1218: 0x2e0f809  jalr        $s7
label_3c121c:
    if (ctx->pc == 0x3C121Cu) {
        ctx->pc = 0x3C121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1218u;
        // 0x3c121c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1220u;
        goto label_3c1220;
    }
    ctx->pc = 0x3C1218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x3C1220u);
        ctx->pc = 0x3C121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1218u;
        // 0x3c121c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1218u, 0x3C1220u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C1220u;
label_3c1220:
    // 0x3c1220: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
label_3c1224:
    if (ctx->pc == 0x3C1224u) {
        ctx->pc = 0x3C1224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1220u;
        // 0x3c1224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1228u;
        goto label_3c1228;
    }
    ctx->pc = 0x3C1220u;
    {
        const bool branch_taken_0x3c1220 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x3c1220) {
            ctx->pc = 0x3C1224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C1220u;
            // 0x3c1224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C124Cu;
            goto label_3c124c;
        }
    }
    ctx->pc = 0x3C1228u;
label_3c1228:
    // 0x3c1228: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c1228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c122c:
    // 0x3c122c: 0x2e0f809  jalr        $s7
label_3c1230:
    if (ctx->pc == 0x3C1230u) {
        ctx->pc = 0x3C1230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C122Cu;
        // 0x3c1230: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1234u;
        goto label_3c1234;
    }
    ctx->pc = 0x3C122Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x3C1234u);
        ctx->pc = 0x3C1230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C122Cu;
        // 0x3c1230: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C122Cu, 0x3C1234u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C1234u;
label_3c1234:
    // 0x3c1234: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3c1234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3c1238:
    // 0x3c1238: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c1238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c123c:
    // 0x3c123c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x3c123cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3c1240:
    // 0x3c1240: 0x10000002  b           . + 4 + (0x2 << 2)
label_3c1244:
    if (ctx->pc == 0x3C1244u) {
        ctx->pc = 0x3C1244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1240u;
        // 0x3c1244: 0x2a3200b  movn        $a0, $s5, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1248u;
        goto label_3c1248;
    }
    ctx->pc = 0x3C1240u;
    {
        const bool branch_taken_0x3c1240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1240u;
        // 0x3c1244: 0x2a3200b  movn        $a0, $s5, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1240) {
            ctx->pc = 0x3C124Cu;
            goto label_3c124c;
        }
    }
    ctx->pc = 0x3C1248u;
label_3c1248:
    // 0x3c1248: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c1248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c124c:
    // 0x3c124c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c124cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c1250:
    // 0x3c1250: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3c1250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3c1254:
    // 0x3c1254: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3c1258:
    if (ctx->pc == 0x3C1258u) {
        ctx->pc = 0x3C1258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1254u;
        // 0x3c1258: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C125Cu;
        goto label_3c125c;
    }
    ctx->pc = 0x3C1254u;
    {
        const bool branch_taken_0x3c1254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C1258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1254u;
        // 0x3c1258: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1254) {
            ctx->pc = 0x3C1278u;
            goto label_3c1278;
        }
    }
    ctx->pc = 0x3C125Cu;
label_3c125c:
    // 0x3c125c: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x3c125cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_3c1260:
    // 0x3c1260: 0x2d22021  addu        $a0, $s6, $s2
    ctx->pc = 0x3c1260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
label_3c1264:
    // 0x3c1264: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x3c1264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
label_3c1268:
    // 0x3c1268: 0xdec20000  ld          $v0, 0x0($s6)
    ctx->pc = 0x3c1268u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 0)));
label_3c126c:
    // 0x3c126c: 0xfec30000  sd          $v1, 0x0($s6)
    ctx->pc = 0x3c126cu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 3));
label_3c1270:
    // 0x3c1270: 0x10000023  b           . + 4 + (0x23 << 2)
label_3c1274:
    if (ctx->pc == 0x3C1274u) {
        ctx->pc = 0x3C1274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1270u;
        // 0x3c1274: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1278u;
        goto label_3c1278;
    }
    ctx->pc = 0x3C1270u;
    {
        const bool branch_taken_0x3c1270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1270u;
        // 0x3c1274: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1270) {
            ctx->pc = 0x3C1300u;
            goto label_3c1300;
        }
    }
    ctx->pc = 0x3C1278u;
label_3c1278:
    // 0x3c1278: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3c1278u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_3c127c:
    // 0x3c127c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_3c1280:
    if (ctx->pc == 0x3C1280u) {
        ctx->pc = 0x3C1280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C127Cu;
        // 0x3c1280: 0x1210c2  srl         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1284u;
        goto label_3c1284;
    }
    ctx->pc = 0x3C127Cu;
    {
        const bool branch_taken_0x3c127c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C127Cu;
        // 0x3c1280: 0x1210c2  srl         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c127c) {
            ctx->pc = 0x3C12C8u;
            goto label_3c12c8;
        }
    }
    ctx->pc = 0x3C1284u;
label_3c1284:
    // 0x3c1284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c1284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c1288:
    // 0x3c1288: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c1288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3c128c:
    // 0x3c128c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3c128cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3c1290:
    // 0x3c1290: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x3c1290u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
label_3c1294:
    // 0x3c1294: 0x2d21021  addu        $v0, $s6, $s2
    ctx->pc = 0x3c1294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
label_3c1298:
    // 0x3c1298: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x3c1298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_3c129c:
    // 0x3c129c: 0x0  nop
    ctx->pc = 0x3c129cu;
    // NOP
label_3c12a0:
    // 0x3c12a0: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x3c12a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_3c12a4:
    // 0x3c12a4: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x3c12a4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_3c12a8:
    // 0x3c12a8: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x3c12a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_3c12ac:
    // 0x3c12ac: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x3c12acu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
label_3c12b0:
    // 0x3c12b0: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x3c12b0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_3c12b4:
    // 0x3c12b4: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x3c12b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_3c12b8:
    // 0x3c12b8: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_3c12bc:
    if (ctx->pc == 0x3C12BCu) {
        ctx->pc = 0x3C12BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C12B8u;
        // 0x3c12bc: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C12C0u;
        goto label_3c12c0;
    }
    ctx->pc = 0x3C12B8u;
    {
        const bool branch_taken_0x3c12b8 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x3C12BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C12B8u;
        // 0x3c12bc: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c12b8) {
            ctx->pc = 0x3C12A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c12a0;
        }
    }
    ctx->pc = 0x3C12C0u;
label_3c12c0:
    // 0x3c12c0: 0x10000010  b           . + 4 + (0x10 << 2)
label_3c12c4:
    if (ctx->pc == 0x3C12C4u) {
        ctx->pc = 0x3C12C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C12C0u;
        // 0x3c12c4: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C12C8u;
        goto label_3c12c8;
    }
    ctx->pc = 0x3C12C0u;
    {
        const bool branch_taken_0x3c12c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C12C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C12C0u;
        // 0x3c12c4: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c12c0) {
            ctx->pc = 0x3C1304u;
            goto label_3c1304;
        }
    }
    ctx->pc = 0x3C12C8u;
label_3c12c8:
    // 0x3c12c8: 0x2d21821  addu        $v1, $s6, $s2
    ctx->pc = 0x3c12c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
label_3c12cc:
    // 0x3c12cc: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x3c12ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
label_3c12d0:
    // 0x3c12d0: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x3c12d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
label_3c12d4:
    // 0x3c12d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c12d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c12d8:
    // 0x3c12d8: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x3c12d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
label_3c12dc:
    // 0x3c12dc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3c12dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3c12e0:
    // 0x3c12e0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3c12e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3c12e4:
    // 0x3c12e4: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x3c12e4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_3c12e8:
    // 0x3c12e8: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x3c12e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3c12ec:
    // 0x3c12ec: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3c12ecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
label_3c12f0:
    // 0x3c12f0: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3c12f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_3c12f4:
    // 0x3c12f4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3c12f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3c12f8:
    // 0x3c12f8: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_3c12fc:
    if (ctx->pc == 0x3C12FCu) {
        ctx->pc = 0x3C12FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C12F8u;
        // 0x3c12fc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1300u;
        goto label_3c1300;
    }
    ctx->pc = 0x3C12F8u;
    {
        const bool branch_taken_0x3c12f8 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x3C12FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C12F8u;
        // 0x3c12fc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c12f8) {
            ctx->pc = 0x3C12E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c12e0;
        }
    }
    ctx->pc = 0x3C1300u;
label_3c1300:
    // 0x3c1300: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x3c1300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3c1304:
    // 0x3c1304: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x3c1304u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
label_3c1308:
    // 0x3c1308: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3c1308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3c130c:
    // 0x3c130c: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x3c130cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3c1310:
    // 0x3c1310: 0x8fb1002c  lw          $s1, 0x2C($sp)
    ctx->pc = 0x3c1310u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_3c1314:
    // 0x3c1314: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x3c1314u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_3c1318:
    // 0x3c1318: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x3c1318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
label_3c131c:
    // 0x3c131c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x3c131cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_3c1320:
    // 0x3c1320: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x3c1320u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c1324:
    // 0x3c1324: 0x56a021  addu        $s4, $v0, $s6
    ctx->pc = 0x3c1324u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_3c1328:
    // 0x3c1328: 0x1210c2  srl         $v0, $s2, 3
    ctx->pc = 0x3c1328u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 3));
label_3c132c:
    // 0x3c132c: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x3c132cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c1330:
    // 0x3c1330: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c1330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3c1334:
    // 0x3c1334: 0x10000030  b           . + 4 + (0x30 << 2)
label_3c1338:
    if (ctx->pc == 0x3C1338u) {
        ctx->pc = 0x3C1338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1334u;
        // 0x3c1338: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C133Cu;
        goto label_3c133c;
    }
    ctx->pc = 0x3C1334u;
    {
        const bool branch_taken_0x3c1334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1334u;
        // 0x3c1338: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1334) {
            ctx->pc = 0x3C13F8u;
            goto label_3c13f8;
        }
    }
    ctx->pc = 0x3C133Cu;
label_3c133c:
    // 0x3c133c: 0x0  nop
    ctx->pc = 0x3c133cu;
    // NOP
label_3c1340:
    // 0x3c1340: 0x14a0002c  bnez        $a1, . + 4 + (0x2C << 2)
label_3c1344:
    if (ctx->pc == 0x3C1344u) {
        ctx->pc = 0x3C1344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1340u;
        // 0x3c1344: 0x2324821  addu        $t1, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1348u;
        goto label_3c1348;
    }
    ctx->pc = 0x3C1340u;
    {
        const bool branch_taken_0x3c1340 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C1344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1340u;
        // 0x3c1344: 0x2324821  addu        $t1, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1340) {
            ctx->pc = 0x3C13F4u;
            goto label_3c13f4;
        }
    }
    ctx->pc = 0x3C1348u;
label_3c1348:
    // 0x3c1348: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c1348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c134c:
    // 0x3c134c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3c134cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3c1350:
    // 0x3c1350: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_3c1354:
    if (ctx->pc == 0x3C1354u) {
        ctx->pc = 0x3C1354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1350u;
        // 0x3c1354: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1358u;
        goto label_3c1358;
    }
    ctx->pc = 0x3C1350u;
    {
        const bool branch_taken_0x3c1350 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C1354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1350u;
        // 0x3c1354: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1350) {
            ctx->pc = 0x3C1370u;
            goto label_3c1370;
        }
    }
    ctx->pc = 0x3C1358u;
label_3c1358:
    // 0x3c1358: 0xde230000  ld          $v1, 0x0($s1)
    ctx->pc = 0x3c1358u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_3c135c:
    // 0x3c135c: 0x2723821  addu        $a3, $s3, $s2
    ctx->pc = 0x3c135cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_3c1360:
    // 0x3c1360: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x3c1360u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
label_3c1364:
    // 0x3c1364: 0xfe630000  sd          $v1, 0x0($s3)
    ctx->pc = 0x3c1364u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
label_3c1368:
    // 0x3c1368: 0x10000021  b           . + 4 + (0x21 << 2)
label_3c136c:
    if (ctx->pc == 0x3C136Cu) {
        ctx->pc = 0x3C136Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1368u;
        // 0x3c136c: 0xfe220000  sd          $v0, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1370u;
        goto label_3c1370;
    }
    ctx->pc = 0x3C1368u;
    {
        const bool branch_taken_0x3c1368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C136Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1368u;
        // 0x3c136c: 0xfe220000  sd          $v0, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1368) {
            ctx->pc = 0x3C13F0u;
            goto label_3c13f0;
        }
    }
    ctx->pc = 0x3C1370u;
label_3c1370:
    // 0x3c1370: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x3c1370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3c1374:
    // 0x3c1374: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_3c1378:
    if (ctx->pc == 0x3C1378u) {
        ctx->pc = 0x3C1378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1374u;
        // 0x3c1378: 0xdfa20018  ld          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C137Cu;
        goto label_3c137c;
    }
    ctx->pc = 0x3C1374u;
    {
        const bool branch_taken_0x3c1374 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1374u;
        // 0x3c1378: 0xdfa20018  ld          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1374) {
            ctx->pc = 0x3C13B8u;
            goto label_3c13b8;
        }
    }
    ctx->pc = 0x3C137Cu;
label_3c137c:
    // 0x3c137c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3c137cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c1380:
    // 0x3c1380: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c1380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c1384:
    // 0x3c1384: 0xb23821  addu        $a3, $a1, $s2
    ctx->pc = 0x3c1384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_3c1388:
    // 0x3c1388: 0x2303e  dsrl32      $a2, $v0, 0
    ctx->pc = 0x3c1388u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 0));
label_3c138c:
    // 0x3c138c: 0x0  nop
    ctx->pc = 0x3c138cu;
    // NOP
label_3c1390:
    // 0x3c1390: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x3c1390u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_3c1394:
    // 0x3c1394: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x3c1394u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
label_3c1398:
    // 0x3c1398: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x3c1398u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_3c139c:
    // 0x3c139c: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x3c139cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
label_3c13a0:
    // 0x3c13a0: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x3c13a0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_3c13a4:
    // 0x3c13a4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x3c13a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_3c13a8:
    // 0x3c13a8: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
label_3c13ac:
    if (ctx->pc == 0x3C13ACu) {
        ctx->pc = 0x3C13ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C13A8u;
        // 0x3c13ac: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C13B0u;
        goto label_3c13b0;
    }
    ctx->pc = 0x3C13A8u;
    {
        const bool branch_taken_0x3c13a8 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x3C13ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C13A8u;
        // 0x3c13ac: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c13a8) {
            ctx->pc = 0x3C1390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c1390;
        }
    }
    ctx->pc = 0x3C13B0u;
label_3c13b0:
    // 0x3c13b0: 0x10000010  b           . + 4 + (0x10 << 2)
label_3c13b4:
    if (ctx->pc == 0x3C13B4u) {
        ctx->pc = 0x3C13B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C13B0u;
        // 0x3c13b4: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C13B8u;
        goto label_3c13b8;
    }
    ctx->pc = 0x3C13B0u;
    {
        const bool branch_taken_0x3c13b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C13B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C13B0u;
        // 0x3c13b4: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c13b0) {
            ctx->pc = 0x3C13F4u;
            goto label_3c13f4;
        }
    }
    ctx->pc = 0x3C13B8u;
label_3c13b8:
    // 0x3c13b8: 0xdfa30020  ld          $v1, 0x20($sp)
    ctx->pc = 0x3c13b8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3c13bc:
    // 0x3c13bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3c13bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c13c0:
    // 0x3c13c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c13c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c13c4:
    // 0x3c13c4: 0xb23821  addu        $a3, $a1, $s2
    ctx->pc = 0x3c13c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_3c13c8:
    // 0x3c13c8: 0x3303e  dsrl32      $a2, $v1, 0
    ctx->pc = 0x3c13c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) >> (32 + 0));
label_3c13cc:
    // 0x3c13cc: 0x0  nop
    ctx->pc = 0x3c13ccu;
    // NOP
label_3c13d0:
    // 0x3c13d0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3c13d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3c13d4:
    // 0x3c13d4: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x3c13d4u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
label_3c13d8:
    // 0x3c13d8: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x3c13d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3c13dc:
    // 0x3c13dc: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3c13dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_3c13e0:
    // 0x3c13e0: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3c13e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_3c13e4:
    // 0x3c13e4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3c13e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3c13e8:
    // 0x3c13e8: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
label_3c13ec:
    if (ctx->pc == 0x3C13ECu) {
        ctx->pc = 0x3C13ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C13E8u;
        // 0x3c13ec: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C13F0u;
        goto label_3c13f0;
    }
    ctx->pc = 0x3C13E8u;
    {
        const bool branch_taken_0x3c13e8 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x3C13ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C13E8u;
        // 0x3c13ec: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c13e8) {
            ctx->pc = 0x3C13D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c13d0;
        }
    }
    ctx->pc = 0x3C13F0u;
label_3c13f0:
    // 0x3c13f0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3c13f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3c13f4:
    // 0x3c13f4: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x3c13f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3c13f8:
    // 0x3c13f8: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x3c13f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3c13fc:
    // 0x3c13fc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_3c1400:
    if (ctx->pc == 0x3C1400u) {
        ctx->pc = 0x3C1400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C13FCu;
        // 0x3c1400: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1404u;
        goto label_3c1404;
    }
    ctx->pc = 0x3C13FCu;
    {
        const bool branch_taken_0x3c13fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C1400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C13FCu;
        // 0x3c1400: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c13fc) {
            ctx->pc = 0x3C141Cu;
            goto label_3c141c;
        }
    }
    ctx->pc = 0x3C1404u;
label_3c1404:
    // 0x3c1404: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3c1404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3c1408:
    // 0x3c1408: 0x2e0f809  jalr        $s7
label_3c140c:
    if (ctx->pc == 0x3C140Cu) {
        ctx->pc = 0x3C140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1408u;
        // 0x3c140c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1410u;
        goto label_3c1410;
    }
    ctx->pc = 0x3C1408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x3C1410u);
        ctx->pc = 0x3C140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1408u;
        // 0x3c140c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1408u, 0x3C1410u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C1410u;
label_3c1410:
    // 0x3c1410: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c1410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c1414:
    // 0x3c1414: 0x18a0ffca  blez        $a1, . + 4 + (-0x36 << 2)
label_3c1418:
    if (ctx->pc == 0x3C1418u) {
        ctx->pc = 0x3C1418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1414u;
        // 0x3c1418: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C141Cu;
        goto label_3c141c;
    }
    ctx->pc = 0x3C1414u;
    {
        const bool branch_taken_0x3c1414 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x3C1418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1414u;
        // 0x3c1418: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1414) {
            ctx->pc = 0x3C1340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c1340;
        }
    }
    ctx->pc = 0x3C141Cu;
label_3c141c:
    // 0x3c141c: 0x1210c2  srl         $v0, $s2, 3
    ctx->pc = 0x3c141cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 3));
label_3c1420:
    // 0x3c1420: 0x2f03c  dsll32      $fp, $v0, 0
    ctx->pc = 0x3c1420u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) << (32 + 0));
label_3c1424:
    // 0x3c1424: 0x12a83c  dsll32      $s5, $s2, 0
    ctx->pc = 0x3c1424u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 18) << (32 + 0));
label_3c1428:
    // 0x3c1428: 0x1000002b  b           . + 4 + (0x2B << 2)
label_3c142c:
    if (ctx->pc == 0x3C142Cu) {
        ctx->pc = 0x3C142Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1428u;
        // 0x3c142c: 0x28890002  slti        $t1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1430u;
        goto label_3c1430;
    }
    ctx->pc = 0x3C1428u;
    {
        const bool branch_taken_0x3c1428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C142Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1428u;
        // 0x3c142c: 0x28890002  slti        $t1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1428) {
            ctx->pc = 0x3C14D8u;
            goto label_3c14d8;
        }
    }
    ctx->pc = 0x3C1430u;
label_3c1430:
    // 0x3c1430: 0x14a00028  bnez        $a1, . + 4 + (0x28 << 2)
label_3c1434:
    if (ctx->pc == 0x3C1434u) {
        ctx->pc = 0x3C1434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1430u;
        // 0x3c1434: 0x2124023  subu        $t0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1438u;
        goto label_3c1438;
    }
    ctx->pc = 0x3C1430u;
    {
        const bool branch_taken_0x3c1430 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C1434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1430u;
        // 0x3c1434: 0x2124023  subu        $t0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1430) {
            ctx->pc = 0x3C14D4u;
            goto label_3c14d4;
        }
    }
    ctx->pc = 0x3C1438u;
label_3c1438:
    // 0x3c1438: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c1438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c143c:
    // 0x3c143c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3c143cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3c1440:
    // 0x3c1440: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_3c1444:
    if (ctx->pc == 0x3C1444u) {
        ctx->pc = 0x3C1444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1440u;
        // 0x3c1444: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1448u;
        goto label_3c1448;
    }
    ctx->pc = 0x3C1440u;
    {
        const bool branch_taken_0x3c1440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C1444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1440u;
        // 0x3c1444: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1440) {
            ctx->pc = 0x3C1460u;
            goto label_3c1460;
        }
    }
    ctx->pc = 0x3C1448u;
label_3c1448:
    // 0x3c1448: 0xde830000  ld          $v1, 0x0($s4)
    ctx->pc = 0x3c1448u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 0)));
label_3c144c:
    // 0x3c144c: 0x2923823  subu        $a3, $s4, $s2
    ctx->pc = 0x3c144cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_3c1450:
    // 0x3c1450: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x3c1450u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_3c1454:
    // 0x3c1454: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x3c1454u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
label_3c1458:
    // 0x3c1458: 0x1000001d  b           . + 4 + (0x1D << 2)
label_3c145c:
    if (ctx->pc == 0x3C145Cu) {
        ctx->pc = 0x3C145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1458u;
        // 0x3c145c: 0xfe820000  sd          $v0, 0x0($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1460u;
        goto label_3c1460;
    }
    ctx->pc = 0x3C1458u;
    {
        const bool branch_taken_0x3c1458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1458u;
        // 0x3c145c: 0xfe820000  sd          $v0, 0x0($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1458) {
            ctx->pc = 0x3C14D0u;
            goto label_3c14d0;
        }
    }
    ctx->pc = 0x3C1460u;
label_3c1460:
    // 0x3c1460: 0x1120000f  beqz        $t1, . + 4 + (0xF << 2)
label_3c1464:
    if (ctx->pc == 0x3C1464u) {
        ctx->pc = 0x3C1464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1460u;
        // 0x3c1464: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1468u;
        goto label_3c1468;
    }
    ctx->pc = 0x3C1460u;
    {
        const bool branch_taken_0x3c1460 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1460u;
        // 0x3c1464: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1460) {
            ctx->pc = 0x3C14A0u;
            goto label_3c14a0;
        }
    }
    ctx->pc = 0x3C1468u;
label_3c1468:
    // 0x3c1468: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3c1468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c146c:
    // 0x3c146c: 0x1e303e  dsrl32      $a2, $fp, 0
    ctx->pc = 0x3c146cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 30) >> (32 + 0));
label_3c1470:
    // 0x3c1470: 0xb23823  subu        $a3, $a1, $s2
    ctx->pc = 0x3c1470u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_3c1474:
    // 0x3c1474: 0x0  nop
    ctx->pc = 0x3c1474u;
    // NOP
label_3c1478:
    // 0x3c1478: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x3c1478u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_3c147c:
    // 0x3c147c: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x3c147cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
label_3c1480:
    // 0x3c1480: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x3c1480u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_3c1484:
    // 0x3c1484: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x3c1484u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_3c1488:
    // 0x3c1488: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x3c1488u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
label_3c148c:
    // 0x3c148c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3c148cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_3c1490:
    // 0x3c1490: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
label_3c1494:
    if (ctx->pc == 0x3C1494u) {
        ctx->pc = 0x3C1494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1490u;
        // 0x3c1494: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1498u;
        goto label_3c1498;
    }
    ctx->pc = 0x3C1490u;
    {
        const bool branch_taken_0x3c1490 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x3C1494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1490u;
        // 0x3c1494: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1490) {
            ctx->pc = 0x3C1478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c1478;
        }
    }
    ctx->pc = 0x3C1498u;
label_3c1498:
    // 0x3c1498: 0x1000000e  b           . + 4 + (0xE << 2)
label_3c149c:
    if (ctx->pc == 0x3C149Cu) {
        ctx->pc = 0x3C149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1498u;
        // 0x3c149c: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C14A0u;
        goto label_3c14a0;
    }
    ctx->pc = 0x3C1498u;
    {
        const bool branch_taken_0x3c1498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1498u;
        // 0x3c149c: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1498) {
            ctx->pc = 0x3C14D4u;
            goto label_3c14d4;
        }
    }
    ctx->pc = 0x3C14A0u;
label_3c14a0:
    // 0x3c14a0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3c14a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c14a4:
    // 0x3c14a4: 0x15303e  dsrl32      $a2, $s5, 0
    ctx->pc = 0x3c14a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) >> (32 + 0));
label_3c14a8:
    // 0x3c14a8: 0xb23823  subu        $a3, $a1, $s2
    ctx->pc = 0x3c14a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_3c14ac:
    // 0x3c14ac: 0x0  nop
    ctx->pc = 0x3c14acu;
    // NOP
label_3c14b0:
    // 0x3c14b0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3c14b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3c14b4:
    // 0x3c14b4: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x3c14b4u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
label_3c14b8:
    // 0x3c14b8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x3c14b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3c14bc:
    // 0x3c14bc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3c14bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_3c14c0:
    // 0x3c14c0: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3c14c0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_3c14c4:
    // 0x3c14c4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3c14c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3c14c8:
    // 0x3c14c8: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
label_3c14cc:
    if (ctx->pc == 0x3C14CCu) {
        ctx->pc = 0x3C14CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C14C8u;
        // 0x3c14cc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C14D0u;
        goto label_3c14d0;
    }
    ctx->pc = 0x3C14C8u;
    {
        const bool branch_taken_0x3c14c8 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x3C14CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C14C8u;
        // 0x3c14cc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c14c8) {
            ctx->pc = 0x3C14B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c14b0;
        }
    }
    ctx->pc = 0x3C14D0u;
label_3c14d0:
    // 0x3c14d0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x3c14d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3c14d4:
    // 0x3c14d4: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x3c14d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3c14d8:
    // 0x3c14d8: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x3c14d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3c14dc:
    // 0x3c14dc: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
label_3c14e0:
    if (ctx->pc == 0x3C14E0u) {
        ctx->pc = 0x3C14E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C14DCu;
        // 0x3c14e0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C14E4u;
        goto label_3c14e4;
    }
    ctx->pc = 0x3C14DCu;
    {
        const bool branch_taken_0x3c14dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C14E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C14DCu;
        // 0x3c14e0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c14dc) {
            ctx->pc = 0x3C15B4u;
            goto label_3c15b4;
        }
    }
    ctx->pc = 0x3C14E4u;
label_3c14e4:
    // 0x3c14e4: 0x7fa90040  sq          $t1, 0x40($sp)
    ctx->pc = 0x3c14e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 9));
label_3c14e8:
    // 0x3c14e8: 0x2e0f809  jalr        $s7
label_3c14ec:
    if (ctx->pc == 0x3C14ECu) {
        ctx->pc = 0x3C14ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C14E8u;
        // 0x3c14ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C14F0u;
        goto label_3c14f0;
    }
    ctx->pc = 0x3C14E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x3C14F0u);
        ctx->pc = 0x3C14ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C14E8u;
        // 0x3c14ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C14E8u, 0x3C14F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C14F0u;
label_3c14f0:
    // 0x3c14f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c14f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c14f4:
    // 0x3c14f4: 0x4a1ffce  bgez        $a1, . + 4 + (-0x32 << 2)
label_3c14f8:
    if (ctx->pc == 0x3C14F8u) {
        ctx->pc = 0x3C14F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C14F4u;
        // 0x3c14f8: 0x7ba90040  lq          $t1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C14FCu;
        goto label_3c14fc;
    }
    ctx->pc = 0x3C14F4u;
    {
        const bool branch_taken_0x3c14f4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x3C14F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C14F4u;
        // 0x3c14f8: 0x7ba90040  lq          $t1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c14f4) {
            ctx->pc = 0x3C1430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c1430;
        }
    }
    ctx->pc = 0x3C14FCu;
label_3c14fc:
    // 0x3c14fc: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x3c14fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3c1500:
    // 0x3c1500: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_3c1504:
    if (ctx->pc == 0x3C1504u) {
        ctx->pc = 0x3C1504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1500u;
        // 0x3c1504: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1508u;
        goto label_3c1508;
    }
    ctx->pc = 0x3C1500u;
    {
        const bool branch_taken_0x3c1500 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C1504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1500u;
        // 0x3c1504: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1500) {
            ctx->pc = 0x3C1524u;
            goto label_3c1524;
        }
    }
    ctx->pc = 0x3C1508u;
label_3c1508:
    // 0x3c1508: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x3c1508u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_3c150c:
    // 0x3c150c: 0x2324821  addu        $t1, $s1, $s2
    ctx->pc = 0x3c150cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_3c1510:
    // 0x3c1510: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x3c1510u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_3c1514:
    // 0x3c1514: 0x2124023  subu        $t0, $s0, $s2
    ctx->pc = 0x3c1514u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_3c1518:
    // 0x3c1518: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x3c1518u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
label_3c151c:
    // 0x3c151c: 0x10000020  b           . + 4 + (0x20 << 2)
label_3c1520:
    if (ctx->pc == 0x3C1520u) {
        ctx->pc = 0x3C1520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C151Cu;
        // 0x3c1520: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1524u;
        goto label_3c1524;
    }
    ctx->pc = 0x3C151Cu;
    {
        const bool branch_taken_0x3c151c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C151Cu;
        // 0x3c1520: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c151c) {
            ctx->pc = 0x3C15A0u;
            goto label_3c15a0;
        }
    }
    ctx->pc = 0x3C1524u;
label_3c1524:
    // 0x3c1524: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_3c1528:
    if (ctx->pc == 0x3C1528u) {
        ctx->pc = 0x3C1528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1524u;
        // 0x3c1528: 0xdfa30018  ld          $v1, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C152Cu;
        goto label_3c152c;
    }
    ctx->pc = 0x3C1524u;
    {
        const bool branch_taken_0x3c1524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1524u;
        // 0x3c1528: 0xdfa30018  ld          $v1, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1524) {
            ctx->pc = 0x3C1568u;
            goto label_3c1568;
        }
    }
    ctx->pc = 0x3C152Cu;
label_3c152c:
    // 0x3c152c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c152cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c1530:
    // 0x3c1530: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c1530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c1534:
    // 0x3c1534: 0xb24821  addu        $t1, $a1, $s2
    ctx->pc = 0x3c1534u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_3c1538:
    // 0x3c1538: 0x3303e  dsrl32      $a2, $v1, 0
    ctx->pc = 0x3c1538u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) >> (32 + 0));
label_3c153c:
    // 0x3c153c: 0x924023  subu        $t0, $a0, $s2
    ctx->pc = 0x3c153cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_3c1540:
    // 0x3c1540: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x3c1540u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_3c1544:
    // 0x3c1544: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x3c1544u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
label_3c1548:
    // 0x3c1548: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x3c1548u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_3c154c:
    // 0x3c154c: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x3c154cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
label_3c1550:
    // 0x3c1550: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x3c1550u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_3c1554:
    // 0x3c1554: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x3c1554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_3c1558:
    // 0x3c1558: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
label_3c155c:
    if (ctx->pc == 0x3C155Cu) {
        ctx->pc = 0x3C155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1558u;
        // 0x3c155c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1560u;
        goto label_3c1560;
    }
    ctx->pc = 0x3C1558u;
    {
        const bool branch_taken_0x3c1558 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x3C155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1558u;
        // 0x3c155c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1558) {
            ctx->pc = 0x3C1540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c1540;
        }
    }
    ctx->pc = 0x3C1560u;
label_3c1560:
    // 0x3c1560: 0x10000010  b           . + 4 + (0x10 << 2)
label_3c1564:
    if (ctx->pc == 0x3C1564u) {
        ctx->pc = 0x3C1564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1560u;
        // 0x3c1564: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1568u;
        goto label_3c1568;
    }
    ctx->pc = 0x3C1560u;
    {
        const bool branch_taken_0x3c1560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1560u;
        // 0x3c1564: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1560) {
            ctx->pc = 0x3C15A4u;
            goto label_3c15a4;
        }
    }
    ctx->pc = 0x3C1568u;
label_3c1568:
    // 0x3c1568: 0xdfa20020  ld          $v0, 0x20($sp)
    ctx->pc = 0x3c1568u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3c156c:
    // 0x3c156c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c156cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c1570:
    // 0x3c1570: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c1570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c1574:
    // 0x3c1574: 0xb24821  addu        $t1, $a1, $s2
    ctx->pc = 0x3c1574u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_3c1578:
    // 0x3c1578: 0x2303e  dsrl32      $a2, $v0, 0
    ctx->pc = 0x3c1578u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 0));
label_3c157c:
    // 0x3c157c: 0x924023  subu        $t0, $a0, $s2
    ctx->pc = 0x3c157cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_3c1580:
    // 0x3c1580: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3c1580u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3c1584:
    // 0x3c1584: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x3c1584u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
label_3c1588:
    // 0x3c1588: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x3c1588u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3c158c:
    // 0x3c158c: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3c158cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_3c1590:
    // 0x3c1590: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3c1590u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_3c1594:
    // 0x3c1594: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3c1594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3c1598:
    // 0x3c1598: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
label_3c159c:
    if (ctx->pc == 0x3C159Cu) {
        ctx->pc = 0x3C159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1598u;
        // 0x3c159c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C15A0u;
        goto label_3c15a0;
    }
    ctx->pc = 0x3C1598u;
    {
        const bool branch_taken_0x3c1598 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x3C159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1598u;
        // 0x3c159c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1598) {
            ctx->pc = 0x3C1580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c1580;
        }
    }
    ctx->pc = 0x3C15A0u;
label_3c15a0:
    // 0x3c15a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c15a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c15a4:
    // 0x3c15a4: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x3c15a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3c15a8:
    // 0x3c15a8: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x3c15a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3c15ac:
    // 0x3c15ac: 0x1000ff92  b           . + 4 + (-0x6E << 2)
label_3c15b0:
    if (ctx->pc == 0x3C15B0u) {
        ctx->pc = 0x3C15B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C15ACu;
        // 0x3c15b0: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C15B4u;
        goto label_3c15b4;
    }
    ctx->pc = 0x3C15ACu;
    {
        const bool branch_taken_0x3c15ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C15B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C15ACu;
        // 0x3c15b0: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c15ac) {
            ctx->pc = 0x3C13F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c13f8;
        }
    }
    ctx->pc = 0x3C15B4u;
label_3c15b4:
    // 0x3c15b4: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x3c15b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_3c15b8:
    // 0x3c15b8: 0x14800041  bnez        $a0, . + 4 + (0x41 << 2)
label_3c15bc:
    if (ctx->pc == 0x3C15BCu) {
        ctx->pc = 0x3C15BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C15B8u;
        // 0x3c15bc: 0x2332823  subu        $a1, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C15C0u;
        goto label_3c15c0;
    }
    ctx->pc = 0x3C15B8u;
    {
        const bool branch_taken_0x3c15b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C15BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C15B8u;
        // 0x3c15bc: 0x2332823  subu        $a1, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c15b8) {
            ctx->pc = 0x3C16C0u;
            goto label_3c16c0;
        }
    }
    ctx->pc = 0x3C15C0u;
label_3c15c0:
    // 0x3c15c0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3c15c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3c15c4:
    // 0x3c15c4: 0x8fb0002c  lw          $s0, 0x2C($sp)
    ctx->pc = 0x3c15c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_3c15c8:
    // 0x3c15c8: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x3c15c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3c15cc:
    // 0x3c15cc: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x3c15ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_3c15d0:
    // 0x3c15d0: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x3c15d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3c15d4:
    // 0x3c15d4: 0x1040009d  beqz        $v0, . + 4 + (0x9D << 2)
label_3c15d8:
    if (ctx->pc == 0x3C15D8u) {
        ctx->pc = 0x3C15D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C15D4u;
        // 0x3c15d8: 0x1210c2  srl         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C15DCu;
        goto label_3c15dc;
    }
    ctx->pc = 0x3C15D4u;
    {
        const bool branch_taken_0x3c15d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C15D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C15D4u;
        // 0x3c15d8: 0x1210c2  srl         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c15d4) {
            ctx->pc = 0x3C184Cu;
            goto label_3c184c;
        }
    }
    ctx->pc = 0x3C15DCu;
label_3c15dc:
    // 0x3c15dc: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x3c15dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
label_3c15e0:
    // 0x3c15e0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3c15e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3c15e4:
    // 0x3c15e4: 0x2f03c  dsll32      $fp, $v0, 0
    ctx->pc = 0x3c15e4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) << (32 + 0));
label_3c15e8:
    // 0x3c15e8: 0x12a03c  dsll32      $s4, $s2, 0
    ctx->pc = 0x3c15e8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 18) << (32 + 0));
label_3c15ec:
    // 0x3c15ec: 0x28750002  slti        $s5, $v1, 0x2
    ctx->pc = 0x3c15ecu;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_3c15f0:
    // 0x3c15f0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x3c15f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c15f4:
    // 0x3c15f4: 0x0  nop
    ctx->pc = 0x3c15f4u;
    // NOP
label_3c15f8:
    // 0x3c15f8: 0x10000022  b           . + 4 + (0x22 << 2)
label_3c15fc:
    if (ctx->pc == 0x3C15FCu) {
        ctx->pc = 0x3C15FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C15F8u;
        // 0x3c15fc: 0x2129821  addu        $s3, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1600u;
        goto label_3c1600;
    }
    ctx->pc = 0x3C15F8u;
    {
        const bool branch_taken_0x3c15f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C15FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C15F8u;
        // 0x3c15fc: 0x2129821  addu        $s3, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c15f8) {
            ctx->pc = 0x3C1684u;
            goto label_3c1684;
        }
    }
    ctx->pc = 0x3C1600u;
label_3c1600:
    // 0x3c1600: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_3c1604:
    if (ctx->pc == 0x3C1604u) {
        ctx->pc = 0x3C1608u;
        goto label_3c1608;
    }
    ctx->pc = 0x3C1600u;
    {
        const bool branch_taken_0x3c1600 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c1600) {
            ctx->pc = 0x3C161Cu;
            goto label_3c161c;
        }
    }
    ctx->pc = 0x3C1608u;
label_3c1608:
    // 0x3c1608: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x3c1608u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_3c160c:
    // 0x3c160c: 0xde230000  ld          $v1, 0x0($s1)
    ctx->pc = 0x3c160cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_3c1610:
    // 0x3c1610: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x3c1610u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_3c1614:
    // 0x3c1614: 0x1000001a  b           . + 4 + (0x1A << 2)
label_3c1618:
    if (ctx->pc == 0x3C1618u) {
        ctx->pc = 0x3C1618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1614u;
        // 0x3c1618: 0xfe030000  sd          $v1, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C161Cu;
        goto label_3c161c;
    }
    ctx->pc = 0x3C1614u;
    {
        const bool branch_taken_0x3c1614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1614u;
        // 0x3c1618: 0xfe030000  sd          $v1, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1614) {
            ctx->pc = 0x3C1680u;
            goto label_3c1680;
        }
    }
    ctx->pc = 0x3C161Cu;
label_3c161c:
    // 0x3c161c: 0x12a0000e  beqz        $s5, . + 4 + (0xE << 2)
label_3c1620:
    if (ctx->pc == 0x3C1620u) {
        ctx->pc = 0x3C1620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C161Cu;
        // 0x3c1620: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1624u;
        goto label_3c1624;
    }
    ctx->pc = 0x3C161Cu;
    {
        const bool branch_taken_0x3c161c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C161Cu;
        // 0x3c1620: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c161c) {
            ctx->pc = 0x3C1658u;
            goto label_3c1658;
        }
    }
    ctx->pc = 0x3C1624u;
label_3c1624:
    // 0x3c1624: 0x1e283e  dsrl32      $a1, $fp, 0
    ctx->pc = 0x3c1624u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30) >> (32 + 0));
label_3c1628:
    // 0x3c1628: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3c1628u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c162c:
    // 0x3c162c: 0x0  nop
    ctx->pc = 0x3c162cu;
    // NOP
label_3c1630:
    // 0x3c1630: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x3c1630u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_3c1634:
    // 0x3c1634: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x3c1634u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_3c1638:
    // 0x3c1638: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x3c1638u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_3c163c:
    // 0x3c163c: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x3c163cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_3c1640:
    // 0x3c1640: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x3c1640u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_3c1644:
    // 0x3c1644: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3c1644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_3c1648:
    // 0x3c1648: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_3c164c:
    if (ctx->pc == 0x3C164Cu) {
        ctx->pc = 0x3C164Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1648u;
        // 0x3c164c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1650u;
        goto label_3c1650;
    }
    ctx->pc = 0x3C1648u;
    {
        const bool branch_taken_0x3c1648 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x3C164Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1648u;
        // 0x3c164c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1648) {
            ctx->pc = 0x3C1630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c1630;
        }
    }
    ctx->pc = 0x3C1650u;
label_3c1650:
    // 0x3c1650: 0x1000000c  b           . + 4 + (0xC << 2)
label_3c1654:
    if (ctx->pc == 0x3C1654u) {
        ctx->pc = 0x3C1654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1650u;
        // 0x3c1654: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1658u;
        goto label_3c1658;
    }
    ctx->pc = 0x3C1650u;
    {
        const bool branch_taken_0x3c1650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1650u;
        // 0x3c1654: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1650) {
            ctx->pc = 0x3C1684u;
            goto label_3c1684;
        }
    }
    ctx->pc = 0x3C1658u;
label_3c1658:
    // 0x3c1658: 0x14283e  dsrl32      $a1, $s4, 0
    ctx->pc = 0x3c1658u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) >> (32 + 0));
label_3c165c:
    // 0x3c165c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3c165cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c1660:
    // 0x3c1660: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x3c1660u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3c1664:
    // 0x3c1664: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x3c1664u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_3c1668:
    // 0x3c1668: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x3c1668u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3c166c:
    // 0x3c166c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3c166cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_3c1670:
    // 0x3c1670: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3c1670u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_3c1674:
    // 0x3c1674: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3c1674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3c1678:
    // 0x3c1678: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_3c167c:
    if (ctx->pc == 0x3C167Cu) {
        ctx->pc = 0x3C167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1678u;
        // 0x3c167c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1680u;
        goto label_3c1680;
    }
    ctx->pc = 0x3C1678u;
    {
        const bool branch_taken_0x3c1678 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x3C167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1678u;
        // 0x3c167c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1678) {
            ctx->pc = 0x3C1660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c1660;
        }
    }
    ctx->pc = 0x3C1680u;
label_3c1680:
    // 0x3c1680: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x3c1680u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c1684:
    // 0x3c1684: 0x2d1102b  sltu        $v0, $s6, $s1
    ctx->pc = 0x3c1684u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3c1688:
    // 0x3c1688: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3c168c:
    if (ctx->pc == 0x3C168Cu) {
        ctx->pc = 0x3C168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1688u;
        // 0x3c168c: 0x2328023  subu        $s0, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1690u;
        goto label_3c1690;
    }
    ctx->pc = 0x3C1688u;
    {
        const bool branch_taken_0x3c1688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1688u;
        // 0x3c168c: 0x2328023  subu        $s0, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1688) {
            ctx->pc = 0x3C16A4u;
            goto label_3c16a4;
        }
    }
    ctx->pc = 0x3C1690u;
label_3c1690:
    // 0x3c1690: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c1690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c1694:
    // 0x3c1694: 0x2e0f809  jalr        $s7
label_3c1698:
    if (ctx->pc == 0x3C1698u) {
        ctx->pc = 0x3C1698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1694u;
        // 0x3c1698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C169Cu;
        goto label_3c169c;
    }
    ctx->pc = 0x3C1694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x3C169Cu);
        ctx->pc = 0x3C1698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1694u;
        // 0x3c1698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1694u, 0x3C169Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C169Cu;
label_3c169c:
    // 0x3c169c: 0x5c40ffd8  bgtzl       $v0, . + 4 + (-0x28 << 2)
label_3c16a0:
    if (ctx->pc == 0x3C16A0u) {
        ctx->pc = 0x3C16A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C169Cu;
        // 0x3c16a0: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C16A4u;
        goto label_3c16a4;
    }
    ctx->pc = 0x3C169Cu;
    {
        const bool branch_taken_0x3c169c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x3c169c) {
            ctx->pc = 0x3C16A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C169Cu;
            // 0x3c16a0: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c1600;
        }
    }
    ctx->pc = 0x3C16A4u;
label_3c16a4:
    // 0x3c16a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3c16a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3c16a8:
    // 0x3c16a8: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x3c16a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c16ac:
    // 0x3c16ac: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x3c16acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3c16b0:
    // 0x3c16b0: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
label_3c16b4:
    if (ctx->pc == 0x3C16B4u) {
        ctx->pc = 0x3C16B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C16B0u;
        // 0x3c16b4: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C16B8u;
        goto label_3c16b8;
    }
    ctx->pc = 0x3C16B0u;
    {
        const bool branch_taken_0x3c16b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C16B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C16B0u;
        // 0x3c16b4: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c16b0) {
            ctx->pc = 0x3C15F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c15f8;
        }
    }
    ctx->pc = 0x3C16B8u;
label_3c16b8:
    // 0x3c16b8: 0x10000065  b           . + 4 + (0x65 << 2)
label_3c16bc:
    if (ctx->pc == 0x3C16BCu) {
        ctx->pc = 0x3C16BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C16B8u;
        // 0x3c16bc: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C16C0u;
        goto label_3c16c0;
    }
    ctx->pc = 0x3C16B8u;
    {
        const bool branch_taken_0x3c16b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C16BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C16B8u;
        // 0x3c16bc: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c16b8) {
            ctx->pc = 0x3C1850u;
            goto label_3c1850;
        }
    }
    ctx->pc = 0x3C16C0u;
label_3c16c0:
    // 0x3c16c0: 0x2761823  subu        $v1, $s3, $s6
    ctx->pc = 0x3c16c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
label_3c16c4:
    // 0x3c16c4: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x3c16c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_3c16c8:
    // 0x3c16c8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3c16c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c16cc:
    // 0x3c16cc: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x3c16ccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_3c16d0:
    // 0x3c16d0: 0x2908023  subu        $s0, $s4, $s0
    ctx->pc = 0x3c16d0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_3c16d4:
    // 0x3c16d4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3c16d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3c16d8:
    // 0x3c16d8: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x3c16d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3c16dc:
    // 0x3c16dc: 0x18a00020  blez        $a1, . + 4 + (0x20 << 2)
label_3c16e0:
    if (ctx->pc == 0x3C16E0u) {
        ctx->pc = 0x3C16E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C16DCu;
        // 0x3c16e0: 0x56a821  addu        $s5, $v0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C16E4u;
        goto label_3c16e4;
    }
    ctx->pc = 0x3C16DCu;
    {
        const bool branch_taken_0x3c16dc = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x3C16E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C16DCu;
        // 0x3c16e0: 0x56a821  addu        $s5, $v0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c16dc) {
            ctx->pc = 0x3C1760u;
            goto label_3c1760;
        }
    }
    ctx->pc = 0x3C16E4u;
label_3c16e4:
    // 0x3c16e4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x3c16e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3c16e8:
    // 0x3c16e8: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x3c16e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_3c16ec:
    // 0x3c16ec: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_3c16f0:
    if (ctx->pc == 0x3C16F0u) {
        ctx->pc = 0x3C16F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C16ECu;
        // 0x3c16f0: 0x2251823  subu        $v1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C16F4u;
        goto label_3c16f4;
    }
    ctx->pc = 0x3C16ECu;
    {
        const bool branch_taken_0x3c16ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C16F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C16ECu;
        // 0x3c16f0: 0x2251823  subu        $v1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c16ec) {
            ctx->pc = 0x3C1730u;
            goto label_3c1730;
        }
    }
    ctx->pc = 0x3C16F4u;
label_3c16f4:
    // 0x3c16f4: 0x510c2  srl         $v0, $a1, 3
    ctx->pc = 0x3c16f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
label_3c16f8:
    // 0x3c16f8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3c16f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3c16fc:
    // 0x3c16fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c16fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3c1700:
    // 0x3c1700: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3c1700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3c1704:
    // 0x3c1704: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x3c1704u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
label_3c1708:
    // 0x3c1708: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x3c1708u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_3c170c:
    // 0x3c170c: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x3c170cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_3c1710:
    // 0x3c1710: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x3c1710u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_3c1714:
    // 0x3c1714: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x3c1714u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_3c1718:
    // 0x3c1718: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x3c1718u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_3c171c:
    // 0x3c171c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3c171cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_3c1720:
    // 0x3c1720: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_3c1724:
    if (ctx->pc == 0x3C1724u) {
        ctx->pc = 0x3C1724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1720u;
        // 0x3c1724: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1728u;
        goto label_3c1728;
    }
    ctx->pc = 0x3C1720u;
    {
        const bool branch_taken_0x3c1720 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x3C1724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1720u;
        // 0x3c1724: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1720) {
            ctx->pc = 0x3C1708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c1708;
        }
    }
    ctx->pc = 0x3C1728u;
label_3c1728:
    // 0x3c1728: 0x1000000e  b           . + 4 + (0xE << 2)
label_3c172c:
    if (ctx->pc == 0x3C172Cu) {
        ctx->pc = 0x3C172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1728u;
        // 0x3c172c: 0x2b41023  subu        $v0, $s5, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1730u;
        goto label_3c1730;
    }
    ctx->pc = 0x3C1728u;
    {
        const bool branch_taken_0x3c1728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1728u;
        // 0x3c172c: 0x2b41023  subu        $v0, $s5, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1728) {
            ctx->pc = 0x3C1764u;
            goto label_3c1764;
        }
    }
    ctx->pc = 0x3C1730u;
label_3c1730:
    // 0x3c1730: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x3c1730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
label_3c1734:
    // 0x3c1734: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3c1734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3c1738:
    // 0x3c1738: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x3c1738u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
label_3c173c:
    // 0x3c173c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3c173cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3c1740:
    // 0x3c1740: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x3c1740u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3c1744:
    // 0x3c1744: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x3c1744u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_3c1748:
    // 0x3c1748: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x3c1748u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3c174c:
    // 0x3c174c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3c174cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_3c1750:
    // 0x3c1750: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3c1750u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_3c1754:
    // 0x3c1754: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3c1754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3c1758:
    // 0x3c1758: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_3c175c:
    if (ctx->pc == 0x3C175Cu) {
        ctx->pc = 0x3C175Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1758u;
        // 0x3c175c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1760u;
        goto label_3c1760;
    }
    ctx->pc = 0x3C1758u;
    {
        const bool branch_taken_0x3c1758 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x3C175Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1758u;
        // 0x3c175c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1758) {
            ctx->pc = 0x3C1740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c1740;
        }
    }
    ctx->pc = 0x3C1760u;
label_3c1760:
    // 0x3c1760: 0x2b41023  subu        $v0, $s5, $s4
    ctx->pc = 0x3c1760u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_3c1764:
    // 0x3c1764: 0x522823  subu        $a1, $v0, $s2
    ctx->pc = 0x3c1764u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3c1768:
    // 0x3c1768: 0x205182b  sltu        $v1, $s0, $a1
    ctx->pc = 0x3c1768u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3c176c:
    // 0x3c176c: 0x203280b  movn        $a1, $s0, $v1
    ctx->pc = 0x3c176cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 16));
label_3c1770:
    // 0x3c1770: 0x18a0001f  blez        $a1, . + 4 + (0x1F << 2)
label_3c1774:
    if (ctx->pc == 0x3C1774u) {
        ctx->pc = 0x3C1774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1770u;
        // 0x3c1774: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1778u;
        goto label_3c1778;
    }
    ctx->pc = 0x3C1770u;
    {
        const bool branch_taken_0x3c1770 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x3C1774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1770u;
        // 0x3c1774: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1770) {
            ctx->pc = 0x3C17F0u;
            goto label_3c17f0;
        }
    }
    ctx->pc = 0x3C1778u;
label_3c1778:
    // 0x3c1778: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3c1778u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_3c177c:
    // 0x3c177c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_3c1780:
    if (ctx->pc == 0x3C1780u) {
        ctx->pc = 0x3C1780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C177Cu;
        // 0x3c1780: 0x2a51823  subu        $v1, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1784u;
        goto label_3c1784;
    }
    ctx->pc = 0x3C177Cu;
    {
        const bool branch_taken_0x3c177c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C177Cu;
        // 0x3c1780: 0x2a51823  subu        $v1, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c177c) {
            ctx->pc = 0x3C17C0u;
            goto label_3c17c0;
        }
    }
    ctx->pc = 0x3C1784u;
label_3c1784:
    // 0x3c1784: 0x510c2  srl         $v0, $a1, 3
    ctx->pc = 0x3c1784u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
label_3c1788:
    // 0x3c1788: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c1788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c178c:
    // 0x3c178c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c178cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3c1790:
    // 0x3c1790: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3c1790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3c1794:
    // 0x3c1794: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x3c1794u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
label_3c1798:
    // 0x3c1798: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x3c1798u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_3c179c:
    // 0x3c179c: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x3c179cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_3c17a0:
    // 0x3c17a0: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x3c17a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_3c17a4:
    // 0x3c17a4: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x3c17a4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_3c17a8:
    // 0x3c17a8: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x3c17a8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_3c17ac:
    // 0x3c17ac: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3c17acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_3c17b0:
    // 0x3c17b0: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_3c17b4:
    if (ctx->pc == 0x3C17B4u) {
        ctx->pc = 0x3C17B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C17B0u;
        // 0x3c17b4: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C17B8u;
        goto label_3c17b8;
    }
    ctx->pc = 0x3C17B0u;
    {
        const bool branch_taken_0x3c17b0 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x3C17B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C17B0u;
        // 0x3c17b4: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c17b0) {
            ctx->pc = 0x3C1798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c1798;
        }
    }
    ctx->pc = 0x3C17B8u;
label_3c17b8:
    // 0x3c17b8: 0x1000000e  b           . + 4 + (0xE << 2)
label_3c17bc:
    if (ctx->pc == 0x3C17BCu) {
        ctx->pc = 0x3C17BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C17B8u;
        // 0x3c17bc: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C17C0u;
        goto label_3c17c0;
    }
    ctx->pc = 0x3C17B8u;
    {
        const bool branch_taken_0x3c17b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C17BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C17B8u;
        // 0x3c17bc: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c17b8) {
            ctx->pc = 0x3C17F4u;
            goto label_3c17f4;
        }
    }
    ctx->pc = 0x3C17C0u;
label_3c17c0:
    // 0x3c17c0: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x3c17c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
label_3c17c4:
    // 0x3c17c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c17c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c17c8:
    // 0x3c17c8: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x3c17c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
label_3c17cc:
    // 0x3c17cc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3c17ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3c17d0:
    // 0x3c17d0: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x3c17d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3c17d4:
    // 0x3c17d4: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x3c17d4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_3c17d8:
    // 0x3c17d8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x3c17d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3c17dc:
    // 0x3c17dc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3c17dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_3c17e0:
    // 0x3c17e0: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3c17e0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_3c17e4:
    // 0x3c17e4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3c17e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3c17e8:
    // 0x3c17e8: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_3c17ec:
    if (ctx->pc == 0x3C17ECu) {
        ctx->pc = 0x3C17ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C17E8u;
        // 0x3c17ec: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C17F0u;
        goto label_3c17f0;
    }
    ctx->pc = 0x3C17E8u;
    {
        const bool branch_taken_0x3c17e8 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x3C17ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C17E8u;
        // 0x3c17ec: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c17e8) {
            ctx->pc = 0x3C17D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c17d0;
        }
    }
    ctx->pc = 0x3C17F0u;
label_3c17f0:
    // 0x3c17f0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x3c17f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3c17f4:
    // 0x3c17f4: 0x245102b  sltu        $v0, $s2, $a1
    ctx->pc = 0x3c17f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3c17f8:
    // 0x3c17f8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_3c17fc:
    if (ctx->pc == 0x3C17FCu) {
        ctx->pc = 0x3C17FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C17F8u;
        // 0x3c17fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1800u;
        goto label_3c1800;
    }
    ctx->pc = 0x3C17F8u;
    {
        const bool branch_taken_0x3c17f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c17f8) {
            ctx->pc = 0x3C17FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C17F8u;
            // 0x3c17fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1824u;
            goto label_3c1824;
        }
    }
    ctx->pc = 0x3C1800u;
label_3c1800:
    // 0x3c1800: 0xb2001b  divu        $zero, $a1, $s2
    ctx->pc = 0x3c1800u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_3c1804:
    // 0x3c1804: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
label_3c1808:
    if (ctx->pc == 0x3C1808u) {
        ctx->pc = 0x3C1808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1804u;
        // 0x3c1808: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C180Cu;
        goto label_3c180c;
    }
    ctx->pc = 0x3C1804u;
    {
        const bool branch_taken_0x3c1804 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c1804) {
            ctx->pc = 0x3C1808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C1804u;
            // 0x3c1808: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C180Cu;
            goto label_3c180c;
        }
    }
    ctx->pc = 0x3C180Cu;
label_3c180c:
    // 0x3c180c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3c180cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3c1810:
    // 0x3c1810: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3c1810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c1814:
    // 0x3c1814: 0x2812  mflo        $a1
    ctx->pc = 0x3c1814u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_3c1818:
    // 0x3c1818: 0xc0f03a8  jal         func_3C0EA0
label_3c181c:
    if (ctx->pc == 0x3C181Cu) {
        ctx->pc = 0x3C181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1818u;
        // 0x3c181c: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1820u;
        goto label_3c1820;
    }
    ctx->pc = 0x3C1818u;
    SET_GPR_U32(ctx, 31, 0x3C1820u);
    ctx->pc = 0x3C181Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1818u;
    // 0x3c181c: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0EA0u;
    goto label_3c0ea0;
    ctx->pc = 0x3C1820u;
label_3c1820:
    // 0x3c1820: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c1820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c1824:
    // 0x3c1824: 0x245102b  sltu        $v0, $s2, $a1
    ctx->pc = 0x3c1824u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3c1828:
    // 0x3c1828: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_3c182c:
    if (ctx->pc == 0x3C182Cu) {
        ctx->pc = 0x3C182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1828u;
        // 0x3c182c: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1830u;
        goto label_3c1830;
    }
    ctx->pc = 0x3C1828u;
    {
        const bool branch_taken_0x3c1828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1828u;
        // 0x3c182c: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1828) {
            ctx->pc = 0x3C1850u;
            goto label_3c1850;
        }
    }
    ctx->pc = 0x3C1830u;
label_3c1830:
    // 0x3c1830: 0xb2001b  divu        $zero, $a1, $s2
    ctx->pc = 0x3c1830u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_3c1834:
    // 0x3c1834: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
label_3c1838:
    if (ctx->pc == 0x3C1838u) {
        ctx->pc = 0x3C1838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1834u;
        // 0x3c1838: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C183Cu;
        goto label_3c183c;
    }
    ctx->pc = 0x3C1834u;
    {
        const bool branch_taken_0x3c1834 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c1834) {
            ctx->pc = 0x3C1838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C1834u;
            // 0x3c1838: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C183Cu;
            goto label_3c183c;
        }
    }
    ctx->pc = 0x3C183Cu;
label_3c183c:
    // 0x3c183c: 0x2a5b023  subu        $s6, $s5, $a1
    ctx->pc = 0x3c183cu;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
label_3c1840:
    // 0x3c1840: 0x1012  mflo        $v0
    ctx->pc = 0x3c1840u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_3c1844:
    // 0x3c1844: 0x1000fda5  b           . + 4 + (-0x25B << 2)
label_3c1848:
    if (ctx->pc == 0x3C1848u) {
        ctx->pc = 0x3C1848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1844u;
        // 0x3c1848: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C184Cu;
        goto label_3c184c;
    }
    ctx->pc = 0x3C1844u;
    {
        const bool branch_taken_0x3c1844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1844u;
        // 0x3c1848: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1844) {
            ctx->pc = 0x3C0EDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c0edc;
        }
    }
    ctx->pc = 0x3C184Cu;
label_3c184c:
    // 0x3c184c: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x3c184cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3c1850:
    // 0x3c1850: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x3c1850u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3c1854:
    // 0x3c1854: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x3c1854u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3c1858:
    // 0x3c1858: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x3c1858u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3c185c:
    // 0x3c185c: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x3c185cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3c1860:
    // 0x3c1860: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x3c1860u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3c1864:
    // 0x3c1864: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x3c1864u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3c1868:
    // 0x3c1868: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3c1868u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c186c:
    // 0x3c186c: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x3c186cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c1870:
    // 0x3c1870: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3c1870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3c1874:
    // 0x3c1874: 0x3e00008  jr          $ra
label_3c1878:
    if (ctx->pc == 0x3C1878u) {
        ctx->pc = 0x3C1878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1874u;
        // 0x3c1878: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C187Cu;
        goto label_3c187c;
    }
    ctx->pc = 0x3C1874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C1878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1874u;
        // 0x3c1878: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C187Cu;
label_3c187c:
    // 0x3c187c: 0x0  nop
    ctx->pc = 0x3c187cu;
    // NOP
    ctx->pc = 0x3c1880u;
}
