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

// Function: sub_003A1378
// Address: 0x3a1378 - 0x3a18c0
void sub_003A1378_0x3a1378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A1378_0x3a1378");
#endif

    switch (ctx->pc) {
        case 0x3a1378u: goto label_3a1378;
        case 0x3a137cu: goto label_3a137c;
        case 0x3a1380u: goto label_3a1380;
        case 0x3a1384u: goto label_3a1384;
        case 0x3a1388u: goto label_3a1388;
        case 0x3a138cu: goto label_3a138c;
        case 0x3a1390u: goto label_3a1390;
        case 0x3a1394u: goto label_3a1394;
        case 0x3a1398u: goto label_3a1398;
        case 0x3a139cu: goto label_3a139c;
        case 0x3a13a0u: goto label_3a13a0;
        case 0x3a13a4u: goto label_3a13a4;
        case 0x3a13a8u: goto label_3a13a8;
        case 0x3a13acu: goto label_3a13ac;
        case 0x3a13b0u: goto label_3a13b0;
        case 0x3a13b4u: goto label_3a13b4;
        case 0x3a13b8u: goto label_3a13b8;
        case 0x3a13bcu: goto label_3a13bc;
        case 0x3a13c0u: goto label_3a13c0;
        case 0x3a13c4u: goto label_3a13c4;
        case 0x3a13c8u: goto label_3a13c8;
        case 0x3a13ccu: goto label_3a13cc;
        case 0x3a13d0u: goto label_3a13d0;
        case 0x3a13d4u: goto label_3a13d4;
        case 0x3a13d8u: goto label_3a13d8;
        case 0x3a13dcu: goto label_3a13dc;
        case 0x3a13e0u: goto label_3a13e0;
        case 0x3a13e4u: goto label_3a13e4;
        case 0x3a13e8u: goto label_3a13e8;
        case 0x3a13ecu: goto label_3a13ec;
        case 0x3a13f0u: goto label_3a13f0;
        case 0x3a13f4u: goto label_3a13f4;
        case 0x3a13f8u: goto label_3a13f8;
        case 0x3a13fcu: goto label_3a13fc;
        case 0x3a1400u: goto label_3a1400;
        case 0x3a1404u: goto label_3a1404;
        case 0x3a1408u: goto label_3a1408;
        case 0x3a140cu: goto label_3a140c;
        case 0x3a1410u: goto label_3a1410;
        case 0x3a1414u: goto label_3a1414;
        case 0x3a1418u: goto label_3a1418;
        case 0x3a141cu: goto label_3a141c;
        case 0x3a1420u: goto label_3a1420;
        case 0x3a1424u: goto label_3a1424;
        case 0x3a1428u: goto label_3a1428;
        case 0x3a142cu: goto label_3a142c;
        case 0x3a1430u: goto label_3a1430;
        case 0x3a1434u: goto label_3a1434;
        case 0x3a1438u: goto label_3a1438;
        case 0x3a143cu: goto label_3a143c;
        case 0x3a1440u: goto label_3a1440;
        case 0x3a1444u: goto label_3a1444;
        case 0x3a1448u: goto label_3a1448;
        case 0x3a144cu: goto label_3a144c;
        case 0x3a1450u: goto label_3a1450;
        case 0x3a1454u: goto label_3a1454;
        case 0x3a1458u: goto label_3a1458;
        case 0x3a145cu: goto label_3a145c;
        case 0x3a1460u: goto label_3a1460;
        case 0x3a1464u: goto label_3a1464;
        case 0x3a1468u: goto label_3a1468;
        case 0x3a146cu: goto label_3a146c;
        case 0x3a1470u: goto label_3a1470;
        case 0x3a1474u: goto label_3a1474;
        case 0x3a1478u: goto label_3a1478;
        case 0x3a147cu: goto label_3a147c;
        case 0x3a1480u: goto label_3a1480;
        case 0x3a1484u: goto label_3a1484;
        case 0x3a1488u: goto label_3a1488;
        case 0x3a148cu: goto label_3a148c;
        case 0x3a1490u: goto label_3a1490;
        case 0x3a1494u: goto label_3a1494;
        case 0x3a1498u: goto label_3a1498;
        case 0x3a149cu: goto label_3a149c;
        case 0x3a14a0u: goto label_3a14a0;
        case 0x3a14a4u: goto label_3a14a4;
        case 0x3a14a8u: goto label_3a14a8;
        case 0x3a14acu: goto label_3a14ac;
        case 0x3a14b0u: goto label_3a14b0;
        case 0x3a14b4u: goto label_3a14b4;
        case 0x3a14b8u: goto label_3a14b8;
        case 0x3a14bcu: goto label_3a14bc;
        case 0x3a14c0u: goto label_3a14c0;
        case 0x3a14c4u: goto label_3a14c4;
        case 0x3a14c8u: goto label_3a14c8;
        case 0x3a14ccu: goto label_3a14cc;
        case 0x3a14d0u: goto label_3a14d0;
        case 0x3a14d4u: goto label_3a14d4;
        case 0x3a14d8u: goto label_3a14d8;
        case 0x3a14dcu: goto label_3a14dc;
        case 0x3a14e0u: goto label_3a14e0;
        case 0x3a14e4u: goto label_3a14e4;
        case 0x3a14e8u: goto label_3a14e8;
        case 0x3a14ecu: goto label_3a14ec;
        case 0x3a14f0u: goto label_3a14f0;
        case 0x3a14f4u: goto label_3a14f4;
        case 0x3a14f8u: goto label_3a14f8;
        case 0x3a14fcu: goto label_3a14fc;
        case 0x3a1500u: goto label_3a1500;
        case 0x3a1504u: goto label_3a1504;
        case 0x3a1508u: goto label_3a1508;
        case 0x3a150cu: goto label_3a150c;
        case 0x3a1510u: goto label_3a1510;
        case 0x3a1514u: goto label_3a1514;
        case 0x3a1518u: goto label_3a1518;
        case 0x3a151cu: goto label_3a151c;
        case 0x3a1520u: goto label_3a1520;
        case 0x3a1524u: goto label_3a1524;
        case 0x3a1528u: goto label_3a1528;
        case 0x3a152cu: goto label_3a152c;
        case 0x3a1530u: goto label_3a1530;
        case 0x3a1534u: goto label_3a1534;
        case 0x3a1538u: goto label_3a1538;
        case 0x3a153cu: goto label_3a153c;
        case 0x3a1540u: goto label_3a1540;
        case 0x3a1544u: goto label_3a1544;
        case 0x3a1548u: goto label_3a1548;
        case 0x3a154cu: goto label_3a154c;
        case 0x3a1550u: goto label_3a1550;
        case 0x3a1554u: goto label_3a1554;
        case 0x3a1558u: goto label_3a1558;
        case 0x3a155cu: goto label_3a155c;
        case 0x3a1560u: goto label_3a1560;
        case 0x3a1564u: goto label_3a1564;
        case 0x3a1568u: goto label_3a1568;
        case 0x3a156cu: goto label_3a156c;
        case 0x3a1570u: goto label_3a1570;
        case 0x3a1574u: goto label_3a1574;
        case 0x3a1578u: goto label_3a1578;
        case 0x3a157cu: goto label_3a157c;
        case 0x3a1580u: goto label_3a1580;
        case 0x3a1584u: goto label_3a1584;
        case 0x3a1588u: goto label_3a1588;
        case 0x3a158cu: goto label_3a158c;
        case 0x3a1590u: goto label_3a1590;
        case 0x3a1594u: goto label_3a1594;
        case 0x3a1598u: goto label_3a1598;
        case 0x3a159cu: goto label_3a159c;
        case 0x3a15a0u: goto label_3a15a0;
        case 0x3a15a4u: goto label_3a15a4;
        case 0x3a15a8u: goto label_3a15a8;
        case 0x3a15acu: goto label_3a15ac;
        case 0x3a15b0u: goto label_3a15b0;
        case 0x3a15b4u: goto label_3a15b4;
        case 0x3a15b8u: goto label_3a15b8;
        case 0x3a15bcu: goto label_3a15bc;
        case 0x3a15c0u: goto label_3a15c0;
        case 0x3a15c4u: goto label_3a15c4;
        case 0x3a15c8u: goto label_3a15c8;
        case 0x3a15ccu: goto label_3a15cc;
        case 0x3a15d0u: goto label_3a15d0;
        case 0x3a15d4u: goto label_3a15d4;
        case 0x3a15d8u: goto label_3a15d8;
        case 0x3a15dcu: goto label_3a15dc;
        case 0x3a15e0u: goto label_3a15e0;
        case 0x3a15e4u: goto label_3a15e4;
        case 0x3a15e8u: goto label_3a15e8;
        case 0x3a15ecu: goto label_3a15ec;
        case 0x3a15f0u: goto label_3a15f0;
        case 0x3a15f4u: goto label_3a15f4;
        case 0x3a15f8u: goto label_3a15f8;
        case 0x3a15fcu: goto label_3a15fc;
        case 0x3a1600u: goto label_3a1600;
        case 0x3a1604u: goto label_3a1604;
        case 0x3a1608u: goto label_3a1608;
        case 0x3a160cu: goto label_3a160c;
        case 0x3a1610u: goto label_3a1610;
        case 0x3a1614u: goto label_3a1614;
        case 0x3a1618u: goto label_3a1618;
        case 0x3a161cu: goto label_3a161c;
        case 0x3a1620u: goto label_3a1620;
        case 0x3a1624u: goto label_3a1624;
        case 0x3a1628u: goto label_3a1628;
        case 0x3a162cu: goto label_3a162c;
        case 0x3a1630u: goto label_3a1630;
        case 0x3a1634u: goto label_3a1634;
        case 0x3a1638u: goto label_3a1638;
        case 0x3a163cu: goto label_3a163c;
        case 0x3a1640u: goto label_3a1640;
        case 0x3a1644u: goto label_3a1644;
        case 0x3a1648u: goto label_3a1648;
        case 0x3a164cu: goto label_3a164c;
        case 0x3a1650u: goto label_3a1650;
        case 0x3a1654u: goto label_3a1654;
        case 0x3a1658u: goto label_3a1658;
        case 0x3a165cu: goto label_3a165c;
        case 0x3a1660u: goto label_3a1660;
        case 0x3a1664u: goto label_3a1664;
        case 0x3a1668u: goto label_3a1668;
        case 0x3a166cu: goto label_3a166c;
        case 0x3a1670u: goto label_3a1670;
        case 0x3a1674u: goto label_3a1674;
        case 0x3a1678u: goto label_3a1678;
        case 0x3a167cu: goto label_3a167c;
        case 0x3a1680u: goto label_3a1680;
        case 0x3a1684u: goto label_3a1684;
        case 0x3a1688u: goto label_3a1688;
        case 0x3a168cu: goto label_3a168c;
        case 0x3a1690u: goto label_3a1690;
        case 0x3a1694u: goto label_3a1694;
        case 0x3a1698u: goto label_3a1698;
        case 0x3a169cu: goto label_3a169c;
        case 0x3a16a0u: goto label_3a16a0;
        case 0x3a16a4u: goto label_3a16a4;
        case 0x3a16a8u: goto label_3a16a8;
        case 0x3a16acu: goto label_3a16ac;
        case 0x3a16b0u: goto label_3a16b0;
        case 0x3a16b4u: goto label_3a16b4;
        case 0x3a16b8u: goto label_3a16b8;
        case 0x3a16bcu: goto label_3a16bc;
        case 0x3a16c0u: goto label_3a16c0;
        case 0x3a16c4u: goto label_3a16c4;
        case 0x3a16c8u: goto label_3a16c8;
        case 0x3a16ccu: goto label_3a16cc;
        case 0x3a16d0u: goto label_3a16d0;
        case 0x3a16d4u: goto label_3a16d4;
        case 0x3a16d8u: goto label_3a16d8;
        case 0x3a16dcu: goto label_3a16dc;
        case 0x3a16e0u: goto label_3a16e0;
        case 0x3a16e4u: goto label_3a16e4;
        case 0x3a16e8u: goto label_3a16e8;
        case 0x3a16ecu: goto label_3a16ec;
        case 0x3a16f0u: goto label_3a16f0;
        case 0x3a16f4u: goto label_3a16f4;
        case 0x3a16f8u: goto label_3a16f8;
        case 0x3a16fcu: goto label_3a16fc;
        case 0x3a1700u: goto label_3a1700;
        case 0x3a1704u: goto label_3a1704;
        case 0x3a1708u: goto label_3a1708;
        case 0x3a170cu: goto label_3a170c;
        case 0x3a1710u: goto label_3a1710;
        case 0x3a1714u: goto label_3a1714;
        case 0x3a1718u: goto label_3a1718;
        case 0x3a171cu: goto label_3a171c;
        case 0x3a1720u: goto label_3a1720;
        case 0x3a1724u: goto label_3a1724;
        case 0x3a1728u: goto label_3a1728;
        case 0x3a172cu: goto label_3a172c;
        case 0x3a1730u: goto label_3a1730;
        case 0x3a1734u: goto label_3a1734;
        case 0x3a1738u: goto label_3a1738;
        case 0x3a173cu: goto label_3a173c;
        case 0x3a1740u: goto label_3a1740;
        case 0x3a1744u: goto label_3a1744;
        case 0x3a1748u: goto label_3a1748;
        case 0x3a174cu: goto label_3a174c;
        case 0x3a1750u: goto label_3a1750;
        case 0x3a1754u: goto label_3a1754;
        case 0x3a1758u: goto label_3a1758;
        case 0x3a175cu: goto label_3a175c;
        case 0x3a1760u: goto label_3a1760;
        case 0x3a1764u: goto label_3a1764;
        case 0x3a1768u: goto label_3a1768;
        case 0x3a176cu: goto label_3a176c;
        case 0x3a1770u: goto label_3a1770;
        case 0x3a1774u: goto label_3a1774;
        case 0x3a1778u: goto label_3a1778;
        case 0x3a177cu: goto label_3a177c;
        case 0x3a1780u: goto label_3a1780;
        case 0x3a1784u: goto label_3a1784;
        case 0x3a1788u: goto label_3a1788;
        case 0x3a178cu: goto label_3a178c;
        case 0x3a1790u: goto label_3a1790;
        case 0x3a1794u: goto label_3a1794;
        case 0x3a1798u: goto label_3a1798;
        case 0x3a179cu: goto label_3a179c;
        case 0x3a17a0u: goto label_3a17a0;
        case 0x3a17a4u: goto label_3a17a4;
        case 0x3a17a8u: goto label_3a17a8;
        case 0x3a17acu: goto label_3a17ac;
        case 0x3a17b0u: goto label_3a17b0;
        case 0x3a17b4u: goto label_3a17b4;
        case 0x3a17b8u: goto label_3a17b8;
        case 0x3a17bcu: goto label_3a17bc;
        case 0x3a17c0u: goto label_3a17c0;
        case 0x3a17c4u: goto label_3a17c4;
        case 0x3a17c8u: goto label_3a17c8;
        case 0x3a17ccu: goto label_3a17cc;
        case 0x3a17d0u: goto label_3a17d0;
        case 0x3a17d4u: goto label_3a17d4;
        case 0x3a17d8u: goto label_3a17d8;
        case 0x3a17dcu: goto label_3a17dc;
        case 0x3a17e0u: goto label_3a17e0;
        case 0x3a17e4u: goto label_3a17e4;
        case 0x3a17e8u: goto label_3a17e8;
        case 0x3a17ecu: goto label_3a17ec;
        case 0x3a17f0u: goto label_3a17f0;
        case 0x3a17f4u: goto label_3a17f4;
        case 0x3a17f8u: goto label_3a17f8;
        case 0x3a17fcu: goto label_3a17fc;
        case 0x3a1800u: goto label_3a1800;
        case 0x3a1804u: goto label_3a1804;
        case 0x3a1808u: goto label_3a1808;
        case 0x3a180cu: goto label_3a180c;
        case 0x3a1810u: goto label_3a1810;
        case 0x3a1814u: goto label_3a1814;
        case 0x3a1818u: goto label_3a1818;
        case 0x3a181cu: goto label_3a181c;
        case 0x3a1820u: goto label_3a1820;
        case 0x3a1824u: goto label_3a1824;
        case 0x3a1828u: goto label_3a1828;
        case 0x3a182cu: goto label_3a182c;
        case 0x3a1830u: goto label_3a1830;
        case 0x3a1834u: goto label_3a1834;
        case 0x3a1838u: goto label_3a1838;
        case 0x3a183cu: goto label_3a183c;
        case 0x3a1840u: goto label_3a1840;
        case 0x3a1844u: goto label_3a1844;
        case 0x3a1848u: goto label_3a1848;
        case 0x3a184cu: goto label_3a184c;
        case 0x3a1850u: goto label_3a1850;
        case 0x3a1854u: goto label_3a1854;
        case 0x3a1858u: goto label_3a1858;
        case 0x3a185cu: goto label_3a185c;
        case 0x3a1860u: goto label_3a1860;
        case 0x3a1864u: goto label_3a1864;
        case 0x3a1868u: goto label_3a1868;
        case 0x3a186cu: goto label_3a186c;
        case 0x3a1870u: goto label_3a1870;
        case 0x3a1874u: goto label_3a1874;
        case 0x3a1878u: goto label_3a1878;
        case 0x3a187cu: goto label_3a187c;
        case 0x3a1880u: goto label_3a1880;
        case 0x3a1884u: goto label_3a1884;
        case 0x3a1888u: goto label_3a1888;
        case 0x3a188cu: goto label_3a188c;
        case 0x3a1890u: goto label_3a1890;
        case 0x3a1894u: goto label_3a1894;
        case 0x3a1898u: goto label_3a1898;
        case 0x3a189cu: goto label_3a189c;
        case 0x3a18a0u: goto label_3a18a0;
        case 0x3a18a4u: goto label_3a18a4;
        case 0x3a18a8u: goto label_3a18a8;
        case 0x3a18acu: goto label_3a18ac;
        case 0x3a18b0u: goto label_3a18b0;
        case 0x3a18b4u: goto label_3a18b4;
        case 0x3a18b8u: goto label_3a18b8;
        case 0x3a18bcu: goto label_3a18bc;
        default: break;
    }

    ctx->pc = 0x3a1378u;

