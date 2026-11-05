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

// Function: sub_002D1250
// Address: 0x2d1250 - 0x2d18a8
void sub_002D1250_0x2d1250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1250_0x2d1250");
#endif

    switch (ctx->pc) {
        case 0x2d1250u: goto label_2d1250;
        case 0x2d1254u: goto label_2d1254;
        case 0x2d1258u: goto label_2d1258;
        case 0x2d125cu: goto label_2d125c;
        case 0x2d1260u: goto label_2d1260;
        case 0x2d1264u: goto label_2d1264;
        case 0x2d1268u: goto label_2d1268;
        case 0x2d126cu: goto label_2d126c;
        case 0x2d1270u: goto label_2d1270;
        case 0x2d1274u: goto label_2d1274;
        case 0x2d1278u: goto label_2d1278;
        case 0x2d127cu: goto label_2d127c;
        case 0x2d1280u: goto label_2d1280;
        case 0x2d1284u: goto label_2d1284;
        case 0x2d1288u: goto label_2d1288;
        case 0x2d128cu: goto label_2d128c;
        case 0x2d1290u: goto label_2d1290;
        case 0x2d1294u: goto label_2d1294;
        case 0x2d1298u: goto label_2d1298;
        case 0x2d129cu: goto label_2d129c;
        case 0x2d12a0u: goto label_2d12a0;
        case 0x2d12a4u: goto label_2d12a4;
        case 0x2d12a8u: goto label_2d12a8;
        case 0x2d12acu: goto label_2d12ac;
        case 0x2d12b0u: goto label_2d12b0;
        case 0x2d12b4u: goto label_2d12b4;
        case 0x2d12b8u: goto label_2d12b8;
        case 0x2d12bcu: goto label_2d12bc;
        case 0x2d12c0u: goto label_2d12c0;
        case 0x2d12c4u: goto label_2d12c4;
        case 0x2d12c8u: goto label_2d12c8;
        case 0x2d12ccu: goto label_2d12cc;
        case 0x2d12d0u: goto label_2d12d0;
        case 0x2d12d4u: goto label_2d12d4;
        case 0x2d12d8u: goto label_2d12d8;
        case 0x2d12dcu: goto label_2d12dc;
        case 0x2d12e0u: goto label_2d12e0;
        case 0x2d12e4u: goto label_2d12e4;
        case 0x2d12e8u: goto label_2d12e8;
        case 0x2d12ecu: goto label_2d12ec;
        case 0x2d12f0u: goto label_2d12f0;
        case 0x2d12f4u: goto label_2d12f4;
        case 0x2d12f8u: goto label_2d12f8;
        case 0x2d12fcu: goto label_2d12fc;
        case 0x2d1300u: goto label_2d1300;
        case 0x2d1304u: goto label_2d1304;
        case 0x2d1308u: goto label_2d1308;
        case 0x2d130cu: goto label_2d130c;
        case 0x2d1310u: goto label_2d1310;
        case 0x2d1314u: goto label_2d1314;
        case 0x2d1318u: goto label_2d1318;
        case 0x2d131cu: goto label_2d131c;
        case 0x2d1320u: goto label_2d1320;
        case 0x2d1324u: goto label_2d1324;
        case 0x2d1328u: goto label_2d1328;
        case 0x2d132cu: goto label_2d132c;
        case 0x2d1330u: goto label_2d1330;
        case 0x2d1334u: goto label_2d1334;
        case 0x2d1338u: goto label_2d1338;
        case 0x2d133cu: goto label_2d133c;
        case 0x2d1340u: goto label_2d1340;
        case 0x2d1344u: goto label_2d1344;
        case 0x2d1348u: goto label_2d1348;
        case 0x2d134cu: goto label_2d134c;
        case 0x2d1350u: goto label_2d1350;
        case 0x2d1354u: goto label_2d1354;
        case 0x2d1358u: goto label_2d1358;
        case 0x2d135cu: goto label_2d135c;
        case 0x2d1360u: goto label_2d1360;
        case 0x2d1364u: goto label_2d1364;
        case 0x2d1368u: goto label_2d1368;
        case 0x2d136cu: goto label_2d136c;
        case 0x2d1370u: goto label_2d1370;
        case 0x2d1374u: goto label_2d1374;
        case 0x2d1378u: goto label_2d1378;
        case 0x2d137cu: goto label_2d137c;
        case 0x2d1380u: goto label_2d1380;
        case 0x2d1384u: goto label_2d1384;
        case 0x2d1388u: goto label_2d1388;
        case 0x2d138cu: goto label_2d138c;
        case 0x2d1390u: goto label_2d1390;
        case 0x2d1394u: goto label_2d1394;
        case 0x2d1398u: goto label_2d1398;
        case 0x2d139cu: goto label_2d139c;
        case 0x2d13a0u: goto label_2d13a0;
        case 0x2d13a4u: goto label_2d13a4;
        case 0x2d13a8u: goto label_2d13a8;
        case 0x2d13acu: goto label_2d13ac;
        case 0x2d13b0u: goto label_2d13b0;
        case 0x2d13b4u: goto label_2d13b4;
        case 0x2d13b8u: goto label_2d13b8;
        case 0x2d13bcu: goto label_2d13bc;
        case 0x2d13c0u: goto label_2d13c0;
        case 0x2d13c4u: goto label_2d13c4;
        case 0x2d13c8u: goto label_2d13c8;
        case 0x2d13ccu: goto label_2d13cc;
        case 0x2d13d0u: goto label_2d13d0;
        case 0x2d13d4u: goto label_2d13d4;
        case 0x2d13d8u: goto label_2d13d8;
        case 0x2d13dcu: goto label_2d13dc;
        case 0x2d13e0u: goto label_2d13e0;
        case 0x2d13e4u: goto label_2d13e4;
        case 0x2d13e8u: goto label_2d13e8;
        case 0x2d13ecu: goto label_2d13ec;
        case 0x2d13f0u: goto label_2d13f0;
        case 0x2d13f4u: goto label_2d13f4;
        case 0x2d13f8u: goto label_2d13f8;
        case 0x2d13fcu: goto label_2d13fc;
        case 0x2d1400u: goto label_2d1400;
        case 0x2d1404u: goto label_2d1404;
        case 0x2d1408u: goto label_2d1408;
        case 0x2d140cu: goto label_2d140c;
        case 0x2d1410u: goto label_2d1410;
        case 0x2d1414u: goto label_2d1414;
        case 0x2d1418u: goto label_2d1418;
        case 0x2d141cu: goto label_2d141c;
        case 0x2d1420u: goto label_2d1420;
        case 0x2d1424u: goto label_2d1424;
        case 0x2d1428u: goto label_2d1428;
        case 0x2d142cu: goto label_2d142c;
        case 0x2d1430u: goto label_2d1430;
        case 0x2d1434u: goto label_2d1434;
        case 0x2d1438u: goto label_2d1438;
        case 0x2d143cu: goto label_2d143c;
        case 0x2d1440u: goto label_2d1440;
        case 0x2d1444u: goto label_2d1444;
        case 0x2d1448u: goto label_2d1448;
        case 0x2d144cu: goto label_2d144c;
        case 0x2d1450u: goto label_2d1450;
        case 0x2d1454u: goto label_2d1454;
        case 0x2d1458u: goto label_2d1458;
        case 0x2d145cu: goto label_2d145c;
        case 0x2d1460u: goto label_2d1460;
        case 0x2d1464u: goto label_2d1464;
        case 0x2d1468u: goto label_2d1468;
        case 0x2d146cu: goto label_2d146c;
        case 0x2d1470u: goto label_2d1470;
        case 0x2d1474u: goto label_2d1474;
        case 0x2d1478u: goto label_2d1478;
        case 0x2d147cu: goto label_2d147c;
        case 0x2d1480u: goto label_2d1480;
        case 0x2d1484u: goto label_2d1484;
        case 0x2d1488u: goto label_2d1488;
        case 0x2d148cu: goto label_2d148c;
        case 0x2d1490u: goto label_2d1490;
        case 0x2d1494u: goto label_2d1494;
        case 0x2d1498u: goto label_2d1498;
        case 0x2d149cu: goto label_2d149c;
        case 0x2d14a0u: goto label_2d14a0;
        case 0x2d14a4u: goto label_2d14a4;
        case 0x2d14a8u: goto label_2d14a8;
        case 0x2d14acu: goto label_2d14ac;
        case 0x2d14b0u: goto label_2d14b0;
        case 0x2d14b4u: goto label_2d14b4;
        case 0x2d14b8u: goto label_2d14b8;
        case 0x2d14bcu: goto label_2d14bc;
        case 0x2d14c0u: goto label_2d14c0;
        case 0x2d14c4u: goto label_2d14c4;
        case 0x2d14c8u: goto label_2d14c8;
        case 0x2d14ccu: goto label_2d14cc;
        case 0x2d14d0u: goto label_2d14d0;
        case 0x2d14d4u: goto label_2d14d4;
        case 0x2d14d8u: goto label_2d14d8;
        case 0x2d14dcu: goto label_2d14dc;
        case 0x2d14e0u: goto label_2d14e0;
        case 0x2d14e4u: goto label_2d14e4;
        case 0x2d14e8u: goto label_2d14e8;
        case 0x2d14ecu: goto label_2d14ec;
        case 0x2d14f0u: goto label_2d14f0;
        case 0x2d14f4u: goto label_2d14f4;
        case 0x2d14f8u: goto label_2d14f8;
        case 0x2d14fcu: goto label_2d14fc;
        case 0x2d1500u: goto label_2d1500;
        case 0x2d1504u: goto label_2d1504;
        case 0x2d1508u: goto label_2d1508;
        case 0x2d150cu: goto label_2d150c;
        case 0x2d1510u: goto label_2d1510;
        case 0x2d1514u: goto label_2d1514;
        case 0x2d1518u: goto label_2d1518;
        case 0x2d151cu: goto label_2d151c;
        case 0x2d1520u: goto label_2d1520;
        case 0x2d1524u: goto label_2d1524;
        case 0x2d1528u: goto label_2d1528;
        case 0x2d152cu: goto label_2d152c;
        case 0x2d1530u: goto label_2d1530;
        case 0x2d1534u: goto label_2d1534;
        case 0x2d1538u: goto label_2d1538;
        case 0x2d153cu: goto label_2d153c;
        case 0x2d1540u: goto label_2d1540;
        case 0x2d1544u: goto label_2d1544;
        case 0x2d1548u: goto label_2d1548;
        case 0x2d154cu: goto label_2d154c;
        case 0x2d1550u: goto label_2d1550;
        case 0x2d1554u: goto label_2d1554;
        case 0x2d1558u: goto label_2d1558;
        case 0x2d155cu: goto label_2d155c;
        case 0x2d1560u: goto label_2d1560;
        case 0x2d1564u: goto label_2d1564;
        case 0x2d1568u: goto label_2d1568;
        case 0x2d156cu: goto label_2d156c;
        case 0x2d1570u: goto label_2d1570;
        case 0x2d1574u: goto label_2d1574;
        case 0x2d1578u: goto label_2d1578;
        case 0x2d157cu: goto label_2d157c;
        case 0x2d1580u: goto label_2d1580;
        case 0x2d1584u: goto label_2d1584;
        case 0x2d1588u: goto label_2d1588;
        case 0x2d158cu: goto label_2d158c;
        case 0x2d1590u: goto label_2d1590;
        case 0x2d1594u: goto label_2d1594;
        case 0x2d1598u: goto label_2d1598;
        case 0x2d159cu: goto label_2d159c;
        case 0x2d15a0u: goto label_2d15a0;
        case 0x2d15a4u: goto label_2d15a4;
        case 0x2d15a8u: goto label_2d15a8;
        case 0x2d15acu: goto label_2d15ac;
        case 0x2d15b0u: goto label_2d15b0;
        case 0x2d15b4u: goto label_2d15b4;
        case 0x2d15b8u: goto label_2d15b8;
        case 0x2d15bcu: goto label_2d15bc;
        case 0x2d15c0u: goto label_2d15c0;
        case 0x2d15c4u: goto label_2d15c4;
        case 0x2d15c8u: goto label_2d15c8;
        case 0x2d15ccu: goto label_2d15cc;
        case 0x2d15d0u: goto label_2d15d0;
        case 0x2d15d4u: goto label_2d15d4;
        case 0x2d15d8u: goto label_2d15d8;
        case 0x2d15dcu: goto label_2d15dc;
        case 0x2d15e0u: goto label_2d15e0;
        case 0x2d15e4u: goto label_2d15e4;
        case 0x2d15e8u: goto label_2d15e8;
        case 0x2d15ecu: goto label_2d15ec;
        case 0x2d15f0u: goto label_2d15f0;
        case 0x2d15f4u: goto label_2d15f4;
        case 0x2d15f8u: goto label_2d15f8;
        case 0x2d15fcu: goto label_2d15fc;
        case 0x2d1600u: goto label_2d1600;
        case 0x2d1604u: goto label_2d1604;
        case 0x2d1608u: goto label_2d1608;
        case 0x2d160cu: goto label_2d160c;
        case 0x2d1610u: goto label_2d1610;
        case 0x2d1614u: goto label_2d1614;
        case 0x2d1618u: goto label_2d1618;
        case 0x2d161cu: goto label_2d161c;
        case 0x2d1620u: goto label_2d1620;
        case 0x2d1624u: goto label_2d1624;
        case 0x2d1628u: goto label_2d1628;
        case 0x2d162cu: goto label_2d162c;
        case 0x2d1630u: goto label_2d1630;
        case 0x2d1634u: goto label_2d1634;
        case 0x2d1638u: goto label_2d1638;
        case 0x2d163cu: goto label_2d163c;
        case 0x2d1640u: goto label_2d1640;
        case 0x2d1644u: goto label_2d1644;
        case 0x2d1648u: goto label_2d1648;
        case 0x2d164cu: goto label_2d164c;
        case 0x2d1650u: goto label_2d1650;
        case 0x2d1654u: goto label_2d1654;
        case 0x2d1658u: goto label_2d1658;
        case 0x2d165cu: goto label_2d165c;
        case 0x2d1660u: goto label_2d1660;
        case 0x2d1664u: goto label_2d1664;
        case 0x2d1668u: goto label_2d1668;
        case 0x2d166cu: goto label_2d166c;
        case 0x2d1670u: goto label_2d1670;
        case 0x2d1674u: goto label_2d1674;
        case 0x2d1678u: goto label_2d1678;
        case 0x2d167cu: goto label_2d167c;
        case 0x2d1680u: goto label_2d1680;
        case 0x2d1684u: goto label_2d1684;
        case 0x2d1688u: goto label_2d1688;
        case 0x2d168cu: goto label_2d168c;
        case 0x2d1690u: goto label_2d1690;
        case 0x2d1694u: goto label_2d1694;
        case 0x2d1698u: goto label_2d1698;
        case 0x2d169cu: goto label_2d169c;
        case 0x2d16a0u: goto label_2d16a0;
        case 0x2d16a4u: goto label_2d16a4;
        case 0x2d16a8u: goto label_2d16a8;
        case 0x2d16acu: goto label_2d16ac;
        case 0x2d16b0u: goto label_2d16b0;
        case 0x2d16b4u: goto label_2d16b4;
        case 0x2d16b8u: goto label_2d16b8;
        case 0x2d16bcu: goto label_2d16bc;
        case 0x2d16c0u: goto label_2d16c0;
        case 0x2d16c4u: goto label_2d16c4;
        case 0x2d16c8u: goto label_2d16c8;
        case 0x2d16ccu: goto label_2d16cc;
        case 0x2d16d0u: goto label_2d16d0;
        case 0x2d16d4u: goto label_2d16d4;
        case 0x2d16d8u: goto label_2d16d8;
        case 0x2d16dcu: goto label_2d16dc;
        case 0x2d16e0u: goto label_2d16e0;
        case 0x2d16e4u: goto label_2d16e4;
        case 0x2d16e8u: goto label_2d16e8;
        case 0x2d16ecu: goto label_2d16ec;
        case 0x2d16f0u: goto label_2d16f0;
        case 0x2d16f4u: goto label_2d16f4;
        case 0x2d16f8u: goto label_2d16f8;
        case 0x2d16fcu: goto label_2d16fc;
        case 0x2d1700u: goto label_2d1700;
        case 0x2d1704u: goto label_2d1704;
        case 0x2d1708u: goto label_2d1708;
        case 0x2d170cu: goto label_2d170c;
        case 0x2d1710u: goto label_2d1710;
        case 0x2d1714u: goto label_2d1714;
        case 0x2d1718u: goto label_2d1718;
        case 0x2d171cu: goto label_2d171c;
        case 0x2d1720u: goto label_2d1720;
        case 0x2d1724u: goto label_2d1724;
        case 0x2d1728u: goto label_2d1728;
        case 0x2d172cu: goto label_2d172c;
        case 0x2d1730u: goto label_2d1730;
        case 0x2d1734u: goto label_2d1734;
        case 0x2d1738u: goto label_2d1738;
        case 0x2d173cu: goto label_2d173c;
        case 0x2d1740u: goto label_2d1740;
        case 0x2d1744u: goto label_2d1744;
        case 0x2d1748u: goto label_2d1748;
        case 0x2d174cu: goto label_2d174c;
        case 0x2d1750u: goto label_2d1750;
        case 0x2d1754u: goto label_2d1754;
        case 0x2d1758u: goto label_2d1758;
        case 0x2d175cu: goto label_2d175c;
        case 0x2d1760u: goto label_2d1760;
        case 0x2d1764u: goto label_2d1764;
        case 0x2d1768u: goto label_2d1768;
        case 0x2d176cu: goto label_2d176c;
        case 0x2d1770u: goto label_2d1770;
        case 0x2d1774u: goto label_2d1774;
        case 0x2d1778u: goto label_2d1778;
        case 0x2d177cu: goto label_2d177c;
        case 0x2d1780u: goto label_2d1780;
        case 0x2d1784u: goto label_2d1784;
        case 0x2d1788u: goto label_2d1788;
        case 0x2d178cu: goto label_2d178c;
        case 0x2d1790u: goto label_2d1790;
        case 0x2d1794u: goto label_2d1794;
        case 0x2d1798u: goto label_2d1798;
        case 0x2d179cu: goto label_2d179c;
        case 0x2d17a0u: goto label_2d17a0;
        case 0x2d17a4u: goto label_2d17a4;
        case 0x2d17a8u: goto label_2d17a8;
        case 0x2d17acu: goto label_2d17ac;
        case 0x2d17b0u: goto label_2d17b0;
        case 0x2d17b4u: goto label_2d17b4;
        case 0x2d17b8u: goto label_2d17b8;
        case 0x2d17bcu: goto label_2d17bc;
        case 0x2d17c0u: goto label_2d17c0;
        case 0x2d17c4u: goto label_2d17c4;
        case 0x2d17c8u: goto label_2d17c8;
        case 0x2d17ccu: goto label_2d17cc;
        case 0x2d17d0u: goto label_2d17d0;
        case 0x2d17d4u: goto label_2d17d4;
        case 0x2d17d8u: goto label_2d17d8;
        case 0x2d17dcu: goto label_2d17dc;
        case 0x2d17e0u: goto label_2d17e0;
        case 0x2d17e4u: goto label_2d17e4;
        case 0x2d17e8u: goto label_2d17e8;
        case 0x2d17ecu: goto label_2d17ec;
        case 0x2d17f0u: goto label_2d17f0;
        case 0x2d17f4u: goto label_2d17f4;
        case 0x2d17f8u: goto label_2d17f8;
        case 0x2d17fcu: goto label_2d17fc;
        case 0x2d1800u: goto label_2d1800;
        case 0x2d1804u: goto label_2d1804;
        case 0x2d1808u: goto label_2d1808;
        case 0x2d180cu: goto label_2d180c;
        case 0x2d1810u: goto label_2d1810;
        case 0x2d1814u: goto label_2d1814;
        case 0x2d1818u: goto label_2d1818;
        case 0x2d181cu: goto label_2d181c;
        case 0x2d1820u: goto label_2d1820;
        case 0x2d1824u: goto label_2d1824;
        case 0x2d1828u: goto label_2d1828;
        case 0x2d182cu: goto label_2d182c;
        case 0x2d1830u: goto label_2d1830;
        case 0x2d1834u: goto label_2d1834;
        case 0x2d1838u: goto label_2d1838;
        case 0x2d183cu: goto label_2d183c;
        case 0x2d1840u: goto label_2d1840;
        case 0x2d1844u: goto label_2d1844;
        case 0x2d1848u: goto label_2d1848;
        case 0x2d184cu: goto label_2d184c;
        case 0x2d1850u: goto label_2d1850;
        case 0x2d1854u: goto label_2d1854;
        case 0x2d1858u: goto label_2d1858;
        case 0x2d185cu: goto label_2d185c;
        case 0x2d1860u: goto label_2d1860;
        case 0x2d1864u: goto label_2d1864;
        case 0x2d1868u: goto label_2d1868;
        case 0x2d186cu: goto label_2d186c;
        case 0x2d1870u: goto label_2d1870;
        case 0x2d1874u: goto label_2d1874;
        case 0x2d1878u: goto label_2d1878;
        case 0x2d187cu: goto label_2d187c;
        case 0x2d1880u: goto label_2d1880;
        case 0x2d1884u: goto label_2d1884;
        case 0x2d1888u: goto label_2d1888;
        case 0x2d188cu: goto label_2d188c;
        case 0x2d1890u: goto label_2d1890;
        case 0x2d1894u: goto label_2d1894;
        case 0x2d1898u: goto label_2d1898;
        case 0x2d189cu: goto label_2d189c;
        case 0x2d18a0u: goto label_2d18a0;
        case 0x2d18a4u: goto label_2d18a4;
        default: break;
    }

    ctx->pc = 0x2d1250u;

