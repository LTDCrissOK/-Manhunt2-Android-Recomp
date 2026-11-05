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

// Function: sub_002A1308
// Address: 0x2a1308 - 0x2a1748
void sub_002A1308_0x2a1308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1308_0x2a1308");
#endif

    switch (ctx->pc) {
        case 0x2a1308u: goto label_2a1308;
        case 0x2a130cu: goto label_2a130c;
        case 0x2a1310u: goto label_2a1310;
        case 0x2a1314u: goto label_2a1314;
        case 0x2a1318u: goto label_2a1318;
        case 0x2a131cu: goto label_2a131c;
        case 0x2a1320u: goto label_2a1320;
        case 0x2a1324u: goto label_2a1324;
        case 0x2a1328u: goto label_2a1328;
        case 0x2a132cu: goto label_2a132c;
        case 0x2a1330u: goto label_2a1330;
        case 0x2a1334u: goto label_2a1334;
        case 0x2a1338u: goto label_2a1338;
        case 0x2a133cu: goto label_2a133c;
        case 0x2a1340u: goto label_2a1340;
        case 0x2a1344u: goto label_2a1344;
        case 0x2a1348u: goto label_2a1348;
        case 0x2a134cu: goto label_2a134c;
        case 0x2a1350u: goto label_2a1350;
        case 0x2a1354u: goto label_2a1354;
        case 0x2a1358u: goto label_2a1358;
        case 0x2a135cu: goto label_2a135c;
        case 0x2a1360u: goto label_2a1360;
        case 0x2a1364u: goto label_2a1364;
        case 0x2a1368u: goto label_2a1368;
        case 0x2a136cu: goto label_2a136c;
        case 0x2a1370u: goto label_2a1370;
        case 0x2a1374u: goto label_2a1374;
        case 0x2a1378u: goto label_2a1378;
        case 0x2a137cu: goto label_2a137c;
        case 0x2a1380u: goto label_2a1380;
        case 0x2a1384u: goto label_2a1384;
        case 0x2a1388u: goto label_2a1388;
        case 0x2a138cu: goto label_2a138c;
        case 0x2a1390u: goto label_2a1390;
        case 0x2a1394u: goto label_2a1394;
        case 0x2a1398u: goto label_2a1398;
        case 0x2a139cu: goto label_2a139c;
        case 0x2a13a0u: goto label_2a13a0;
        case 0x2a13a4u: goto label_2a13a4;
        case 0x2a13a8u: goto label_2a13a8;
        case 0x2a13acu: goto label_2a13ac;
        case 0x2a13b0u: goto label_2a13b0;
        case 0x2a13b4u: goto label_2a13b4;
        case 0x2a13b8u: goto label_2a13b8;
        case 0x2a13bcu: goto label_2a13bc;
        case 0x2a13c0u: goto label_2a13c0;
        case 0x2a13c4u: goto label_2a13c4;
        case 0x2a13c8u: goto label_2a13c8;
        case 0x2a13ccu: goto label_2a13cc;
        case 0x2a13d0u: goto label_2a13d0;
        case 0x2a13d4u: goto label_2a13d4;
        case 0x2a13d8u: goto label_2a13d8;
        case 0x2a13dcu: goto label_2a13dc;
        case 0x2a13e0u: goto label_2a13e0;
        case 0x2a13e4u: goto label_2a13e4;
        case 0x2a13e8u: goto label_2a13e8;
        case 0x2a13ecu: goto label_2a13ec;
        case 0x2a13f0u: goto label_2a13f0;
        case 0x2a13f4u: goto label_2a13f4;
        case 0x2a13f8u: goto label_2a13f8;
        case 0x2a13fcu: goto label_2a13fc;
        case 0x2a1400u: goto label_2a1400;
        case 0x2a1404u: goto label_2a1404;
        case 0x2a1408u: goto label_2a1408;
        case 0x2a140cu: goto label_2a140c;
        case 0x2a1410u: goto label_2a1410;
        case 0x2a1414u: goto label_2a1414;
        case 0x2a1418u: goto label_2a1418;
        case 0x2a141cu: goto label_2a141c;
        case 0x2a1420u: goto label_2a1420;
        case 0x2a1424u: goto label_2a1424;
        case 0x2a1428u: goto label_2a1428;
        case 0x2a142cu: goto label_2a142c;
        case 0x2a1430u: goto label_2a1430;
        case 0x2a1434u: goto label_2a1434;
        case 0x2a1438u: goto label_2a1438;
        case 0x2a143cu: goto label_2a143c;
        case 0x2a1440u: goto label_2a1440;
        case 0x2a1444u: goto label_2a1444;
        case 0x2a1448u: goto label_2a1448;
        case 0x2a144cu: goto label_2a144c;
        case 0x2a1450u: goto label_2a1450;
        case 0x2a1454u: goto label_2a1454;
        case 0x2a1458u: goto label_2a1458;
        case 0x2a145cu: goto label_2a145c;
        case 0x2a1460u: goto label_2a1460;
        case 0x2a1464u: goto label_2a1464;
        case 0x2a1468u: goto label_2a1468;
        case 0x2a146cu: goto label_2a146c;
        case 0x2a1470u: goto label_2a1470;
        case 0x2a1474u: goto label_2a1474;
        case 0x2a1478u: goto label_2a1478;
        case 0x2a147cu: goto label_2a147c;
        case 0x2a1480u: goto label_2a1480;
        case 0x2a1484u: goto label_2a1484;
        case 0x2a1488u: goto label_2a1488;
        case 0x2a148cu: goto label_2a148c;
        case 0x2a1490u: goto label_2a1490;
        case 0x2a1494u: goto label_2a1494;
        case 0x2a1498u: goto label_2a1498;
        case 0x2a149cu: goto label_2a149c;
        case 0x2a14a0u: goto label_2a14a0;
        case 0x2a14a4u: goto label_2a14a4;
        case 0x2a14a8u: goto label_2a14a8;
        case 0x2a14acu: goto label_2a14ac;
        case 0x2a14b0u: goto label_2a14b0;
        case 0x2a14b4u: goto label_2a14b4;
        case 0x2a14b8u: goto label_2a14b8;
        case 0x2a14bcu: goto label_2a14bc;
        case 0x2a14c0u: goto label_2a14c0;
        case 0x2a14c4u: goto label_2a14c4;
        case 0x2a14c8u: goto label_2a14c8;
        case 0x2a14ccu: goto label_2a14cc;
        case 0x2a14d0u: goto label_2a14d0;
        case 0x2a14d4u: goto label_2a14d4;
        case 0x2a14d8u: goto label_2a14d8;
        case 0x2a14dcu: goto label_2a14dc;
        case 0x2a14e0u: goto label_2a14e0;
        case 0x2a14e4u: goto label_2a14e4;
        case 0x2a14e8u: goto label_2a14e8;
        case 0x2a14ecu: goto label_2a14ec;
        case 0x2a14f0u: goto label_2a14f0;
        case 0x2a14f4u: goto label_2a14f4;
        case 0x2a14f8u: goto label_2a14f8;
        case 0x2a14fcu: goto label_2a14fc;
        case 0x2a1500u: goto label_2a1500;
        case 0x2a1504u: goto label_2a1504;
        case 0x2a1508u: goto label_2a1508;
        case 0x2a150cu: goto label_2a150c;
        case 0x2a1510u: goto label_2a1510;
        case 0x2a1514u: goto label_2a1514;
        case 0x2a1518u: goto label_2a1518;
        case 0x2a151cu: goto label_2a151c;
        case 0x2a1520u: goto label_2a1520;
        case 0x2a1524u: goto label_2a1524;
        case 0x2a1528u: goto label_2a1528;
        case 0x2a152cu: goto label_2a152c;
        case 0x2a1530u: goto label_2a1530;
        case 0x2a1534u: goto label_2a1534;
        case 0x2a1538u: goto label_2a1538;
        case 0x2a153cu: goto label_2a153c;
        case 0x2a1540u: goto label_2a1540;
        case 0x2a1544u: goto label_2a1544;
        case 0x2a1548u: goto label_2a1548;
        case 0x2a154cu: goto label_2a154c;
        case 0x2a1550u: goto label_2a1550;
        case 0x2a1554u: goto label_2a1554;
        case 0x2a1558u: goto label_2a1558;
        case 0x2a155cu: goto label_2a155c;
        case 0x2a1560u: goto label_2a1560;
        case 0x2a1564u: goto label_2a1564;
        case 0x2a1568u: goto label_2a1568;
        case 0x2a156cu: goto label_2a156c;
        case 0x2a1570u: goto label_2a1570;
        case 0x2a1574u: goto label_2a1574;
        case 0x2a1578u: goto label_2a1578;
        case 0x2a157cu: goto label_2a157c;
        case 0x2a1580u: goto label_2a1580;
        case 0x2a1584u: goto label_2a1584;
        case 0x2a1588u: goto label_2a1588;
        case 0x2a158cu: goto label_2a158c;
        case 0x2a1590u: goto label_2a1590;
        case 0x2a1594u: goto label_2a1594;
        case 0x2a1598u: goto label_2a1598;
        case 0x2a159cu: goto label_2a159c;
        case 0x2a15a0u: goto label_2a15a0;
        case 0x2a15a4u: goto label_2a15a4;
        case 0x2a15a8u: goto label_2a15a8;
        case 0x2a15acu: goto label_2a15ac;
        case 0x2a15b0u: goto label_2a15b0;
        case 0x2a15b4u: goto label_2a15b4;
        case 0x2a15b8u: goto label_2a15b8;
        case 0x2a15bcu: goto label_2a15bc;
        case 0x2a15c0u: goto label_2a15c0;
        case 0x2a15c4u: goto label_2a15c4;
        case 0x2a15c8u: goto label_2a15c8;
        case 0x2a15ccu: goto label_2a15cc;
        case 0x2a15d0u: goto label_2a15d0;
        case 0x2a15d4u: goto label_2a15d4;
        case 0x2a15d8u: goto label_2a15d8;
        case 0x2a15dcu: goto label_2a15dc;
        case 0x2a15e0u: goto label_2a15e0;
        case 0x2a15e4u: goto label_2a15e4;
        case 0x2a15e8u: goto label_2a15e8;
        case 0x2a15ecu: goto label_2a15ec;
        case 0x2a15f0u: goto label_2a15f0;
        case 0x2a15f4u: goto label_2a15f4;
        case 0x2a15f8u: goto label_2a15f8;
        case 0x2a15fcu: goto label_2a15fc;
        case 0x2a1600u: goto label_2a1600;
        case 0x2a1604u: goto label_2a1604;
        case 0x2a1608u: goto label_2a1608;
        case 0x2a160cu: goto label_2a160c;
        case 0x2a1610u: goto label_2a1610;
        case 0x2a1614u: goto label_2a1614;
        case 0x2a1618u: goto label_2a1618;
        case 0x2a161cu: goto label_2a161c;
        case 0x2a1620u: goto label_2a1620;
        case 0x2a1624u: goto label_2a1624;
        case 0x2a1628u: goto label_2a1628;
        case 0x2a162cu: goto label_2a162c;
        case 0x2a1630u: goto label_2a1630;
        case 0x2a1634u: goto label_2a1634;
        case 0x2a1638u: goto label_2a1638;
        case 0x2a163cu: goto label_2a163c;
        case 0x2a1640u: goto label_2a1640;
        case 0x2a1644u: goto label_2a1644;
        case 0x2a1648u: goto label_2a1648;
        case 0x2a164cu: goto label_2a164c;
        case 0x2a1650u: goto label_2a1650;
        case 0x2a1654u: goto label_2a1654;
        case 0x2a1658u: goto label_2a1658;
        case 0x2a165cu: goto label_2a165c;
        case 0x2a1660u: goto label_2a1660;
        case 0x2a1664u: goto label_2a1664;
        case 0x2a1668u: goto label_2a1668;
        case 0x2a166cu: goto label_2a166c;
        case 0x2a1670u: goto label_2a1670;
        case 0x2a1674u: goto label_2a1674;
        case 0x2a1678u: goto label_2a1678;
        case 0x2a167cu: goto label_2a167c;
        case 0x2a1680u: goto label_2a1680;
        case 0x2a1684u: goto label_2a1684;
        case 0x2a1688u: goto label_2a1688;
        case 0x2a168cu: goto label_2a168c;
        case 0x2a1690u: goto label_2a1690;
        case 0x2a1694u: goto label_2a1694;
        case 0x2a1698u: goto label_2a1698;
        case 0x2a169cu: goto label_2a169c;
        case 0x2a16a0u: goto label_2a16a0;
        case 0x2a16a4u: goto label_2a16a4;
        case 0x2a16a8u: goto label_2a16a8;
        case 0x2a16acu: goto label_2a16ac;
        case 0x2a16b0u: goto label_2a16b0;
        case 0x2a16b4u: goto label_2a16b4;
        case 0x2a16b8u: goto label_2a16b8;
        case 0x2a16bcu: goto label_2a16bc;
        case 0x2a16c0u: goto label_2a16c0;
        case 0x2a16c4u: goto label_2a16c4;
        case 0x2a16c8u: goto label_2a16c8;
        case 0x2a16ccu: goto label_2a16cc;
        case 0x2a16d0u: goto label_2a16d0;
        case 0x2a16d4u: goto label_2a16d4;
        case 0x2a16d8u: goto label_2a16d8;
        case 0x2a16dcu: goto label_2a16dc;
        case 0x2a16e0u: goto label_2a16e0;
        case 0x2a16e4u: goto label_2a16e4;
        case 0x2a16e8u: goto label_2a16e8;
        case 0x2a16ecu: goto label_2a16ec;
        case 0x2a16f0u: goto label_2a16f0;
        case 0x2a16f4u: goto label_2a16f4;
        case 0x2a16f8u: goto label_2a16f8;
        case 0x2a16fcu: goto label_2a16fc;
        case 0x2a1700u: goto label_2a1700;
        case 0x2a1704u: goto label_2a1704;
        case 0x2a1708u: goto label_2a1708;
        case 0x2a170cu: goto label_2a170c;
        case 0x2a1710u: goto label_2a1710;
        case 0x2a1714u: goto label_2a1714;
        case 0x2a1718u: goto label_2a1718;
        case 0x2a171cu: goto label_2a171c;
        case 0x2a1720u: goto label_2a1720;
        case 0x2a1724u: goto label_2a1724;
        case 0x2a1728u: goto label_2a1728;
        case 0x2a172cu: goto label_2a172c;
        case 0x2a1730u: goto label_2a1730;
        case 0x2a1734u: goto label_2a1734;
        case 0x2a1738u: goto label_2a1738;
        case 0x2a173cu: goto label_2a173c;
        case 0x2a1740u: goto label_2a1740;
        case 0x2a1744u: goto label_2a1744;
        default: break;
    }

    ctx->pc = 0x2a1308u;

