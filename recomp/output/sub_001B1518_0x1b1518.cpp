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

// Function: sub_001B1518
// Address: 0x1b1518 - 0x1b1868
void sub_001B1518_0x1b1518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1518_0x1b1518");
#endif

    switch (ctx->pc) {
        case 0x1b1518u: goto label_1b1518;
        case 0x1b151cu: goto label_1b151c;
        case 0x1b1520u: goto label_1b1520;
        case 0x1b1524u: goto label_1b1524;
        case 0x1b1528u: goto label_1b1528;
        case 0x1b152cu: goto label_1b152c;
        case 0x1b1530u: goto label_1b1530;
        case 0x1b1534u: goto label_1b1534;
        case 0x1b1538u: goto label_1b1538;
        case 0x1b153cu: goto label_1b153c;
        case 0x1b1540u: goto label_1b1540;
        case 0x1b1544u: goto label_1b1544;
        case 0x1b1548u: goto label_1b1548;
        case 0x1b154cu: goto label_1b154c;
        case 0x1b1550u: goto label_1b1550;
        case 0x1b1554u: goto label_1b1554;
        case 0x1b1558u: goto label_1b1558;
        case 0x1b155cu: goto label_1b155c;
        case 0x1b1560u: goto label_1b1560;
        case 0x1b1564u: goto label_1b1564;
        case 0x1b1568u: goto label_1b1568;
        case 0x1b156cu: goto label_1b156c;
        case 0x1b1570u: goto label_1b1570;
        case 0x1b1574u: goto label_1b1574;
        case 0x1b1578u: goto label_1b1578;
        case 0x1b157cu: goto label_1b157c;
        case 0x1b1580u: goto label_1b1580;
        case 0x1b1584u: goto label_1b1584;
        case 0x1b1588u: goto label_1b1588;
        case 0x1b158cu: goto label_1b158c;
        case 0x1b1590u: goto label_1b1590;
        case 0x1b1594u: goto label_1b1594;
        case 0x1b1598u: goto label_1b1598;
        case 0x1b159cu: goto label_1b159c;
        case 0x1b15a0u: goto label_1b15a0;
        case 0x1b15a4u: goto label_1b15a4;
        case 0x1b15a8u: goto label_1b15a8;
        case 0x1b15acu: goto label_1b15ac;
        case 0x1b15b0u: goto label_1b15b0;
        case 0x1b15b4u: goto label_1b15b4;
        case 0x1b15b8u: goto label_1b15b8;
        case 0x1b15bcu: goto label_1b15bc;
        case 0x1b15c0u: goto label_1b15c0;
        case 0x1b15c4u: goto label_1b15c4;
        case 0x1b15c8u: goto label_1b15c8;
        case 0x1b15ccu: goto label_1b15cc;
        case 0x1b15d0u: goto label_1b15d0;
        case 0x1b15d4u: goto label_1b15d4;
        case 0x1b15d8u: goto label_1b15d8;
        case 0x1b15dcu: goto label_1b15dc;
        case 0x1b15e0u: goto label_1b15e0;
        case 0x1b15e4u: goto label_1b15e4;
        case 0x1b15e8u: goto label_1b15e8;
        case 0x1b15ecu: goto label_1b15ec;
        case 0x1b15f0u: goto label_1b15f0;
        case 0x1b15f4u: goto label_1b15f4;
        case 0x1b15f8u: goto label_1b15f8;
        case 0x1b15fcu: goto label_1b15fc;
        case 0x1b1600u: goto label_1b1600;
        case 0x1b1604u: goto label_1b1604;
        case 0x1b1608u: goto label_1b1608;
        case 0x1b160cu: goto label_1b160c;
        case 0x1b1610u: goto label_1b1610;
        case 0x1b1614u: goto label_1b1614;
        case 0x1b1618u: goto label_1b1618;
        case 0x1b161cu: goto label_1b161c;
        case 0x1b1620u: goto label_1b1620;
        case 0x1b1624u: goto label_1b1624;
        case 0x1b1628u: goto label_1b1628;
        case 0x1b162cu: goto label_1b162c;
        case 0x1b1630u: goto label_1b1630;
        case 0x1b1634u: goto label_1b1634;
        case 0x1b1638u: goto label_1b1638;
        case 0x1b163cu: goto label_1b163c;
        case 0x1b1640u: goto label_1b1640;
        case 0x1b1644u: goto label_1b1644;
        case 0x1b1648u: goto label_1b1648;
        case 0x1b164cu: goto label_1b164c;
        case 0x1b1650u: goto label_1b1650;
        case 0x1b1654u: goto label_1b1654;
        case 0x1b1658u: goto label_1b1658;
        case 0x1b165cu: goto label_1b165c;
        case 0x1b1660u: goto label_1b1660;
        case 0x1b1664u: goto label_1b1664;
        case 0x1b1668u: goto label_1b1668;
        case 0x1b166cu: goto label_1b166c;
        case 0x1b1670u: goto label_1b1670;
        case 0x1b1674u: goto label_1b1674;
        case 0x1b1678u: goto label_1b1678;
        case 0x1b167cu: goto label_1b167c;
        case 0x1b1680u: goto label_1b1680;
        case 0x1b1684u: goto label_1b1684;
        case 0x1b1688u: goto label_1b1688;
        case 0x1b168cu: goto label_1b168c;
        case 0x1b1690u: goto label_1b1690;
        case 0x1b1694u: goto label_1b1694;
        case 0x1b1698u: goto label_1b1698;
        case 0x1b169cu: goto label_1b169c;
        case 0x1b16a0u: goto label_1b16a0;
        case 0x1b16a4u: goto label_1b16a4;
        case 0x1b16a8u: goto label_1b16a8;
        case 0x1b16acu: goto label_1b16ac;
        case 0x1b16b0u: goto label_1b16b0;
        case 0x1b16b4u: goto label_1b16b4;
        case 0x1b16b8u: goto label_1b16b8;
        case 0x1b16bcu: goto label_1b16bc;
        case 0x1b16c0u: goto label_1b16c0;
        case 0x1b16c4u: goto label_1b16c4;
        case 0x1b16c8u: goto label_1b16c8;
        case 0x1b16ccu: goto label_1b16cc;
        case 0x1b16d0u: goto label_1b16d0;
        case 0x1b16d4u: goto label_1b16d4;
        case 0x1b16d8u: goto label_1b16d8;
        case 0x1b16dcu: goto label_1b16dc;
        case 0x1b16e0u: goto label_1b16e0;
        case 0x1b16e4u: goto label_1b16e4;
        case 0x1b16e8u: goto label_1b16e8;
        case 0x1b16ecu: goto label_1b16ec;
        case 0x1b16f0u: goto label_1b16f0;
        case 0x1b16f4u: goto label_1b16f4;
        case 0x1b16f8u: goto label_1b16f8;
        case 0x1b16fcu: goto label_1b16fc;
        case 0x1b1700u: goto label_1b1700;
        case 0x1b1704u: goto label_1b1704;
        case 0x1b1708u: goto label_1b1708;
        case 0x1b170cu: goto label_1b170c;
        case 0x1b1710u: goto label_1b1710;
        case 0x1b1714u: goto label_1b1714;
        case 0x1b1718u: goto label_1b1718;
        case 0x1b171cu: goto label_1b171c;
        case 0x1b1720u: goto label_1b1720;
        case 0x1b1724u: goto label_1b1724;
        case 0x1b1728u: goto label_1b1728;
        case 0x1b172cu: goto label_1b172c;
        case 0x1b1730u: goto label_1b1730;
        case 0x1b1734u: goto label_1b1734;
        case 0x1b1738u: goto label_1b1738;
        case 0x1b173cu: goto label_1b173c;
        case 0x1b1740u: goto label_1b1740;
        case 0x1b1744u: goto label_1b1744;
        case 0x1b1748u: goto label_1b1748;
        case 0x1b174cu: goto label_1b174c;
        case 0x1b1750u: goto label_1b1750;
        case 0x1b1754u: goto label_1b1754;
        case 0x1b1758u: goto label_1b1758;
        case 0x1b175cu: goto label_1b175c;
        case 0x1b1760u: goto label_1b1760;
        case 0x1b1764u: goto label_1b1764;
        case 0x1b1768u: goto label_1b1768;
        case 0x1b176cu: goto label_1b176c;
        case 0x1b1770u: goto label_1b1770;
        case 0x1b1774u: goto label_1b1774;
        case 0x1b1778u: goto label_1b1778;
        case 0x1b177cu: goto label_1b177c;
        case 0x1b1780u: goto label_1b1780;
        case 0x1b1784u: goto label_1b1784;
        case 0x1b1788u: goto label_1b1788;
        case 0x1b178cu: goto label_1b178c;
        case 0x1b1790u: goto label_1b1790;
        case 0x1b1794u: goto label_1b1794;
        case 0x1b1798u: goto label_1b1798;
        case 0x1b179cu: goto label_1b179c;
        case 0x1b17a0u: goto label_1b17a0;
        case 0x1b17a4u: goto label_1b17a4;
        case 0x1b17a8u: goto label_1b17a8;
        case 0x1b17acu: goto label_1b17ac;
        case 0x1b17b0u: goto label_1b17b0;
        case 0x1b17b4u: goto label_1b17b4;
        case 0x1b17b8u: goto label_1b17b8;
        case 0x1b17bcu: goto label_1b17bc;
        case 0x1b17c0u: goto label_1b17c0;
        case 0x1b17c4u: goto label_1b17c4;
        case 0x1b17c8u: goto label_1b17c8;
        case 0x1b17ccu: goto label_1b17cc;
        case 0x1b17d0u: goto label_1b17d0;
        case 0x1b17d4u: goto label_1b17d4;
        case 0x1b17d8u: goto label_1b17d8;
        case 0x1b17dcu: goto label_1b17dc;
        case 0x1b17e0u: goto label_1b17e0;
        case 0x1b17e4u: goto label_1b17e4;
        case 0x1b17e8u: goto label_1b17e8;
        case 0x1b17ecu: goto label_1b17ec;
        case 0x1b17f0u: goto label_1b17f0;
        case 0x1b17f4u: goto label_1b17f4;
        case 0x1b17f8u: goto label_1b17f8;
        case 0x1b17fcu: goto label_1b17fc;
        case 0x1b1800u: goto label_1b1800;
        case 0x1b1804u: goto label_1b1804;
        case 0x1b1808u: goto label_1b1808;
        case 0x1b180cu: goto label_1b180c;
        case 0x1b1810u: goto label_1b1810;
        case 0x1b1814u: goto label_1b1814;
        case 0x1b1818u: goto label_1b1818;
        case 0x1b181cu: goto label_1b181c;
        case 0x1b1820u: goto label_1b1820;
        case 0x1b1824u: goto label_1b1824;
        case 0x1b1828u: goto label_1b1828;
        case 0x1b182cu: goto label_1b182c;
        case 0x1b1830u: goto label_1b1830;
        case 0x1b1834u: goto label_1b1834;
        case 0x1b1838u: goto label_1b1838;
        case 0x1b183cu: goto label_1b183c;
        case 0x1b1840u: goto label_1b1840;
        case 0x1b1844u: goto label_1b1844;
        case 0x1b1848u: goto label_1b1848;
        case 0x1b184cu: goto label_1b184c;
        case 0x1b1850u: goto label_1b1850;
        case 0x1b1854u: goto label_1b1854;
        case 0x1b1858u: goto label_1b1858;
        case 0x1b185cu: goto label_1b185c;
        case 0x1b1860u: goto label_1b1860;
        case 0x1b1864u: goto label_1b1864;
        default: break;
    }

    ctx->pc = 0x1b1518u;

