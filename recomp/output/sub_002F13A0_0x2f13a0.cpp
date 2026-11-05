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

// Function: sub_002F13A0
// Address: 0x2f13a0 - 0x2f1630
void sub_002F13A0_0x2f13a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F13A0_0x2f13a0");
#endif

    switch (ctx->pc) {
        case 0x2f13a0u: goto label_2f13a0;
        case 0x2f13a4u: goto label_2f13a4;
        case 0x2f13a8u: goto label_2f13a8;
        case 0x2f13acu: goto label_2f13ac;
        case 0x2f13b0u: goto label_2f13b0;
        case 0x2f13b4u: goto label_2f13b4;
        case 0x2f13b8u: goto label_2f13b8;
        case 0x2f13bcu: goto label_2f13bc;
        case 0x2f13c0u: goto label_2f13c0;
        case 0x2f13c4u: goto label_2f13c4;
        case 0x2f13c8u: goto label_2f13c8;
        case 0x2f13ccu: goto label_2f13cc;
        case 0x2f13d0u: goto label_2f13d0;
        case 0x2f13d4u: goto label_2f13d4;
        case 0x2f13d8u: goto label_2f13d8;
        case 0x2f13dcu: goto label_2f13dc;
        case 0x2f13e0u: goto label_2f13e0;
        case 0x2f13e4u: goto label_2f13e4;
        case 0x2f13e8u: goto label_2f13e8;
        case 0x2f13ecu: goto label_2f13ec;
        case 0x2f13f0u: goto label_2f13f0;
        case 0x2f13f4u: goto label_2f13f4;
        case 0x2f13f8u: goto label_2f13f8;
        case 0x2f13fcu: goto label_2f13fc;
        case 0x2f1400u: goto label_2f1400;
        case 0x2f1404u: goto label_2f1404;
        case 0x2f1408u: goto label_2f1408;
        case 0x2f140cu: goto label_2f140c;
        case 0x2f1410u: goto label_2f1410;
        case 0x2f1414u: goto label_2f1414;
        case 0x2f1418u: goto label_2f1418;
        case 0x2f141cu: goto label_2f141c;
        case 0x2f1420u: goto label_2f1420;
        case 0x2f1424u: goto label_2f1424;
        case 0x2f1428u: goto label_2f1428;
        case 0x2f142cu: goto label_2f142c;
        case 0x2f1430u: goto label_2f1430;
        case 0x2f1434u: goto label_2f1434;
        case 0x2f1438u: goto label_2f1438;
        case 0x2f143cu: goto label_2f143c;
        case 0x2f1440u: goto label_2f1440;
        case 0x2f1444u: goto label_2f1444;
        case 0x2f1448u: goto label_2f1448;
        case 0x2f144cu: goto label_2f144c;
        case 0x2f1450u: goto label_2f1450;
        case 0x2f1454u: goto label_2f1454;
        case 0x2f1458u: goto label_2f1458;
        case 0x2f145cu: goto label_2f145c;
        case 0x2f1460u: goto label_2f1460;
        case 0x2f1464u: goto label_2f1464;
        case 0x2f1468u: goto label_2f1468;
        case 0x2f146cu: goto label_2f146c;
        case 0x2f1470u: goto label_2f1470;
        case 0x2f1474u: goto label_2f1474;
        case 0x2f1478u: goto label_2f1478;
        case 0x2f147cu: goto label_2f147c;
        case 0x2f1480u: goto label_2f1480;
        case 0x2f1484u: goto label_2f1484;
        case 0x2f1488u: goto label_2f1488;
        case 0x2f148cu: goto label_2f148c;
        case 0x2f1490u: goto label_2f1490;
        case 0x2f1494u: goto label_2f1494;
        case 0x2f1498u: goto label_2f1498;
        case 0x2f149cu: goto label_2f149c;
        case 0x2f14a0u: goto label_2f14a0;
        case 0x2f14a4u: goto label_2f14a4;
        case 0x2f14a8u: goto label_2f14a8;
        case 0x2f14acu: goto label_2f14ac;
        case 0x2f14b0u: goto label_2f14b0;
        case 0x2f14b4u: goto label_2f14b4;
        case 0x2f14b8u: goto label_2f14b8;
        case 0x2f14bcu: goto label_2f14bc;
        case 0x2f14c0u: goto label_2f14c0;
        case 0x2f14c4u: goto label_2f14c4;
        case 0x2f14c8u: goto label_2f14c8;
        case 0x2f14ccu: goto label_2f14cc;
        case 0x2f14d0u: goto label_2f14d0;
        case 0x2f14d4u: goto label_2f14d4;
        case 0x2f14d8u: goto label_2f14d8;
        case 0x2f14dcu: goto label_2f14dc;
        case 0x2f14e0u: goto label_2f14e0;
        case 0x2f14e4u: goto label_2f14e4;
        case 0x2f14e8u: goto label_2f14e8;
        case 0x2f14ecu: goto label_2f14ec;
        case 0x2f14f0u: goto label_2f14f0;
        case 0x2f14f4u: goto label_2f14f4;
        case 0x2f14f8u: goto label_2f14f8;
        case 0x2f14fcu: goto label_2f14fc;
        case 0x2f1500u: goto label_2f1500;
        case 0x2f1504u: goto label_2f1504;
        case 0x2f1508u: goto label_2f1508;
        case 0x2f150cu: goto label_2f150c;
        case 0x2f1510u: goto label_2f1510;
        case 0x2f1514u: goto label_2f1514;
        case 0x2f1518u: goto label_2f1518;
        case 0x2f151cu: goto label_2f151c;
        case 0x2f1520u: goto label_2f1520;
        case 0x2f1524u: goto label_2f1524;
        case 0x2f1528u: goto label_2f1528;
        case 0x2f152cu: goto label_2f152c;
        case 0x2f1530u: goto label_2f1530;
        case 0x2f1534u: goto label_2f1534;
        case 0x2f1538u: goto label_2f1538;
        case 0x2f153cu: goto label_2f153c;
        case 0x2f1540u: goto label_2f1540;
        case 0x2f1544u: goto label_2f1544;
        case 0x2f1548u: goto label_2f1548;
        case 0x2f154cu: goto label_2f154c;
        case 0x2f1550u: goto label_2f1550;
        case 0x2f1554u: goto label_2f1554;
        case 0x2f1558u: goto label_2f1558;
        case 0x2f155cu: goto label_2f155c;
        case 0x2f1560u: goto label_2f1560;
        case 0x2f1564u: goto label_2f1564;
        case 0x2f1568u: goto label_2f1568;
        case 0x2f156cu: goto label_2f156c;
        case 0x2f1570u: goto label_2f1570;
        case 0x2f1574u: goto label_2f1574;
        case 0x2f1578u: goto label_2f1578;
        case 0x2f157cu: goto label_2f157c;
        case 0x2f1580u: goto label_2f1580;
        case 0x2f1584u: goto label_2f1584;
        case 0x2f1588u: goto label_2f1588;
        case 0x2f158cu: goto label_2f158c;
        case 0x2f1590u: goto label_2f1590;
        case 0x2f1594u: goto label_2f1594;
        case 0x2f1598u: goto label_2f1598;
        case 0x2f159cu: goto label_2f159c;
        case 0x2f15a0u: goto label_2f15a0;
        case 0x2f15a4u: goto label_2f15a4;
        case 0x2f15a8u: goto label_2f15a8;
        case 0x2f15acu: goto label_2f15ac;
        case 0x2f15b0u: goto label_2f15b0;
        case 0x2f15b4u: goto label_2f15b4;
        case 0x2f15b8u: goto label_2f15b8;
        case 0x2f15bcu: goto label_2f15bc;
        case 0x2f15c0u: goto label_2f15c0;
        case 0x2f15c4u: goto label_2f15c4;
        case 0x2f15c8u: goto label_2f15c8;
        case 0x2f15ccu: goto label_2f15cc;
        case 0x2f15d0u: goto label_2f15d0;
        case 0x2f15d4u: goto label_2f15d4;
        case 0x2f15d8u: goto label_2f15d8;
        case 0x2f15dcu: goto label_2f15dc;
        case 0x2f15e0u: goto label_2f15e0;
        case 0x2f15e4u: goto label_2f15e4;
        case 0x2f15e8u: goto label_2f15e8;
        case 0x2f15ecu: goto label_2f15ec;
        case 0x2f15f0u: goto label_2f15f0;
        case 0x2f15f4u: goto label_2f15f4;
        case 0x2f15f8u: goto label_2f15f8;
        case 0x2f15fcu: goto label_2f15fc;
        case 0x2f1600u: goto label_2f1600;
        case 0x2f1604u: goto label_2f1604;
        case 0x2f1608u: goto label_2f1608;
        case 0x2f160cu: goto label_2f160c;
        case 0x2f1610u: goto label_2f1610;
        case 0x2f1614u: goto label_2f1614;
        case 0x2f1618u: goto label_2f1618;
        case 0x2f161cu: goto label_2f161c;
        case 0x2f1620u: goto label_2f1620;
        case 0x2f1624u: goto label_2f1624;
        case 0x2f1628u: goto label_2f1628;
        case 0x2f162cu: goto label_2f162c;
        default: break;
    }

    ctx->pc = 0x2f13a0u;

