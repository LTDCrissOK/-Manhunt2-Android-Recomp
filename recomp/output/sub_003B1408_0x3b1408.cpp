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

// Function: sub_003B1408
// Address: 0x3b1408 - 0x3b1648
void sub_003B1408_0x3b1408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1408_0x3b1408");
#endif

    switch (ctx->pc) {
        case 0x3b1408u: goto label_3b1408;
        case 0x3b140cu: goto label_3b140c;
        case 0x3b1410u: goto label_3b1410;
        case 0x3b1414u: goto label_3b1414;
        case 0x3b1418u: goto label_3b1418;
        case 0x3b141cu: goto label_3b141c;
        case 0x3b1420u: goto label_3b1420;
        case 0x3b1424u: goto label_3b1424;
        case 0x3b1428u: goto label_3b1428;
        case 0x3b142cu: goto label_3b142c;
        case 0x3b1430u: goto label_3b1430;
        case 0x3b1434u: goto label_3b1434;
        case 0x3b1438u: goto label_3b1438;
        case 0x3b143cu: goto label_3b143c;
        case 0x3b1440u: goto label_3b1440;
        case 0x3b1444u: goto label_3b1444;
        case 0x3b1448u: goto label_3b1448;
        case 0x3b144cu: goto label_3b144c;
        case 0x3b1450u: goto label_3b1450;
        case 0x3b1454u: goto label_3b1454;
        case 0x3b1458u: goto label_3b1458;
        case 0x3b145cu: goto label_3b145c;
        case 0x3b1460u: goto label_3b1460;
        case 0x3b1464u: goto label_3b1464;
        case 0x3b1468u: goto label_3b1468;
        case 0x3b146cu: goto label_3b146c;
        case 0x3b1470u: goto label_3b1470;
        case 0x3b1474u: goto label_3b1474;
        case 0x3b1478u: goto label_3b1478;
        case 0x3b147cu: goto label_3b147c;
        case 0x3b1480u: goto label_3b1480;
        case 0x3b1484u: goto label_3b1484;
        case 0x3b1488u: goto label_3b1488;
        case 0x3b148cu: goto label_3b148c;
        case 0x3b1490u: goto label_3b1490;
        case 0x3b1494u: goto label_3b1494;
        case 0x3b1498u: goto label_3b1498;
        case 0x3b149cu: goto label_3b149c;
        case 0x3b14a0u: goto label_3b14a0;
        case 0x3b14a4u: goto label_3b14a4;
        case 0x3b14a8u: goto label_3b14a8;
        case 0x3b14acu: goto label_3b14ac;
        case 0x3b14b0u: goto label_3b14b0;
        case 0x3b14b4u: goto label_3b14b4;
        case 0x3b14b8u: goto label_3b14b8;
        case 0x3b14bcu: goto label_3b14bc;
        case 0x3b14c0u: goto label_3b14c0;
        case 0x3b14c4u: goto label_3b14c4;
        case 0x3b14c8u: goto label_3b14c8;
        case 0x3b14ccu: goto label_3b14cc;
        case 0x3b14d0u: goto label_3b14d0;
        case 0x3b14d4u: goto label_3b14d4;
        case 0x3b14d8u: goto label_3b14d8;
        case 0x3b14dcu: goto label_3b14dc;
        case 0x3b14e0u: goto label_3b14e0;
        case 0x3b14e4u: goto label_3b14e4;
        case 0x3b14e8u: goto label_3b14e8;
        case 0x3b14ecu: goto label_3b14ec;
        case 0x3b14f0u: goto label_3b14f0;
        case 0x3b14f4u: goto label_3b14f4;
        case 0x3b14f8u: goto label_3b14f8;
        case 0x3b14fcu: goto label_3b14fc;
        case 0x3b1500u: goto label_3b1500;
        case 0x3b1504u: goto label_3b1504;
        case 0x3b1508u: goto label_3b1508;
        case 0x3b150cu: goto label_3b150c;
        case 0x3b1510u: goto label_3b1510;
        case 0x3b1514u: goto label_3b1514;
        case 0x3b1518u: goto label_3b1518;
        case 0x3b151cu: goto label_3b151c;
        case 0x3b1520u: goto label_3b1520;
        case 0x3b1524u: goto label_3b1524;
        case 0x3b1528u: goto label_3b1528;
        case 0x3b152cu: goto label_3b152c;
        case 0x3b1530u: goto label_3b1530;
        case 0x3b1534u: goto label_3b1534;
        case 0x3b1538u: goto label_3b1538;
        case 0x3b153cu: goto label_3b153c;
        case 0x3b1540u: goto label_3b1540;
        case 0x3b1544u: goto label_3b1544;
        case 0x3b1548u: goto label_3b1548;
        case 0x3b154cu: goto label_3b154c;
        case 0x3b1550u: goto label_3b1550;
        case 0x3b1554u: goto label_3b1554;
        case 0x3b1558u: goto label_3b1558;
        case 0x3b155cu: goto label_3b155c;
        case 0x3b1560u: goto label_3b1560;
        case 0x3b1564u: goto label_3b1564;
        case 0x3b1568u: goto label_3b1568;
        case 0x3b156cu: goto label_3b156c;
        case 0x3b1570u: goto label_3b1570;
        case 0x3b1574u: goto label_3b1574;
        case 0x3b1578u: goto label_3b1578;
        case 0x3b157cu: goto label_3b157c;
        case 0x3b1580u: goto label_3b1580;
        case 0x3b1584u: goto label_3b1584;
        case 0x3b1588u: goto label_3b1588;
        case 0x3b158cu: goto label_3b158c;
        case 0x3b1590u: goto label_3b1590;
        case 0x3b1594u: goto label_3b1594;
        case 0x3b1598u: goto label_3b1598;
        case 0x3b159cu: goto label_3b159c;
        case 0x3b15a0u: goto label_3b15a0;
        case 0x3b15a4u: goto label_3b15a4;
        case 0x3b15a8u: goto label_3b15a8;
        case 0x3b15acu: goto label_3b15ac;
        case 0x3b15b0u: goto label_3b15b0;
        case 0x3b15b4u: goto label_3b15b4;
        case 0x3b15b8u: goto label_3b15b8;
        case 0x3b15bcu: goto label_3b15bc;
        case 0x3b15c0u: goto label_3b15c0;
        case 0x3b15c4u: goto label_3b15c4;
        case 0x3b15c8u: goto label_3b15c8;
        case 0x3b15ccu: goto label_3b15cc;
        case 0x3b15d0u: goto label_3b15d0;
        case 0x3b15d4u: goto label_3b15d4;
        case 0x3b15d8u: goto label_3b15d8;
        case 0x3b15dcu: goto label_3b15dc;
        case 0x3b15e0u: goto label_3b15e0;
        case 0x3b15e4u: goto label_3b15e4;
        case 0x3b15e8u: goto label_3b15e8;
        case 0x3b15ecu: goto label_3b15ec;
        case 0x3b15f0u: goto label_3b15f0;
        case 0x3b15f4u: goto label_3b15f4;
        case 0x3b15f8u: goto label_3b15f8;
        case 0x3b15fcu: goto label_3b15fc;
        case 0x3b1600u: goto label_3b1600;
        case 0x3b1604u: goto label_3b1604;
        case 0x3b1608u: goto label_3b1608;
        case 0x3b160cu: goto label_3b160c;
        case 0x3b1610u: goto label_3b1610;
        case 0x3b1614u: goto label_3b1614;
        case 0x3b1618u: goto label_3b1618;
        case 0x3b161cu: goto label_3b161c;
        case 0x3b1620u: goto label_3b1620;
        case 0x3b1624u: goto label_3b1624;
        case 0x3b1628u: goto label_3b1628;
        case 0x3b162cu: goto label_3b162c;
        case 0x3b1630u: goto label_3b1630;
        case 0x3b1634u: goto label_3b1634;
        case 0x3b1638u: goto label_3b1638;
        case 0x3b163cu: goto label_3b163c;
        case 0x3b1640u: goto label_3b1640;
        case 0x3b1644u: goto label_3b1644;
        default: break;
    }

    ctx->pc = 0x3b1408u;