label_2d1250:
    // 0x2d1250: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2d1250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2d1254:
    // 0x2d1254: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x2d1254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
label_2d1258:
    // 0x2d1258: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d1258u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d125c:
    // 0x2d125c: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x2d125cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
label_2d1260:
    // 0x2d1260: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2d1260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_2d1264:
    // 0x2d1264: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2d1264u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d1268:
    // 0x2d1268: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x2d1268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
label_2d126c:
    // 0x2d126c: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x2d126cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
label_2d1270:
    // 0x2d1270: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x2d1270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
label_2d1274:
    // 0x2d1274: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x2d1274u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_2d1278:
    // 0x2d1278: 0xc0b4ab0  jal         func_2D2AC0
label_2d127c:
    if (ctx->pc == 0x2D127Cu) {
        ctx->pc = 0x2D127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1278u;
        // 0x2d127c: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1280u;
        goto label_2d1280;
    }
    ctx->pc = 0x2D1278u;
    SET_GPR_U32(ctx, 31, 0x2D1280u);
    ctx->pc = 0x2D127Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1278u;
    // 0x2d127c: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2AC0u, 0x2D1278u, 0x2D1280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1280u;
label_2d1280:
    // 0x2d1280: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2d1280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_2d1284:
    // 0x2d1284: 0x92230074  lbu         $v1, 0x74($s1)
    ctx->pc = 0x2d1284u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 116)));