label_2f13a0:
    // 0x2f13a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f13a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2f13a4:
    // 0x2f13a4: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x2f13a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
label_2f13a8:
    // 0x2f13a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2f13a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2f13ac:
    // 0x2f13ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f13acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2f13b0:
    // 0x2f13b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f13b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f13b4:
    // 0x2f13b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f13b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2f13b8:
    // 0x2f13b8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2f13b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_2f13bc:
    // 0x2f13bc: 0x8e4211c0  lw          $v0, 0x11C0($s2)
    ctx->pc = 0x2f13bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4544)));
label_2f13c0:
    // 0x2f13c0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2f13c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_2f13c4:
    // 0x2f13c4: 0x14460095  bne         $v0, $a2, . + 4 + (0x95 << 2)
label_2f13c8:
    if (ctx->pc == 0x2F13C8u) {
        ctx->pc = 0x2F13C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F13C4u;
        // 0x2f13c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F13CCu;
        goto label_2f13cc;
    }
    ctx->pc = 0x2F13C4u;
    {
        const bool branch_taken_0x2f13c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x2F13C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F13C4u;
        // 0x2f13c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f13c4) {
            ctx->pc = 0x2F161Cu;
            goto label_2f161c;
        }
    }
    ctx->pc = 0x2F13CCu;