label_3b1408:
    // 0x3b1408: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3b1408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3b140c:
    // 0x3b140c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3b140cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3b1410:
    // 0x3b1410: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x3b1410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_3b1414:
    // 0x3b1414: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b1414u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b1418:
    // 0x3b1418: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3b1418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_3b141c:
    // 0x3b141c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3b141cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_3b1420:
    // 0x3b1420: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x3b1420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_3b1424:
    // 0x3b1424: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3b1424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3b1428:
    // 0x3b1428: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x3b1428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3b142c:
    // 0x3b142c: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x3b142cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3b1430:
    // 0x3b1430: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3b1430u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3b1434:
    // 0x3b1434: 0x24440007  addiu       $a0, $v0, 0x7
    ctx->pc = 0x3b1434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_3b1438:
    // 0x3b1438: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x3b1438u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_3b143c:
    // 0x3b143c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x3b143cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_3b1440:
    // 0x3b1440: 0x28c50004  slti        $a1, $a2, 0x4
    ctx->pc = 0x3b1440u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
label_3b1444:
    // 0x3b1444: 0x10a00026  beqz        $a1, . + 4 + (0x26 << 2)
label_3b1448:
    if (ctx->pc == 0x3B1448u) {
        ctx->pc = 0x3B1448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1444u;
        // 0x3b1448: 0x290c3  sra         $s2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B144Cu;
        goto label_3b144c;
    }
    ctx->pc = 0x3B1444u;
    {
        const bool branch_taken_0x3b1444 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1444u;
        // 0x3b1448: 0x290c3  sra         $s2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1444) {
            ctx->pc = 0x3B14E0u;
            goto label_3b14e0;
        }
    }
    ctx->pc = 0x3B144Cu;