label_3a1378:
    // 0x3a1378: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3a1378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3a137c:
    // 0x3a137c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x3a137cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_3a1380:
    // 0x3a1380: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x3a1380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
label_3a1384:
    // 0x3a1384: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3a1384u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a1388:
    // 0x3a1388: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x3a1388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
label_3a138c:
    // 0x3a138c: 0x26c50020  addiu       $a1, $s6, 0x20
    ctx->pc = 0x3a138cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
label_3a1390:
    // 0x3a1390: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x3a1390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
label_3a1394:
    // 0x3a1394: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x3a1394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_3a1398:
    // 0x3a1398: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x3a1398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
label_3a139c:
    // 0x3a139c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x3a139cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_3a13a0:
    // 0x3a13a0: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x3a13a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
label_3a13a4:
    // 0x3a13a4: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x3a13a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
label_3a13a8:
    // 0x3a13a8: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x3a13a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
label_3a13ac:
    // 0x3a13ac: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x3a13acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
label_3a13b0:
    // 0x3a13b0: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x3a13b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
label_3a13b4:
    // 0x3a13b4: 0x82c300ac  lb          $v1, 0xAC($s6)
    ctx->pc = 0x3a13b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 172)));
label_3a13b8:
    // 0x3a13b8: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x3a13b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