label_2f13cc:
    // 0x2f13cc: 0x8e4311e4  lw          $v1, 0x11E4($s2)
    ctx->pc = 0x2f13ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4580)));
label_2f13d0:
    // 0x2f13d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f13d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f13d4:
    // 0x2f13d4: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x2f13d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
label_2f13d8:
    // 0x2f13d8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2f13d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2f13dc:
    // 0x2f13dc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2f13dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_2f13e0:
    // 0x2f13e0: 0xc0f773a  jal         func_3DDCE8
label_2f13e4:
    if (ctx->pc == 0x2F13E4u) {
        ctx->pc = 0x2F13E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F13E0u;
        // 0x2f13e4: 0xac6200c0  sw          $v0, 0xC0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F13E8u;
        goto label_2f13e8;
    }
    ctx->pc = 0x2F13E0u;
    SET_GPR_U32(ctx, 31, 0x2F13E8u);
    ctx->pc = 0x2F13E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F13E0u;
    // 0x2f13e4: 0xac6200c0  sw          $v0, 0xC0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DDCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DDCE8u, 0x2F13E0u, 0x2F13E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F13E8u;
label_2f13e8:
    // 0x2f13e8: 0x8e4211e4  lw          $v0, 0x11E4($s2)
    ctx->pc = 0x2f13e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4580)));
label_2f13ec:
    // 0x2f13ec: 0x8e4301d0  lw          $v1, 0x1D0($s2)
    ctx->pc = 0x2f13ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 464)));
label_2f13f0:
    // 0x2f13f0: 0xac4301d0  sw          $v1, 0x1D0($v0)
    ctx->pc = 0x2f13f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 3));
label_2f13f4:
    // 0x2f13f4: 0x8e5011e4  lw          $s0, 0x11E4($s2)
    ctx->pc = 0x2f13f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4580)));
label_2f13f8:
    // 0x2f13f8: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x2f13f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_2f13fc:
    // 0x2f13fc: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2f13fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_2f1400:
    // 0x2f1400: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x2f1400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_2f1404:
    // 0x2f1404: 0x14400081  bnez        $v0, . + 4 + (0x81 << 2)
label_2f1408:
    if (ctx->pc == 0x2F1408u) {
        ctx->pc = 0x2F1408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1404u;
        // 0x2f1408: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F140Cu;
        goto label_2f140c;
    }
    ctx->pc = 0x2F1404u;
    {
        const bool branch_taken_0x2f1404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1404u;
        // 0x2f1408: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1404) {
            ctx->pc = 0x2F160Cu;
            goto label_2f160c;
        }
    }
    ctx->pc = 0x2F140Cu;
label_2f140c:
    // 0x2f140c: 0x8e0203a4  lw          $v0, 0x3A4($s0)
    ctx->pc = 0x2f140cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 932)));
label_2f1410:
    // 0x2f1410: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
label_2f1414:
    if (ctx->pc == 0x2F1414u) {
        ctx->pc = 0x2F1414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1410u;
        // 0x2f1414: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1418u;
        goto label_2f1418;
    }
    ctx->pc = 0x2F1410u;
    {
        const bool branch_taken_0x2f1410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1410u;
        // 0x2f1414: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1410) {
            ctx->pc = 0x2F1608u;
            goto label_2f1608;
        }
    }
    ctx->pc = 0x2F1418u;
label_2f1418:
    // 0x2f1418: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x2f1418u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
label_2f141c:
    // 0x2f141c: 0xc08fed2  jal         func_23FB48