label_2a1308:
    // 0x2a1308: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a1308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2a130c:
    // 0x2a130c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2a130cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_2a1310:
    // 0x2a1310: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2a1310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2a1314:
    // 0x2a1314: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2a1314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2a1318:
    // 0x2a1318: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2a1318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2a131c:
    // 0x2a131c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2a131cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_2a1320:
    // 0x2a1320: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2a1320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_2a1324:
    // 0x2a1324: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2a1324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_2a1328:
    // 0x2a1328: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2a1328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_2a132c:
    // 0x2a132c: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x2a132cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_2a1330:
    // 0x2a1330: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2a1330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_2a1334:
    // 0x2a1334: 0xc0a9c2a  jal         func_2A70A8
label_2a1338:
    if (ctx->pc == 0x2A1338u) {
        ctx->pc = 0x2A1338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1334u;
        // 0x2a1338: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A133Cu;
        goto label_2a133c;
    }
    ctx->pc = 0x2A1334u;
    SET_GPR_U32(ctx, 31, 0x2A133Cu);
    ctx->pc = 0x2A1338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1334u;
    // 0x2a1338: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A70A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A70A8u, 0x2A1334u, 0x2A133Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A133Cu;
label_2a133c:
    // 0x2a133c: 0x104000f4  beqz        $v0, . + 4 + (0xF4 << 2)