label_2d1288:
    // 0x2d1288: 0xc4412b30  lwc1        $f1, 0x2B30($v0)
    ctx->pc = 0x2d1288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d128c:
    // 0x2d128c: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2d128cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2d1290:
    // 0x2d1290: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x2d1290u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2d1294:
    // 0x2d1294: 0x1460017a  bnez        $v1, . + 4 + (0x17A << 2)
label_2d1298:
    if (ctx->pc == 0x2D1298u) {
        ctx->pc = 0x2D1298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1294u;
        // 0x2d1298: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D129Cu;
        goto label_2d129c;
    }
    ctx->pc = 0x2D1294u;
    {
        const bool branch_taken_0x2d1294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1294u;
        // 0x2d1298: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1294) {
            ctx->pc = 0x2D1880u;
            goto label_2d1880;
        }
    }
    ctx->pc = 0x2D129Cu;
label_2d129c:
    // 0x2d129c: 0x92220014  lbu         $v0, 0x14($s1)
    ctx->pc = 0x2d129cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
label_2d12a0:
    // 0x2d12a0: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_2d12a4:
    if (ctx->pc == 0x2D12A4u) {
        ctx->pc = 0x2D12A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D12A0u;
        // 0x2d12a4: 0x8e2200dc  lw          $v0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D12A8u;
        goto label_2d12a8;
    }
    ctx->pc = 0x2D12A0u;
    {
        const bool branch_taken_0x2d12a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d12a0) {
            ctx->pc = 0x2D12A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D12A0u;
            // 0x2d12a4: 0x8e2200dc  lw          $v0, 0xDC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D12CCu;
            goto label_2d12cc;
        }
    }
    ctx->pc = 0x2D12A8u;
label_2d12a8:
    // 0x2d12a8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2d12a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2d12ac:
    // 0x2d12ac: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x2d12acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950256)));
label_2d12b0:
    // 0x2d12b0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2d12b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2d12b4:
    // 0x2d12b4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2d12b8:
    if (ctx->pc == 0x2D12B8u) {
        ctx->pc = 0x2D12B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D12B4u;
        // 0x2d12b8: 0x8e2200dc  lw          $v0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D12BCu;
        goto label_2d12bc;
    }
    ctx->pc = 0x2D12B4u;
    {
        const bool branch_taken_0x2d12b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d12b4) {
            ctx->pc = 0x2D12B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D12B4u;
            // 0x2d12b8: 0x8e2200dc  lw          $v0, 0xDC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D12C8u;
            goto label_2d12c8;
        }
    }
    ctx->pc = 0x2D12BCu;
label_2d12bc:
    // 0x2d12bc: 0xe6220018  swc1        $f2, 0x18($s1)
    ctx->pc = 0x2d12bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_2d12c0:
    // 0x2d12c0: 0x1000016f  b           . + 4 + (0x16F << 2)
label_2d12c4:
    if (ctx->pc == 0x2D12C4u) {
        ctx->pc = 0x2D12C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D12C0u;
        // 0x2d12c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D12C8u;
        goto label_2d12c8;
    }
    ctx->pc = 0x2D12C0u;
    {
        const bool branch_taken_0x2d12c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D12C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D12C0u;
        // 0x2d12c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d12c0) {
            ctx->pc = 0x2D1880u;
            goto label_2d1880;
        }
    }
    ctx->pc = 0x2D12C8u;
label_2d12c8:
    // 0x2d12c8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2d12c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2d12cc:
    // 0x2d12cc: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
label_2d12d0:
    if (ctx->pc == 0x2D12D0u) {
        ctx->pc = 0x2D12D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D12CCu;
        // 0x2d12d0: 0x24050d74  addiu       $a1, $zero, 0xD74 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3444));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D12D4u;
        goto label_2d12d4;
    }
    ctx->pc = 0x2D12CCu;
    {
        const bool branch_taken_0x2d12cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D12D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D12CCu;
        // 0x2d12d0: 0x24050d74  addiu       $a1, $zero, 0xD74 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d12cc) {
            ctx->pc = 0x2D13E4u;
            goto label_2d13e4;
        }
    }
    ctx->pc = 0x2D12D4u;
label_2d12d4:
    // 0x2d12d4: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x2d12d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_2d12d8:
    // 0x2d12d8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2d12d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d12dc:
    // 0x2d12dc: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x2d12dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2d12e0:
    // 0x2d12e0: 0xc07508e  jal         func_1D4238
label_2d12e4:
    if (ctx->pc == 0x2D12E4u) {
        ctx->pc = 0x2D12E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D12E0u;
        // 0x2d12e4: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D12E8u;
        goto label_2d12e8;
    }
    ctx->pc = 0x2D12E0u;
    SET_GPR_U32(ctx, 31, 0x2D12E8u);
    ctx->pc = 0x2D12E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D12E0u;
    // 0x2d12e4: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4238u, 0x2D12E0u, 0x2D12E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D12E8u;
label_2d12e8:
    // 0x2d12e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d12e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d12ec:
    // 0x2d12ec: 0x5612000c  bnel        $s0, $s2, . + 4 + (0xC << 2)