label_3a13bc:
    // 0x3a13bc: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x3a13bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
label_3a13c0:
    // 0x3a13c0: 0x8ed1001c  lw          $s1, 0x1C($s6)
    ctx->pc = 0x3a13c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
label_3a13c4:
    // 0x3a13c4: 0x186000f1  blez        $v1, . + 4 + (0xF1 << 2)
label_3a13c8:
    if (ctx->pc == 0x3A13C8u) {
        ctx->pc = 0x3A13C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A13C4u;
        // 0x3a13c8: 0xafa00058  sw          $zero, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A13CCu;
        goto label_3a13cc;
    }
    ctx->pc = 0x3A13C4u;
    {
        const bool branch_taken_0x3a13c4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3A13C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A13C4u;
        // 0x3a13c8: 0xafa00058  sw          $zero, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a13c4) {
            ctx->pc = 0x3A178Cu;
            goto label_3a178c;
        }
    }
    ctx->pc = 0x3A13CCu;
label_3a13cc:
    // 0x3a13cc: 0x27be0010  addiu       $fp, $sp, 0x10
    ctx->pc = 0x3a13ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3a13d0:
    // 0x3a13d0: 0x3c0a02d  daddu       $s4, $fp, $zero
    ctx->pc = 0x3a13d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3a13d4:
    // 0x3a13d4: 0x0  nop
    ctx->pc = 0x3a13d4u;
    // NOP
label_3a13d8:
    // 0x3a13d8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3a13d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a13dc:
    // 0x3a13dc: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x3a13dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_3a13e0:
    // 0x3a13e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a13e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a13e4:
    // 0x3a13e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a13e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a13e8:
    // 0x3a13e8: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x3a13e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_3a13ec:
    // 0x3a13ec: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x3a13ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_3a13f0:
    // 0x3a13f0: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x3a13f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3a13f4:
    // 0x3a13f4: 0x60f809  jalr        $v1
label_3a13f8:
    if (ctx->pc == 0x3A13F8u) {
        ctx->pc = 0x3A13F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A13F4u;
        // 0x3a13f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A13FCu;
        goto label_3a13fc;
    }
    ctx->pc = 0x3A13F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3A13FCu);
        ctx->pc = 0x3A13F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A13F4u;
        // 0x3a13f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A13F4u, 0x3A13FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A13FCu;
label_3a13fc:
    // 0x3a13fc: 0x10000003  b           . + 4 + (0x3 << 2)
label_3a1400:
    if (ctx->pc == 0x3A1400u) {
        ctx->pc = 0x3A1400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A13FCu;
        // 0x3a1400: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1404u;
        goto label_3a1404;
    }
    ctx->pc = 0x3A13FCu;
    {
        const bool branch_taken_0x3a13fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A13FCu;
        // 0x3a1400: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a13fc) {
            ctx->pc = 0x3A140Cu;
            goto label_3a140c;
        }
    }
    ctx->pc = 0x3A1404u;
label_3a1404:
    // 0x3a1404: 0x0  nop
    ctx->pc = 0x3a1404u;
    // NOP
label_3a1408:
    // 0x3a1408: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x3a1408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3a140c:
    // 0x3a140c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3a140cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3a1410:
    // 0x3a1410: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3a1414:
    if (ctx->pc == 0x3A1414u) {
        ctx->pc = 0x3A1418u;
        goto label_3a1418;
    }
    ctx->pc = 0x3A1410u;
    {
        const bool branch_taken_0x3a1410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1410) {
            ctx->pc = 0x3A142Cu;
            goto label_3a142c;
        }
    }
    ctx->pc = 0x3A1418u;
label_3a1418:
    // 0x3a1418: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x3a1418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3a141c:
    // 0x3a141c: 0xc0e8452  jal         func_3A1148
label_3a1420:
    if (ctx->pc == 0x3A1420u) {
        ctx->pc = 0x3A1420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A141Cu;
        // 0x3a1420: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1424u;
        goto label_3a1424;
    }
    ctx->pc = 0x3A141Cu;
    SET_GPR_U32(ctx, 31, 0x3A1424u);
    ctx->pc = 0x3A1420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A141Cu;
    // 0x3a1420: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1148u, 0x3A141Cu, 0x3A1424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1424u;
label_3a1424:
    // 0x3a1424: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
label_3a1428:
    if (ctx->pc == 0x3A1428u) {
        ctx->pc = 0x3A1428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1424u;
        // 0x3a1428: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A142Cu;
        goto label_3a142c;
    }
    ctx->pc = 0x3A1424u;
    {
        const bool branch_taken_0x3a1424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1424) {
            ctx->pc = 0x3A1428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A1424u;
            // 0x3a1428: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A1408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a1408;
        }
    }
    ctx->pc = 0x3A142Cu;
label_3a142c:
    // 0x3a142c: 0x1a00001d  blez        $s0, . + 4 + (0x1D << 2)
label_3a1430:
    if (ctx->pc == 0x3A1430u) {
        ctx->pc = 0x3A1430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A142Cu;
        // 0x3a1430: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1434u;
        goto label_3a1434;
    }
    ctx->pc = 0x3A142Cu;
    {
        const bool branch_taken_0x3a142c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x3A1430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A142Cu;
        // 0x3a1430: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a142c) {
            ctx->pc = 0x3A14A4u;
            goto label_3a14a4;
        }
    }
    ctx->pc = 0x3A1434u;