label_3b144c:
    // 0x3b144c: 0x2633001c  addiu       $s3, $s1, 0x1C
    ctx->pc = 0x3b144cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
label_3b1450:
    // 0x3b1450: 0x6a620007  ldl         $v0, 0x7($s3)
    ctx->pc = 0x3b1450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3b1454:
    // 0x3b1454: 0x6e620000  ldr         $v0, 0x0($s3)
    ctx->pc = 0x3b1454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3b1458:
    // 0x3b1458: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x3b1458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b145c:
    // 0x3b145c: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x3b145cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b1460:
    // 0x3b1460: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x3b1460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3b1464:
    // 0x3b1464: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
label_3b1468:
    if (ctx->pc == 0x3B1468u) {
        ctx->pc = 0x3B1468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1464u;
        // 0x3b1468: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B146Cu;
        goto label_3b146c;
    }
    ctx->pc = 0x3B1464u;
    {
        const bool branch_taken_0x3b1464 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1464u;
        // 0x3b1468: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1464) {
            ctx->pc = 0x3B14B0u;
            goto label_3b14b0;
        }
    }
    ctx->pc = 0x3B146Cu;
label_3b146c:
    // 0x3b146c: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x3b146cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3b1470:
    // 0x3b1470: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3b1470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b1474:
    // 0x3b1474: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3b1474u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b1478:
    // 0x3b1478: 0xc0eb07e  jal         func_3AC1F8
label_3b147c:
    if (ctx->pc == 0x3B147Cu) {
        ctx->pc = 0x3B147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1478u;
        // 0x3b147c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1480u;
        goto label_3b1480;
    }
    ctx->pc = 0x3B1478u;
    SET_GPR_U32(ctx, 31, 0x3B1480u);
    ctx->pc = 0x3B147Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1478u;
    // 0x3b147c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC1F8u, 0x3B1478u, 0x3B1480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1480u;
label_3b1480:
    // 0x3b1480: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3b1480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3b1484:
    // 0x3b1484: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b1484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b1488:
    // 0x3b1488: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3b1488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b148c:
    // 0x3b148c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x3b148cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_3b1490:
    // 0x3b1490: 0x40f809  jalr        $v0
label_3b1494:
    if (ctx->pc == 0x3B1494u) {
        ctx->pc = 0x3B1494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1490u;
        // 0x3b1494: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1498u;
        goto label_3b1498;
    }
    ctx->pc = 0x3B1490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B1498u);
        ctx->pc = 0x3B1494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1490u;
        // 0x3b1494: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1490u, 0x3B1498u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B1498u;
label_3b1498:
    // 0x3b1498: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3b1498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3b149c:
    // 0x3b149c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3b149cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b14a0:
    // 0x3b14a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3b14a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b14a4:
    // 0x3b14a4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x3b14a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_3b14a8:
    // 0x3b14a8: 0x40f809  jalr        $v0