label_1b1518:
    // 0x1b1518: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b1518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b151c:
    // 0x1b151c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b151cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1b1520:
    // 0x1b1520: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b1520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1b1524:
    // 0x1b1524: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b1524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b1528:
    // 0x1b1528: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b1528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1b152c:
    // 0x1b152c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b152cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b1530:
    // 0x1b1530: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b1530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1b1534:
    // 0x1b1534: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b1534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b1538:
    // 0x1b1538: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x1b1538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_1b153c:
    // 0x1b153c: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x1b153cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
label_1b1540:
    // 0x1b1540: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1b1540u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1b1544:
    // 0x1b1544: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
label_1b1548:
    if (ctx->pc == 0x1B1548u) {
        ctx->pc = 0x1B1548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1544u;
        // 0x1b1548: 0x3c130040  lui         $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B154Cu;
        goto label_1b154c;
    }
    ctx->pc = 0x1B1544u;
    {
        const bool branch_taken_0x1b1544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1544u;
        // 0x1b1548: 0x3c130040  lui         $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1544) {
            ctx->pc = 0x1B15F8u;
            goto label_1b15f8;
        }
    }
    ctx->pc = 0x1B154Cu;
label_1b154c:
    // 0x1b154c: 0x92020100  lbu         $v0, 0x100($s0)
    ctx->pc = 0x1b154cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 256)));