label_3a1434:
    // 0x3a1434: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3a1434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3a1438:
    // 0x3a1438: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a1438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a143c:
    // 0x3a143c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3a143cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3a1440:
    // 0x3a1440: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3a1440u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a1444:
    // 0x3a1444: 0xc0eb07e  jal         func_3AC1F8
label_3a1448:
    if (ctx->pc == 0x3A1448u) {
        ctx->pc = 0x3A1448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1444u;
        // 0x3a1448: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A144Cu;
        goto label_3a144c;
    }
    ctx->pc = 0x3A1444u;
    SET_GPR_U32(ctx, 31, 0x3A144Cu);
    ctx->pc = 0x3A1448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1444u;
    // 0x3a1448: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC1F8u, 0x3A1444u, 0x3A144Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A144Cu;
label_3a144c:
    // 0x3a144c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3a144cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a1450:
    // 0x3a1450: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a1450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a1454:
    // 0x3a1454: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a1454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a1458:
    // 0x3a1458: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x3a1458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_3a145c:
    // 0x3a145c: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x3a145cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3a1460:
    // 0x3a1460: 0x40f809  jalr        $v0
label_3a1464:
    if (ctx->pc == 0x3A1464u) {
        ctx->pc = 0x3A1464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1460u;
        // 0x3a1464: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1468u;
        goto label_3a1468;
    }
    ctx->pc = 0x3A1460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A1468u);
        ctx->pc = 0x3A1464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1460u;
        // 0x3a1464: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1460u, 0x3A1468u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A1468u;
label_3a1468:
    // 0x3a1468: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3a1468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a146c:
    // 0x3a146c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a146cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a1470:
    // 0x3a1470: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a1470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a1474:
    // 0x3a1474: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x3a1474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_3a1478:
    // 0x3a1478: 0x40f809  jalr        $v0
label_3a147c:
    if (ctx->pc == 0x3A147Cu) {
        ctx->pc = 0x3A147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1478u;
        // 0x3a147c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1480u;
        goto label_3a1480;
    }
    ctx->pc = 0x3A1478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A1480u);
        ctx->pc = 0x3A147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1478u;
        // 0x3a147c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1478u, 0x3A1480u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A1480u;
label_3a1480:
    // 0x3a1480: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3a1480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a1484:
    // 0x3a1484: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x3a1484u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_3a1488:
    // 0x3a1488: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a1488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a148c:
    // 0x3a148c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x3a148cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_3a1490:
    // 0x3a1490: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a1490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a1494:
    // 0x3a1494: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x3a1494u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_3a1498:
    // 0x3a1498: 0x40f809  jalr        $v0
label_3a149c:
    if (ctx->pc == 0x3A149Cu) {
        ctx->pc = 0x3A149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1498u;
        // 0x3a149c: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A14A0u;
        goto label_3a14a0;
    }
    ctx->pc = 0x3A1498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A14A0u);
        ctx->pc = 0x3A149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1498u;
        // 0x3a149c: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1498u, 0x3A14A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A14A0u;
label_3a14a0:
    // 0x3a14a0: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x3a14a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3a14a4:
    // 0x3a14a4: 0x2ca20010  sltiu       $v0, $a1, 0x10
    ctx->pc = 0x3a14a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_3a14a8:
    // 0x3a14a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_3a14ac:
    if (ctx->pc == 0x3A14ACu) {
        ctx->pc = 0x3A14ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A14A8u;
        // 0x3a14ac: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A14B0u;
        goto label_3a14b0;
    }
    ctx->pc = 0x3A14A8u;
    {
        const bool branch_taken_0x3a14a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A14ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A14A8u;
        // 0x3a14ac: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a14a8) {
            ctx->pc = 0x3A14D0u;
            goto label_3a14d0;
        }
    }
    ctx->pc = 0x3A14B0u;
label_3a14b0:
    // 0x3a14b0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3a14b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a14b4:
    // 0x3a14b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a14b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a14b8:
    // 0x3a14b8: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x3a14b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3a14bc:
    // 0x3a14bc: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x3a14bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_3a14c0:
    // 0x3a14c0: 0x40f809  jalr        $v0
label_3a14c4:
    if (ctx->pc == 0x3A14C4u) {
        ctx->pc = 0x3A14C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A14C0u;
        // 0x3a14c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A14C8u;
        goto label_3a14c8;
    }
    ctx->pc = 0x3A14C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A14C8u);
        ctx->pc = 0x3A14C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A14C0u;
        // 0x3a14c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A14C0u, 0x3A14C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A14C8u;
label_3a14c8:
    // 0x3a14c8: 0x100000b1  b           . + 4 + (0xB1 << 2)
label_3a14cc:
    if (ctx->pc == 0x3A14CCu) {
        ctx->pc = 0x3A14CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A14C8u;
        // 0x3a14cc: 0x8fa2005c  lw          $v0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A14D0u;
        goto label_3a14d0;
    }
    ctx->pc = 0x3A14C8u;
    {
        const bool branch_taken_0x3a14c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A14CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A14C8u;
        // 0x3a14cc: 0x8fa2005c  lw          $v0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a14c8) {
            ctx->pc = 0x3A1790u;
            goto label_3a1790;
        }
    }
    ctx->pc = 0x3A14D0u;
label_3a14d0:
    // 0x3a14d0: 0xc0e841a  jal         func_3A1068
label_3a14d4:
    if (ctx->pc == 0x3A14D4u) {
        ctx->pc = 0x3A14D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A14D0u;
        // 0x3a14d4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A14D8u;
        goto label_3a14d8;
    }
    ctx->pc = 0x3A14D0u;
    SET_GPR_U32(ctx, 31, 0x3A14D8u);
    ctx->pc = 0x3A14D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A14D0u;
    // 0x3a14d4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1068u, 0x3A14D0u, 0x3A14D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A14D8u;
label_3a14d8:
    // 0x3a14d8: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
label_3a14dc:
    if (ctx->pc == 0x3A14DCu) {
        ctx->pc = 0x3A14DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A14D8u;
        // 0x3a14dc: 0x3c024149  lui         $v0, 0x4149 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16713 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A14E0u;
        goto label_3a14e0;
    }
    ctx->pc = 0x3A14D8u;
    {
        const bool branch_taken_0x3a14d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A14DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A14D8u;
        // 0x3a14dc: 0x3c024149  lui         $v0, 0x4149 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16713 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a14d8) {
            ctx->pc = 0x3A14B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a14b0;
        }
    }
    ctx->pc = 0x3A14E0u;
label_3a14e0:
    // 0x3a14e0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3a14e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3a14e4:
    // 0x3a14e4: 0x34425845  ori         $v0, $v0, 0x5845
    ctx->pc = 0x3a14e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22597);
label_3a14e8:
    // 0x3a14e8: 0x1462002d  bne         $v1, $v0, . + 4 + (0x2D << 2)
label_3a14ec:
    if (ctx->pc == 0x3A14ECu) {
        ctx->pc = 0x3A14ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A14E8u;
        // 0x3a14ec: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A14F0u;
        goto label_3a14f0;
    }
    ctx->pc = 0x3A14E8u;
    {
        const bool branch_taken_0x3a14e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A14ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A14E8u;
        // 0x3a14ec: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a14e8) {
            ctx->pc = 0x3A15A0u;
            goto label_3a15a0;
        }
    }
    ctx->pc = 0x3A14F0u;
label_3a14f0:
    // 0x3a14f0: 0x10000002  b           . + 4 + (0x2 << 2)
label_3a14f4:
    if (ctx->pc == 0x3A14F4u) {
        ctx->pc = 0x3A14F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A14F0u;
        // 0x3a14f4: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A14F8u;
        goto label_3a14f8;
    }
    ctx->pc = 0x3A14F0u;
    {
        const bool branch_taken_0x3a14f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A14F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A14F0u;
        // 0x3a14f4: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a14f0) {
            ctx->pc = 0x3A14FCu;
            goto label_3a14fc;
        }
    }
    ctx->pc = 0x3A14F8u;