label_2a1340:
    if (ctx->pc == 0x2A1340u) {
        ctx->pc = 0x2A1344u;
        goto label_2a1344;
    }
    ctx->pc = 0x2A133Cu;
    {
        const bool branch_taken_0x2a133c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a133c) {
            ctx->pc = 0x2A1710u;
            goto label_2a1710;
        }
    }
    ctx->pc = 0x2A1344u;
label_2a1344:
    // 0x2a1344: 0xc0a1e6e  jal         func_2879B8
label_2a1348:
    if (ctx->pc == 0x2A1348u) {
        ctx->pc = 0x2A134Cu;
        goto label_2a134c;
    }
    ctx->pc = 0x2A1344u;
    SET_GPR_U32(ctx, 31, 0x2A134Cu);
    ctx->pc = 0x2879B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2879B8u, 0x2A1344u, 0x2A134Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A134Cu;
label_2a134c:
    // 0x2a134c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2a1350:
    if (ctx->pc == 0x2A1350u) {
        ctx->pc = 0x2A1350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A134Cu;
        // 0x2a1350: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1354u;
        goto label_2a1354;
    }
    ctx->pc = 0x2A134Cu;
    {
        const bool branch_taken_0x2a134c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A134Cu;
        // 0x2a1350: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a134c) {
            ctx->pc = 0x2A1384u;
            goto label_2a1384;
        }
    }
    ctx->pc = 0x2A1354u;
label_2a1354:
    // 0x2a1354: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2a1354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2a1358:
    // 0x2a1358: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a1358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a135c:
    // 0x2a135c: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x2a135cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
label_2a1360:
    // 0x2a1360: 0xc07f540  jal         func_1FD500
label_2a1364:
    if (ctx->pc == 0x2A1364u) {
        ctx->pc = 0x2A1364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1360u;
        // 0x2a1364: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1368u;
        goto label_2a1368;
    }
    ctx->pc = 0x2A1360u;
    SET_GPR_U32(ctx, 31, 0x2A1368u);
    ctx->pc = 0x2A1364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1360u;
    // 0x2a1364: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD500u, 0x2A1360u, 0x2A1368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1368u;
label_2a1368:
    // 0x2a1368: 0x8e6202e0  lw          $v0, 0x2E0($s3)
    ctx->pc = 0x2a1368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 736)));
label_2a136c:
    // 0x2a136c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2a1370:
    if (ctx->pc == 0x2A1370u) {
        ctx->pc = 0x2A1370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A136Cu;
        // 0x2a1370: 0x8e620318  lw          $v0, 0x318($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 792)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1374u;
        goto label_2a1374;
    }
    ctx->pc = 0x2A136Cu;
    {
        const bool branch_taken_0x2a136c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a136c) {
            ctx->pc = 0x2A1370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A136Cu;
            // 0x2a1370: 0x8e620318  lw          $v0, 0x318($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 792)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1374u;
            goto label_2a1374;
        }
    }
    ctx->pc = 0x2A1374u;
label_2a1374:
    // 0x2a1374: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a1374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2a1378:
    // 0x2a1378: 0xae6202e0  sw          $v0, 0x2E0($s3)
    ctx->pc = 0x2a1378u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 736), GPR_U32(ctx, 2));
label_2a137c:
    // 0x2a137c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a137cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a1380:
    // 0x2a1380: 0xa2620210  sb          $v0, 0x210($s3)
    ctx->pc = 0x2a1380u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 528), (uint8_t)GPR_U32(ctx, 2));
label_2a1384:
    // 0x2a1384: 0xc0a1ebe  jal         func_287AF8
label_2a1388:
    if (ctx->pc == 0x2A1388u) {
        ctx->pc = 0x2A138Cu;
        goto label_2a138c;
    }
    ctx->pc = 0x2A1384u;
    SET_GPR_U32(ctx, 31, 0x2A138Cu);
    ctx->pc = 0x287AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287AF8u, 0x2A1384u, 0x2A138Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A138Cu;
label_2a138c:
    // 0x2a138c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2a1390:
    if (ctx->pc == 0x2A1390u) {
        ctx->pc = 0x2A1390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A138Cu;
        // 0x2a1390: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1394u;
        goto label_2a1394;
    }
    ctx->pc = 0x2A138Cu;
    {
        const bool branch_taken_0x2a138c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A138Cu;
        // 0x2a1390: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a138c) {
            ctx->pc = 0x2A13CCu;
            goto label_2a13cc;
        }
    }
    ctx->pc = 0x2A1394u;
label_2a1394:
    // 0x2a1394: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2a1394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2a1398:
    // 0x2a1398: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a1398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a139c:
    // 0x2a139c: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x2a139cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
label_2a13a0:
    // 0x2a13a0: 0xc07f540  jal         func_1FD500
label_2a13a4:
    if (ctx->pc == 0x2A13A4u) {
        ctx->pc = 0x2A13A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A13A0u;
        // 0x2a13a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A13A8u;
        goto label_2a13a8;
    }
    ctx->pc = 0x2A13A0u;
    SET_GPR_U32(ctx, 31, 0x2A13A8u);
    ctx->pc = 0x2A13A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A13A0u;
    // 0x2a13a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD500u, 0x2A13A0u, 0x2A13A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A13A8u;
label_2a13a8:
    // 0x2a13a8: 0x8e6202e0  lw          $v0, 0x2E0($s3)
    ctx->pc = 0x2a13a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 736)));
label_2a13ac:
    // 0x2a13ac: 0x8e630318  lw          $v1, 0x318($s3)
    ctx->pc = 0x2a13acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 792)));
label_2a13b0:
    // 0x2a13b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a13b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a13b4:
    // 0x2a13b4: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x2a13b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2a13b8:
    // 0x2a13b8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_2a13bc:
    if (ctx->pc == 0x2A13BCu) {
        ctx->pc = 0x2A13BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A13B8u;
        // 0x2a13bc: 0xae6202e0  sw          $v0, 0x2E0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 736), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A13C0u;
        goto label_2a13c0;
    }
    ctx->pc = 0x2A13B8u;
    {
        const bool branch_taken_0x2a13b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A13BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A13B8u;
        // 0x2a13bc: 0xae6202e0  sw          $v0, 0x2E0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 736), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a13b8) {
            ctx->pc = 0x2A13C4u;
            goto label_2a13c4;
        }
    }
    ctx->pc = 0x2A13C0u;
label_2a13c0:
    // 0x2a13c0: 0xae6002e0  sw          $zero, 0x2E0($s3)
    ctx->pc = 0x2a13c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 736), GPR_U32(ctx, 0));
label_2a13c4:
    // 0x2a13c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a13c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a13c8:
    // 0x2a13c8: 0xa2620210  sb          $v0, 0x210($s3)
    ctx->pc = 0x2a13c8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 528), (uint8_t)GPR_U32(ctx, 2));
label_2a13cc:
    // 0x2a13cc: 0xc0a1f1c  jal         func_287C70
label_2a13d0:
    if (ctx->pc == 0x2A13D0u) {
        ctx->pc = 0x2A13D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A13CCu;
        // 0x2a13d0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A13D4u;
        goto label_2a13d4;
    }
    ctx->pc = 0x2A13CCu;
    SET_GPR_U32(ctx, 31, 0x2A13D4u);
    ctx->pc = 0x2A13D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A13CCu;
    // 0x2a13d0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287C70u, 0x2A13CCu, 0x2A13D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A13D4u;
label_2a13d4:
    // 0x2a13d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2a13d8:
    if (ctx->pc == 0x2A13D8u) {
        ctx->pc = 0x2A13D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A13D4u;
        // 0x2a13d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A13DCu;
        goto label_2a13dc;
    }
    ctx->pc = 0x2A13D4u;
    {
        const bool branch_taken_0x2a13d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A13D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A13D4u;
        // 0x2a13d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a13d4) {
            ctx->pc = 0x2A13ECu;
            goto label_2a13ec;
        }
    }
    ctx->pc = 0x2A13DCu;
label_2a13dc:
    // 0x2a13dc: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x2a13dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
label_2a13e0:
    // 0x2a13e0: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x2a13e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_2a13e4:
    // 0x2a13e4: 0x40f809  jalr        $v0