label_1b1550:
    // 0x1b1550: 0x5040002a  beql        $v0, $zero, . + 4 + (0x2A << 2)
label_1b1554:
    if (ctx->pc == 0x1B1554u) {
        ctx->pc = 0x1B1554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1550u;
        // 0x1b1554: 0x8e0200b4  lw          $v0, 0xB4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1558u;
        goto label_1b1558;
    }
    ctx->pc = 0x1B1550u;
    {
        const bool branch_taken_0x1b1550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1550) {
            ctx->pc = 0x1B1554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1550u;
            // 0x1b1554: 0x8e0200b4  lw          $v0, 0xB4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B15FCu;
            goto label_1b15fc;
        }
    }
    ctx->pc = 0x1B1558u;
label_1b1558:
    // 0x1b1558: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x1b1558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_1b155c:
    // 0x1b155c: 0x8c460334  lw          $a2, 0x334($v0)
    ctx->pc = 0x1b155cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
label_1b1560:
    // 0x1b1560: 0x8cc401e4  lw          $a0, 0x1E4($a2)
    ctx->pc = 0x1b1560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
label_1b1564:
    // 0x1b1564: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1b1568:
    if (ctx->pc == 0x1B1568u) {
        ctx->pc = 0x1B1568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1564u;
        // 0x1b1568: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B156Cu;
        goto label_1b156c;
    }
    ctx->pc = 0x1B1564u;
    {
        const bool branch_taken_0x1b1564 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1564u;
        // 0x1b1568: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1564) {
            ctx->pc = 0x1B157Cu;
            goto label_1b157c;
        }
    }
    ctx->pc = 0x1B156Cu;
label_1b156c:
    // 0x1b156c: 0x1000000d  b           . + 4 + (0xD << 2)
label_1b1570:
    if (ctx->pc == 0x1B1570u) {
        ctx->pc = 0x1B1570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B156Cu;
        // 0x1b1570: 0x8e0700a0  lw          $a3, 0xA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1574u;
        goto label_1b1574;
    }
    ctx->pc = 0x1B156Cu;
    {
        const bool branch_taken_0x1b156c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B156Cu;
        // 0x1b1570: 0x8e0700a0  lw          $a3, 0xA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b156c) {
            ctx->pc = 0x1B15A4u;
            goto label_1b15a4;
        }
    }
    ctx->pc = 0x1B1574u;
label_1b1574:
    // 0x1b1574: 0x1000000b  b           . + 4 + (0xB << 2)
label_1b1578:
    if (ctx->pc == 0x1B1578u) {
        ctx->pc = 0x1B1578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1574u;
        // 0x1b1578: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B157Cu;
        goto label_1b157c;
    }
    ctx->pc = 0x1B1574u;
    {
        const bool branch_taken_0x1b1574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1574u;
        // 0x1b1578: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1574) {
            ctx->pc = 0x1B15A4u;
            goto label_1b15a4;
        }
    }
    ctx->pc = 0x1B157Cu;
label_1b157c:
    // 0x1b157c: 0x8e0700a0  lw          $a3, 0xA0($s0)
    ctx->pc = 0x1b157cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_1b1580:
    // 0x1b1580: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b1580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b1584:
    // 0x1b1584: 0x24c301ec  addiu       $v1, $a2, 0x1EC
    ctx->pc = 0x1b1584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
label_1b1588:
    // 0x1b1588: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1b1588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1b158c:
    // 0x1b158c: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
label_1b1590:
    if (ctx->pc == 0x1B1590u) {
        ctx->pc = 0x1B1590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B158Cu;
        // 0x1b1590: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1594u;
        goto label_1b1594;
    }
    ctx->pc = 0x1B158Cu;
    {
        const bool branch_taken_0x1b158c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B158Cu;
        // 0x1b1590: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b158c) {
            ctx->pc = 0x1B1574u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1574;
        }
    }
    ctx->pc = 0x1B1594u;
label_1b1594:
    // 0x1b1594: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x1b1594u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_1b1598:
    // 0x1b1598: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_1b159c:
    if (ctx->pc == 0x1B159Cu) {
        ctx->pc = 0x1B159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1598u;
        // 0x1b159c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B15A0u;
        goto label_1b15a0;
    }
    ctx->pc = 0x1B1598u;
    {
        const bool branch_taken_0x1b1598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1598u;
        // 0x1b159c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1598) {
            ctx->pc = 0x1B1588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1588;
        }
    }
    ctx->pc = 0x1B15A0u;
label_1b15a0:
    // 0x1b15a0: 0x8cd101e8  lw          $s1, 0x1E8($a2)
    ctx->pc = 0x1b15a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
label_1b15a4:
    // 0x1b15a4: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
label_1b15a8:
    if (ctx->pc == 0x1B15A8u) {
        ctx->pc = 0x1B15A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B15A4u;
        // 0x1b15a8: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B15ACu;
        goto label_1b15ac;
    }
    ctx->pc = 0x1B15A4u;
    {
        const bool branch_taken_0x1b15a4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B15A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B15A4u;
        // 0x1b15a8: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b15a4) {
            ctx->pc = 0x1B15BCu;
            goto label_1b15bc;
        }
    }
    ctx->pc = 0x1B15ACu;
label_1b15ac:
    // 0x1b15ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b15acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b15b0:
    // 0x1b15b0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b15b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b15b4:
    // 0x1b15b4: 0xc073f08  jal         func_1CFC20
label_1b15b8:
    if (ctx->pc == 0x1B15B8u) {
        ctx->pc = 0x1B15B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B15B4u;
        // 0x1b15b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B15BCu;
        goto label_1b15bc;
    }
    ctx->pc = 0x1B15B4u;
    SET_GPR_U32(ctx, 31, 0x1B15BCu);
    ctx->pc = 0x1B15B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B15B4u;
    // 0x1b15b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x1B15B4u, 0x1B15BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B15BCu;