label_3a14f8:
    // 0x3a14f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3a14f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3a14fc:
    // 0x3a14fc: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x3a14fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3a1500:
    // 0x3a1500: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3a1500u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3a1504:
    // 0x3a1504: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3a1508:
    if (ctx->pc == 0x3A1508u) {
        ctx->pc = 0x3A1508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1504u;
        // 0x3a1508: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A150Cu;
        goto label_3a150c;
    }
    ctx->pc = 0x3A1504u;
    {
        const bool branch_taken_0x3a1504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1504u;
        // 0x3a1508: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1504) {
            ctx->pc = 0x3A1520u;
            goto label_3a1520;
        }
    }
    ctx->pc = 0x3A150Cu;
label_3a150c:
    // 0x3a150c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x3a150cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3a1510:
    // 0x3a1510: 0xc0e8452  jal         func_3A1148
label_3a1514:
    if (ctx->pc == 0x3A1514u) {
        ctx->pc = 0x3A1514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1510u;
        // 0x3a1514: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1518u;
        goto label_3a1518;
    }
    ctx->pc = 0x3A1510u;
    SET_GPR_U32(ctx, 31, 0x3A1518u);
    ctx->pc = 0x3A1514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1510u;
    // 0x3a1514: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1148u, 0x3A1510u, 0x3A1518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1518u;
label_3a1518:
    // 0x3a1518: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
label_3a151c:
    if (ctx->pc == 0x3A151Cu) {
        ctx->pc = 0x3A151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1518u;
        // 0x3a151c: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1520u;
        goto label_3a1520;
    }
    ctx->pc = 0x3A1518u;
    {
        const bool branch_taken_0x3a1518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1518u;
        // 0x3a151c: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1518) {
            ctx->pc = 0x3A14F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a14f8;
        }
    }
    ctx->pc = 0x3A1520u;
label_3a1520:
    // 0x3a1520: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a1520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a1524:
    // 0x3a1524: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3a1524u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3a1528:
    // 0x3a1528: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3a1528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a152c:
    // 0x3a152c: 0xc0eb07e  jal         func_3AC1F8
label_3a1530:
    if (ctx->pc == 0x3A1530u) {
        ctx->pc = 0x3A1530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A152Cu;
        // 0x3a1530: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1534u;
        goto label_3a1534;
    }
    ctx->pc = 0x3A152Cu;
    SET_GPR_U32(ctx, 31, 0x3A1534u);
    ctx->pc = 0x3A1530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A152Cu;
    // 0x3a1530: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC1F8u, 0x3A152Cu, 0x3A1534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1534u;
label_3a1534:
    // 0x3a1534: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3a1534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a1538:
    // 0x3a1538: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3a1538u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a153c:
    // 0x3a153c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a153cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a1540:
    // 0x3a1540: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x3a1540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_3a1544:
    // 0x3a1544: 0x40f809  jalr        $v0
label_3a1548:
    if (ctx->pc == 0x3A1548u) {
        ctx->pc = 0x3A1548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1544u;
        // 0x3a1548: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A154Cu;
        goto label_3a154c;
    }
    ctx->pc = 0x3A1544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A154Cu);
        ctx->pc = 0x3A1548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1544u;
        // 0x3a1548: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1544u, 0x3A154Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A154Cu;
label_3a154c:
    // 0x3a154c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3a154cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a1550:
    // 0x3a1550: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x3a1550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3a1554:
    // 0x3a1554: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a1554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a1558:
    // 0x3a1558: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3a1558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a155c:
    // 0x3a155c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x3a155cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_3a1560:
    // 0x3a1560: 0x40f809  jalr        $v0
label_3a1564:
    if (ctx->pc == 0x3A1564u) {
        ctx->pc = 0x3A1564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1560u;
        // 0x3a1564: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1568u;
        goto label_3a1568;
    }
    ctx->pc = 0x3A1560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A1568u);
        ctx->pc = 0x3A1564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1560u;
        // 0x3a1564: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1560u, 0x3A1568u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A1568u;
label_3a1568:
    // 0x3a1568: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3a1568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a156c:
    // 0x3a156c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a156cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a1570:
    // 0x3a1570: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3a1570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3a1574:
    // 0x3a1574: 0x40f809  jalr        $v0
label_3a1578:
    if (ctx->pc == 0x3A1578u) {
        ctx->pc = 0x3A1578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1574u;
        // 0x3a1578: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A157Cu;
        goto label_3a157c;
    }
    ctx->pc = 0x3A1574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A157Cu);
        ctx->pc = 0x3A1578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1574u;
        // 0x3a1578: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1574u, 0x3A157Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A157Cu;
label_3a157c:
    // 0x3a157c: 0x58400001  blezl       $v0, . + 4 + (0x1 << 2)
label_3a1580:
    if (ctx->pc == 0x3A1580u) {
        ctx->pc = 0x3A1580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A157Cu;
        // 0x3a1580: 0xa2c00004  sb          $zero, 0x4($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 4), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1584u;
        goto label_3a1584;
    }
    ctx->pc = 0x3A157Cu;
    {
        const bool branch_taken_0x3a157c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3a157c) {
            ctx->pc = 0x3A1580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A157Cu;
            // 0x3a1580: 0xa2c00004  sb          $zero, 0x4($s6) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 22), 4), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A1584u;
            goto label_3a1584;
        }
    }
    ctx->pc = 0x3A1584u;
label_3a1584:
    // 0x3a1584: 0x82c20004  lb          $v0, 0x4($s6)
    ctx->pc = 0x3a1584u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 4)));
label_3a1588:
    // 0x3a1588: 0x14400081  bnez        $v0, . + 4 + (0x81 << 2)
label_3a158c:
    if (ctx->pc == 0x3A158Cu) {
        ctx->pc = 0x3A158Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1588u;
        // 0x3a158c: 0x8fa2005c  lw          $v0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1590u;
        goto label_3a1590;
    }
    ctx->pc = 0x3A1588u;
    {
        const bool branch_taken_0x3a1588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A158Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1588u;
        // 0x3a158c: 0x8fa2005c  lw          $v0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1588) {
            ctx->pc = 0x3A1790u;
            goto label_3a1790;
        }
    }
    ctx->pc = 0x3A1590u;
label_3a1590:
    // 0x3a1590: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3a1590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a1594:
    // 0x3a1594: 0x1000007d  b           . + 4 + (0x7D << 2)
label_3a1598:
    if (ctx->pc == 0x3A1598u) {
        ctx->pc = 0x3A1598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1594u;
        // 0x3a1598: 0xa2c20001  sb          $v0, 0x1($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A159Cu;
        goto label_3a159c;
    }
    ctx->pc = 0x3A1594u;
    {
        const bool branch_taken_0x3a1594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1594u;
        // 0x3a1598: 0xa2c20001  sb          $v0, 0x1($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1594) {
            ctx->pc = 0x3A178Cu;
            goto label_3a178c;
        }
    }
    ctx->pc = 0x3A159Cu;
label_3a159c:
    // 0x3a159c: 0x0  nop
    ctx->pc = 0x3a159cu;
    // NOP
label_3a15a0:
    // 0x3a15a0: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x3a15a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3a15a4:
    // 0x3a15a4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x3a15a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_3a15a8:
    // 0x3a15a8: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x3a15a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3a15ac:
    // 0x3a15ac: 0x1460ffc0  bnez        $v1, . + 4 + (-0x40 << 2)
label_3a15b0:
    if (ctx->pc == 0x3A15B0u) {
        ctx->pc = 0x3A15B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A15ACu;
        // 0x3a15b0: 0x93b00008  lbu         $s0, 0x8($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A15B4u;
        goto label_3a15b4;
    }
    ctx->pc = 0x3A15ACu;
    {
        const bool branch_taken_0x3a15ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A15B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A15ACu;
        // 0x3a15b0: 0x93b00008  lbu         $s0, 0x8($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a15ac) {
            ctx->pc = 0x3A14B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a14b0;
        }
    }
    ctx->pc = 0x3A15B4u;
label_3a15b4:
    // 0x3a15b4: 0x82c20002  lb          $v0, 0x2($s6)
    ctx->pc = 0x3a15b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 2)));
label_3a15b8:
    // 0x3a15b8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3a15b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3a15bc:
    // 0x3a15bc: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_3a15c0:
    if (ctx->pc == 0x3A15C0u) {
        ctx->pc = 0x3A15C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A15BCu;
        // 0x3a15c0: 0x8fa30050  lw          $v1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A15C4u;
        goto label_3a15c4;
    }
    ctx->pc = 0x3A15BCu;
    {
        const bool branch_taken_0x3a15bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a15bc) {
            ctx->pc = 0x3A15C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A15BCu;
            // 0x3a15c0: 0x8fa30050  lw          $v1, 0x50($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A15F8u;
            goto label_3a15f8;
        }
    }
    ctx->pc = 0x3A15C4u;