label_2f1420:
    if (ctx->pc == 0x2F1420u) {
        ctx->pc = 0x2F1420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F141Cu;
        // 0x2f1420: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1424u;
        goto label_2f1424;
    }
    ctx->pc = 0x2F141Cu;
    SET_GPR_U32(ctx, 31, 0x2F1424u);
    ctx->pc = 0x2F1420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F141Cu;
    // 0x2f1420: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2F141Cu, 0x2F1424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1424u;
label_2f1424:
    // 0x2f1424: 0xc6010378  lwc1        $f1, 0x378($s0)
    ctx->pc = 0x2f1424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f1428:
    // 0x2f1428: 0x2403ff7f  addiu       $v1, $zero, -0x81
    ctx->pc = 0x2f1428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
label_2f142c:
    // 0x2f142c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f142cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f1430:
    // 0x2f1430: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x2f1430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_2f1434:
    // 0x2f1434: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f1434u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f1438:
    // 0x2f1438: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f1438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f143c:
    // 0x2f143c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2f1440:
    if (ctx->pc == 0x2F1440u) {
        ctx->pc = 0x2F1440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F143Cu;
        // 0x2f1440: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1444u;
        goto label_2f1444;
    }
    ctx->pc = 0x2F143Cu;
    {
        const bool branch_taken_0x2f143c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F1440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F143Cu;
        // 0x2f1440: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f143c) {
            ctx->pc = 0x2F1454u;
            goto label_2f1454;
        }
    }
    ctx->pc = 0x2F1444u;
label_2f1444:
    // 0x2f1444: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2f1444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
label_2f1448:
    // 0x2f1448: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f1448u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f144c:
    // 0x2f144c: 0x0  nop
    ctx->pc = 0x2f144cu;
    // NOP
label_2f1450:
    // 0x2f1450: 0xe6000378  swc1        $f0, 0x378($s0)
    ctx->pc = 0x2f1450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 888), bits); }
label_2f1454:
    // 0x2f1454: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x2f1454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_2f1458:
    // 0x2f1458: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x2f1458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_2f145c:
    // 0x2f145c: 0x8c440150  lw          $a0, 0x150($v0)
    ctx->pc = 0x2f145cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_2f1460:
    // 0x2f1460: 0x50830023  beql        $a0, $v1, . + 4 + (0x23 << 2)
label_2f1464:
    if (ctx->pc == 0x2F1464u) {
        ctx->pc = 0x2F1464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1460u;
        // 0x2f1464: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1468u;
        goto label_2f1468;
    }
    ctx->pc = 0x2F1460u;
    {
        const bool branch_taken_0x2f1460 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f1460) {
            ctx->pc = 0x2F1464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1460u;
            // 0x2f1464: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F14F0u;
            goto label_2f14f0;
        }
    }
    ctx->pc = 0x2F1468u;
label_2f1468:
    // 0x2f1468: 0x8e420334  lw          $v0, 0x334($s2)
    ctx->pc = 0x2f1468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_2f146c:
    // 0x2f146c: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x2f146cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_2f1470:
    // 0x2f1470: 0x1083001e  beq         $a0, $v1, . + 4 + (0x1E << 2)
label_2f1474:
    if (ctx->pc == 0x2F1474u) {
        ctx->pc = 0x2F1474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1470u;
        // 0x2f1474: 0x2c620031  sltiu       $v0, $v1, 0x31 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)49) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1478u;
        goto label_2f1478;
    }
    ctx->pc = 0x2F1470u;
    {
        const bool branch_taken_0x2f1470 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F1474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1470u;
        // 0x2f1474: 0x2c620031  sltiu       $v0, $v1, 0x31 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)49) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1470) {
            ctx->pc = 0x2F14ECu;
            goto label_2f14ec;
        }
    }
    ctx->pc = 0x2F1478u;
label_2f1478:
    // 0x2f1478: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_2f147c:
    if (ctx->pc == 0x2F147Cu) {
        ctx->pc = 0x2F147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1478u;
        // 0x2f147c: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1480u;
        goto label_2f1480;
    }
    ctx->pc = 0x2F1478u;
    {
        const bool branch_taken_0x2f1478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1478u;
        // 0x2f147c: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1478) {
            ctx->pc = 0x2F14D8u;
            goto label_2f14d8;
        }
    }
    ctx->pc = 0x2F1480u;
label_2f1480:
    // 0x2f1480: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2f1480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2f1484:
    // 0x2f1484: 0x24421aa0  addiu       $v0, $v0, 0x1AA0
    ctx->pc = 0x2f1484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6816));
label_2f1488:
    // 0x2f1488: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f1488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2f148c:
    // 0x2f148c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2f148cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f1490:
    // 0x2f1490: 0x800008  jr          $a0