label_2d12f0:
    if (ctx->pc == 0x2D12F0u) {
        ctx->pc = 0x2D12F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D12ECu;
        // 0x2d12f0: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D12F4u;
        goto label_2d12f4;
    }
    ctx->pc = 0x2D12ECu;
    {
        const bool branch_taken_0x2d12ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x2d12ec) {
            ctx->pc = 0x2D12F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D12ECu;
            // 0x2d12f0: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1320u;
            goto label_2d1320;
        }
    }
    ctx->pc = 0x2D12F4u;
label_2d12f4:
    // 0x2d12f4: 0x8e2300dc  lw          $v1, 0xDC($s1)
    ctx->pc = 0x2d12f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_2d12f8:
    // 0x2d12f8: 0x24050d75  addiu       $a1, $zero, 0xD75
    ctx->pc = 0x2d12f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3445));
label_2d12fc:
    // 0x2d12fc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2d12fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d1300:
    // 0x2d1300: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x2d1300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_2d1304:
    // 0x2d1304: 0xc07508e  jal         func_1D4238
label_2d1308:
    if (ctx->pc == 0x2D1308u) {
        ctx->pc = 0x2D1308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1304u;
        // 0x2d1308: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D130Cu;
        goto label_2d130c;
    }
    ctx->pc = 0x2D1304u;
    SET_GPR_U32(ctx, 31, 0x2D130Cu);
    ctx->pc = 0x2D1308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1304u;
    // 0x2d1308: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4238u, 0x2D1304u, 0x2D130Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D130Cu;
label_2d130c:
    // 0x2d130c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d130cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d1310:
    // 0x2d1310: 0x56120003  bnel        $s0, $s2, . + 4 + (0x3 << 2)
label_2d1314:
    if (ctx->pc == 0x2D1314u) {
        ctx->pc = 0x2D1314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1310u;
        // 0x2d1314: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1318u;
        goto label_2d1318;
    }
    ctx->pc = 0x2D1310u;
    {
        const bool branch_taken_0x2d1310 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x2d1310) {
            ctx->pc = 0x2D1314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1310u;
            // 0x2d1314: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1320u;
            goto label_2d1320;
        }
    }
    ctx->pc = 0x2D1318u;
label_2d1318:
    // 0x2d1318: 0x10000159  b           . + 4 + (0x159 << 2)
label_2d131c:
    if (ctx->pc == 0x2D131Cu) {
        ctx->pc = 0x2D131Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1318u;
        // 0x2d131c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1320u;
        goto label_2d1320;
    }
    ctx->pc = 0x2D1318u;
    {
        const bool branch_taken_0x2d1318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D131Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1318u;
        // 0x2d131c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1318) {
            ctx->pc = 0x2D1880u;
            goto label_2d1880;
        }
    }
    ctx->pc = 0x2D1320u;
label_2d1320:
    // 0x2d1320: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x2d1320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_2d1324:
    // 0x2d1324: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x2d1324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_2d1328:
    // 0x2d1328: 0x40f809  jalr        $v0
label_2d132c:
    if (ctx->pc == 0x2D132Cu) {
        ctx->pc = 0x2D132Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1328u;
        // 0x2d132c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1330u;
        goto label_2d1330;
    }
    ctx->pc = 0x2D1328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D1330u);
        ctx->pc = 0x2D132Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1328u;
        // 0x2d132c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1328u, 0x2D1330u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D1330u;
label_2d1330:
    // 0x2d1330: 0x8e2300dc  lw          $v1, 0xDC($s1)
    ctx->pc = 0x2d1330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_2d1334:
    // 0x2d1334: 0x1030c0  sll         $a2, $s0, 3
    ctx->pc = 0x2d1334u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_2d1338:
    // 0x2d1338: 0x8e840100  lw          $a0, 0x100($s4)
    ctx->pc = 0x2d1338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 256)));
label_2d133c:
    // 0x2d133c: 0x8c650104  lw          $a1, 0x104($v1)
    ctx->pc = 0x2d133cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_2d1340:
    // 0x2d1340: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x2d1340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_2d1344:
    // 0x2d1344: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2d1344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_2d1348:
    // 0x2d1348: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2d1348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2d134c:
    // 0x2d134c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2d134cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2d1350:
    // 0x2d1350: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x2d1350u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2d1354:
    // 0x2d1354: 0xae24000c  sw          $a0, 0xC($s1)
    ctx->pc = 0x2d1354u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
label_2d1358:
    // 0x2d1358: 0xc0f70ce  jal         func_3DC338
label_2d135c:
    if (ctx->pc == 0x2D135Cu) {
        ctx->pc = 0x2D135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1358u;
        // 0x2d135c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1360u;
        goto label_2d1360;
    }
    ctx->pc = 0x2D1358u;
    SET_GPR_U32(ctx, 31, 0x2D1360u);
    ctx->pc = 0x2D135Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1358u;
    // 0x2d135c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x2D1358u, 0x2D1360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1360u;
label_2d1360:
    // 0x2d1360: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2d1364:
    if (ctx->pc == 0x2D1364u) {
        ctx->pc = 0x2D1364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1360u;
        // 0x2d1364: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1368u;
        goto label_2d1368;
    }
    ctx->pc = 0x2D1360u;
    {
        const bool branch_taken_0x2d1360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1360) {
            ctx->pc = 0x2D1364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1360u;
            // 0x2d1364: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1374u;
            goto label_2d1374;
        }
    }
    ctx->pc = 0x2D1368u;
label_2d1368:
    // 0x2d1368: 0xc0c4900  jal         func_312400
label_2d136c:
    if (ctx->pc == 0x2D136Cu) {
        ctx->pc = 0x2D136Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1368u;
        // 0x2d136c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1370u;
        goto label_2d1370;
    }
    ctx->pc = 0x2D1368u;
    SET_GPR_U32(ctx, 31, 0x2D1370u);
    ctx->pc = 0x2D136Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1368u;
    // 0x2d136c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x2D1368u, 0x2D1370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1370u;
label_2d1370:
    // 0x2d1370: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2d1370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2d1374:
    // 0x2d1374: 0xc0b1680  jal         func_2C5A00
label_2d1378:
    if (ctx->pc == 0x2D1378u) {
        ctx->pc = 0x2D1378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1374u;
        // 0x2d1378: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D137Cu;
        goto label_2d137c;
    }
    ctx->pc = 0x2D1374u;
    SET_GPR_U32(ctx, 31, 0x2D137Cu);
    ctx->pc = 0x2D1378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1374u;
    // 0x2d1378: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5A00u, 0x2D1374u, 0x2D137Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D137Cu;
label_2d137c:
    // 0x2d137c: 0x1260000c  beqz        $s3, . + 4 + (0xC << 2)
label_2d1380:
    if (ctx->pc == 0x2D1380u) {
        ctx->pc = 0x2D1384u;
        goto label_2d1384;
    }
    ctx->pc = 0x2D137Cu;
    {
        const bool branch_taken_0x2d137c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d137c) {
            ctx->pc = 0x2D13B0u;
            goto label_2d13b0;
        }
    }
    ctx->pc = 0x2D1384u;
label_2d1384:
    // 0x2d1384: 0xc0b1488  jal         func_2C5220
label_2d1388:
    if (ctx->pc == 0x2D1388u) {
        ctx->pc = 0x2D1388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1384u;
        // 0x2d1388: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D138Cu;
        goto label_2d138c;
    }
    ctx->pc = 0x2D1384u;
    SET_GPR_U32(ctx, 31, 0x2D138Cu);
    ctx->pc = 0x2D1388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1384u;
    // 0x2d1388: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2D1384u, 0x2D138Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D138Cu;
label_2d138c:
    // 0x2d138c: 0xc0b1488  jal         func_2C5220
label_2d1390:
    if (ctx->pc == 0x2D1390u) {
        ctx->pc = 0x2D1390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D138Cu;
        // 0x2d1390: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1394u;
        goto label_2d1394;
    }
    ctx->pc = 0x2D138Cu;
    SET_GPR_U32(ctx, 31, 0x2D1394u);
    ctx->pc = 0x2D1390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D138Cu;
    // 0x2d1390: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2D138Cu, 0x2D1394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1394u;
label_2d1394:
    // 0x2d1394: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2d1394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2d1398:
    // 0x2d1398: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d1398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d139c:
    // 0x2d139c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d139cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d13a0:
    // 0x2d13a0: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2d13a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2d13a4:
    // 0x2d13a4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2d13a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2d13a8:
    // 0x2d13a8: 0xc0b160a  jal         func_2C5828
label_2d13ac:
    if (ctx->pc == 0x2D13ACu) {
        ctx->pc = 0x2D13ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D13A8u;
        // 0x2d13ac: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D13B0u;
        goto label_2d13b0;
    }
    ctx->pc = 0x2D13A8u;
    SET_GPR_U32(ctx, 31, 0x2D13B0u);
    ctx->pc = 0x2D13ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D13A8u;
    // 0x2d13ac: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5828u, 0x2D13A8u, 0x2D13B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D13B0u;
label_2d13b0:
    // 0x2d13b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d13b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2d13b4:
    // 0x2d13b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d13b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d13b8:
    // 0x2d13b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d13b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d13bc:
    // 0x2d13bc: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2d13bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2d13c0:
    // 0x2d13c0: 0x3c01c2b4  lui         $at, 0xC2B4
    ctx->pc = 0x2d13c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49844 << 16));
label_2d13c4:
    // 0x2d13c4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d13c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d13c8:
    // 0x2d13c8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2d13c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2d13cc:
    // 0x2d13cc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2d13ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_2d13d0:
    // 0x2d13d0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2d13d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_2d13d4:
    // 0x2d13d4: 0xc0b15d0  jal         func_2C5740