label_3b14ac:
    if (ctx->pc == 0x3B14ACu) {
        ctx->pc = 0x3B14ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B14A8u;
        // 0x3b14ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B14B0u;
        goto label_3b14b0;
    }
    ctx->pc = 0x3B14A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B14B0u);
        ctx->pc = 0x3B14ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B14A8u;
        // 0x3b14ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B14A8u, 0x3B14B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B14B0u;
label_3b14b0:
    // 0x3b14b0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3b14b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3b14b4:
    // 0x3b14b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3b14b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b14b8:
    // 0x3b14b8: 0x8e260018  lw          $a2, 0x18($s1)
    ctx->pc = 0x3b14b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_3b14bc:
    // 0x3b14bc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3b14bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b14c0:
    // 0x3b14c0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x3b14c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_3b14c4:
    // 0x3b14c4: 0x40f809  jalr        $v0
label_3b14c8:
    if (ctx->pc == 0x3B14C8u) {
        ctx->pc = 0x3B14C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B14C4u;
        // 0x3b14c8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B14CCu;
        goto label_3b14cc;
    }
    ctx->pc = 0x3B14C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B14CCu);
        ctx->pc = 0x3B14C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B14C4u;
        // 0x3b14c8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B14C4u, 0x3B14CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B14CCu;
label_3b14cc:
    // 0x3b14cc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3b14ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3b14d0:
    // 0x3b14d0: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x3b14d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_3b14d4:
    // 0x3b14d4: 0xae230028  sw          $v1, 0x28($s1)
    ctx->pc = 0x3b14d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
label_3b14d8:
    // 0x3b14d8: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x3b14d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_3b14dc:
    // 0x3b14dc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3b14dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b14e0:
    // 0x3b14e0: 0x246102a  slt         $v0, $s2, $a2
    ctx->pc = 0x3b14e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_3b14e4:
    // 0x3b14e4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3b14e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b14e8:
    // 0x3b14e8: 0xc2900a  movz        $s2, $a2, $v0
    ctx->pc = 0x3b14e8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 6));
label_3b14ec:
    // 0x3b14ec: 0x56430014  bnel        $s2, $v1, . + 4 + (0x14 << 2)
label_3b14f0:
    if (ctx->pc == 0x3B14F0u) {
        ctx->pc = 0x3B14F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B14ECu;
        // 0x3b14f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B14F4u;
        goto label_3b14f4;
    }
    ctx->pc = 0x3B14ECu;
    {
        const bool branch_taken_0x3b14ec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x3b14ec) {
            ctx->pc = 0x3B14F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B14ECu;
            // 0x3b14f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B1540u;
            goto label_3b1540;
        }
    }
    ctx->pc = 0x3B14F4u;
label_3b14f4:
    // 0x3b14f4: 0x8e270028  lw          $a3, 0x28($s1)
    ctx->pc = 0x3b14f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3b14f8:
    // 0x3b14f8: 0x24c6fffd  addiu       $a2, $a2, -0x3
    ctx->pc = 0x3b14f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
label_3b14fc:
    // 0x3b14fc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3b14fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3b1500:
    // 0x3b1500: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x3b1500u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_3b1504:
    // 0x3b1504: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3b1504u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3b1508:
    // 0x3b1508: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3b1508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_3b150c:
    // 0x3b150c: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x3b150cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_3b1510:
    // 0x3b1510: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3b1510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3b1514:
    // 0x3b1514: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x3b1514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3b1518:
    // 0x3b1518: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3b1518u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3b151c:
    // 0x3b151c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3b151cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_3b1520:
    // 0x3b1520: 0x90e50000  lbu         $a1, 0x0($a3)
    ctx->pc = 0x3b1520u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_3b1524:
    // 0x3b1524: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3b1524u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3b1528:
    // 0x3b1528: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3b1528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_3b152c:
    // 0x3b152c: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x3b152cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_3b1530:
    // 0x3b1530: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3b1530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_3b1534:
    // 0x3b1534: 0xae260024  sw          $a2, 0x24($s1)
    ctx->pc = 0x3b1534u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 6));
label_3b1538:
    // 0x3b1538: 0x10000039  b           . + 4 + (0x39 << 2)