label_1b15bc:
    // 0x1b15bc: 0x8e0400a4  lw          $a0, 0xA4($s0)
    ctx->pc = 0x1b15bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_1b15c0:
    // 0x1b15c0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1b15c4:
    if (ctx->pc == 0x1B15C4u) {
        ctx->pc = 0x1B15C8u;
        goto label_1b15c8;
    }
    ctx->pc = 0x1B15C0u;
    {
        const bool branch_taken_0x1b15c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b15c0) {
            ctx->pc = 0x1B15D8u;
            goto label_1b15d8;
        }
    }
    ctx->pc = 0x1B15C8u;
label_1b15c8:
    // 0x1b15c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b15c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b15cc:
    // 0x1b15cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b15ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b15d0:
    // 0x1b15d0: 0xc073f08  jal         func_1CFC20
label_1b15d4:
    if (ctx->pc == 0x1B15D4u) {
        ctx->pc = 0x1B15D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B15D0u;
        // 0x1b15d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B15D8u;
        goto label_1b15d8;
    }
    ctx->pc = 0x1B15D0u;
    SET_GPR_U32(ctx, 31, 0x1B15D8u);
    ctx->pc = 0x1B15D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B15D0u;
    // 0x1b15d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x1B15D0u, 0x1B15D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B15D8u;
label_1b15d8:
    // 0x1b15d8: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_1b15dc:
    if (ctx->pc == 0x1B15DCu) {
        ctx->pc = 0x1B15DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B15D8u;
        // 0x1b15dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B15E0u;
        goto label_1b15e0;
    }
    ctx->pc = 0x1B15D8u;
    {
        const bool branch_taken_0x1b15d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B15DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B15D8u;
        // 0x1b15dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b15d8) {
            ctx->pc = 0x1B15F0u;
            goto label_1b15f0;
        }
    }
    ctx->pc = 0x1B15E0u;
label_1b15e0:
    // 0x1b15e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b15e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b15e4:
    // 0x1b15e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b15e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b15e8:
    // 0x1b15e8: 0xc073f08  jal         func_1CFC20
label_1b15ec:
    if (ctx->pc == 0x1B15ECu) {
        ctx->pc = 0x1B15ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B15E8u;
        // 0x1b15ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B15F0u;
        goto label_1b15f0;
    }
    ctx->pc = 0x1B15E8u;
    SET_GPR_U32(ctx, 31, 0x1B15F0u);
    ctx->pc = 0x1B15ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B15E8u;
    // 0x1b15ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x1B15E8u, 0x1B15F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B15F0u;
label_1b15f0:
    // 0x1b15f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b15f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b15f4:
    // 0x1b15f4: 0xa2020100  sb          $v0, 0x100($s0)
    ctx->pc = 0x1b15f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 256), (uint8_t)GPR_U32(ctx, 2));
label_1b15f8:
    // 0x1b15f8: 0x8e0200b4  lw          $v0, 0xB4($s0)
    ctx->pc = 0x1b15f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_1b15fc:
    // 0x1b15fc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1b1600:
    if (ctx->pc == 0x1B1600u) {
        ctx->pc = 0x1B1600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B15FCu;
        // 0x1b1600: 0x8e050084  lw          $a1, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1604u;
        goto label_1b1604;
    }
    ctx->pc = 0x1B15FCu;
    {
        const bool branch_taken_0x1b15fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b15fc) {
            ctx->pc = 0x1B1600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B15FCu;
            // 0x1b1600: 0x8e050084  lw          $a1, 0x84($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1614u;
            goto label_1b1614;
        }
    }
    ctx->pc = 0x1B1604u;
label_1b1604:
    // 0x1b1604: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x1b1604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_1b1608:
    // 0x1b1608: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_1b160c:
    if (ctx->pc == 0x1B160Cu) {
        ctx->pc = 0x1B160Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1608u;
        // 0x1b160c: 0x8e050088  lw          $a1, 0x88($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1610u;
        goto label_1b1610;
    }
    ctx->pc = 0x1B1608u;
    {
        const bool branch_taken_0x1b1608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1608) {
            ctx->pc = 0x1B160Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1608u;
            // 0x1b160c: 0x8e050088  lw          $a1, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1640u;
            goto label_1b1640;
        }
    }
    ctx->pc = 0x1B1610u;
label_1b1610:
    // 0x1b1610: 0x8e050084  lw          $a1, 0x84($s0)
    ctx->pc = 0x1b1610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_1b1614:
    // 0x1b1614: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1b1614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1b1618:
    // 0x1b1618: 0x26638658  addiu       $v1, $s3, -0x79A8
    ctx->pc = 0x1b1618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936152));
label_1b161c:
    // 0x1b161c: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x1b161cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1b1620:
    // 0x1b1620: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b1620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1b1624:
    // 0x1b1624: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1b1624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1b1628:
    // 0x1b1628: 0x50800016  beql        $a0, $zero, . + 4 + (0x16 << 2)
label_1b162c:
    if (ctx->pc == 0x1B162Cu) {
        ctx->pc = 0x1B162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1628u;
        // 0x1b162c: 0x8e040098  lw          $a0, 0x98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1630u;
        goto label_1b1630;
    }
    ctx->pc = 0x1B1628u;
    {
        const bool branch_taken_0x1b1628 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1628) {
            ctx->pc = 0x1B162Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1628u;
            // 0x1b162c: 0x8e040098  lw          $a0, 0x98($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1684u;
            goto label_1b1684;
        }
    }
    ctx->pc = 0x1B1630u;
label_1b1630:
    // 0x1b1630: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x1b1630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_1b1634:
    // 0x1b1634: 0x50450013  beql        $v0, $a1, . + 4 + (0x13 << 2)
label_1b1638:
    if (ctx->pc == 0x1B1638u) {
        ctx->pc = 0x1B1638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1634u;
        // 0x1b1638: 0x8e040098  lw          $a0, 0x98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B163Cu;
        goto label_1b163c;
    }
    ctx->pc = 0x1B1634u;
    {
        const bool branch_taken_0x1b1634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1b1634) {
            ctx->pc = 0x1B1638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1634u;
            // 0x1b1638: 0x8e040098  lw          $a0, 0x98($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1684u;
            goto label_1b1684;
        }
    }
    ctx->pc = 0x1B163Cu;