label_2d13d8:
    if (ctx->pc == 0x2D13D8u) {
        ctx->pc = 0x2D13D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D13D4u;
        // 0x2d13d8: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D13DCu;
        goto label_2d13dc;
    }
    ctx->pc = 0x2D13D4u;
    SET_GPR_U32(ctx, 31, 0x2D13DCu);
    ctx->pc = 0x2D13D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D13D4u;
    // 0x2d13d8: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5740u, 0x2D13D4u, 0x2D13DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D13DCu;
label_2d13dc:
    // 0x2d13dc: 0x10000128  b           . + 4 + (0x128 << 2)
label_2d13e0:
    if (ctx->pc == 0x2D13E0u) {
        ctx->pc = 0x2D13E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D13DCu;
        // 0x2d13e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D13E4u;
        goto label_2d13e4;
    }
    ctx->pc = 0x2D13DCu;
    {
        const bool branch_taken_0x2d13dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D13E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D13DCu;
        // 0x2d13e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d13dc) {
            ctx->pc = 0x2D1880u;
            goto label_2d1880;
        }
    }
    ctx->pc = 0x2D13E4u;
label_2d13e4:
    // 0x2d13e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d13e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2d13e8:
    // 0x2d13e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d13e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d13ec:
    // 0x2d13ec: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2d13ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2d13f0:
    // 0x2d13f0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2d13f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2d13f4:
    // 0x2d13f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d13f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2d13f8:
    // 0x2d13f8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2d13f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2d13fc:
    // 0x2d13fc: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2d13fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2d1400:
    // 0x2d1400: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2d1400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_2d1404:
    // 0x2d1404: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2d1404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_2d1408:
    // 0x2d1408: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2d1408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_2d140c:
    // 0x2d140c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2d140cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_2d1410:
    // 0x2d1410: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2d1410u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_2d1414:
    // 0x2d1414: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2d1414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_2d1418:
    // 0x2d1418: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x2d1418u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2d141c:
    // 0x2d141c: 0xc0f6a96  jal         func_3DAA58
label_2d1420:
    if (ctx->pc == 0x2D1420u) {
        ctx->pc = 0x2D1420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D141Cu;
        // 0x2d1420: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1424u;
        goto label_2d1424;
    }
    ctx->pc = 0x2D141Cu;
    SET_GPR_U32(ctx, 31, 0x2D1424u);
    ctx->pc = 0x2D1420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D141Cu;
    // 0x2d1420: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2D141Cu, 0x2D1424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1424u;
label_2d1424:
    // 0x2d1424: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x2d1424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
label_2d1428:
    // 0x2d1428: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d1428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d142c:
    // 0x2d142c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d142cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d1430:
    // 0x2d1430: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x2d1430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_2d1434:
    // 0x2d1434: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d1438:
    // 0x2d1438: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2d1438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_2d143c:
    // 0x2d143c: 0x26250078  addiu       $a1, $s1, 0x78
    ctx->pc = 0x2d143cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2d1440:
    // 0x2d1440: 0xc0fb45a  jal         func_3ED168
label_2d1444:
    if (ctx->pc == 0x2D1444u) {
        ctx->pc = 0x2D1444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1440u;
        // 0x2d1444: 0x26270088  addiu       $a3, $s1, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1448u;
        goto label_2d1448;
    }
    ctx->pc = 0x2D1440u;
    SET_GPR_U32(ctx, 31, 0x2D1448u);
    ctx->pc = 0x2D1444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1440u;
    // 0x2d1444: 0x26270088  addiu       $a3, $s1, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ED168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ED168u, 0x2D1440u, 0x2D1448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1448u;
label_2d1448:
    // 0x2d1448: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d144c:
    // 0x2d144c: 0x2625008c  addiu       $a1, $s1, 0x8C
    ctx->pc = 0x2d144cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 140));
label_2d1450:
    // 0x2d1450: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d1450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d1454:
    // 0x2d1454: 0xc0fb45a  jal         func_3ED168
label_2d1458:
    if (ctx->pc == 0x2D1458u) {
        ctx->pc = 0x2D1458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1454u;
        // 0x2d1458: 0x2627009c  addiu       $a3, $s1, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 156));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D145Cu;
        goto label_2d145c;
    }
    ctx->pc = 0x2D1454u;
    SET_GPR_U32(ctx, 31, 0x2D145Cu);
    ctx->pc = 0x2D1458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1454u;
    // 0x2d1458: 0x2627009c  addiu       $a3, $s1, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ED168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ED168u, 0x2D1454u, 0x2D145Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D145Cu;
label_2d145c:
    // 0x2d145c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2d145cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2d1460:
    // 0x2d1460: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d1464:
    // 0x2d1464: 0x262500b4  addiu       $a1, $s1, 0xB4
    ctx->pc = 0x2d1464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 180));
label_2d1468:
    // 0x2d1468: 0xc0fb4fe  jal         func_3ED3F8
label_2d146c:
    if (ctx->pc == 0x2D146Cu) {
        ctx->pc = 0x2D146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1468u;
        // 0x2d146c: 0x262700c4  addiu       $a3, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1470u;
        goto label_2d1470;
    }
    ctx->pc = 0x2D1468u;
    SET_GPR_U32(ctx, 31, 0x2D1470u);
    ctx->pc = 0x2D146Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1468u;
    // 0x2d146c: 0x262700c4  addiu       $a3, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ED3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ED3F8u, 0x2D1468u, 0x2D1470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1470u;
label_2d1470:
    // 0x2d1470: 0x27a60064  addiu       $a2, $sp, 0x64
    ctx->pc = 0x2d1470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_2d1474:
    // 0x2d1474: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d1478:
    // 0x2d1478: 0x262500a0  addiu       $a1, $s1, 0xA0
    ctx->pc = 0x2d1478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_2d147c:
    // 0x2d147c: 0xc0fb4fe  jal         func_3ED3F8
label_2d1480:
    if (ctx->pc == 0x2D1480u) {
        ctx->pc = 0x2D1480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D147Cu;
        // 0x2d1480: 0x262700b0  addiu       $a3, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1484u;
        goto label_2d1484;
    }
    ctx->pc = 0x2D147Cu;
    SET_GPR_U32(ctx, 31, 0x2D1484u);
    ctx->pc = 0x2D1480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D147Cu;
    // 0x2d1480: 0x262700b0  addiu       $a3, $s1, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ED3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ED3F8u, 0x2D147Cu, 0x2D1484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1484u;
label_2d1484:
    // 0x2d1484: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d1488:
    // 0x2d1488: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d1488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d148c:
    // 0x2d148c: 0xc0b490a  jal         func_2D2428
label_2d1490:
    if (ctx->pc == 0x2D1490u) {
        ctx->pc = 0x2D1490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D148Cu;
        // 0x2d1490: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1494u;
        goto label_2d1494;
    }
    ctx->pc = 0x2D148Cu;
    SET_GPR_U32(ctx, 31, 0x2D1494u);
    ctx->pc = 0x2D1490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D148Cu;
    // 0x2d1490: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2428u, 0x2D148Cu, 0x2D1494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1494u;
label_2d1494:
    // 0x2d1494: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2d1494u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2d1498:
    // 0x2d1498: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x2d1498u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d149c:
    // 0x2d149c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2d149cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2d14a0:
    // 0x2d14a0: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2d14a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_2d14a4:
    // 0x2d14a4: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x2d14a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2d14a8:
    // 0x2d14a8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2d14a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2d14ac:
    // 0x2d14ac: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2d14acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d14b0:
    // 0x2d14b0: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x2d14b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d14b4:
    // 0x2d14b4: 0xc7a2004c  lwc1        $f2, 0x4C($sp)
    ctx->pc = 0x2d14b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2d14b8:
    // 0x2d14b8: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x2d14b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2d14bc:
    // 0x2d14bc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2d14bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_2d14c0:
    // 0x2d14c0: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x2d14c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2d14c4:
    // 0x2d14c4: 0xe7a2003c  swc1        $f2, 0x3C($sp)
    ctx->pc = 0x2d14c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_2d14c8:
    // 0x2d14c8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2d14c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2d14cc:
    // 0x2d14cc: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2d14ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_2d14d0:
    // 0x2d14d0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2d14d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d14d4:
    // 0x2d14d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d14d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d14d8:
    // 0x2d14d8: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x2d14d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_2d14dc:
    // 0x2d14dc: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x2d14dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_2d14e0:
    // 0x2d14e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d14e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2d14e4:
    // 0x2d14e4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2d14e4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_2d14e8:
    // 0x2d14e8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d14e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d14ec:
    // 0x2d14ec: 0x0  nop
    ctx->pc = 0x2d14ecu;
    // NOP
label_2d14f0:
    // 0x2d14f0: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_2d14f4:
    if (ctx->pc == 0x2D14F4u) {
        ctx->pc = 0x2D14F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D14F0u;
        // 0x2d14f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D14F8u;
        goto label_2d14f8;
    }
    ctx->pc = 0x2D14F0u;
    {
        const bool branch_taken_0x2d14f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D14F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D14F0u;
        // 0x2d14f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d14f0) {
            ctx->pc = 0x2D1524u;
            goto label_2d1524;
        }
    }
    ctx->pc = 0x2D14F8u;
label_2d14f8:
    // 0x2d14f8: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2d14f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d14fc:
    // 0x2d14fc: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2d14fcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_2d1500:
    // 0x2d1500: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d1500u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d1504:
    // 0x2d1504: 0x0  nop
    ctx->pc = 0x2d1504u;
    // NOP