label_2f1494:
    if (ctx->pc == 0x2F1494u) {
        ctx->pc = 0x2F1498u;
        goto label_2f1498;
    }
    ctx->pc = 0x2F1490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F1498u: goto label_2f1498;
            case 0x2F14A8u: goto label_2f14a8;
            case 0x2F14C4u: goto label_2f14c4;
            case 0x2F14D8u: goto label_2f14d8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1490u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2F1498u;
label_2f1498:
    // 0x2f1498: 0xc069d18  jal         func_1A7460
label_2f149c:
    if (ctx->pc == 0x2F149Cu) {
        ctx->pc = 0x2F149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1498u;
        // 0x2f149c: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F14A0u;
        goto label_2f14a0;
    }
    ctx->pc = 0x2F1498u;
    SET_GPR_U32(ctx, 31, 0x2F14A0u);
    ctx->pc = 0x2F149Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1498u;
    // 0x2f149c: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7460u, 0x2F1498u, 0x2F14A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F14A0u;
label_2f14a0:
    // 0x2f14a0: 0x10000004  b           . + 4 + (0x4 << 2)
label_2f14a4:
    if (ctx->pc == 0x2F14A4u) {
        ctx->pc = 0x2F14A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F14A0u;
        // 0x2f14a4: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F14A8u;
        goto label_2f14a8;
    }
    ctx->pc = 0x2F14A0u;
    {
        const bool branch_taken_0x2f14a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F14A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F14A0u;
        // 0x2f14a4: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f14a0) {
            ctx->pc = 0x2F14B4u;
            goto label_2f14b4;
        }
    }
    ctx->pc = 0x2F14A8u;
label_2f14a8:
    // 0x2f14a8: 0xc069d20  jal         func_1A7480
label_2f14ac:
    if (ctx->pc == 0x2F14ACu) {
        ctx->pc = 0x2F14ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F14A8u;
        // 0x2f14ac: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F14B0u;
        goto label_2f14b0;
    }
    ctx->pc = 0x2F14A8u;
    SET_GPR_U32(ctx, 31, 0x2F14B0u);
    ctx->pc = 0x2F14ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F14A8u;
    // 0x2f14ac: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7480u, 0x2F14A8u, 0x2F14B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F14B0u;
label_2f14b0:
    // 0x2f14b0: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x2f14b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_2f14b4:
    // 0x2f14b4: 0xc06a23e  jal         func_1A88F8
label_2f14b8:
    if (ctx->pc == 0x2F14B8u) {
        ctx->pc = 0x2F14B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F14B4u;
        // 0x2f14b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F14BCu;
        goto label_2f14bc;
    }
    ctx->pc = 0x2F14B4u;
    SET_GPR_U32(ctx, 31, 0x2F14BCu);
    ctx->pc = 0x2F14B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F14B4u;
    // 0x2f14b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x2F14B4u, 0x2F14BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F14BCu;
label_2f14bc:
    // 0x2f14bc: 0x10000006  b           . + 4 + (0x6 << 2)
label_2f14c0:
    if (ctx->pc == 0x2F14C0u) {
        ctx->pc = 0x2F14C4u;
        goto label_2f14c4;
    }
    ctx->pc = 0x2F14BCu;
    {
        const bool branch_taken_0x2f14bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f14bc) {
            ctx->pc = 0x2F14D8u;
            goto label_2f14d8;
        }
    }
    ctx->pc = 0x2F14C4u;
label_2f14c4:
    // 0x2f14c4: 0xc069d28  jal         func_1A74A0
label_2f14c8:
    if (ctx->pc == 0x2F14C8u) {
        ctx->pc = 0x2F14C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F14C4u;
        // 0x2f14c8: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F14CCu;
        goto label_2f14cc;
    }
    ctx->pc = 0x2F14C4u;
    SET_GPR_U32(ctx, 31, 0x2F14CCu);
    ctx->pc = 0x2F14C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F14C4u;
    // 0x2f14c8: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A74A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A74A0u, 0x2F14C4u, 0x2F14CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F14CCu;
label_2f14cc:
    // 0x2f14cc: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x2f14ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_2f14d0:
    // 0x2f14d0: 0xc06a23e  jal         func_1A88F8
label_2f14d4:
    if (ctx->pc == 0x2F14D4u) {
        ctx->pc = 0x2F14D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F14D0u;
        // 0x2f14d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F14D8u;
        goto label_2f14d8;
    }
    ctx->pc = 0x2F14D0u;
    SET_GPR_U32(ctx, 31, 0x2F14D8u);
    ctx->pc = 0x2F14D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F14D0u;
    // 0x2f14d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x2F14D0u, 0x2F14D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F14D8u;