label_1b163c:
    // 0x1b163c: 0x8e050088  lw          $a1, 0x88($s0)
    ctx->pc = 0x1b163cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_1b1640:
    // 0x1b1640: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1b1640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1b1644:
    // 0x1b1644: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b1644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b1648:
    // 0x1b1648: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x1b1648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_1b164c:
    // 0x1b164c: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1b164cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1b1650:
    // 0x1b1650: 0xae030098  sw          $v1, 0x98($s0)
    ctx->pc = 0x1b1650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
label_1b1654:
    // 0x1b1654: 0x26628658  addiu       $v0, $s3, -0x79A8
    ctx->pc = 0x1b1654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936152));
label_1b1658:
    // 0x1b1658: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b1658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1b165c:
    // 0x1b165c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1b165cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1b1660:
    // 0x1b1660: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1b1664:
    if (ctx->pc == 0x1B1664u) {
        ctx->pc = 0x1B1664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1660u;
        // 0x1b1664: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1668u;
        goto label_1b1668;
    }
    ctx->pc = 0x1B1660u;
    {
        const bool branch_taken_0x1b1660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1660u;
        // 0x1b1664: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1660) {
            ctx->pc = 0x1B1680u;
            goto label_1b1680;
        }
    }
    ctx->pc = 0x1B1668u;
label_1b1668:
    // 0x1b1668: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x1b1668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1b166c:
    // 0x1b166c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1b166cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1b1670:
    // 0x1b1670: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b1670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1b1674:
    // 0x1b1674: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b1674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b1678:
    // 0x1b1678: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1b1678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1b167c:
    // 0x1b167c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1b167cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1b1680:
    // 0x1b1680: 0x8e040098  lw          $a0, 0x98($s0)
    ctx->pc = 0x1b1680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_1b1684:
    // 0x1b1684: 0x1480000d  bnez        $a0, . + 4 + (0xD << 2)
label_1b1688:
    if (ctx->pc == 0x1B1688u) {
        ctx->pc = 0x1B1688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1684u;
        // 0x1b1688: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B168Cu;
        goto label_1b168c;
    }
    ctx->pc = 0x1B1684u;
    {
        const bool branch_taken_0x1b1684 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1684u;
        // 0x1b1688: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1684) {
            ctx->pc = 0x1B16BCu;
            goto label_1b16bc;
        }
    }
    ctx->pc = 0x1B168Cu;
label_1b168c:
    // 0x1b168c: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x1b168cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_1b1690:
    // 0x1b1690: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1b1690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1b1694:
    // 0x1b1694: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_1b1698:
    if (ctx->pc == 0x1B1698u) {
        ctx->pc = 0x1B169Cu;
        goto label_1b169c;
    }
    ctx->pc = 0x1B1694u;
    {
        const bool branch_taken_0x1b1694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b1694) {
            ctx->pc = 0x1B16BCu;
            goto label_1b16bc;
        }
    }
    ctx->pc = 0x1B169Cu;
label_1b169c:
    // 0x1b169c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x1b169cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_1b16a0:
    // 0x1b16a0: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x1b16a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
label_1b16a4:
    // 0x1b16a4: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1b16a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1b16a8:
    // 0x1b16a8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_1b16ac:
    if (ctx->pc == 0x1B16ACu) {
        ctx->pc = 0x1B16ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B16A8u;
        // 0x1b16ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B16B0u;
        goto label_1b16b0;
    }
    ctx->pc = 0x1B16A8u;
    {
        const bool branch_taken_0x1b16a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b16a8) {
            ctx->pc = 0x1B16ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B16A8u;
            // 0x1b16ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B16BCu;
            goto label_1b16bc;
        }
    }
    ctx->pc = 0x1B16B0u;
label_1b16b0:
    // 0x1b16b0: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1b16b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1b16b4:
    // 0x1b16b4: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
label_1b16b8:
    if (ctx->pc == 0x1B16B8u) {
        ctx->pc = 0x1B16B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B16B4u;
        // 0x1b16b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B16BCu;
        goto label_1b16bc;
    }
    ctx->pc = 0x1B16B4u;
    {
        const bool branch_taken_0x1b16b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b16b4) {
            ctx->pc = 0x1B16B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B16B4u;
            // 0x1b16b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B16BCu;
            goto label_1b16bc;
        }
    }
    ctx->pc = 0x1B16BCu;
label_1b16bc:
    // 0x1b16bc: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
label_1b16c0:
    if (ctx->pc == 0x1B16C0u) {
        ctx->pc = 0x1B16C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B16BCu;
        // 0x1b16c0: 0x8e0200b4  lw          $v0, 0xB4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B16C4u;
        goto label_1b16c4;
    }
    ctx->pc = 0x1B16BCu;
    {
        const bool branch_taken_0x1b16bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b16bc) {
            ctx->pc = 0x1B16C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B16BCu;
            // 0x1b16c0: 0x8e0200b4  lw          $v0, 0xB4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B16D0u;
            goto label_1b16d0;
        }
    }
    ctx->pc = 0x1B16C4u;
label_1b16c4:
    // 0x1b16c4: 0x50a00062  beql        $a1, $zero, . + 4 + (0x62 << 2)
label_1b16c8:
    if (ctx->pc == 0x1B16C8u) {
        ctx->pc = 0x1B16C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B16C4u;
        // 0x1b16c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B16CCu;
        goto label_1b16cc;
    }
    ctx->pc = 0x1B16C4u;
    {
        const bool branch_taken_0x1b16c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b16c4) {
            ctx->pc = 0x1B16C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B16C4u;
            // 0x1b16c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1850u;
            goto label_1b1850;
        }
    }
    ctx->pc = 0x1B16CCu;
label_1b16cc:
    // 0x1b16cc: 0x8e0200b4  lw          $v0, 0xB4($s0)
    ctx->pc = 0x1b16ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_1b16d0:
    // 0x1b16d0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1b16d4:
    if (ctx->pc == 0x1B16D4u) {
        ctx->pc = 0x1B16D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B16D0u;
        // 0x1b16d4: 0x8e0500a4  lw          $a1, 0xA4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B16D8u;
        goto label_1b16d8;
    }
    ctx->pc = 0x1B16D0u;
    {
        const bool branch_taken_0x1b16d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b16d0) {
            ctx->pc = 0x1B16D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B16D0u;
            // 0x1b16d4: 0x8e0500a4  lw          $a1, 0xA4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B16E8u;
            goto label_1b16e8;
        }
    }
    ctx->pc = 0x1B16D8u;