label_2d1508:
    // 0x2d1508: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2d150c:
    if (ctx->pc == 0x2D150Cu) {
        ctx->pc = 0x2D150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1508u;
        // 0x2d150c: 0xc7a00028  lwc1        $f0, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1510u;
        goto label_2d1510;
    }
    ctx->pc = 0x2D1508u;
    {
        const bool branch_taken_0x2d1508 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1508u;
        // 0x2d150c: 0xc7a00028  lwc1        $f0, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1508) {
            ctx->pc = 0x2D1524u;
            goto label_2d1524;
        }
    }
    ctx->pc = 0x2D1510u;
label_2d1510:
    // 0x2d1510: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2d1510u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_2d1514:
    // 0x2d1514: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d1514u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d1518:
    // 0x2d1518: 0x0  nop
    ctx->pc = 0x2d1518u;
    // NOP
label_2d151c:
    // 0x2d151c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2d1520:
    if (ctx->pc == 0x2D1520u) {
        ctx->pc = 0x2D1520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D151Cu;
        // 0x2d1520: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1524u;
        goto label_2d1524;
    }
    ctx->pc = 0x2D151Cu;
    {
        const bool branch_taken_0x2d151c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d151c) {
            ctx->pc = 0x2D1520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D151Cu;
            // 0x2d1520: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1524u;
            goto label_2d1524;
        }
    }
    ctx->pc = 0x2D1524u;
label_2d1524:
    // 0x2d1524: 0x144000d6  bnez        $v0, . + 4 + (0xD6 << 2)
label_2d1528:
    if (ctx->pc == 0x2D1528u) {
        ctx->pc = 0x2D1528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1524u;
        // 0x2d1528: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D152Cu;
        goto label_2d152c;
    }
    ctx->pc = 0x2D1524u;
    {
        const bool branch_taken_0x2d1524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1524u;
        // 0x2d1528: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1524) {
            ctx->pc = 0x2D1880u;
            goto label_2d1880;
        }
    }
    ctx->pc = 0x2D152Cu;
label_2d152c:
    // 0x2d152c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2d152cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2d1530:
    // 0x2d1530: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2d1530u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2d1534:
    // 0x2d1534: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2d1534u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2d1538:
    // 0x2d1538: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2d1538u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2d153c:
    // 0x2d153c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2d153cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2d1540:
    // 0x2d1540: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2d1540u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_2d1544:
    // 0x2d1544: 0x4a0003bf  vwaitq
    ctx->pc = 0x2d1544u;
    // VWAITQ (Q already resolved in this runtime)
label_2d1548:
    // 0x2d1548: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2d1548u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2d154c:
    // 0x2d154c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2d154cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_2d1550:
    // 0x2d1550: 0x8e830100  lw          $v1, 0x100($s4)
    ctx->pc = 0x2d1550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 256)));
label_2d1554:
    // 0x2d1554: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x2d1554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_2d1558:
    // 0x2d1558: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2d1558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_2d155c:
    // 0x2d155c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2d155cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2d1560:
    // 0x2d1560: 0xf8610060  sqc2        $vf1, 0x60($v1)
    ctx->pc = 0x2d1560u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_2d1564:
    // 0x2d1564: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x2d1564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_2d1568:
    // 0x2d1568: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x2d1568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2d156c:
    // 0x2d156c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d156cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2d1570:
    // 0x2d1570: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d1570u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d1574:
    // 0x2d1574: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2d1574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2d1578:
    // 0x2d1578: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2d1578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_2d157c:
    // 0x2d157c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2d157cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_2d1580:
    // 0x2d1580: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x2d1580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_2d1584:
    // 0x2d1584: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x2d1584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_2d1588:
    // 0x2d1588: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2d1588u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2d158c:
    // 0x2d158c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2d158cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2d1590:
    // 0x2d1590: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2d1590u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2d1594:
    // 0x2d1594: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x2d1594u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2d1598:
    // 0x2d1598: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2d1598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_2d159c:
    // 0x2d159c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2d159cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d15a0:
    // 0x2d15a0: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2d15a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2d15a4:
    // 0x2d15a4: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x2d15a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_2d15a8:
    // 0x2d15a8: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x2d15a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_2d15ac:
    // 0x2d15ac: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2d15acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2d15b0:
    // 0x2d15b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d15b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d15b4:
    // 0x2d15b4: 0x46000085  abs.s       $f2, $f0
    ctx->pc = 0x2d15b4u;
    ctx->f[2] = FPU_ABS_S(ctx->f[0]);
label_2d15b8:
    // 0x2d15b8: 0xc7a40054  lwc1        $f4, 0x54($sp)
    ctx->pc = 0x2d15b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2d15bc:
    // 0x2d15bc: 0xc7a50058  lwc1        $f5, 0x58($sp)
    ctx->pc = 0x2d15bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2d15c0:
    // 0x2d15c0: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x2d15c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d15c4:
    // 0x2d15c4: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x2d15c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d15c8:
    // 0x2d15c8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2d15c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2d15cc:
    // 0x2d15cc: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x2d15ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_2d15d0:
    // 0x2d15d0: 0xe7a40034  swc1        $f4, 0x34($sp)
    ctx->pc = 0x2d15d0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_2d15d4:
    // 0x2d15d4: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_2d15d8:
    if (ctx->pc == 0x2D15D8u) {
        ctx->pc = 0x2D15D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D15D4u;
        // 0x2d15d8: 0xe7a50038  swc1        $f5, 0x38($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D15DCu;
        goto label_2d15dc;
    }
    ctx->pc = 0x2D15D4u;
    {
        const bool branch_taken_0x2d15d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D15D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D15D4u;
        // 0x2d15d8: 0xe7a50038  swc1        $f5, 0x38($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d15d4) {
            ctx->pc = 0x2D1604u;
            goto label_2d1604;
        }
    }
    ctx->pc = 0x2D15DCu;
label_2d15dc:
    // 0x2d15dc: 0x46002005  abs.s       $f0, $f4
    ctx->pc = 0x2d15dcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[4]);
label_2d15e0:
    // 0x2d15e0: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x2d15e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d15e4:
    // 0x2d15e4: 0x0  nop
    ctx->pc = 0x2d15e4u;
    // NOP
label_2d15e8:
    // 0x2d15e8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2d15ec:
    if (ctx->pc == 0x2D15ECu) {
        ctx->pc = 0x2D15F0u;
        goto label_2d15f0;
    }
    ctx->pc = 0x2D15E8u;
    {
        const bool branch_taken_0x2d15e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d15e8) {
            ctx->pc = 0x2D1604u;
            goto label_2d1604;
        }
    }
    ctx->pc = 0x2D15F0u;
label_2d15f0:
    // 0x2d15f0: 0x46002805  abs.s       $f0, $f5
    ctx->pc = 0x2d15f0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[5]);
label_2d15f4:
    // 0x2d15f4: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x2d15f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d15f8:
    // 0x2d15f8: 0x0  nop
    ctx->pc = 0x2d15f8u;
    // NOP
label_2d15fc:
    // 0x2d15fc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2d1600:
    if (ctx->pc == 0x2D1600u) {
        ctx->pc = 0x2D1600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D15FCu;
        // 0x2d1600: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1604u;
        goto label_2d1604;
    }
    ctx->pc = 0x2D15FCu;
    {
        const bool branch_taken_0x2d15fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d15fc) {
            ctx->pc = 0x2D1600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D15FCu;
            // 0x2d1600: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1604u;
            goto label_2d1604;
        }
    }
    ctx->pc = 0x2D1604u;
label_2d1604:
    // 0x2d1604: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_2d1608:
    if (ctx->pc == 0x2D1608u) {
        ctx->pc = 0x2D1608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1604u;
        // 0x2d1608: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D160Cu;
        goto label_2d160c;
    }
    ctx->pc = 0x2D1604u;
    {
        const bool branch_taken_0x2d1604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1604) {
            ctx->pc = 0x2D1608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1604u;
            // 0x2d1608: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1630u;
            goto label_2d1630;
        }
    }
    ctx->pc = 0x2D160Cu;
label_2d160c:
    // 0x2d160c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2d160cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2d1610:
    // 0x2d1610: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2d1610u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2d1614:
    // 0x2d1614: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2d1614u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2d1618:
    // 0x2d1618: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2d1618u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2d161c:
    // 0x2d161c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2d161cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_2d1620:
    // 0x2d1620: 0x4a0003bf  vwaitq
    ctx->pc = 0x2d1620u;
    // VWAITQ (Q already resolved in this runtime)
label_2d1624:
    // 0x2d1624: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2d1624u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2d1628:
    // 0x2d1628: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2d1628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_2d162c:
    // 0x2d162c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2d162cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2d1630:
    // 0x2d1630: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2d1630u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2d1634:
    // 0x2d1634: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2d1634u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_2d1638:
    // 0x2d1638: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2d1638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2d163c:
    // 0x2d163c: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x2d163cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_2d1640:
    // 0x2d1640: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2d1640u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2d1644:
    // 0x2d1644: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x2d1644u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2d1648:
    // 0x2d1648: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2d1648u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2d164c:
    // 0x2d164c: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x2d164cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2d1650:
    // 0x2d1650: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2d1650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_2d1654:
    // 0x2d1654: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2d1654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d1658:
    // 0x2d1658: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2d1658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d165c:
    // 0x2d165c: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x2d165cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2d1660:
    // 0x2d1660: 0xc7a3005c  lwc1        $f3, 0x5C($sp)
    ctx->pc = 0x2d1660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2d1664:
    // 0x2d1664: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2d1664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2d1668:
    // 0x2d1668: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2d1668u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2d166c:
    // 0x2d166c: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x2d166cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_2d1670:
    // 0x2d1670: 0xe7a3004c  swc1        $f3, 0x4C($sp)
    ctx->pc = 0x2d1670u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_2d1674:
    // 0x2d1674: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2d1674u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2d1678:
    // 0x2d1678: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2d1678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_2d167c:
    // 0x2d167c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2d167cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d1680:
    // 0x2d1680: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x2d1680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_2d1684:
    // 0x2d1684: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x2d1684u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_2d1688:
    // 0x2d1688: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d1688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2d168c:
    // 0x2d168c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2d168cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_2d1690:
    // 0x2d1690: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d1690u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d1694:
    // 0x2d1694: 0x0  nop
    ctx->pc = 0x2d1694u;
    // NOP