label_2f14d8:
    // 0x2f14d8: 0xc06a328  jal         func_1A8CA0
label_2f14dc:
    if (ctx->pc == 0x2F14DCu) {
        ctx->pc = 0x2F14DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F14D8u;
        // 0x2f14dc: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F14E0u;
        goto label_2f14e0;
    }
    ctx->pc = 0x2F14D8u;
    SET_GPR_U32(ctx, 31, 0x2F14E0u);
    ctx->pc = 0x2F14DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F14D8u;
    // 0x2f14dc: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8CA0u, 0x2F14D8u, 0x2F14E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F14E0u;
label_2f14e0:
    // 0x2f14e0: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x2f14e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_2f14e4:
    // 0x2f14e4: 0xc0757d2  jal         func_1D5F48
label_2f14e8:
    if (ctx->pc == 0x2F14E8u) {
        ctx->pc = 0x2F14E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F14E4u;
        // 0x2f14e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F14ECu;
        goto label_2f14ec;
    }
    ctx->pc = 0x2F14E4u;
    SET_GPR_U32(ctx, 31, 0x2F14ECu);
    ctx->pc = 0x2F14E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F14E4u;
    // 0x2f14e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F48u, 0x2F14E4u, 0x2F14ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F14ECu;
label_2f14ec:
    // 0x2f14ec: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x2f14ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_2f14f0:
    // 0x2f14f0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2f14f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2f14f4:
    // 0x2f14f4: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x2f14f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_2f14f8:
    // 0x2f14f8: 0x54430026  bnel        $v0, $v1, . + 4 + (0x26 << 2)
label_2f14fc:
    if (ctx->pc == 0x2F14FCu) {
        ctx->pc = 0x2F14FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F14F8u;
        // 0x2f14fc: 0x8e4311e4  lw          $v1, 0x11E4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4580)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1500u;
        goto label_2f1500;
    }
    ctx->pc = 0x2F14F8u;
    {
        const bool branch_taken_0x2f14f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f14f8) {
            ctx->pc = 0x2F14FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F14F8u;
            // 0x2f14fc: 0x8e4311e4  lw          $v1, 0x11E4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4580)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1594u;
            goto label_2f1594;
        }
    }
    ctx->pc = 0x2F1500u;
label_2f1500:
    // 0x2f1500: 0x8c8300c0  lw          $v1, 0xC0($a0)
    ctx->pc = 0x2f1500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
label_2f1504:
    // 0x2f1504: 0x24020790  addiu       $v0, $zero, 0x790
    ctx->pc = 0x2f1504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1936));
label_2f1508:
    // 0x2f1508: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2f150c:
    if (ctx->pc == 0x2F150Cu) {
        ctx->pc = 0x2F150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1508u;
        // 0x2f150c: 0x24020791  addiu       $v0, $zero, 0x791 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1937));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1510u;
        goto label_2f1510;
    }
    ctx->pc = 0x2F1508u;
    {
        const bool branch_taken_0x2f1508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1508u;
        // 0x2f150c: 0x24020791  addiu       $v0, $zero, 0x791 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1937));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1508) {
            ctx->pc = 0x2F1518u;
            goto label_2f1518;
        }
    }
    ctx->pc = 0x2F1510u;
label_2f1510:
    // 0x2f1510: 0x54620020  bnel        $v1, $v0, . + 4 + (0x20 << 2)
label_2f1514:
    if (ctx->pc == 0x2F1514u) {
        ctx->pc = 0x2F1514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1510u;
        // 0x2f1514: 0x8e4311e4  lw          $v1, 0x11E4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4580)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1518u;
        goto label_2f1518;
    }
    ctx->pc = 0x2F1510u;
    {
        const bool branch_taken_0x2f1510 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f1510) {
            ctx->pc = 0x2F1514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1510u;
            // 0x2f1514: 0x8e4311e4  lw          $v1, 0x11E4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4580)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1594u;
            goto label_2f1594;
        }
    }
    ctx->pc = 0x2F1518u;
label_2f1518:
    // 0x2f1518: 0x8e4311e4  lw          $v1, 0x11E4($s2)
    ctx->pc = 0x2f1518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4580)));
label_2f151c:
    // 0x2f151c: 0x8c6203a4  lw          $v0, 0x3A4($v1)
    ctx->pc = 0x2f151cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 932)));
label_2f1520:
    // 0x2f1520: 0x50400035  beql        $v0, $zero, . + 4 + (0x35 << 2)