label_1b16d8:
    // 0x1b16d8: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x1b16d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_1b16dc:
    // 0x1b16dc: 0x5040005c  beql        $v0, $zero, . + 4 + (0x5C << 2)
label_1b16e0:
    if (ctx->pc == 0x1B16E0u) {
        ctx->pc = 0x1B16E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B16DCu;
        // 0x1b16e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B16E4u;
        goto label_1b16e4;
    }
    ctx->pc = 0x1B16DCu;
    {
        const bool branch_taken_0x1b16dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b16dc) {
            ctx->pc = 0x1B16E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B16DCu;
            // 0x1b16e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1850u;
            goto label_1b1850;
        }
    }
    ctx->pc = 0x1B16E4u;
label_1b16e4:
    // 0x1b16e4: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x1b16e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_1b16e8:
    // 0x1b16e8: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
label_1b16ec:
    if (ctx->pc == 0x1B16ECu) {
        ctx->pc = 0x1B16ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B16E8u;
        // 0x1b16ec: 0x8e020088  lw          $v0, 0x88($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B16F0u;
        goto label_1b16f0;
    }
    ctx->pc = 0x1B16E8u;
    {
        const bool branch_taken_0x1b16e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b16e8) {
            ctx->pc = 0x1B16ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B16E8u;
            // 0x1b16ec: 0x8e020088  lw          $v0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1710u;
            goto label_1b1710;
        }
    }
    ctx->pc = 0x1B16F0u;
label_1b16f0:
    // 0x1b16f0: 0x94a2002a  lhu         $v0, 0x2A($a1)
    ctx->pc = 0x1b16f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 42)));
label_1b16f4:
    // 0x1b16f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b16f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1b16f8:
    // 0x1b16f8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1b16fc:
    if (ctx->pc == 0x1B16FCu) {
        ctx->pc = 0x1B16FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B16F8u;
        // 0x1b16fc: 0x8e020088  lw          $v0, 0x88($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1700u;
        goto label_1b1700;
    }
    ctx->pc = 0x1B16F8u;
    {
        const bool branch_taken_0x1b16f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b16f8) {
            ctx->pc = 0x1B16FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B16F8u;
            // 0x1b16fc: 0x8e020088  lw          $v0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1710u;
            goto label_1b1710;
        }
    }
    ctx->pc = 0x1B1700u;
label_1b1700:
    // 0x1b1700: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x1b1700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_1b1704:
    // 0x1b1704: 0xc07576c  jal         func_1D5DB0
label_1b1708:
    if (ctx->pc == 0x1B1708u) {
        ctx->pc = 0x1B1708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1704u;
        // 0x1b1708: 0x8c440110  lw          $a0, 0x110($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B170Cu;
        goto label_1b170c;
    }
    ctx->pc = 0x1B1704u;
    SET_GPR_U32(ctx, 31, 0x1B170Cu);
    ctx->pc = 0x1B1708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1704u;
    // 0x1b1708: 0x8c440110  lw          $a0, 0x110($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5DB0u, 0x1B1704u, 0x1B170Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B170Cu;
label_1b170c:
    // 0x1b170c: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x1b170cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_1b1710:
    // 0x1b1710: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x1b1710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_1b1714:
    // 0x1b1714: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_1b1718:
    if (ctx->pc == 0x1B1718u) {
        ctx->pc = 0x1B1718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1714u;
        // 0x1b1718: 0xc60100a8  lwc1        $f1, 0xA8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B171Cu;
        goto label_1b171c;
    }
    ctx->pc = 0x1B1714u;
    {
        const bool branch_taken_0x1b1714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b1714) {
            ctx->pc = 0x1B1718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1714u;
            // 0x1b1718: 0xc60100a8  lwc1        $f1, 0xA8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B172Cu;
            goto label_1b172c;
        }
    }
    ctx->pc = 0x1B171Cu;
label_1b171c:
    // 0x1b171c: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x1b171cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_1b1720:
    // 0x1b1720: 0x5062004b  beql        $v1, $v0, . + 4 + (0x4B << 2)
label_1b1724:
    if (ctx->pc == 0x1B1724u) {
        ctx->pc = 0x1B1724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1720u;
        // 0x1b1724: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1728u;
        goto label_1b1728;
    }
    ctx->pc = 0x1B1720u;
    {
        const bool branch_taken_0x1b1720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b1720) {
            ctx->pc = 0x1B1724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1720u;
            // 0x1b1724: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1850u;
            goto label_1b1850;
        }
    }
    ctx->pc = 0x1B1728u;
label_1b1728:
    // 0x1b1728: 0xc60100a8  lwc1        $f1, 0xA8($s0)
    ctx->pc = 0x1b1728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b172c:
    // 0x1b172c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b172cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b1730:
    // 0x1b1730: 0x0  nop
    ctx->pc = 0x1b1730u;
    // NOP
label_1b1734:
    // 0x1b1734: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1b1734u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b1738:
    // 0x1b1738: 0x0  nop
    ctx->pc = 0x1b1738u;
    // NOP
label_1b173c:
    // 0x1b173c: 0x45020044  bc1fl       . + 4 + (0x44 << 2)
label_1b1740:
    if (ctx->pc == 0x1B1740u) {
        ctx->pc = 0x1B1740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B173Cu;
        // 0x1b1740: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1744u;
        goto label_1b1744;
    }
    ctx->pc = 0x1B173Cu;
    {
        const bool branch_taken_0x1b173c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b173c) {
            ctx->pc = 0x1B1740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B173Cu;
            // 0x1b1740: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1850u;
            goto label_1b1850;
        }
    }
    ctx->pc = 0x1B1744u;
label_1b1744:
    // 0x1b1744: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_1b1748:
    if (ctx->pc == 0x1B1748u) {
        ctx->pc = 0x1B174Cu;
        goto label_1b174c;
    }
    ctx->pc = 0x1B1744u;
    {
        const bool branch_taken_0x1b1744 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1744) {
            ctx->pc = 0x1B1754u;
            goto label_1b1754;
        }
    }
    ctx->pc = 0x1B174Cu;