label_3b153c:
    if (ctx->pc == 0x3B153Cu) {
        ctx->pc = 0x3B153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1538u;
        // 0x3b153c: 0x451025  or          $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1540u;
        goto label_3b1540;
    }
    ctx->pc = 0x3B1538u;
    {
        const bool branch_taken_0x3b1538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1538u;
        // 0x3b153c: 0x451025  or          $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1538) {
            ctx->pc = 0x3B1620u;
            goto label_3b1620;
        }
    }
    ctx->pc = 0x3B1540u;
label_3b1540:
    // 0x3b1540: 0x56420011  bnel        $s2, $v0, . + 4 + (0x11 << 2)
label_3b1544:
    if (ctx->pc == 0x3B1544u) {
        ctx->pc = 0x3B1544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1540u;
        // 0x3b1544: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1548u;
        goto label_3b1548;
    }
    ctx->pc = 0x3B1540u;
    {
        const bool branch_taken_0x3b1540 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b1540) {
            ctx->pc = 0x3B1544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B1540u;
            // 0x3b1544: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B1588u;
            goto label_3b1588;
        }
    }
    ctx->pc = 0x3B1548u;
label_3b1548:
    // 0x3b1548: 0x8e270028  lw          $a3, 0x28($s1)
    ctx->pc = 0x3b1548u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3b154c:
    // 0x3b154c: 0x24c6fffe  addiu       $a2, $a2, -0x2
    ctx->pc = 0x3b154cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
label_3b1550:
    // 0x3b1550: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3b1550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3b1554:
    // 0x3b1554: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x3b1554u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_3b1558:
    // 0x3b1558: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3b1558u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3b155c:
    // 0x3b155c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3b155cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_3b1560:
    // 0x3b1560: 0x90e50000  lbu         $a1, 0x0($a3)
    ctx->pc = 0x3b1560u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_3b1564:
    // 0x3b1564: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x3b1564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3b1568:
    // 0x3b1568: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3b1568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_3b156c:
    // 0x3b156c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3b156cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_3b1570:
    // 0x3b1570: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3b1570u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3b1574:
    // 0x3b1574: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3b1574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_3b1578:
    // 0x3b1578: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3b1578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_3b157c:
    // 0x3b157c: 0x10000028  b           . + 4 + (0x28 << 2)
label_3b1580:
    if (ctx->pc == 0x3B1580u) {
        ctx->pc = 0x3B1580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B157Cu;
        // 0x3b1580: 0xae260024  sw          $a2, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1584u;
        goto label_3b1584;
    }
    ctx->pc = 0x3B157Cu;
    {
        const bool branch_taken_0x3b157c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B157Cu;
        // 0x3b1580: 0xae260024  sw          $a2, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b157c) {
            ctx->pc = 0x3B1620u;
            goto label_3b1620;
        }
    }
    ctx->pc = 0x3B1584u;
label_3b1584:
    // 0x3b1584: 0x0  nop
    ctx->pc = 0x3b1584u;
    // NOP
label_3b1588:
    // 0x3b1588: 0x5642000d  bnel        $s2, $v0, . + 4 + (0xD << 2)
label_3b158c:
    if (ctx->pc == 0x3B158Cu) {
        ctx->pc = 0x3B158Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1588u;
        // 0x3b158c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1590u;
        goto label_3b1590;
    }
    ctx->pc = 0x3B1588u;
    {
        const bool branch_taken_0x3b1588 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b1588) {
            ctx->pc = 0x3B158Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B1588u;
            // 0x3b158c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B15C0u;
            goto label_3b15c0;
        }
    }
    ctx->pc = 0x3B1590u;
label_3b1590:
    // 0x3b1590: 0x8e270028  lw          $a3, 0x28($s1)
    ctx->pc = 0x3b1590u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3b1594:
    // 0x3b1594: 0x24c5ffff  addiu       $a1, $a2, -0x1
    ctx->pc = 0x3b1594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_3b1598:
    // 0x3b1598: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3b1598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3b159c:
    // 0x3b159c: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x3b159cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_3b15a0:
    // 0x3b15a0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3b15a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3b15a4:
    // 0x3b15a4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x3b15a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3b15a8:
    // 0x3b15a8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3b15a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_3b15ac:
    // 0x3b15ac: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3b15acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_3b15b0:
    // 0x3b15b0: 0xae250024  sw          $a1, 0x24($s1)
    ctx->pc = 0x3b15b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 5));