label_2a13e8:
    if (ctx->pc == 0x2A13E8u) {
        ctx->pc = 0x2A13E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A13E4u;
        // 0x2a13e8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A13ECu;
        goto label_2a13ec;
    }
    ctx->pc = 0x2A13E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A13ECu);
        ctx->pc = 0x2A13E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A13E4u;
        // 0x2a13e8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A13E4u, 0x2A13ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A13ECu;
label_2a13ec:
    // 0x2a13ec: 0xc0a1f0e  jal         func_287C38
label_2a13f0:
    if (ctx->pc == 0x2A13F0u) {
        ctx->pc = 0x2A13F4u;
        goto label_2a13f4;
    }
    ctx->pc = 0x2A13ECu;
    SET_GPR_U32(ctx, 31, 0x2A13F4u);
    ctx->pc = 0x287C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287C38u, 0x2A13ECu, 0x2A13F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A13F4u;
label_2a13f4:
    // 0x2a13f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2a13f8:
    if (ctx->pc == 0x2A13F8u) {
        ctx->pc = 0x2A13F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A13F4u;
        // 0x2a13f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A13FCu;
        goto label_2a13fc;
    }
    ctx->pc = 0x2A13F4u;
    {
        const bool branch_taken_0x2a13f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A13F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A13F4u;
        // 0x2a13f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a13f4) {
            ctx->pc = 0x2A140Cu;
            goto label_2a140c;
        }
    }
    ctx->pc = 0x2A13FCu;
label_2a13fc:
    // 0x2a13fc: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x2a13fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
label_2a1400:
    // 0x2a1400: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a1400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a1404:
    // 0x2a1404: 0x40f809  jalr        $v0
label_2a1408:
    if (ctx->pc == 0x2A1408u) {
        ctx->pc = 0x2A1408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1404u;
        // 0x2a1408: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A140Cu;
        goto label_2a140c;
    }
    ctx->pc = 0x2A1404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A140Cu);
        ctx->pc = 0x2A1408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1404u;
        // 0x2a1408: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1404u, 0x2A140Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A140Cu;
label_2a140c:
    // 0x2a140c: 0x52000006  beql        $s0, $zero, . + 4 + (0x6 << 2)
label_2a1410:
    if (ctx->pc == 0x2A1410u) {
        ctx->pc = 0x2A1410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A140Cu;
        // 0x2a1410: 0x92620210  lbu         $v0, 0x210($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 528)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1414u;
        goto label_2a1414;
    }
    ctx->pc = 0x2A140Cu;
    {
        const bool branch_taken_0x2a140c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a140c) {
            ctx->pc = 0x2A1410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A140Cu;
            // 0x2a1410: 0x92620210  lbu         $v0, 0x210($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 528)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1428u;
            goto label_2a1428;
        }
    }
    ctx->pc = 0x2A1414u;
label_2a1414:
    // 0x2a1414: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x2a1414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
label_2a1418:
    // 0x2a1418: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x2a1418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_2a141c:
    // 0x2a141c: 0x40f809  jalr        $v0
label_2a1420:
    if (ctx->pc == 0x2A1420u) {
        ctx->pc = 0x2A1420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A141Cu;
        // 0x2a1420: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1424u;
        goto label_2a1424;
    }
    ctx->pc = 0x2A141Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A1424u);
        ctx->pc = 0x2A1420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A141Cu;
        // 0x2a1420: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A141Cu, 0x2A1424u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A1424u;
label_2a1424:
    // 0x2a1424: 0x92620210  lbu         $v0, 0x210($s3)
    ctx->pc = 0x2a1424u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 528)));
label_2a1428:
    // 0x2a1428: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2a142c:
    if (ctx->pc == 0x2A142Cu) {
        ctx->pc = 0x2A142Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1428u;
        // 0x2a142c: 0x8e6202e0  lw          $v0, 0x2E0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 736)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1430u;
        goto label_2a1430;
    }
    ctx->pc = 0x2A1428u;
    {
        const bool branch_taken_0x2a1428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1428) {
            ctx->pc = 0x2A142Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1428u;
            // 0x2a142c: 0x8e6202e0  lw          $v0, 0x2E0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 736)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A143Cu;
            goto label_2a143c;
        }
    }
    ctx->pc = 0x2A1430u;
label_2a1430:
    // 0x2a1430: 0xc6600310  lwc1        $f0, 0x310($s3)
    ctx->pc = 0x2a1430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a1434:
    // 0x2a1434: 0xe6600314  swc1        $f0, 0x314($s3)
    ctx->pc = 0x2a1434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 788), bits); }
label_2a1438:
    // 0x2a1438: 0x8e6202e0  lw          $v0, 0x2E0($s3)
    ctx->pc = 0x2a1438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 736)));
label_2a143c:
    // 0x2a143c: 0x266302e4  addiu       $v1, $s3, 0x2E4
    ctx->pc = 0x2a143cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 740));
label_2a1440:
    // 0x2a1440: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2a1440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_2a1444:
    // 0x2a1444: 0x2666031c  addiu       $a2, $s3, 0x31C
    ctx->pc = 0x2a1444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 796));
label_2a1448:
    // 0x2a1448: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x2a1448u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_2a144c:
    // 0x2a144c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2a144cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a1450:
    // 0x2a1450: 0x8e640318  lw          $a0, 0x318($s3)
    ctx->pc = 0x2a1450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 792)));
label_2a1454:
    // 0x2a1454: 0x238c0  sll         $a3, $v0, 3
    ctx->pc = 0x2a1454u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2a1458:
    // 0x2a1458: 0x24e50008  addiu       $a1, $a3, 0x8
    ctx->pc = 0x2a1458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_2a145c:
    // 0x2a145c: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x2a145cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
label_2a1460:
    // 0x2a1460: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2a1460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2a1464:
    // 0x2a1464: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x2a1464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_2a1468:
    // 0x2a1468: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2a1468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_2a146c:
    // 0x2a146c: 0xa4202b  sltu        $a0, $a1, $a0
    ctx->pc = 0x2a146cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2a1470:
    // 0x2a1470: 0x26630324  addiu       $v1, $s3, 0x324
    ctx->pc = 0x2a1470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 804));
label_2a1474:
    // 0x2a1474: 0x8fb60008  lw          $s6, 0x8($sp)
    ctx->pc = 0x2a1474u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2a1478:
    // 0x2a1478: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x2a1478u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2a147c:
    // 0x2a147c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2a147cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a1480:
    // 0x2a1480: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x2a1480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_2a1484:
    // 0x2a1484: 0x46b821  addu        $s7, $v0, $a2
    ctx->pc = 0x2a1484u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2a1488:
    // 0x2a1488: 0xa4380b  movn        $a3, $a1, $a0
    ctx->pc = 0x2a1488u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
label_2a148c:
    // 0x2a148c: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x2a148cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
label_2a1490:
    // 0x2a1490: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x2a1490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2a1494:
    // 0x2a1494: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2a1494u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a1498:
    // 0x2a1498: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2a1498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2a149c:
    // 0x2a149c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a149cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a14a0:
    // 0x2a14a0: 0xc075e34  jal         func_1D78D0
label_2a14a4:
    if (ctx->pc == 0x2A14A4u) {
        ctx->pc = 0x2A14A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A14A0u;
        // 0x2a14a4: 0x7ea021  addu        $s4, $v1, $fp (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A14A8u;
        goto label_2a14a8;
    }
    ctx->pc = 0x2A14A0u;
    SET_GPR_U32(ctx, 31, 0x2A14A8u);
    ctx->pc = 0x2A14A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A14A0u;
    // 0x2a14a4: 0x7ea021  addu        $s4, $v1, $fp (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D78D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D78D0u, 0x2A14A0u, 0x2A14A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A14A8u;
label_2a14a8:
    // 0x2a14a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a14a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a14ac:
    // 0x2a14ac: 0x8ed20000  lw          $s2, 0x0($s6)
    ctx->pc = 0x2a14acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2a14b0:
    // 0x2a14b0: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2a14b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_2a14b4:
    // 0x2a14b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a14b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a14b8:
    // 0x2a14b8: 0x24422508  addiu       $v0, $v0, 0x2508
    ctx->pc = 0x2a14b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9480));