label_3a15c4:
    // 0x3a15c4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a15c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3a15c8:
    // 0x3a15c8: 0xc0ecbf4  jal         func_3B2FD0
label_3a15cc:
    if (ctx->pc == 0x3A15CCu) {
        ctx->pc = 0x3A15CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A15C8u;
        // 0x3a15cc: 0x2484c540  addiu       $a0, $a0, -0x3AC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A15D0u;
        goto label_3a15d0;
    }
    ctx->pc = 0x3A15C8u;
    SET_GPR_U32(ctx, 31, 0x3A15D0u);
    ctx->pc = 0x3A15CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A15C8u;
    // 0x3a15cc: 0x2484c540  addiu       $a0, $a0, -0x3AC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2FD0u, 0x3A15C8u, 0x3A15D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A15D0u;
label_3a15d0:
    // 0x3a15d0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3a15d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a15d4:
    // 0x3a15d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a15d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a15d8:
    // 0x3a15d8: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x3a15d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3a15dc:
    // 0x3a15dc: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x3a15dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_3a15e0:
    // 0x3a15e0: 0x60f809  jalr        $v1
label_3a15e4:
    if (ctx->pc == 0x3A15E4u) {
        ctx->pc = 0x3A15E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A15E0u;
        // 0x3a15e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A15E8u;
        goto label_3a15e8;
    }
    ctx->pc = 0x3A15E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3A15E8u);
        ctx->pc = 0x3A15E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A15E0u;
        // 0x3a15e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A15E0u, 0x3A15E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A15E8u;
label_3a15e8:
    // 0x3a15e8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3a15e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3a15ec:
    // 0x3a15ec: 0x10000067  b           . + 4 + (0x67 << 2)
label_3a15f0:
    if (ctx->pc == 0x3A15F0u) {
        ctx->pc = 0x3A15F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A15ECu;
        // 0x3a15f0: 0xa2c20001  sb          $v0, 0x1($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A15F4u;
        goto label_3a15f4;
    }
    ctx->pc = 0x3A15ECu;
    {
        const bool branch_taken_0x3a15ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A15F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A15ECu;
        // 0x3a15f0: 0xa2c20001  sb          $v0, 0x1($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a15ec) {
            ctx->pc = 0x3A178Cu;
            goto label_3a178c;
        }
    }
    ctx->pc = 0x3A15F4u;
label_3a15f4:
    // 0x3a15f4: 0x0  nop
    ctx->pc = 0x3a15f4u;
    // NOP
label_3a15f8:
    // 0x3a15f8: 0x10b880  sll         $s7, $s0, 2
    ctx->pc = 0x3a15f8u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3a15fc:
    // 0x3a15fc: 0x2e31021  addu        $v0, $s7, $v1
    ctx->pc = 0x3a15fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_3a1600:
    // 0x3a1600: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3a1600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a1604:
    // 0x3a1604: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3a1604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a1608:
    // 0x3a1608: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3a1608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3a160c:
    // 0x3a160c: 0x40f809  jalr        $v0
label_3a1610:
    if (ctx->pc == 0x3A1610u) {
        ctx->pc = 0x3A1610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A160Cu;
        // 0x3a1610: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1614u;
        goto label_3a1614;
    }
    ctx->pc = 0x3A160Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A1614u);
        ctx->pc = 0x3A1610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A160Cu;
        // 0x3a1610: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A160Cu, 0x3A1614u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A1614u;
label_3a1614:
    // 0x3a1614: 0x87a3000a  lh          $v1, 0xA($sp)
    ctx->pc = 0x3a1614u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 10)));
label_3a1618:
    // 0x3a1618: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3a1618u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3a161c:
    // 0x3a161c: 0x1440ffa4  bnez        $v0, . + 4 + (-0x5C << 2)
label_3a1620:
    if (ctx->pc == 0x3A1620u) {
        ctx->pc = 0x3A1620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A161Cu;
        // 0x3a1620: 0x27b50020  addiu       $s5, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1624u;
        goto label_3a1624;
    }
    ctx->pc = 0x3A161Cu;
    {
        const bool branch_taken_0x3a161c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A161Cu;
        // 0x3a1620: 0x27b50020  addiu       $s5, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a161c) {
            ctx->pc = 0x3A14B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a14b0;
        }
    }
    ctx->pc = 0x3A1624u;
label_3a1624:
    // 0x3a1624: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x3a1624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3a1628:
    // 0x3a1628: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x3a1628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_3a162c:
    // 0x3a162c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x3a162cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a1630:
    // 0x3a1630: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3a1630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a1634:
    // 0x3a1634: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x3a1634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_3a1638:
    // 0x3a1638: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3a1638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a163c:
    // 0x3a163c: 0xc0eb07e  jal         func_3AC1F8
label_3a1640:
    if (ctx->pc == 0x3A1640u) {
        ctx->pc = 0x3A1640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A163Cu;
        // 0x3a1640: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1644u;
        goto label_3a1644;
    }
    ctx->pc = 0x3A163Cu;
    SET_GPR_U32(ctx, 31, 0x3A1644u);
    ctx->pc = 0x3A1640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A163Cu;
    // 0x3a1640: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC1F8u, 0x3A163Cu, 0x3A1644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1644u;
label_3a1644:
    // 0x3a1644: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3a1644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a1648:
    // 0x3a1648: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a1648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a164c:
    // 0x3a164c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3a164cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a1650:
    // 0x3a1650: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x3a1650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_3a1654:
    // 0x3a1654: 0x40f809  jalr        $v0
label_3a1658:
    if (ctx->pc == 0x3A1658u) {
        ctx->pc = 0x3A1658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1654u;
        // 0x3a1658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A165Cu;
        goto label_3a165c;
    }
    ctx->pc = 0x3A1654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A165Cu);
        ctx->pc = 0x3A1658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1654u;
        // 0x3a1658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1654u, 0x3A165Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A165Cu;
label_3a165c:
    // 0x3a165c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3a165cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a1660:
    // 0x3a1660: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3a1660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3a1664:
    // 0x3a1664: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3a1664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a1668:
    // 0x3a1668: 0xc0eb07e  jal         func_3AC1F8
label_3a166c:
    if (ctx->pc == 0x3A166Cu) {
        ctx->pc = 0x3A166Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1668u;
        // 0x3a166c: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1670u;
        goto label_3a1670;
    }
    ctx->pc = 0x3A1668u;
    SET_GPR_U32(ctx, 31, 0x3A1670u);
    ctx->pc = 0x3A166Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1668u;
    // 0x3a166c: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC1F8u, 0x3A1668u, 0x3A1670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1670u;
label_3a1670:
    // 0x3a1670: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3a1670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a1674:
    // 0x3a1674: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3a1674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a1678:
    // 0x3a1678: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a1678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a167c:
    // 0x3a167c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x3a167cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_3a1680:
    // 0x3a1680: 0x40f809  jalr        $v0
label_3a1684:
    if (ctx->pc == 0x3A1684u) {
        ctx->pc = 0x3A1684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1680u;
        // 0x3a1684: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1688u;
        goto label_3a1688;
    }
    ctx->pc = 0x3A1680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A1688u);
        ctx->pc = 0x3A1684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1680u;
        // 0x3a1684: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1680u, 0x3A1688u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A1688u;
label_3a1688:
    // 0x3a1688: 0x87a3000a  lh          $v1, 0xA($sp)
    ctx->pc = 0x3a1688u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 10)));
label_3a168c:
    // 0x3a168c: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x3a168cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_3a1690:
    // 0x3a1690: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x3a1690u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3a1694:
    // 0x3a1694: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_3a1698:
    if (ctx->pc == 0x3A1698u) {
        ctx->pc = 0x3A1698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1694u;
        // 0x3a1698: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A169Cu;
        goto label_3a169c;
    }
    ctx->pc = 0x3A1694u;
    {
        const bool branch_taken_0x3a1694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1694u;
        // 0x3a1698: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1694) {
            ctx->pc = 0x3A16D0u;
            goto label_3a16d0;
        }
    }
    ctx->pc = 0x3A169Cu;