label_3b15b4:
    // 0x3b15b4: 0x1000001a  b           . + 4 + (0x1A << 2)
label_3b15b8:
    if (ctx->pc == 0x3B15B8u) {
        ctx->pc = 0x3B15B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B15B4u;
        // 0x3b15b8: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B15BCu;
        goto label_3b15bc;
    }
    ctx->pc = 0x3B15B4u;
    {
        const bool branch_taken_0x3b15b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B15B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B15B4u;
        // 0x3b15b8: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b15b4) {
            ctx->pc = 0x3B1620u;
            goto label_3b1620;
        }
    }
    ctx->pc = 0x3B15BCu;
label_3b15bc:
    // 0x3b15bc: 0x0  nop
    ctx->pc = 0x3b15bcu;
    // NOP
label_3b15c0:
    // 0x3b15c0: 0x1642001b  bne         $s2, $v0, . + 4 + (0x1B << 2)
label_3b15c4:
    if (ctx->pc == 0x3B15C4u) {
        ctx->pc = 0x3B15C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B15C0u;
        // 0x3b15c4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B15C8u;
        goto label_3b15c8;
    }
    ctx->pc = 0x3B15C0u;
    {
        const bool branch_taken_0x3b15c0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B15C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B15C0u;
        // 0x3b15c4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b15c0) {
            ctx->pc = 0x3B1630u;
            goto label_3b1630;
        }
    }
    ctx->pc = 0x3B15C8u;
label_3b15c8:
    // 0x3b15c8: 0x8e270028  lw          $a3, 0x28($s1)
    ctx->pc = 0x3b15c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3b15cc:
    // 0x3b15cc: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x3b15ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
label_3b15d0:
    // 0x3b15d0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3b15d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3b15d4:
    // 0x3b15d4: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x3b15d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_3b15d8:
    // 0x3b15d8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3b15d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3b15dc:
    // 0x3b15dc: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3b15dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_3b15e0:
    // 0x3b15e0: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x3b15e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_3b15e4:
    // 0x3b15e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3b15e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3b15e8:
    // 0x3b15e8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x3b15e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3b15ec:
    // 0x3b15ec: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3b15ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3b15f0:
    // 0x3b15f0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3b15f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_3b15f4:
    // 0x3b15f4: 0x90e50000  lbu         $a1, 0x0($a3)
    ctx->pc = 0x3b15f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_3b15f8:
    // 0x3b15f8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3b15f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3b15fc:
    // 0x3b15fc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3b15fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_3b1600:
    // 0x3b1600: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x3b1600u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_3b1604:
    // 0x3b1604: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3b1604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_3b1608:
    // 0x3b1608: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x3b1608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_3b160c:
    // 0x3b160c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3b160cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_3b1610:
    // 0x3b1610: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3b1610u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3b1614:
    // 0x3b1614: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3b1614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_3b1618:
    // 0x3b1618: 0xae260024  sw          $a2, 0x24($s1)
    ctx->pc = 0x3b1618u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 6));
label_3b161c:
    // 0x3b161c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3b161cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_3b1620:
    // 0x3b1620: 0xae270028  sw          $a3, 0x28($s1)
    ctx->pc = 0x3b1620u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 7));
label_3b1624:
    // 0x3b1624: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3b1624u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_3b1628:
    // 0x3b1628: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x3b1628u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_3b162c:
    // 0x3b162c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3b162cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3b1630:
    // 0x3b1630: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x3b1630u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_3b1634:
    // 0x3b1634: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x3b1634u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3b1638:
    // 0x3b1638: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x3b1638u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_3b163c:
    // 0x3b163c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3b163cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3b1640:
    // 0x3b1640: 0x3e00008  jr          $ra
label_3b1644:
    if (ctx->pc == 0x3B1644u) {
        ctx->pc = 0x3B1644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1640u;
        // 0x3b1644: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1648u;
        goto label_fallthrough_0x3b1640;
    }
    ctx->pc = 0x3B1640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1640u;
        // 0x3b1644: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b1640:
    ctx->pc = 0x3B1648u;
}