label_2d1698:
    // 0x2d1698: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_2d169c:
    if (ctx->pc == 0x2D169Cu) {
        ctx->pc = 0x2D169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1698u;
        // 0x2d169c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D16A0u;
        goto label_2d16a0;
    }
    ctx->pc = 0x2D1698u;
    {
        const bool branch_taken_0x2d1698 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1698u;
        // 0x2d169c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1698) {
            ctx->pc = 0x2D16CCu;
            goto label_2d16cc;
        }
    }
    ctx->pc = 0x2D16A0u;
label_2d16a0:
    // 0x2d16a0: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2d16a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d16a4:
    // 0x2d16a4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2d16a4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_2d16a8:
    // 0x2d16a8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d16a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d16ac:
    // 0x2d16ac: 0x0  nop
    ctx->pc = 0x2d16acu;
    // NOP
label_2d16b0:
    // 0x2d16b0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2d16b4:
    if (ctx->pc == 0x2D16B4u) {
        ctx->pc = 0x2D16B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D16B0u;
        // 0x2d16b4: 0xc7a00038  lwc1        $f0, 0x38($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D16B8u;
        goto label_2d16b8;
    }
    ctx->pc = 0x2D16B0u;
    {
        const bool branch_taken_0x2d16b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D16B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D16B0u;
        // 0x2d16b4: 0xc7a00038  lwc1        $f0, 0x38($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d16b0) {
            ctx->pc = 0x2D16CCu;
            goto label_2d16cc;
        }
    }
    ctx->pc = 0x2D16B8u;
label_2d16b8:
    // 0x2d16b8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2d16b8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_2d16bc:
    // 0x2d16bc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d16bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d16c0:
    // 0x2d16c0: 0x0  nop
    ctx->pc = 0x2d16c0u;
    // NOP
label_2d16c4:
    // 0x2d16c4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2d16c8:
    if (ctx->pc == 0x2D16C8u) {
        ctx->pc = 0x2D16C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D16C4u;
        // 0x2d16c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D16CCu;
        goto label_2d16cc;
    }
    ctx->pc = 0x2D16C4u;
    {
        const bool branch_taken_0x2d16c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d16c4) {
            ctx->pc = 0x2D16C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D16C4u;
            // 0x2d16c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D16CCu;
            goto label_2d16cc;
        }
    }
    ctx->pc = 0x2D16CCu;
label_2d16cc:
    // 0x2d16cc: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_2d16d0:
    if (ctx->pc == 0x2D16D0u) {
        ctx->pc = 0x2D16D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D16CCu;
        // 0x2d16d0: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D16D4u;
        goto label_2d16d4;
    }
    ctx->pc = 0x2D16CCu;
    {
        const bool branch_taken_0x2d16cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d16cc) {
            ctx->pc = 0x2D16D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D16CCu;
            // 0x2d16d0: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D16F8u;
            goto label_2d16f8;
        }
    }
    ctx->pc = 0x2D16D4u;
label_2d16d4:
    // 0x2d16d4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2d16d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2d16d8:
    // 0x2d16d8: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2d16d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2d16dc:
    // 0x2d16dc: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2d16dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2d16e0:
    // 0x2d16e0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2d16e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2d16e4:
    // 0x2d16e4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2d16e4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_2d16e8:
    // 0x2d16e8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2d16e8u;
    // VWAITQ (Q already resolved in this runtime)
label_2d16ec:
    // 0x2d16ec: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2d16ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2d16f0:
    // 0x2d16f0: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2d16f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_2d16f4:
    // 0x2d16f4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2d16f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2d16f8:
    // 0x2d16f8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2d16f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2d16fc:
    // 0x2d16fc: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x2d16fcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2d1700:
    // 0x2d1700: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2d1700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2d1704:
    // 0x2d1704: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x2d1704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_2d1708:
    // 0x2d1708: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2d1708u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d170c:
    // 0x2d170c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2d170cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2d1710:
    // 0x2d1710: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2d1710u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2d1714:
    // 0x2d1714: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2d1714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_2d1718:
    // 0x2d1718: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2d1718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d171c:
    // 0x2d171c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2d171cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d1720:
    // 0x2d1720: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x2d1720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2d1724:
    // 0x2d1724: 0xc7a3005c  lwc1        $f3, 0x5C($sp)
    ctx->pc = 0x2d1724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2d1728:
    // 0x2d1728: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2d1728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2d172c:
    // 0x2d172c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2d172cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2d1730:
    // 0x2d1730: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x2d1730u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_2d1734:
    // 0x2d1734: 0xe7a3004c  swc1        $f3, 0x4C($sp)
    ctx->pc = 0x2d1734u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_2d1738:
    // 0x2d1738: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2d1738u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2d173c:
    // 0x2d173c: 0xf8610030  sqc2        $vf1, 0x30($v1)
    ctx->pc = 0x2d173cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_2d1740:
    // 0x2d1740: 0x92220038  lbu         $v0, 0x38($s1)
    ctx->pc = 0x2d1740u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 56)));
label_2d1744:
    // 0x2d1744: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2d1748:
    if (ctx->pc == 0x2D1748u) {
        ctx->pc = 0x2D1748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1744u;
        // 0x2d1748: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D174Cu;
        goto label_2d174c;
    }
    ctx->pc = 0x2D1744u;
    {
        const bool branch_taken_0x2d1744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1744u;
        // 0x2d1748: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1744) {
            ctx->pc = 0x2D1774u;
            goto label_2d1774;
        }
    }
    ctx->pc = 0x2D174Cu;
label_2d174c:
    // 0x2d174c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d174cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d1750:
    // 0x2d1750: 0x8c44bd50  lw          $a0, -0x42B0($v0)
    ctx->pc = 0x2d1750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
label_2d1754:
    // 0x2d1754: 0xc0b906c  jal         func_2E41B0
label_2d1758:
    if (ctx->pc == 0x2D1758u) {
        ctx->pc = 0x2D1758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1754u;
        // 0x2d1758: 0x2484117c  addiu       $a0, $a0, 0x117C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4476));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D175Cu;
        goto label_2d175c;
    }
    ctx->pc = 0x2D1754u;
    SET_GPR_U32(ctx, 31, 0x2D175Cu);
    ctx->pc = 0x2D1758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1754u;
    // 0x2d1758: 0x2484117c  addiu       $a0, $a0, 0x117C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4476));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E41B0u, 0x2D1754u, 0x2D175Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D175Cu;
label_2d175c:
    // 0x2d175c: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x2d175cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_2d1760:
    // 0x2d1760: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2d1760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2d1764:
    // 0x2d1764: 0xc0b8f6e  jal         func_2E3DB8
label_2d1768:
    if (ctx->pc == 0x2D1768u) {
        ctx->pc = 0x2D1768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1764u;
        // 0x2d1768: 0x24845870  addiu       $a0, $a0, 0x5870 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D176Cu;
        goto label_2d176c;
    }
    ctx->pc = 0x2D1764u;
    SET_GPR_U32(ctx, 31, 0x2D176Cu);
    ctx->pc = 0x2D1768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1764u;
    // 0x2d1768: 0x24845870  addiu       $a0, $a0, 0x5870 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3DB8u, 0x2D1764u, 0x2D176Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D176Cu;
label_2d176c:
    // 0x2d176c: 0x10000005  b           . + 4 + (0x5 << 2)
label_2d1770:
    if (ctx->pc == 0x2D1770u) {
        ctx->pc = 0x2D1774u;
        goto label_2d1774;
    }
    ctx->pc = 0x2D176Cu;
    {
        const bool branch_taken_0x2d176c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d176c) {
            ctx->pc = 0x2D1784u;
            goto label_2d1784;
        }
    }
    ctx->pc = 0x2D1774u;
label_2d1774:
    // 0x2d1774: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d1774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d1778:
    // 0x2d1778: 0x8c44bd50  lw          $a0, -0x42B0($v0)
    ctx->pc = 0x2d1778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
label_2d177c:
    // 0x2d177c: 0xc0b906c  jal         func_2E41B0
label_2d1780:
    if (ctx->pc == 0x2D1780u) {
        ctx->pc = 0x2D1780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D177Cu;
        // 0x2d1780: 0x2484117c  addiu       $a0, $a0, 0x117C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4476));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1784u;
        goto label_2d1784;
    }
    ctx->pc = 0x2D177Cu;
    SET_GPR_U32(ctx, 31, 0x2D1784u);
    ctx->pc = 0x2D1780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D177Cu;
    // 0x2d1780: 0x2484117c  addiu       $a0, $a0, 0x117C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4476));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E41B0u, 0x2D177Cu, 0x2D1784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1784u;