label_2f1524:
    if (ctx->pc == 0x2F1524u) {
        ctx->pc = 0x2F1524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1520u;
        // 0x2f1524: 0x8e4411e4  lw          $a0, 0x11E4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4580)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1528u;
        goto label_2f1528;
    }
    ctx->pc = 0x2F1520u;
    {
        const bool branch_taken_0x2f1520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1520) {
            ctx->pc = 0x2F1524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1520u;
            // 0x2f1524: 0x8e4411e4  lw          $a0, 0x11E4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4580)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F15F8u;
            goto label_2f15f8;
        }
    }
    ctx->pc = 0x2F1528u;
label_2f1528:
    // 0x2f1528: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x2f1528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2f152c:
    // 0x2f152c: 0x8c630104  lw          $v1, 0x104($v1)
    ctx->pc = 0x2f152cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_2f1530:
    // 0x2f1530: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2f1530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f1534:
    // 0x2f1534: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2f1534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f1538:
    // 0x2f1538: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x2f1538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_2f153c:
    // 0x2f153c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f153cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f1540:
    // 0x2f1540: 0xf8a10040  sqc2        $vf1, 0x40($a1)
    ctx->pc = 0x2f1540u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f1544:
    // 0x2f1544: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x2f1544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_2f1548:
    // 0x2f1548: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f1548u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f154c:
    // 0x2f154c: 0xf8a10050  sqc2        $vf1, 0x50($a1)
    ctx->pc = 0x2f154cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f1550:
    // 0x2f1550: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x2f1550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_2f1554:
    // 0x2f1554: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f1554u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f1558:
    // 0x2f1558: 0xf8a10060  sqc2        $vf1, 0x60($a1)
    ctx->pc = 0x2f1558u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f155c:
    // 0x2f155c: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x2f155cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_2f1560:
    // 0x2f1560: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2f1560u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2f1564:
    // 0x2f1564: 0xf8a10070  sqc2        $vf1, 0x70($a1)
    ctx->pc = 0x2f1564u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f1568:
    // 0x2f1568: 0x8e4311e4  lw          $v1, 0x11E4($s2)
    ctx->pc = 0x2f1568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4580)));
label_2f156c:
    // 0x2f156c: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x2f156cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
label_2f1570:
    // 0x2f1570: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2f1570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
label_2f1574:
    // 0x2f1574: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f1574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f1578:
    // 0x2f1578: 0x24a55b40  addiu       $a1, $a1, 0x5B40
    ctx->pc = 0x2f1578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23360));
label_2f157c:
    // 0x2f157c: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x2f157cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_2f1580:
    // 0x2f1580: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2f1580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f1584:
    // 0x2f1584: 0xc0b15d0  jal         func_2C5740
label_2f1588:
    if (ctx->pc == 0x2F1588u) {
        ctx->pc = 0x2F1588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1584u;
        // 0x2f1588: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F158Cu;
        goto label_2f158c;
    }
    ctx->pc = 0x2F1584u;
    SET_GPR_U32(ctx, 31, 0x2F158Cu);
    ctx->pc = 0x2F1588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1584u;
    // 0x2f1588: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5740u, 0x2F1584u, 0x2F158Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F158Cu;
label_2f158c:
    // 0x2f158c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2f1590:
    if (ctx->pc == 0x2F1590u) {
        ctx->pc = 0x2F1590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F158Cu;
        // 0x2f1590: 0x8e4411e4  lw          $a0, 0x11E4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4580)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1594u;
        goto label_2f1594;
    }
    ctx->pc = 0x2F158Cu;
    {
        const bool branch_taken_0x2f158c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F158Cu;
        // 0x2f1590: 0x8e4411e4  lw          $a0, 0x11E4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f158c) {
            ctx->pc = 0x2F15F8u;
            goto label_2f15f8;
        }
    }
    ctx->pc = 0x2F1594u;
label_2f1594:
    // 0x2f1594: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f1594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f1598:
    // 0x2f1598: 0x24050447  addiu       $a1, $zero, 0x447
    ctx->pc = 0x2f1598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1095));
label_2f159c:
    // 0x2f159c: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x2f159cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_2f15a0:
    // 0x2f15a0: 0xc08a1f2  jal         func_2287C8
label_2f15a4:
    if (ctx->pc == 0x2F15A4u) {
        ctx->pc = 0x2F15A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F15A0u;
        // 0x2f15a4: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F15A8u;
        goto label_2f15a8;
    }
    ctx->pc = 0x2F15A0u;
    SET_GPR_U32(ctx, 31, 0x2F15A8u);
    ctx->pc = 0x2F15A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F15A0u;
    // 0x2f15a4: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x2F15A0u, 0x2F15A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F15A8u;
label_2f15a8:
    // 0x2f15a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f15a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f15ac:
    // 0x2f15ac: 0xc0f70ce  jal         func_3DC338