label_2a14bc:
    // 0x2a14bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a14bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a14c0:
    // 0x2a14c0: 0x400013  mtlo        $v0
    ctx->pc = 0x2a14c0u;
    ctx->lo = GPR_U64(ctx, 2);
label_2a14c4:
    // 0x2a14c4: 0x240200b0  addiu       $v0, $zero, 0xB0
    ctx->pc = 0x2a14c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_2a14c8:
    // 0x2a14c8: 0x72223000  madd        $a2, $s1, $v0
    ctx->pc = 0x2a14c8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_2a14cc:
    // 0x2a14cc: 0x8e420074  lw          $v0, 0x74($s2)
    ctx->pc = 0x2a14ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_2a14d0:
    // 0x2a14d0: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x2a14d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2a14d4:
    // 0x2a14d4: 0x60f809  jalr        $v1
label_2a14d8:
    if (ctx->pc == 0x2A14D8u) {
        ctx->pc = 0x2A14D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A14D4u;
        // 0x2a14d8: 0x90d000ec  lbu         $s0, 0xEC($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 236)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A14DCu;
        goto label_2a14dc;
    }
    ctx->pc = 0x2A14D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2A14DCu);
        ctx->pc = 0x2A14D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A14D4u;
        // 0x2a14d8: 0x90d000ec  lbu         $s0, 0xEC($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 236)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A14D4u, 0x2A14DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A14DCu;
label_2a14dc:
    // 0x2a14dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a14dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a14e0:
    // 0x2a14e0: 0xc0a83b8  jal         func_2A0EE0
label_2a14e4:
    if (ctx->pc == 0x2A14E4u) {
        ctx->pc = 0x2A14E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A14E0u;
        // 0x2a14e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A14E8u;
        goto label_2a14e8;
    }
    ctx->pc = 0x2A14E0u;
    SET_GPR_U32(ctx, 31, 0x2A14E8u);
    ctx->pc = 0x2A14E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A14E0u;
    // 0x2a14e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0EE0u, 0x2A14E0u, 0x2A14E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A14E8u;
label_2a14e8:
    // 0x2a14e8: 0xc0ab1b4  jal         func_2AC6D0
label_2a14ec:
    if (ctx->pc == 0x2A14ECu) {
        ctx->pc = 0x2A14ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A14E8u;
        // 0x2a14ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A14F0u;
        goto label_2a14f0;
    }
    ctx->pc = 0x2A14E8u;
    SET_GPR_U32(ctx, 31, 0x2A14F0u);
    ctx->pc = 0x2A14ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A14E8u;
    // 0x2a14ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC6D0u, 0x2A14E8u, 0x2A14F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A14F0u;
label_2a14f0:
    // 0x2a14f0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2a14f4:
    if (ctx->pc == 0x2A14F4u) {
        ctx->pc = 0x2A14F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A14F0u;
        // 0x2a14f4: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A14F8u;
        goto label_2a14f8;
    }
    ctx->pc = 0x2A14F0u;
    {
        const bool branch_taken_0x2a14f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A14F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A14F0u;
        // 0x2a14f4: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a14f0) {
            ctx->pc = 0x2A1514u;
            goto label_2a1514;
        }
    }
    ctx->pc = 0x2A14F8u;
label_2a14f8:
    // 0x2a14f8: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x2a14f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_2a14fc:
    // 0x2a14fc: 0x26640238  addiu       $a0, $s3, 0x238
    ctx->pc = 0x2a14fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 568));
label_2a1500:
    // 0x2a1500: 0x2465c870  addiu       $a1, $v1, -0x3790
    ctx->pc = 0x2a1500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953072));
label_2a1504:
    // 0x2a1504: 0xc0d73e0  jal         func_35CF80
label_2a1508:
    if (ctx->pc == 0x2A1508u) {
        ctx->pc = 0x2A1508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1504u;
        // 0x2a1508: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A150Cu;
        goto label_2a150c;
    }
    ctx->pc = 0x2A1504u;
    SET_GPR_U32(ctx, 31, 0x2A150Cu);
    ctx->pc = 0x2A1508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1504u;
    // 0x2a1508: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF80u, 0x2A1504u, 0x2A150Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A150Cu;
label_2a150c:
    // 0x2a150c: 0x2c550001  sltiu       $s5, $v0, 0x1
    ctx->pc = 0x2a150cu;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2a1510:
    // 0x2a1510: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x2a1510u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2a1514:
    // 0x2a1514: 0xf4102b  sltu        $v0, $a3, $s4
    ctx->pc = 0x2a1514u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_2a1518:
    // 0x2a1518: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2a151c:
    if (ctx->pc == 0x2A151Cu) {
        ctx->pc = 0x2A151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1518u;
        // 0x2a151c: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1520u;
        goto label_2a1520;
    }
    ctx->pc = 0x2A1518u;
    {
        const bool branch_taken_0x2a1518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1518u;
        // 0x2a151c: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1518) {
            ctx->pc = 0x2A1534u;
            goto label_2a1534;
        }
    }
    ctx->pc = 0x2A1520u;
label_2a1520:
    // 0x2a1520: 0x26440008  addiu       $a0, $s2, 0x8
    ctx->pc = 0x2a1520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_2a1524:
    // 0x2a1524: 0xc0d7468  jal         func_35D1A0
label_2a1528:
    if (ctx->pc == 0x2A1528u) {
        ctx->pc = 0x2A1528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1524u;
        // 0x2a1528: 0x2445c850  addiu       $a1, $v0, -0x37B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A152Cu;
        goto label_2a152c;
    }
    ctx->pc = 0x2A1524u;
    SET_GPR_U32(ctx, 31, 0x2A152Cu);
    ctx->pc = 0x2A1528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1524u;
    // 0x2a1528: 0x2445c850  addiu       $a1, $v0, -0x37B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x2A1524u, 0x2A152Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A152Cu;
label_2a152c:
    // 0x2a152c: 0x1000000c  b           . + 4 + (0xC << 2)
label_2a1530:
    if (ctx->pc == 0x2A1530u) {
        ctx->pc = 0x2A1530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A152Cu;
        // 0x2a1530: 0x8fa7000c  lw          $a3, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1534u;
        goto label_2a1534;
    }
    ctx->pc = 0x2A152Cu;
    {
        const bool branch_taken_0x2a152c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A152Cu;
        // 0x2a1530: 0x8fa7000c  lw          $a3, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a152c) {
            ctx->pc = 0x2A1560u;
            goto label_2a1560;
        }
    }
    ctx->pc = 0x2A1534u;
label_2a1534:
    // 0x2a1534: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
label_2a1538:
    if (ctx->pc == 0x2A1538u) {
        ctx->pc = 0x2A1538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1534u;
        // 0x2a1538: 0x3c030047  lui         $v1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A153Cu;
        goto label_2a153c;
    }
    ctx->pc = 0x2A1534u;
    {
        const bool branch_taken_0x2a1534 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1534u;
        // 0x2a1538: 0x3c030047  lui         $v1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1534) {
            ctx->pc = 0x2A1550u;
            goto label_2a1550;
        }
    }
    ctx->pc = 0x2A153Cu;
label_2a153c:
    // 0x2a153c: 0x26440008  addiu       $a0, $s2, 0x8
    ctx->pc = 0x2a153cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_2a1540:
    // 0x2a1540: 0xc0d7468  jal         func_35D1A0
label_2a1544:
    if (ctx->pc == 0x2A1544u) {
        ctx->pc = 0x2A1544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1540u;
        // 0x2a1544: 0x2465c880  addiu       $a1, $v1, -0x3780 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1548u;
        goto label_2a1548;
    }
    ctx->pc = 0x2A1540u;
    SET_GPR_U32(ctx, 31, 0x2A1548u);
    ctx->pc = 0x2A1544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1540u;
    // 0x2a1544: 0x2465c880  addiu       $a1, $v1, -0x3780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x2A1540u, 0x2A1548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1548u;
label_2a1548:
    // 0x2a1548: 0x10000005  b           . + 4 + (0x5 << 2)