label_1b174c:
    // 0x1b174c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b1750:
    if (ctx->pc == 0x1B1750u) {
        ctx->pc = 0x1B1750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B174Cu;
        // 0x1b1750: 0xae03008c  sw          $v1, 0x8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1754u;
        goto label_1b1754;
    }
    ctx->pc = 0x1B174Cu;
    {
        const bool branch_taken_0x1b174c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B174Cu;
        // 0x1b1750: 0xae03008c  sw          $v1, 0x8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b174c) {
            ctx->pc = 0x1B175Cu;
            goto label_1b175c;
        }
    }
    ctx->pc = 0x1B1754u;
label_1b1754:
    // 0x1b1754: 0xc06c670  jal         func_1B19C0
label_1b1758:
    if (ctx->pc == 0x1B1758u) {
        ctx->pc = 0x1B1758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1754u;
        // 0x1b1758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B175Cu;
        goto label_1b175c;
    }
    ctx->pc = 0x1B1754u;
    SET_GPR_U32(ctx, 31, 0x1B175Cu);
    ctx->pc = 0x1B1758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1754u;
    // 0x1b1758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B19C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B19C0u, 0x1B1754u, 0x1B175Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B175Cu;
label_1b175c:
    // 0x1b175c: 0x8e06008c  lw          $a2, 0x8C($s0)
    ctx->pc = 0x1b175cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_1b1760:
    // 0x1b1760: 0x8e050088  lw          $a1, 0x88($s0)
    ctx->pc = 0x1b1760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_1b1764:
    // 0x1b1764: 0x10c50036  beq         $a2, $a1, . + 4 + (0x36 << 2)
label_1b1768:
    if (ctx->pc == 0x1B1768u) {
        ctx->pc = 0x1B1768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1764u;
        // 0x1b1768: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B176Cu;
        goto label_1b176c;
    }
    ctx->pc = 0x1B1764u;
    {
        const bool branch_taken_0x1b1764 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x1B1768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1764u;
        // 0x1b1768: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1764) {
            ctx->pc = 0x1B1840u;
            goto label_1b1840;
        }
    }
    ctx->pc = 0x1B176Cu;
label_1b176c:
    // 0x1b176c: 0x26638658  addiu       $v1, $s3, -0x79A8
    ctx->pc = 0x1b176cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936152));
label_1b1770:
    // 0x1b1770: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x1b1770u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1b1774:
    // 0x1b1774: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b1774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1b1778:
    // 0x1b1778: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x1b1778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1b177c:
    // 0x1b177c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_1b1780:
    if (ctx->pc == 0x1B1780u) {
        ctx->pc = 0x1B1780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B177Cu;
        // 0x1b1780: 0x24a3ffff  addiu       $v1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1784u;
        goto label_1b1784;
    }
    ctx->pc = 0x1B177Cu;
    {
        const bool branch_taken_0x1b177c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B177Cu;
        // 0x1b1780: 0x24a3ffff  addiu       $v1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b177c) {
            ctx->pc = 0x1B17A0u;
            goto label_1b17a0;
        }
    }
    ctx->pc = 0x1B1784u;
label_1b1784:
    // 0x1b1784: 0x10c30006  beq         $a2, $v1, . + 4 + (0x6 << 2)
label_1b1788:
    if (ctx->pc == 0x1B1788u) {
        ctx->pc = 0x1B1788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1784u;
        // 0x1b1788: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B178Cu;
        goto label_1b178c;
    }
    ctx->pc = 0x1B1784u;
    {
        const bool branch_taken_0x1b1784 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B1788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1784u;
        // 0x1b1788: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1784) {
            ctx->pc = 0x1B17A0u;
            goto label_1b17a0;
        }
    }
    ctx->pc = 0x1B178Cu;
label_1b178c:
    // 0x1b178c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b178cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1b1790:
    // 0x1b1790: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1b1790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1b1794:
    // 0x1b1794: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1b1794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1b1798:
    // 0x1b1798: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b1798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b179c:
    // 0x1b179c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1b179cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1b17a0:
    // 0x1b17a0: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x1b17a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_1b17a4:
    // 0x1b17a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b17a8:
    if (ctx->pc == 0x1B17A8u) {
        ctx->pc = 0x1B17A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B17A4u;
        // 0x1b17a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B17ACu;
        goto label_1b17ac;
    }
    ctx->pc = 0x1B17A4u;
    {
        const bool branch_taken_0x1b17a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B17A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B17A4u;
        // 0x1b17a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b17a4) {
            ctx->pc = 0x1B17B4u;
            goto label_1b17b4;
        }
    }
    ctx->pc = 0x1B17ACu;
label_1b17ac:
    // 0x1b17ac: 0xc06c504  jal         func_1B1410
label_1b17b0:
    if (ctx->pc == 0x1B17B0u) {
        ctx->pc = 0x1B17B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B17ACu;
        // 0x1b17b0: 0x260500a4  addiu       $a1, $s0, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 164));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B17B4u;
        goto label_1b17b4;
    }
    ctx->pc = 0x1B17ACu;
    SET_GPR_U32(ctx, 31, 0x1B17B4u);
    ctx->pc = 0x1B17B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B17ACu;
    // 0x1b17b0: 0x260500a4  addiu       $a1, $s0, 0xA4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1410u, 0x1B17ACu, 0x1B17B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B17B4u;
label_1b17b4:
    // 0x1b17b4: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x1b17b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_1b17b8:
    // 0x1b17b8: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x1b17b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_1b17bc:
    // 0x1b17bc: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x1b17bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_1b17c0:
    // 0x1b17c0: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x1b17c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_1b17c4:
    // 0x1b17c4: 0xae0200a4  sw          $v0, 0xA4($s0)
    ctx->pc = 0x1b17c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
label_1b17c8:
    // 0x1b17c8: 0xae030090  sw          $v1, 0x90($s0)
    ctx->pc = 0x1b17c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
label_1b17cc:
    // 0x1b17cc: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x1b17ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_1b17d0:
    // 0x1b17d0: 0xae040088  sw          $a0, 0x88($s0)
    ctx->pc = 0x1b17d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 4));