label_2f15b0:
    if (ctx->pc == 0x2F15B0u) {
        ctx->pc = 0x2F15B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F15ACu;
        // 0x2f15b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F15B4u;
        goto label_2f15b4;
    }
    ctx->pc = 0x2F15ACu;
    SET_GPR_U32(ctx, 31, 0x2F15B4u);
    ctx->pc = 0x2F15B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F15ACu;
    // 0x2f15b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x2F15ACu, 0x2F15B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F15B4u;
label_2f15b4:
    // 0x2f15b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2f15b8:
    if (ctx->pc == 0x2F15B8u) {
        ctx->pc = 0x2F15B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F15B4u;
        // 0x2f15b8: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F15BCu;
        goto label_2f15bc;
    }
    ctx->pc = 0x2F15B4u;
    {
        const bool branch_taken_0x2f15b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F15B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F15B4u;
        // 0x2f15b8: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f15b4) {
            ctx->pc = 0x2F15C8u;
            goto label_2f15c8;
        }
    }
    ctx->pc = 0x2F15BCu;
label_2f15bc:
    // 0x2f15bc: 0xc0c4900  jal         func_312400
label_2f15c0:
    if (ctx->pc == 0x2F15C0u) {
        ctx->pc = 0x2F15C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F15BCu;
        // 0x2f15c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F15C4u;
        goto label_2f15c4;
    }
    ctx->pc = 0x2F15BCu;
    SET_GPR_U32(ctx, 31, 0x2F15C4u);
    ctx->pc = 0x2F15C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F15BCu;
    // 0x2f15c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x2F15BCu, 0x2F15C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F15C4u;
label_2f15c4:
    // 0x2f15c4: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x2f15c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_2f15c8:
    // 0x2f15c8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f15c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f15cc:
    // 0x2f15cc: 0xfa210040  sqc2        $vf1, 0x40($s1)
    ctx->pc = 0x2f15ccu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f15d0:
    // 0x2f15d0: 0x26030090  addiu       $v1, $s0, 0x90
    ctx->pc = 0x2f15d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_2f15d4:
    // 0x2f15d4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f15d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f15d8:
    // 0x2f15d8: 0xfa210050  sqc2        $vf1, 0x50($s1)
    ctx->pc = 0x2f15d8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f15dc:
    // 0x2f15dc: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x2f15dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_2f15e0:
    // 0x2f15e0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f15e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f15e4:
    // 0x2f15e4: 0xfa210060  sqc2        $vf1, 0x60($s1)
    ctx->pc = 0x2f15e4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f15e8:
    // 0x2f15e8: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x2f15e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_2f15ec:
    // 0x2f15ec: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f15ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f15f0:
    // 0x2f15f0: 0xfa210070  sqc2        $vf1, 0x70($s1)
    ctx->pc = 0x2f15f0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f15f4:
    // 0x2f15f4: 0x8e4411e4  lw          $a0, 0x11E4($s2)
    ctx->pc = 0x2f15f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4580)));
label_2f15f8:
    // 0x2f15f8: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x2f15f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_2f15fc:
    // 0x2f15fc: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x2f15fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_2f1600:
    // 0x2f1600: 0x40f809  jalr        $v0
label_2f1604:
    if (ctx->pc == 0x2F1604u) {
        ctx->pc = 0x2F1604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1600u;
        // 0x2f1604: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1608u;
        goto label_2f1608;
    }
    ctx->pc = 0x2F1600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F1608u);
        ctx->pc = 0x2F1604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1600u;
        // 0x2f1604: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1600u, 0x2F1608u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F1608u;
label_2f1608:
    // 0x2f1608: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f1608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f160c:
    // 0x2f160c: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x2f160cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_2f1610:
    // 0x2f1610: 0xc08fed2  jal         func_23FB48
label_2f1614:
    if (ctx->pc == 0x2F1614u) {
        ctx->pc = 0x2F1614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1610u;
        // 0x2f1614: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1618u;
        goto label_2f1618;
    }
    ctx->pc = 0x2F1610u;
    SET_GPR_U32(ctx, 31, 0x2F1618u);
    ctx->pc = 0x2F1614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1610u;
    // 0x2f1614: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2F1610u, 0x2F1618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1618u;
label_2f1618:
    // 0x2f1618: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f1618u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f161c:
    // 0x2f161c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f161cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2f1620:
    // 0x2f1620: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f1620u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f1624:
    // 0x2f1624: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2f1624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2f1628:
    // 0x2f1628: 0x3e00008  jr          $ra
label_2f162c:
    if (ctx->pc == 0x2F162Cu) {
        ctx->pc = 0x2F162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1628u;
        // 0x2f162c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1630u;
        goto label_fallthrough_0x2f1628;
    }
    ctx->pc = 0x2F1628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1628u;
        // 0x2f162c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f1628:
    ctx->pc = 0x2F1630u;
}