label_2a154c:
    if (ctx->pc == 0x2A154Cu) {
        ctx->pc = 0x2A154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1548u;
        // 0x2a154c: 0x8fa7000c  lw          $a3, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1550u;
        goto label_2a1550;
    }
    ctx->pc = 0x2A1548u;
    {
        const bool branch_taken_0x2a1548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1548u;
        // 0x2a154c: 0x8fa7000c  lw          $a3, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1548) {
            ctx->pc = 0x2A1560u;
            goto label_2a1560;
        }
    }
    ctx->pc = 0x2A1550u;
label_2a1550:
    // 0x2a1550: 0x26440008  addiu       $a0, $s2, 0x8
    ctx->pc = 0x2a1550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_2a1554:
    // 0x2a1554: 0xc0d745c  jal         func_35D170
label_2a1558:
    if (ctx->pc == 0x2A1558u) {
        ctx->pc = 0x2A1558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1554u;
        // 0x2a1558: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A155Cu;
        goto label_2a155c;
    }
    ctx->pc = 0x2A1554u;
    SET_GPR_U32(ctx, 31, 0x2A155Cu);
    ctx->pc = 0x2A1558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1554u;
    // 0x2a1558: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x2A1554u, 0x2A155Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A155Cu;
label_2a155c:
    // 0x2a155c: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x2a155cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2a1560:
    // 0x2a1560: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x2a1560u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_2a1564:
    // 0x2a1564: 0x26f70020  addiu       $s7, $s7, 0x20
    ctx->pc = 0x2a1564u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
label_2a1568:
    // 0x2a1568: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x2a1568u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_2a156c:
    // 0x2a156c: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x2a156cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
label_2a1570:
    // 0x2a1570: 0x2fc20008  sltiu       $v0, $fp, 0x8
    ctx->pc = 0x2a1570u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_2a1574:
    // 0x2a1574: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
label_2a1578:
    if (ctx->pc == 0x2A1578u) {
        ctx->pc = 0x2A1578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1574u;
        // 0x2a1578: 0xafa7000c  sw          $a3, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A157Cu;
        goto label_2a157c;
    }
    ctx->pc = 0x2A1574u;
    {
        const bool branch_taken_0x2a1574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1574u;
        // 0x2a1578: 0xafa7000c  sw          $a3, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1574) {
            ctx->pc = 0x2A1490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1490;
        }
    }
    ctx->pc = 0x2A157Cu;
label_2a157c:
    // 0x2a157c: 0x8e6202e0  lw          $v0, 0x2E0($s3)
    ctx->pc = 0x2a157cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 736)));
label_2a1580:
    // 0x2a1580: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2a1580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2a1584:
    // 0x2a1584: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2a1584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_2a1588:
    // 0x2a1588: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a1588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2a158c:
    // 0x2a158c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2a158cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a1590:
    // 0x2a1590: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a1590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a1594:
    // 0x2a1594: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x2a1594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_2a1598:
    // 0x2a1598: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2a1598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2a159c:
    // 0x2a159c: 0x40f809  jalr        $v0
label_2a15a0:
    if (ctx->pc == 0x2A15A0u) {
        ctx->pc = 0x2A15A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A159Cu;
        // 0x2a15a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A15A4u;
        goto label_2a15a4;
    }
    ctx->pc = 0x2A159Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A15A4u);
        ctx->pc = 0x2A15A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A159Cu;
        // 0x2a15a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A159Cu, 0x2A15A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A15A4u;
label_2a15a4:
    // 0x2a15a4: 0xc6610314  lwc1        $f1, 0x314($s3)
    ctx->pc = 0x2a15a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a15a8:
    // 0x2a15a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a15a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a15ac:
    // 0x2a15ac: 0x0  nop
    ctx->pc = 0x2a15acu;
    // NOP
label_2a15b0:
    // 0x2a15b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2a15b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a15b4:
    // 0x2a15b4: 0x0  nop
    ctx->pc = 0x2a15b4u;
    // NOP
label_2a15b8:
    // 0x2a15b8: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_2a15bc:
    if (ctx->pc == 0x2A15BCu) {
        ctx->pc = 0x2A15BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A15B8u;
        // 0x2a15bc: 0x8e640f9c  lw          $a0, 0xF9C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3996)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A15C0u;
        goto label_2a15c0;
    }
    ctx->pc = 0x2A15B8u;
    {
        const bool branch_taken_0x2a15b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A15BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A15B8u;
        // 0x2a15bc: 0x8e640f9c  lw          $a0, 0xF9C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3996)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a15b8) {
            ctx->pc = 0x2A15F4u;
            goto label_2a15f4;
        }
    }
    ctx->pc = 0x2A15C0u;
label_2a15c0:
    // 0x2a15c0: 0x8e6502e0  lw          $a1, 0x2E0($s3)
    ctx->pc = 0x2a15c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 736)));
label_2a15c4:
    // 0x2a15c4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2a15c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2a15c8:
    // 0x2a15c8: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x2a15c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_2a15cc:
    // 0x2a15cc: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x2a15ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_2a15d0:
    // 0x2a15d0: 0xc0d745c  jal         func_35D170
label_2a15d4:
    if (ctx->pc == 0x2A15D4u) {
        ctx->pc = 0x2A15D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A15D0u;
        // 0x2a15d4: 0x24a5032c  addiu       $a1, $a1, 0x32C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 812));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A15D8u;
        goto label_2a15d8;
    }
    ctx->pc = 0x2A15D0u;
    SET_GPR_U32(ctx, 31, 0x2A15D8u);
    ctx->pc = 0x2A15D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A15D0u;
    // 0x2a15d4: 0x24a5032c  addiu       $a1, $a1, 0x32C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 812));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x2A15D0u, 0x2A15D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A15D8u;
label_2a15d8:
    // 0x2a15d8: 0x92630304  lbu         $v1, 0x304($s3)
    ctx->pc = 0x2a15d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 772)));
label_2a15dc:
    // 0x2a15dc: 0x50600014  beql        $v1, $zero, . + 4 + (0x14 << 2)
label_2a15e0:
    if (ctx->pc == 0x2A15E0u) {
        ctx->pc = 0x2A15E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A15DCu;
        // 0x2a15e0: 0x8e6202e0  lw          $v0, 0x2E0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 736)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A15E4u;
        goto label_2a15e4;
    }
    ctx->pc = 0x2A15DCu;
    {
        const bool branch_taken_0x2a15dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a15dc) {
            ctx->pc = 0x2A15E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A15DCu;
            // 0x2a15e0: 0x8e6202e0  lw          $v0, 0x2E0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 736)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1630u;
            goto label_2a1630;
        }
    }
    ctx->pc = 0x2A15E4u;
label_2a15e4:
    // 0x2a15e4: 0x8e620f9c  lw          $v0, 0xF9C($s3)
    ctx->pc = 0x2a15e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3996)));
label_2a15e8:
    // 0x2a15e8: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x2a15e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
label_2a15ec:
    // 0x2a15ec: 0x1000000f  b           . + 4 + (0xF << 2)
label_2a15f0:
    if (ctx->pc == 0x2A15F0u) {
        ctx->pc = 0x2A15F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A15ECu;
        // 0x2a15f0: 0xa2600304  sb          $zero, 0x304($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 772), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A15F4u;
        goto label_2a15f4;
    }
    ctx->pc = 0x2A15ECu;
    {
        const bool branch_taken_0x2a15ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A15F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A15ECu;
        // 0x2a15f0: 0xa2600304  sb          $zero, 0x304($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 772), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a15ec) {
            ctx->pc = 0x2A162Cu;
            goto label_2a162c;
        }
    }
    ctx->pc = 0x2A15F4u;
label_2a15f4:
    // 0x2a15f4: 0x26650308  addiu       $a1, $s3, 0x308
    ctx->pc = 0x2a15f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 776));
label_2a15f8:
    // 0x2a15f8: 0xc0d745c  jal         func_35D170
label_2a15fc:
    if (ctx->pc == 0x2A15FCu) {
        ctx->pc = 0x2A15FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A15F8u;
        // 0x2a15fc: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1600u;
        goto label_2a1600;
    }
    ctx->pc = 0x2A15F8u;
    SET_GPR_U32(ctx, 31, 0x2A1600u);
    ctx->pc = 0x2A15FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A15F8u;
    // 0x2a15fc: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x2A15F8u, 0x2A1600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1600u;