label_2d1784:
    // 0x2d1784: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d1784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2d1788:
    // 0x2d1788: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d1788u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d178c:
    // 0x2d178c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d178cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d1790:
    // 0x2d1790: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2d1790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2d1794:
    // 0x2d1794: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x2d1794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2d1798:
    // 0x2d1798: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2d1798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_2d179c:
    // 0x2d179c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x2d179cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_2d17a0:
    // 0x2d17a0: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x2d17a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_2d17a4:
    // 0x2d17a4: 0xc0b15d0  jal         func_2C5740
label_2d17a8:
    if (ctx->pc == 0x2D17A8u) {
        ctx->pc = 0x2D17A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D17A4u;
        // 0x2d17a8: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D17ACu;
        goto label_2d17ac;
    }
    ctx->pc = 0x2D17A4u;
    SET_GPR_U32(ctx, 31, 0x2D17ACu);
    ctx->pc = 0x2D17A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D17A4u;
    // 0x2d17a8: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5740u, 0x2D17A4u, 0x2D17ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D17ACu;
label_2d17ac:
    // 0x2d17ac: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x2d17acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d17b0:
    // 0x2d17b0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2d17b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2d17b4:
    // 0x2d17b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d17b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d17b8:
    // 0x2d17b8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2d17b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2d17bc:
    // 0x2d17bc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d17bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2d17c0:
    // 0x2d17c0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2d17c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2d17c4:
    // 0x2d17c4: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x2d17c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
label_2d17c8:
    // 0x2d17c8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2d17c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2d17cc:
    // 0x2d17cc: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x2d17ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_2d17d0:
    // 0x2d17d0: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x2d17d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_2d17d4:
    // 0x2d17d4: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2d17d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d17d8:
    // 0x2d17d8: 0x0  nop
    ctx->pc = 0x2d17d8u;
    // NOP
label_2d17dc:
    // 0x2d17dc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2d17e0:
    if (ctx->pc == 0x2D17E0u) {
        ctx->pc = 0x2D17E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D17DCu;
        // 0x2d17e0: 0xe7a10060  swc1        $f1, 0x60($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D17E4u;
        goto label_2d17e4;
    }
    ctx->pc = 0x2D17DCu;
    {
        const bool branch_taken_0x2d17dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D17E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D17DCu;
        // 0x2d17e0: 0xe7a10060  swc1        $f1, 0x60($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d17dc) {
            ctx->pc = 0x2D17ECu;
            goto label_2d17ec;
        }
    }
    ctx->pc = 0x2D17E4u;
label_2d17e4:
    // 0x2d17e4: 0x10000005  b           . + 4 + (0x5 << 2)
label_2d17e8:
    if (ctx->pc == 0x2D17E8u) {
        ctx->pc = 0x2D17E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D17E4u;
        // 0x2d17e8: 0xe7a20060  swc1        $f2, 0x60($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D17ECu;
        goto label_2d17ec;
    }
    ctx->pc = 0x2D17E4u;
    {
        const bool branch_taken_0x2d17e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D17E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D17E4u;
        // 0x2d17e8: 0xe7a20060  swc1        $f2, 0x60($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d17e4) {
            ctx->pc = 0x2D17FCu;
            goto label_2d17fc;
        }
    }
    ctx->pc = 0x2D17ECu;
label_2d17ec:
    // 0x2d17ec: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x2d17ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d17f0:
    // 0x2d17f0: 0x0  nop
    ctx->pc = 0x2d17f0u;
    // NOP
label_2d17f4:
    // 0x2d17f4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2d17f8:
    if (ctx->pc == 0x2D17F8u) {
        ctx->pc = 0x2D17F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D17F4u;
        // 0x2d17f8: 0xe7a30060  swc1        $f3, 0x60($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D17FCu;
        goto label_2d17fc;
    }
    ctx->pc = 0x2D17F4u;
    {
        const bool branch_taken_0x2d17f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d17f4) {
            ctx->pc = 0x2D17F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D17F4u;
            // 0x2d17f8: 0xe7a30060  swc1        $f3, 0x60($sp) (Delay Slot)
            { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D17FCu;
            goto label_2d17fc;
        }
    }
    ctx->pc = 0x2D17FCu;
label_2d17fc:
    // 0x2d17fc: 0xc7ac0060  lwc1        $f12, 0x60($sp)
    ctx->pc = 0x2d17fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2d1800:
    // 0x2d1800: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2d1800u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_2d1804:
    // 0x2d1804: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x2d1804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_2d1808:
    // 0x2d1808: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x2d1808u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_2d180c:
    // 0x2d180c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2d180cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2d1810:
    // 0x2d1810: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x2d1810u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
label_2d1814:
    // 0x2d1814: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x2d1814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_2d1818:
    // 0x2d1818: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x2d1818u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_2d181c:
    // 0x2d181c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2d181cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2d1820:
    // 0x2d1820: 0xc0e3fd4  jal         func_38FF50
label_2d1824:
    if (ctx->pc == 0x2D1824u) {
        ctx->pc = 0x2D1824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1820u;
        // 0x2d1824: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1828u;
        goto label_2d1828;
    }
    ctx->pc = 0x2D1820u;
    SET_GPR_U32(ctx, 31, 0x2D1828u);
    ctx->pc = 0x2D1824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1820u;
    // 0x2d1824: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FF50u, 0x2D1820u, 0x2D1828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1828u;
label_2d1828:
    // 0x2d1828: 0xc7ac0060  lwc1        $f12, 0x60($sp)
    ctx->pc = 0x2d1828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2d182c:
    // 0x2d182c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2d182cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_2d1830:
    // 0x2d1830: 0xc0e3fd4  jal         func_38FF50
label_2d1834:
    if (ctx->pc == 0x2D1834u) {
        ctx->pc = 0x2D1834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1830u;
        // 0x2d1834: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1838u;
        goto label_2d1838;
    }
    ctx->pc = 0x2D1830u;
    SET_GPR_U32(ctx, 31, 0x2D1838u);
    ctx->pc = 0x2D1834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1830u;
    // 0x2d1834: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FF50u, 0x2D1830u, 0x2D1838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1838u;
label_2d1838:
    // 0x2d1838: 0x3c013f10  lui         $at, 0x3F10
    ctx->pc = 0x2d1838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16144 << 16));
label_2d183c:
    // 0x2d183c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d183cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2d1840:
    // 0x2d1840: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x2d1840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2d1844:
    // 0x2d1844: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d1844u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2d1848:
    // 0x2d1848: 0xe68200e0  swc1        $f2, 0xE0($s4)
    ctx->pc = 0x2d1848u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 224), bits); }
label_2d184c:
    // 0x2d184c: 0x46001306  mov.s       $f12, $f2
    ctx->pc = 0x2d184cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[2]);
label_2d1850:
    // 0x2d1850: 0xe68000e4  swc1        $f0, 0xE4($s4)
    ctx->pc = 0x2d1850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 228), bits); }
label_2d1854:
    // 0x2d1854: 0xc0e3e70  jal         func_38F9C0
label_2d1858:
    if (ctx->pc == 0x2D1858u) {
        ctx->pc = 0x2D1858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1854u;
        // 0x2d1858: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D185Cu;
        goto label_2d185c;
    }
    ctx->pc = 0x2D1854u;
    SET_GPR_U32(ctx, 31, 0x2D185Cu);
    ctx->pc = 0x2D1858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1854u;
    // 0x2d1858: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F9C0u, 0x2D1854u, 0x2D185Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D185Cu;
label_2d185c:
    // 0x2d185c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2d185cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_2d1860:
    // 0x2d1860: 0xc7ac0054  lwc1        $f12, 0x54($sp)
    ctx->pc = 0x2d1860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2d1864:
    // 0x2d1864: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2d1864u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2d1868:
    // 0x2d1868: 0xc0e3e70  jal         func_38F9C0
label_2d186c:
    if (ctx->pc == 0x2D186Cu) {
        ctx->pc = 0x2D186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1868u;
        // 0x2d186c: 0xe600bb7c  swc1        $f0, -0x4484($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294949756), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1870u;
        goto label_2d1870;
    }
    ctx->pc = 0x2D1868u;
    SET_GPR_U32(ctx, 31, 0x2D1870u);
    ctx->pc = 0x2D186Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1868u;
    // 0x2d186c: 0xe600bb7c  swc1        $f0, -0x4484($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294949756), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F9C0u, 0x2D1868u, 0x2D1870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1870u;
label_2d1870:
    // 0x2d1870: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2d1870u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_2d1874:
    // 0x2d1874: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d1874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d1878:
    // 0x2d1878: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2d1878u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2d187c:
    // 0x2d187c: 0xe620bb80  swc1        $f0, -0x4480($s1)
    ctx->pc = 0x2d187cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294949760), bits); }
label_2d1880:
    // 0x2d1880: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2d1880u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2d1884:
    // 0x2d1884: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x2d1884u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_2d1888:
    // 0x2d1888: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x2d1888u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2d188c:
    // 0x2d188c: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x2d188cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_2d1890:
    // 0x2d1890: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x2d1890u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2d1894:
    // 0x2d1894: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x2d1894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_2d1898:
    // 0x2d1898: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x2d1898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2d189c:
    // 0x2d189c: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2d189cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2d18a0:
    // 0x2d18a0: 0x3e00008  jr          $ra
label_2d18a4:
    if (ctx->pc == 0x2D18A4u) {
        ctx->pc = 0x2D18A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D18A0u;
        // 0x2d18a4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D18A8u;
        goto label_fallthrough_0x2d18a0;
    }
    ctx->pc = 0x2D18A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D18A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D18A0u;
        // 0x2d18a4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D18A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d18a0:
    ctx->pc = 0x2D18A8u;
}