label_3a169c:
    // 0x3a169c: 0xc0ecbf4  jal         func_3B2FD0
label_3a16a0:
    if (ctx->pc == 0x3A16A0u) {
        ctx->pc = 0x3A16A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A169Cu;
        // 0x3a16a0: 0x2484c568  addiu       $a0, $a0, -0x3A98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A16A4u;
        goto label_3a16a4;
    }
    ctx->pc = 0x3A169Cu;
    SET_GPR_U32(ctx, 31, 0x3A16A4u);
    ctx->pc = 0x3A16A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A169Cu;
    // 0x3a16a0: 0x2484c568  addiu       $a0, $a0, -0x3A98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2FD0u, 0x3A169Cu, 0x3A16A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A16A4u;
label_3a16a4:
    // 0x3a16a4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3a16a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a16a8:
    // 0x3a16a8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3a16a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a16ac:
    // 0x3a16ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a16acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a16b0:
    // 0x3a16b0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x3a16b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_3a16b4:
    // 0x3a16b4: 0x40f809  jalr        $v0
label_3a16b8:
    if (ctx->pc == 0x3A16B8u) {
        ctx->pc = 0x3A16B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A16B4u;
        // 0x3a16b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A16BCu;
        goto label_3a16bc;
    }
    ctx->pc = 0x3A16B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A16BCu);
        ctx->pc = 0x3A16B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A16B4u;
        // 0x3a16b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A16B4u, 0x3A16BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A16BCu;
label_3a16bc:
    // 0x3a16bc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3a16bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a16c0:
    // 0x3a16c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a16c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a16c4:
    // 0x3a16c4: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x3a16c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3a16c8:
    // 0x3a16c8: 0x1000ffc5  b           . + 4 + (-0x3B << 2)
label_3a16cc:
    if (ctx->pc == 0x3A16CCu) {
        ctx->pc = 0x3A16CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A16C8u;
        // 0x3a16cc: 0x8ca3001c  lw          $v1, 0x1C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A16D0u;
        goto label_3a16d0;
    }
    ctx->pc = 0x3A16C8u;
    {
        const bool branch_taken_0x3a16c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A16CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A16C8u;
        // 0x3a16cc: 0x8ca3001c  lw          $v1, 0x1C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a16c8) {
            ctx->pc = 0x3A15E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a15e0;
        }
    }
    ctx->pc = 0x3A16D0u;
label_3a16d0:
    // 0x3a16d0: 0x1860001c  blez        $v1, . + 4 + (0x1C << 2)
label_3a16d4:
    if (ctx->pc == 0x3A16D4u) {
        ctx->pc = 0x3A16D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A16D0u;
        // 0x3a16d4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A16D8u;
        goto label_3a16d8;
    }
    ctx->pc = 0x3A16D0u;
    {
        const bool branch_taken_0x3a16d0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3A16D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A16D0u;
        // 0x3a16d4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a16d0) {
            ctx->pc = 0x3A1744u;
            goto label_3a1744;
        }
    }
    ctx->pc = 0x3A16D8u;
label_3a16d8:
    // 0x3a16d8: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x3a16d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3a16dc:
    // 0x3a16dc: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x3a16dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_3a16e0:
    // 0x3a16e0: 0xd23023  subu        $a2, $a2, $s2
    ctx->pc = 0x3a16e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_3a16e4:
    // 0x3a16e4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3a16e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a16e8:
    // 0x3a16e8: 0x2e38021  addu        $s0, $s7, $v1
    ctx->pc = 0x3a16e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_3a16ec:
    // 0x3a16ec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3a16ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a16f0:
    // 0x3a16f0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3a16f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a16f4:
    // 0x3a16f4: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x3a16f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_3a16f8:
    // 0x3a16f8: 0x40f809  jalr        $v0
label_3a16fc:
    if (ctx->pc == 0x3A16FCu) {
        ctx->pc = 0x3A16FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A16F8u;
        // 0x3a16fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1700u;
        goto label_3a1700;
    }
    ctx->pc = 0x3A16F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A1700u);
        ctx->pc = 0x3A16FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A16F8u;
        // 0x3a16fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A16F8u, 0x3A1700u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A1700u;
label_3a1700:
    // 0x3a1700: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x3a1700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3a1704:
    // 0x3a1704: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x3a1704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3a1708:
    // 0x3a1708: 0x8fa60034  lw          $a2, 0x34($sp)
    ctx->pc = 0x3a1708u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_3a170c:
    // 0x3a170c: 0xc0efa49  jal         func_3BE924
label_3a1710:
    if (ctx->pc == 0x3A1710u) {
        ctx->pc = 0x3A1710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A170Cu;
        // 0x3a1710: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1714u;
        goto label_3a1714;
    }
    ctx->pc = 0x3A170Cu;
    SET_GPR_U32(ctx, 31, 0x3A1714u);
    ctx->pc = 0x3A1710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A170Cu;
    // 0x3a1710: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3A170Cu, 0x3A1714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1714u;
label_3a1714:
    // 0x3a1714: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3a1714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a1718:
    // 0x3a1718: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a1718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a171c:
    // 0x3a171c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3a171cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a1720:
    // 0x3a1720: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x3a1720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_3a1724:
    // 0x3a1724: 0x40f809  jalr        $v0
label_3a1728:
    if (ctx->pc == 0x3A1728u) {
        ctx->pc = 0x3A1728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1724u;
        // 0x3a1728: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A172Cu;
        goto label_3a172c;
    }
    ctx->pc = 0x3A1724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A172Cu);
        ctx->pc = 0x3A1728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1724u;
        // 0x3a1728: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1724u, 0x3A172Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A172Cu;
label_3a172c:
    // 0x3a172c: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x3a172cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_3a1730:
    // 0x3a1730: 0x87a2000a  lh          $v0, 0xA($sp)
    ctx->pc = 0x3a1730u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 10)));
label_3a1734:
    // 0x3a1734: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x3a1734u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_3a1738:
    // 0x3a1738: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x3a1738u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3a173c:
    // 0x3a173c: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_3a1740:
    if (ctx->pc == 0x3A1740u) {
        ctx->pc = 0x3A1740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A173Cu;
        // 0x3a1740: 0x8fa60024  lw          $a2, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1744u;
        goto label_3a1744;
    }
    ctx->pc = 0x3A173Cu;
    {
        const bool branch_taken_0x3a173c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A173Cu;
        // 0x3a1740: 0x8fa60024  lw          $a2, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a173c) {
            ctx->pc = 0x3A16DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a16dc;
        }
    }
    ctx->pc = 0x3A1744u;
label_3a1744:
    // 0x3a1744: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3a1744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a1748:
    // 0x3a1748: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3a1748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a174c:
    // 0x3a174c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a174cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a1750:
    // 0x3a1750: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a1750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a1754:
    // 0x3a1754: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x3a1754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_3a1758:
    // 0x3a1758: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3a1758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3a175c:
    // 0x3a175c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a175cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3a1760:
    // 0x3a1760: 0x60f809  jalr        $v1
label_3a1764:
    if (ctx->pc == 0x3A1764u) {
        ctx->pc = 0x3A1764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1760u;
        // 0x3a1764: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1768u;
        goto label_3a1768;
    }
    ctx->pc = 0x3A1760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3A1768u);
        ctx->pc = 0x3A1764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1760u;
        // 0x3a1764: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1760u, 0x3A1768u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A1768u;
label_3a1768:
    // 0x3a1768: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x3a1768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_3a176c:
    // 0x3a176c: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x3a176cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_3a1770:
    // 0x3a1770: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x3a1770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3a1774:
    // 0x3a1774: 0x8fa60054  lw          $a2, 0x54($sp)
    ctx->pc = 0x3a1774u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_3a1778:
    // 0x3a1778: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a1778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3a177c:
    // 0x3a177c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3a177cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_3a1780:
    // 0x3a1780: 0xa6202a  slt         $a0, $a1, $a2
    ctx->pc = 0x3a1780u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_3a1784:
    // 0x3a1784: 0x1480ff14  bnez        $a0, . + 4 + (-0xEC << 2)