label_2a1600:
    // 0x2a1600: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2a1600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_2a1604:
    // 0x2a1604: 0xc6600314  lwc1        $f0, 0x314($s3)
    ctx->pc = 0x2a1604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a1608:
    // 0x2a1608: 0xc4612b30  lwc1        $f1, 0x2B30($v1)
    ctx->pc = 0x2a1608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a160c:
    // 0x2a160c: 0x92620304  lbu         $v0, 0x304($s3)
    ctx->pc = 0x2a160cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 772)));
label_2a1610:
    // 0x2a1610: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a1610u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2a1614:
    // 0x2a1614: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2a1618:
    if (ctx->pc == 0x2A1618u) {
        ctx->pc = 0x2A1618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1614u;
        // 0x2a1618: 0xe6600314  swc1        $f0, 0x314($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 788), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A161Cu;
        goto label_2a161c;
    }
    ctx->pc = 0x2A1614u;
    {
        const bool branch_taken_0x2a1614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1614u;
        // 0x2a1618: 0xe6600314  swc1        $f0, 0x314($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 788), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1614) {
            ctx->pc = 0x2A162Cu;
            goto label_2a162c;
        }
    }
    ctx->pc = 0x2A161Cu;
label_2a161c:
    // 0x2a161c: 0x8e620f9c  lw          $v0, 0xF9C($s3)
    ctx->pc = 0x2a161cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3996)));
label_2a1620:
    // 0x2a1620: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a1620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a1624:
    // 0x2a1624: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x2a1624u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
label_2a1628:
    // 0x2a1628: 0xa2630304  sb          $v1, 0x304($s3)
    ctx->pc = 0x2a1628u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 772), (uint8_t)GPR_U32(ctx, 3));
label_2a162c:
    // 0x2a162c: 0x8e6202e0  lw          $v0, 0x2E0($s3)
    ctx->pc = 0x2a162cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 736)));
label_2a1630:
    // 0x2a1630: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2a1630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2a1634:
    // 0x2a1634: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2a1634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2a1638:
    // 0x2a1638: 0xc075e34  jal         func_1D78D0
label_2a163c:
    if (ctx->pc == 0x2A163Cu) {
        ctx->pc = 0x2A163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1638u;
        // 0x2a163c: 0x8c440324  lw          $a0, 0x324($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 804)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1640u;
        goto label_2a1640;
    }
    ctx->pc = 0x2A1638u;
    SET_GPR_U32(ctx, 31, 0x2A1640u);
    ctx->pc = 0x2A163Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1638u;
    // 0x2a163c: 0x8c440324  lw          $a0, 0x324($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D78D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D78D0u, 0x2A1638u, 0x2A1640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1640u;
label_2a1640:
    // 0x2a1640: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a1640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a1644:
    // 0x2a1644: 0xc0ab1b4  jal         func_2AC6D0
label_2a1648:
    if (ctx->pc == 0x2A1648u) {
        ctx->pc = 0x2A1648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1644u;
        // 0x2a1648: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A164Cu;
        goto label_2a164c;
    }
    ctx->pc = 0x2A1644u;
    SET_GPR_U32(ctx, 31, 0x2A164Cu);
    ctx->pc = 0x2A1648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1644u;
    // 0x2a1648: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC6D0u, 0x2A1644u, 0x2A164Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A164Cu;
label_2a164c:
    // 0x2a164c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_2a1650:
    if (ctx->pc == 0x2A1650u) {
        ctx->pc = 0x2A1650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A164Cu;
        // 0x2a1650: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1654u;
        goto label_2a1654;
    }
    ctx->pc = 0x2A164Cu;
    {
        const bool branch_taken_0x2a164c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A164Cu;
        // 0x2a1650: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a164c) {
            ctx->pc = 0x2A168Cu;
            goto label_2a168c;
        }
    }
    ctx->pc = 0x2A1654u;
label_2a1654:
    // 0x2a1654: 0x26640238  addiu       $a0, $s3, 0x238
    ctx->pc = 0x2a1654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 568));
label_2a1658:
    // 0x2a1658: 0x24a5c870  addiu       $a1, $a1, -0x3790
    ctx->pc = 0x2a1658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953072));
label_2a165c:
    // 0x2a165c: 0xc0d73e0  jal         func_35CF80
label_2a1660:
    if (ctx->pc == 0x2A1660u) {
        ctx->pc = 0x2A1660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A165Cu;
        // 0x2a1660: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1664u;
        goto label_2a1664;
    }
    ctx->pc = 0x2A165Cu;
    SET_GPR_U32(ctx, 31, 0x2A1664u);
    ctx->pc = 0x2A1660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A165Cu;
    // 0x2a1660: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF80u, 0x2A165Cu, 0x2A1664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1664u;
label_2a1664:
    // 0x2a1664: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2a1668:
    if (ctx->pc == 0x2A1668u) {
        ctx->pc = 0x2A166Cu;
        goto label_2a166c;
    }
    ctx->pc = 0x2A1664u;
    {
        const bool branch_taken_0x2a1664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1664) {
            ctx->pc = 0x2A168Cu;
            goto label_2a168c;
        }
    }
    ctx->pc = 0x2A166Cu;
label_2a166c:
    // 0x2a166c: 0xc0a832c  jal         func_2A0CB0
label_2a1670:
    if (ctx->pc == 0x2A1670u) {
        ctx->pc = 0x2A1674u;
        goto label_2a1674;
    }
    ctx->pc = 0x2A166Cu;
    SET_GPR_U32(ctx, 31, 0x2A1674u);
    ctx->pc = 0x2A0CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0CB0u, 0x2A166Cu, 0x2A1674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1674u;
label_2a1674:
    // 0x2a1674: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2a1678:
    if (ctx->pc == 0x2A1678u) {
        ctx->pc = 0x2A1678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1674u;
        // 0x2a1678: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A167Cu;
        goto label_2a167c;
    }
    ctx->pc = 0x2A1674u;
    {
        const bool branch_taken_0x2a1674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1674u;
        // 0x2a1678: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1674) {
            ctx->pc = 0x2A168Cu;
            goto label_2a168c;
        }
    }
    ctx->pc = 0x2A167Cu;
label_2a167c:
    // 0x2a167c: 0x8e640f9c  lw          $a0, 0xF9C($s3)
    ctx->pc = 0x2a167cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3996)));
label_2a1680:
    // 0x2a1680: 0x24a5c888  addiu       $a1, $a1, -0x3778
    ctx->pc = 0x2a1680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953096));
label_2a1684:
    // 0x2a1684: 0xc0d754c  jal         func_35D530
label_2a1688:
    if (ctx->pc == 0x2A1688u) {
        ctx->pc = 0x2A1688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1684u;
        // 0x2a1688: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A168Cu;
        goto label_2a168c;
    }
    ctx->pc = 0x2A1684u;
    SET_GPR_U32(ctx, 31, 0x2A168Cu);
    ctx->pc = 0x2A1688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1684u;
    // 0x2a1688: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D530u, 0x2A1684u, 0x2A168Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A168Cu;
label_2a168c:
    // 0x2a168c: 0xc0a1f58  jal         func_287D60
label_2a1690:
    if (ctx->pc == 0x2A1690u) {
        ctx->pc = 0x2A1694u;
        goto label_2a1694;
    }
    ctx->pc = 0x2A168Cu;
    SET_GPR_U32(ctx, 31, 0x2A1694u);
    ctx->pc = 0x287D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287D60u, 0x2A168Cu, 0x2A1694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1694u;
label_2a1694:
    // 0x2a1694: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_2a1698:
    if (ctx->pc == 0x2A1698u) {
        ctx->pc = 0x2A169Cu;
        goto label_2a169c;
    }
    ctx->pc = 0x2A1694u;
    {
        const bool branch_taken_0x2a1694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1694) {
            ctx->pc = 0x2A16F0u;
            goto label_2a16f0;
        }
    }
    ctx->pc = 0x2A169Cu;
label_2a169c:
    // 0x2a169c: 0xc0ab1b4  jal         func_2AC6D0