label_1b17d4:
    // 0x1b17d4: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
label_1b17d8:
    if (ctx->pc == 0x1B17D8u) {
        ctx->pc = 0x1B17D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B17D4u;
        // 0x1b17d8: 0xae000098  sw          $zero, 0x98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B17DCu;
        goto label_1b17dc;
    }
    ctx->pc = 0x1B17D4u;
    {
        const bool branch_taken_0x1b17d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x1B17D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B17D4u;
        // 0x1b17d8: 0xae000098  sw          $zero, 0x98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b17d4) {
            ctx->pc = 0x1B17E4u;
            goto label_1b17e4;
        }
    }
    ctx->pc = 0x1B17DCu;
label_1b17dc:
    // 0x1b17dc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1b17dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1b17e0:
    // 0x1b17e0: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x1b17e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_1b17e4:
    // 0x1b17e4: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1b17e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_1b17e8:
    // 0x1b17e8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b17e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b17ec:
    // 0x1b17ec: 0x9064018d  lbu         $a0, 0x18D($v1)
    ctx->pc = 0x1b17ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 397)));
label_1b17f0:
    // 0x1b17f0: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_1b17f4:
    if (ctx->pc == 0x1B17F4u) {
        ctx->pc = 0x1B17F8u;
        goto label_1b17f8;
    }
    ctx->pc = 0x1B17F0u;
    {
        const bool branch_taken_0x1b17f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b17f0) {
            ctx->pc = 0x1B1800u;
            goto label_1b1800;
        }
    }
    ctx->pc = 0x1B17F8u;
label_1b17f8:
    // 0x1b17f8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b17fc:
    if (ctx->pc == 0x1B17FCu) {
        ctx->pc = 0x1B17FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B17F8u;
        // 0x1b17fc: 0xa060018d  sb          $zero, 0x18D($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 397), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1800u;
        goto label_1b1800;
    }
    ctx->pc = 0x1B17F8u;
    {
        const bool branch_taken_0x1b17f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B17FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B17F8u;
        // 0x1b17fc: 0xa060018d  sb          $zero, 0x18D($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 397), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b17f8) {
            ctx->pc = 0x1B180Cu;
            goto label_1b180c;
        }
    }
    ctx->pc = 0x1B1800u;
label_1b1800:
    // 0x1b1800: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
label_1b1804:
    if (ctx->pc == 0x1B1804u) {
        ctx->pc = 0x1B1804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1800u;
        // 0x1b1804: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1808u;
        goto label_1b1808;
    }
    ctx->pc = 0x1B1800u;
    {
        const bool branch_taken_0x1b1800 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1800u;
        // 0x1b1804: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1800) {
            ctx->pc = 0x1B180Cu;
            goto label_1b180c;
        }
    }
    ctx->pc = 0x1B1808u;
label_1b1808:
    // 0x1b1808: 0xa062018d  sb          $v0, 0x18D($v1)
    ctx->pc = 0x1b1808u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 397), (uint8_t)GPR_U32(ctx, 2));
label_1b180c:
    // 0x1b180c: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x1b180cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_1b1810:
    // 0x1b1810: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x1b1810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
label_1b1814:
    // 0x1b1814: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1b1814u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1b1818:
    // 0x1b1818: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1b181c:
    if (ctx->pc == 0x1B181Cu) {
        ctx->pc = 0x1B181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1818u;
        // 0x1b181c: 0xae0000d8  sw          $zero, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1820u;
        goto label_1b1820;
    }
    ctx->pc = 0x1B1818u;
    {
        const bool branch_taken_0x1b1818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1818u;
        // 0x1b181c: 0xae0000d8  sw          $zero, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1818) {
            ctx->pc = 0x1B182Cu;
            goto label_1b182c;
        }
    }
    ctx->pc = 0x1B1820u;
label_1b1820:
    // 0x1b1820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1824:
    // 0x1b1824: 0xc06c450  jal         func_1B1140
label_1b1828:
    if (ctx->pc == 0x1B1828u) {
        ctx->pc = 0x1B1828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1824u;
        // 0x1b1828: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B182Cu;
        goto label_1b182c;
    }
    ctx->pc = 0x1B1824u;
    SET_GPR_U32(ctx, 31, 0x1B182Cu);
    ctx->pc = 0x1B1828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1824u;
    // 0x1b1828: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1140u, 0x1B1824u, 0x1B182Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B182Cu;
label_1b182c:
    // 0x1b182c: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x1b182cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_1b1830:
    // 0x1b1830: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x1b1830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_1b1834:
    // 0x1b1834: 0x8c6201bc  lw          $v0, 0x1BC($v1)
    ctx->pc = 0x1b1834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 444)));
label_1b1838:
    // 0x1b1838: 0x40f809  jalr        $v0
label_1b183c:
    if (ctx->pc == 0x1B183Cu) {
        ctx->pc = 0x1B1840u;
        goto label_1b1840;
    }
    ctx->pc = 0x1B1838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B1840u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1838u, 0x1B1840u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B1840u;
label_1b1840:
    // 0x1b1840: 0xc06c61a  jal         func_1B1868
label_1b1844:
    if (ctx->pc == 0x1B1844u) {
        ctx->pc = 0x1B1844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1840u;
        // 0x1b1844: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1848u;
        goto label_1b1848;
    }
    ctx->pc = 0x1B1840u;
    SET_GPR_U32(ctx, 31, 0x1B1848u);
    ctx->pc = 0x1B1844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1840u;
    // 0x1b1844: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1868u, 0x1B1840u, 0x1B1848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1848u;
label_1b1848:
    // 0x1b1848: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x1b1848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
label_1b184c:
    // 0x1b184c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b184cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b1850:
    // 0x1b1850: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b1850u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1b1854:
    // 0x1b1854: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b1854u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b1858:
    // 0x1b1858: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b1858u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1b185c:
    // 0x1b185c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b185cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b1860:
    // 0x1b1860: 0x3e00008  jr          $ra
label_1b1864:
    if (ctx->pc == 0x1B1864u) {
        ctx->pc = 0x1B1864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1860u;
        // 0x1b1864: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1868u;
        goto label_fallthrough_0x1b1860;
    }
    ctx->pc = 0x1B1860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1860u;
        // 0x1b1864: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b1860:
    ctx->pc = 0x1B1868u;
}