label_3a1788:
    if (ctx->pc == 0x3A1788u) {
        ctx->pc = 0x3A1788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1784u;
        // 0x3a1788: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A178Cu;
        goto label_3a178c;
    }
    ctx->pc = 0x3A1784u;
    {
        const bool branch_taken_0x3a1784 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1784u;
        // 0x3a1788: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1784) {
            ctx->pc = 0x3A13D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a13d8;
        }
    }
    ctx->pc = 0x3A178Cu;
label_3a178c:
    // 0x3a178c: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x3a178cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_3a1790:
    // 0x3a1790: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x3a1790u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3a1794:
    // 0x3a1794: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x3a1794u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_3a1798:
    // 0x3a1798: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x3a1798u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3a179c:
    // 0x3a179c: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x3a179cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_3a17a0:
    // 0x3a17a0: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x3a17a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3a17a4:
    // 0x3a17a4: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x3a17a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_3a17a8:
    // 0x3a17a8: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x3a17a8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3a17ac:
    // 0x3a17ac: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x3a17acu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_3a17b0:
    // 0x3a17b0: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x3a17b0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_3a17b4:
    // 0x3a17b4: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x3a17b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_3a17b8:
    // 0x3a17b8: 0x3e00008  jr          $ra
label_3a17bc:
    if (ctx->pc == 0x3A17BCu) {
        ctx->pc = 0x3A17BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A17B8u;
        // 0x3a17bc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A17C0u;
        goto label_3a17c0;
    }
    ctx->pc = 0x3A17B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A17BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A17B8u;
        // 0x3a17bc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A17B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A17C0u;
label_3a17c0:
    // 0x3a17c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3a17c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3a17c4:
    // 0x3a17c4: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x3a17c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_3a17c8:
    // 0x3a17c8: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x3a17c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_3a17cc:
    // 0x3a17cc: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x3a17ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a17d0:
    // 0x3a17d0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x3a17d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_3a17d4:
    // 0x3a17d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3a17d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a17d8:
    // 0x3a17d8: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x3a17d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_3a17dc:
    // 0x3a17dc: 0x26530020  addiu       $s3, $s2, 0x20
    ctx->pc = 0x3a17dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_3a17e0:
    // 0x3a17e0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3a17e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3a17e4:
    // 0x3a17e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a17e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a17e8:
    // 0x3a17e8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x3a17e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_3a17ec:
    // 0x3a17ec: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x3a17ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_3a17f0:
    // 0x3a17f0: 0x8e50001c  lw          $s0, 0x1C($s2)
    ctx->pc = 0x3a17f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_3a17f4:
    // 0x3a17f4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a17f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a17f8:
    // 0x3a17f8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x3a17f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_3a17fc:
    // 0x3a17fc: 0x40f809  jalr        $v0
label_3a1800:
    if (ctx->pc == 0x3A1800u) {
        ctx->pc = 0x3A1800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A17FCu;
        // 0x3a1800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1804u;
        goto label_3a1804;
    }
    ctx->pc = 0x3A17FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A1804u);
        ctx->pc = 0x3A1800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A17FCu;
        // 0x3a1800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A17FCu, 0x3A1804u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A1804u;
label_3a1804:
    // 0x3a1804: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x3a1804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3a1808:
    // 0x3a1808: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x3a1808u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3a180c:
    // 0x3a180c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x3a180cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3a1810:
    // 0x3a1810: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3a1810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a1814:
    // 0x3a1814: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3a1814u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a1818:
    // 0x3a1818: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x3a1818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_3a181c:
    // 0x3a181c: 0x40f809  jalr        $v0
label_3a1820:
    if (ctx->pc == 0x3A1820u) {
        ctx->pc = 0x3A1820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A181Cu;
        // 0x3a1820: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1824u;
        goto label_3a1824;
    }
    ctx->pc = 0x3A181Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A1824u);
        ctx->pc = 0x3A1820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A181Cu;
        // 0x3a1820: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A181Cu, 0x3A1824u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A1824u;
label_3a1824:
    // 0x3a1824: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x3a1824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3a1828:
    // 0x3a1828: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x3a1828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3a182c:
    // 0x3a182c: 0xc0efa49  jal         func_3BE924
label_3a1830:
    if (ctx->pc == 0x3A1830u) {
        ctx->pc = 0x3A1830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A182Cu;
        // 0x3a1830: 0x8fa60024  lw          $a2, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1834u;
        goto label_3a1834;
    }
    ctx->pc = 0x3A182Cu;
    SET_GPR_U32(ctx, 31, 0x3A1834u);
    ctx->pc = 0x3A1830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A182Cu;
    // 0x3a1830: 0x8fa60024  lw          $a2, 0x24($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3A182Cu, 0x3A1834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1834u;
label_3a1834:
    // 0x3a1834: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x3a1834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3a1838:
    // 0x3a1838: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3a1838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a183c:
    // 0x3a183c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3a183cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a1840:
    // 0x3a1840: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x3a1840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_3a1844:
    // 0x3a1844: 0x40f809  jalr        $v0
label_3a1848:
    if (ctx->pc == 0x3A1848u) {
        ctx->pc = 0x3A1848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1844u;
        // 0x3a1848: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A184Cu;
        goto label_3a184c;
    }
    ctx->pc = 0x3A1844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A184Cu);
        ctx->pc = 0x3A1848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1844u;
        // 0x3a1848: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1844u, 0x3A184Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A184Cu;
label_3a184c:
    // 0x3a184c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x3a184cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3a1850:
    // 0x3a1850: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x3a1850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_3a1854:
    // 0x3a1854: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3a1854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a1858:
    // 0x3a1858: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3a1858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a185c:
    // 0x3a185c: 0xc0eb07e  jal         func_3AC1F8
label_3a1860:
    if (ctx->pc == 0x3A1860u) {
        ctx->pc = 0x3A1860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A185Cu;
        // 0x3a1860: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1864u;
        goto label_3a1864;
    }
    ctx->pc = 0x3A185Cu;
    SET_GPR_U32(ctx, 31, 0x3A1864u);
    ctx->pc = 0x3A1860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A185Cu;
    // 0x3a1860: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC1F8u, 0x3A185Cu, 0x3A1864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1864u;
label_3a1864:
    // 0x3a1864: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a1864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a1868:
    // 0x3a1868: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3a1868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a186c:
    // 0x3a186c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a186cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a1870:
    // 0x3a1870: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x3a1870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_3a1874:
    // 0x3a1874: 0x40f809  jalr        $v0
label_3a1878:
    if (ctx->pc == 0x3A1878u) {
        ctx->pc = 0x3A1878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1874u;
        // 0x3a1878: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A187Cu;
        goto label_3a187c;
    }
    ctx->pc = 0x3A1874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A187Cu);
        ctx->pc = 0x3A1878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1874u;
        // 0x3a1878: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1874u, 0x3A187Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A187Cu;
label_3a187c:
    // 0x3a187c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3a187cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a1880:
    // 0x3a1880: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a1880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a1884:
    // 0x3a1884: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3a1884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a1888:
    // 0x3a1888: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x3a1888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_3a188c:
    // 0x3a188c: 0x60f809  jalr        $v1
label_3a1890:
    if (ctx->pc == 0x3A1890u) {
        ctx->pc = 0x3A1890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A188Cu;
        // 0x3a1890: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1894u;
        goto label_3a1894;
    }
    ctx->pc = 0x3A188Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3A1894u);
        ctx->pc = 0x3A1890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A188Cu;
        // 0x3a1890: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A188Cu, 0x3A1894u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A1894u;
label_3a1894:
    // 0x3a1894: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3a1894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3a1898:
    // 0x3a1898: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x3a1898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_3a189c:
    // 0x3a189c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x3a189cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3a18a0:
    // 0x3a18a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a18a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3a18a4:
    // 0x3a18a4: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x3a18a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_3a18a8:
    // 0x3a18a8: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x3a18a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_3a18ac:
    // 0x3a18ac: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x3a18acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_3a18b0:
    // 0x3a18b0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x3a18b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3a18b4:
    // 0x3a18b4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3a18b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3a18b8:
    // 0x3a18b8: 0x3e00008  jr          $ra
label_3a18bc:
    if (ctx->pc == 0x3A18BCu) {
        ctx->pc = 0x3A18BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A18B8u;
        // 0x3a18bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A18C0u;
        goto label_fallthrough_0x3a18b8;
    }
    ctx->pc = 0x3A18B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A18BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A18B8u;
        // 0x3a18bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A18B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a18b8:
    ctx->pc = 0x3A18C0u;
}