label_2a16a0:
    if (ctx->pc == 0x2A16A0u) {
        ctx->pc = 0x2A16A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A169Cu;
        // 0x2a16a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A16A4u;
        goto label_2a16a4;
    }
    ctx->pc = 0x2A169Cu;
    SET_GPR_U32(ctx, 31, 0x2A16A4u);
    ctx->pc = 0x2A16A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A169Cu;
    // 0x2a16a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC6D0u, 0x2A169Cu, 0x2A16A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A16A4u;
label_2a16a4:
    // 0x2a16a4: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_2a16a8:
    if (ctx->pc == 0x2A16A8u) {
        ctx->pc = 0x2A16A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A16A4u;
        // 0x2a16a8: 0x8e6502e0  lw          $a1, 0x2E0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 736)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A16ACu;
        goto label_2a16ac;
    }
    ctx->pc = 0x2A16A4u;
    {
        const bool branch_taken_0x2a16a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a16a4) {
            ctx->pc = 0x2A16A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A16A4u;
            // 0x2a16a8: 0x8e6502e0  lw          $a1, 0x2E0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 736)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A16DCu;
            goto label_2a16dc;
        }
    }
    ctx->pc = 0x2A16ACu;
label_2a16ac:
    // 0x2a16ac: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a16acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_2a16b0:
    // 0x2a16b0: 0x26640238  addiu       $a0, $s3, 0x238
    ctx->pc = 0x2a16b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 568));
label_2a16b4:
    // 0x2a16b4: 0x24a5c870  addiu       $a1, $a1, -0x3790
    ctx->pc = 0x2a16b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953072));
label_2a16b8:
    // 0x2a16b8: 0xc0d73e0  jal         func_35CF80
label_2a16bc:
    if (ctx->pc == 0x2A16BCu) {
        ctx->pc = 0x2A16BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A16B8u;
        // 0x2a16bc: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A16C0u;
        goto label_2a16c0;
    }
    ctx->pc = 0x2A16B8u;
    SET_GPR_U32(ctx, 31, 0x2A16C0u);
    ctx->pc = 0x2A16BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A16B8u;
    // 0x2a16bc: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF80u, 0x2A16B8u, 0x2A16C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A16C0u;
label_2a16c0:
    // 0x2a16c0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2a16c4:
    if (ctx->pc == 0x2A16C4u) {
        ctx->pc = 0x2A16C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A16C0u;
        // 0x2a16c4: 0x8e6502e0  lw          $a1, 0x2E0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 736)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A16C8u;
        goto label_2a16c8;
    }
    ctx->pc = 0x2A16C0u;
    {
        const bool branch_taken_0x2a16c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a16c0) {
            ctx->pc = 0x2A16C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A16C0u;
            // 0x2a16c4: 0x8e6502e0  lw          $a1, 0x2E0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 736)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A16DCu;
            goto label_2a16dc;
        }
    }
    ctx->pc = 0x2A16C8u;
label_2a16c8:
    // 0x2a16c8: 0xc0a832c  jal         func_2A0CB0
label_2a16cc:
    if (ctx->pc == 0x2A16CCu) {
        ctx->pc = 0x2A16D0u;
        goto label_2a16d0;
    }
    ctx->pc = 0x2A16C8u;
    SET_GPR_U32(ctx, 31, 0x2A16D0u);
    ctx->pc = 0x2A0CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0CB0u, 0x2A16C8u, 0x2A16D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A16D0u;
label_2a16d0:
    // 0x2a16d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2a16d4:
    if (ctx->pc == 0x2A16D4u) {
        ctx->pc = 0x2A16D8u;
        goto label_2a16d8;
    }
    ctx->pc = 0x2A16D0u;
    {
        const bool branch_taken_0x2a16d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a16d0) {
            ctx->pc = 0x2A16F0u;
            goto label_2a16f0;
        }
    }
    ctx->pc = 0x2A16D8u;
label_2a16d8:
    // 0x2a16d8: 0x8e6502e0  lw          $a1, 0x2E0($s3)
    ctx->pc = 0x2a16d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 736)));
label_2a16dc:
    // 0x2a16dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a16dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a16e0:
    // 0x2a16e0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2a16e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2a16e4:
    // 0x2a16e4: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x2a16e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_2a16e8:
    // 0x2a16e8: 0xc0a5d52  jal         func_297548
label_2a16ec:
    if (ctx->pc == 0x2A16ECu) {
        ctx->pc = 0x2A16ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A16E8u;
        // 0x2a16ec: 0x24a50334  addiu       $a1, $a1, 0x334 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 820));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A16F0u;
        goto label_2a16f0;
    }
    ctx->pc = 0x2A16E8u;
    SET_GPR_U32(ctx, 31, 0x2A16F0u);
    ctx->pc = 0x2A16ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A16E8u;
    // 0x2a16ec: 0x24a50334  addiu       $a1, $a1, 0x334 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 820));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297548u, 0x2A16E8u, 0x2A16F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A16F0u;
label_2a16f0:
    // 0x2a16f0: 0xc0a1f92  jal         func_287E48
label_2a16f4:
    if (ctx->pc == 0x2A16F4u) {
        ctx->pc = 0x2A16F8u;
        goto label_2a16f8;
    }
    ctx->pc = 0x2A16F0u;
    SET_GPR_U32(ctx, 31, 0x2A16F8u);
    ctx->pc = 0x287E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287E48u, 0x2A16F0u, 0x2A16F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A16F8u;
label_2a16f8:
    // 0x2a16f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2a16fc:
    if (ctx->pc == 0x2A16FCu) {
        ctx->pc = 0x2A1700u;
        goto label_2a1700;
    }
    ctx->pc = 0x2A16F8u;
    {
        const bool branch_taken_0x2a16f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a16f8) {
            ctx->pc = 0x2A1710u;
            goto label_2a1710;
        }
    }
    ctx->pc = 0x2A1700u;
label_2a1700:
    // 0x2a1700: 0xc0a71e0  jal         func_29C780
label_2a1704:
    if (ctx->pc == 0x2A1704u) {
        ctx->pc = 0x2A1708u;
        goto label_2a1708;
    }
    ctx->pc = 0x2A1700u;
    SET_GPR_U32(ctx, 31, 0x2A1708u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x2A1700u, 0x2A1708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1708u;
label_2a1708:
    // 0x2a1708: 0xc0a7142  jal         func_29C508
label_2a170c:
    if (ctx->pc == 0x2A170Cu) {
        ctx->pc = 0x2A170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1708u;
        // 0x2a170c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1710u;
        goto label_2a1710;
    }
    ctx->pc = 0x2A1708u;
    SET_GPR_U32(ctx, 31, 0x2A1710u);
    ctx->pc = 0x2A170Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1708u;
    // 0x2a170c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C508u, 0x2A1708u, 0x2A1710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1710u;
label_2a1710:
    // 0x2a1710: 0xc0a9aba  jal         func_2A6AE8
label_2a1714:
    if (ctx->pc == 0x2A1714u) {
        ctx->pc = 0x2A1714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1710u;
        // 0x2a1714: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1718u;
        goto label_2a1718;
    }
    ctx->pc = 0x2A1710u;
    SET_GPR_U32(ctx, 31, 0x2A1718u);
    ctx->pc = 0x2A1714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1710u;
    // 0x2a1714: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6AE8u, 0x2A1710u, 0x2A1718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1718u;
label_2a1718:
    // 0x2a1718: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2a1718u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a171c:
    // 0x2a171c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2a171cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2a1720:
    // 0x2a1720: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2a1720u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a1724:
    // 0x2a1724: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2a1724u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2a1728:
    // 0x2a1728: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2a1728u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2a172c:
    // 0x2a172c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2a172cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2a1730:
    // 0x2a1730: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2a1730u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2a1734:
    // 0x2a1734: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2a1734u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2a1738:
    // 0x2a1738: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x2a1738u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2a173c:
    // 0x2a173c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2a173cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_2a1740:
    // 0x2a1740: 0x3e00008  jr          $ra
label_2a1744:
    if (ctx->pc == 0x2A1744u) {
        ctx->pc = 0x2A1744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1740u;
        // 0x2a1744: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1748u;
        goto label_fallthrough_0x2a1740;
    }
    ctx->pc = 0x2A1740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1740u;
        // 0x2a1744: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a1740:
    ctx->pc = 0x2A1748u;
}
