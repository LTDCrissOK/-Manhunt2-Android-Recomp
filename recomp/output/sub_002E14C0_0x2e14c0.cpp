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

// Function: sub_002E14C0
// Address: 0x2e14c0 - 0x2e16e0
void sub_002E14C0_0x2e14c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E14C0_0x2e14c0");
#endif

    switch (ctx->pc) {
        case 0x2e14c0u: goto label_2e14c0;
        case 0x2e14c4u: goto label_2e14c4;
        case 0x2e14c8u: goto label_2e14c8;
        case 0x2e14ccu: goto label_2e14cc;
        case 0x2e14d0u: goto label_2e14d0;
        case 0x2e14d4u: goto label_2e14d4;
        case 0x2e14d8u: goto label_2e14d8;
        case 0x2e14dcu: goto label_2e14dc;
        case 0x2e14e0u: goto label_2e14e0;
        case 0x2e14e4u: goto label_2e14e4;
        case 0x2e14e8u: goto label_2e14e8;
        case 0x2e14ecu: goto label_2e14ec;
        case 0x2e14f0u: goto label_2e14f0;
        case 0x2e14f4u: goto label_2e14f4;
        case 0x2e14f8u: goto label_2e14f8;
        case 0x2e14fcu: goto label_2e14fc;
        case 0x2e1500u: goto label_2e1500;
        case 0x2e1504u: goto label_2e1504;
        case 0x2e1508u: goto label_2e1508;
        case 0x2e150cu: goto label_2e150c;
        case 0x2e1510u: goto label_2e1510;
        case 0x2e1514u: goto label_2e1514;
        case 0x2e1518u: goto label_2e1518;
        case 0x2e151cu: goto label_2e151c;
        case 0x2e1520u: goto label_2e1520;
        case 0x2e1524u: goto label_2e1524;
        case 0x2e1528u: goto label_2e1528;
        case 0x2e152cu: goto label_2e152c;
        case 0x2e1530u: goto label_2e1530;
        case 0x2e1534u: goto label_2e1534;
        case 0x2e1538u: goto label_2e1538;
        case 0x2e153cu: goto label_2e153c;
        case 0x2e1540u: goto label_2e1540;
        case 0x2e1544u: goto label_2e1544;
        case 0x2e1548u: goto label_2e1548;
        case 0x2e154cu: goto label_2e154c;
        case 0x2e1550u: goto label_2e1550;
        case 0x2e1554u: goto label_2e1554;
        case 0x2e1558u: goto label_2e1558;
        case 0x2e155cu: goto label_2e155c;
        case 0x2e1560u: goto label_2e1560;
        case 0x2e1564u: goto label_2e1564;
        case 0x2e1568u: goto label_2e1568;
        case 0x2e156cu: goto label_2e156c;
        case 0x2e1570u: goto label_2e1570;
        case 0x2e1574u: goto label_2e1574;
        case 0x2e1578u: goto label_2e1578;
        case 0x2e157cu: goto label_2e157c;
        case 0x2e1580u: goto label_2e1580;
        case 0x2e1584u: goto label_2e1584;
        case 0x2e1588u: goto label_2e1588;
        case 0x2e158cu: goto label_2e158c;
        case 0x2e1590u: goto label_2e1590;
        case 0x2e1594u: goto label_2e1594;
        case 0x2e1598u: goto label_2e1598;
        case 0x2e159cu: goto label_2e159c;
        case 0x2e15a0u: goto label_2e15a0;
        case 0x2e15a4u: goto label_2e15a4;
        case 0x2e15a8u: goto label_2e15a8;
        case 0x2e15acu: goto label_2e15ac;
        case 0x2e15b0u: goto label_2e15b0;
        case 0x2e15b4u: goto label_2e15b4;
        case 0x2e15b8u: goto label_2e15b8;
        case 0x2e15bcu: goto label_2e15bc;
        case 0x2e15c0u: goto label_2e15c0;
        case 0x2e15c4u: goto label_2e15c4;
        case 0x2e15c8u: goto label_2e15c8;
        case 0x2e15ccu: goto label_2e15cc;
        case 0x2e15d0u: goto label_2e15d0;
        case 0x2e15d4u: goto label_2e15d4;
        case 0x2e15d8u: goto label_2e15d8;
        case 0x2e15dcu: goto label_2e15dc;
        case 0x2e15e0u: goto label_2e15e0;
        case 0x2e15e4u: goto label_2e15e4;
        case 0x2e15e8u: goto label_2e15e8;
        case 0x2e15ecu: goto label_2e15ec;
        case 0x2e15f0u: goto label_2e15f0;
        case 0x2e15f4u: goto label_2e15f4;
        case 0x2e15f8u: goto label_2e15f8;
        case 0x2e15fcu: goto label_2e15fc;
        case 0x2e1600u: goto label_2e1600;
        case 0x2e1604u: goto label_2e1604;
        case 0x2e1608u: goto label_2e1608;
        case 0x2e160cu: goto label_2e160c;
        case 0x2e1610u: goto label_2e1610;
        case 0x2e1614u: goto label_2e1614;
        case 0x2e1618u: goto label_2e1618;
        case 0x2e161cu: goto label_2e161c;
        case 0x2e1620u: goto label_2e1620;
        case 0x2e1624u: goto label_2e1624;
        case 0x2e1628u: goto label_2e1628;
        case 0x2e162cu: goto label_2e162c;
        case 0x2e1630u: goto label_2e1630;
        case 0x2e1634u: goto label_2e1634;
        case 0x2e1638u: goto label_2e1638;
        case 0x2e163cu: goto label_2e163c;
        case 0x2e1640u: goto label_2e1640;
        case 0x2e1644u: goto label_2e1644;
        case 0x2e1648u: goto label_2e1648;
        case 0x2e164cu: goto label_2e164c;
        case 0x2e1650u: goto label_2e1650;
        case 0x2e1654u: goto label_2e1654;
        case 0x2e1658u: goto label_2e1658;
        case 0x2e165cu: goto label_2e165c;
        case 0x2e1660u: goto label_2e1660;
        case 0x2e1664u: goto label_2e1664;
        case 0x2e1668u: goto label_2e1668;
        case 0x2e166cu: goto label_2e166c;
        case 0x2e1670u: goto label_2e1670;
        case 0x2e1674u: goto label_2e1674;
        case 0x2e1678u: goto label_2e1678;
        case 0x2e167cu: goto label_2e167c;
        case 0x2e1680u: goto label_2e1680;
        case 0x2e1684u: goto label_2e1684;
        case 0x2e1688u: goto label_2e1688;
        case 0x2e168cu: goto label_2e168c;
        case 0x2e1690u: goto label_2e1690;
        case 0x2e1694u: goto label_2e1694;
        case 0x2e1698u: goto label_2e1698;
        case 0x2e169cu: goto label_2e169c;
        case 0x2e16a0u: goto label_2e16a0;
        case 0x2e16a4u: goto label_2e16a4;
        case 0x2e16a8u: goto label_2e16a8;
        case 0x2e16acu: goto label_2e16ac;
        case 0x2e16b0u: goto label_2e16b0;
        case 0x2e16b4u: goto label_2e16b4;
        case 0x2e16b8u: goto label_2e16b8;
        case 0x2e16bcu: goto label_2e16bc;
        case 0x2e16c0u: goto label_2e16c0;
        case 0x2e16c4u: goto label_2e16c4;
        case 0x2e16c8u: goto label_2e16c8;
        case 0x2e16ccu: goto label_2e16cc;
        case 0x2e16d0u: goto label_2e16d0;
        case 0x2e16d4u: goto label_2e16d4;
        case 0x2e16d8u: goto label_2e16d8;
        case 0x2e16dcu: goto label_2e16dc;
        default: break;
    }

    ctx->pc = 0x2e14c0u;

label_2e14c0:
    // 0x2e14c0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2e14c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2e14c4:
    // 0x2e14c4: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x2e14c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
label_2e14c8:
    // 0x2e14c8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2e14c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_2e14cc:
    // 0x2e14cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e14ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e14d0:
    // 0x2e14d0: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x2e14d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
label_2e14d4:
    // 0x2e14d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e14d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e14d8:
    // 0x2e14d8: 0xc0f6a96  jal         func_3DAA58
label_2e14dc:
    if (ctx->pc == 0x2E14DCu) {
        ctx->pc = 0x2E14DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E14D8u;
        // 0x2e14dc: 0x8e110020  lw          $s1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E14E0u;
        goto label_2e14e0;
    }
    ctx->pc = 0x2E14D8u;
    SET_GPR_U32(ctx, 31, 0x2E14E0u);
    ctx->pc = 0x2E14DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E14D8u;
    // 0x2e14dc: 0x8e110020  lw          $s1, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E14D8u, 0x2E14E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E14E0u;
label_2e14e0:
    // 0x2e14e0: 0xc0f6a96  jal         func_3DAA58
label_2e14e4:
    if (ctx->pc == 0x2E14E4u) {
        ctx->pc = 0x2E14E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E14E0u;
        // 0x2e14e4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E14E8u;
        goto label_2e14e8;
    }
    ctx->pc = 0x2E14E0u;
    SET_GPR_U32(ctx, 31, 0x2E14E8u);
    ctx->pc = 0x2E14E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E14E0u;
    // 0x2e14e4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E14E0u, 0x2E14E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E14E8u;
label_2e14e8:
    // 0x2e14e8: 0xc07a8b2  jal         func_1EA2C8
label_2e14ec:
    if (ctx->pc == 0x2E14ECu) {
        ctx->pc = 0x2E14ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E14E8u;
        // 0x2e14ec: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E14F0u;
        goto label_2e14f0;
    }
    ctx->pc = 0x2E14E8u;
    SET_GPR_U32(ctx, 31, 0x2E14F0u);
    ctx->pc = 0x2E14ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E14E8u;
    // 0x2e14ec: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x2E14E8u, 0x2E14F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E14F0u;
label_2e14f0:
    // 0x2e14f0: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x2e14f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_2e14f4:
    // 0x2e14f4: 0x10600075  beqz        $v1, . + 4 + (0x75 << 2)
label_2e14f8:
    if (ctx->pc == 0x2E14F8u) {
        ctx->pc = 0x2E14F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E14F4u;
        // 0x2e14f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E14FCu;
        goto label_2e14fc;
    }
    ctx->pc = 0x2E14F4u;
    {
        const bool branch_taken_0x2e14f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E14F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E14F4u;
        // 0x2e14f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e14f4) {
            ctx->pc = 0x2E16CCu;
            goto label_2e16cc;
        }
    }
    ctx->pc = 0x2E14FCu;
label_2e14fc:
    // 0x2e14fc: 0xc083ba8  jal         func_20EEA0
label_2e1500:
    if (ctx->pc == 0x2E1500u) {
        ctx->pc = 0x2E1500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E14FCu;
        // 0x2e1500: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1504u;
        goto label_2e1504;
    }
    ctx->pc = 0x2E14FCu;
    SET_GPR_U32(ctx, 31, 0x2E1504u);
    ctx->pc = 0x2E1500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E14FCu;
    // 0x2e1500: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EEA0u, 0x2E14FCu, 0x2E1504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1504u;
label_2e1504:
    // 0x2e1504: 0x3c030006  lui         $v1, 0x6
    ctx->pc = 0x2e1504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)6 << 16));
label_2e1508:
    // 0x2e1508: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2e1508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_2e150c:
    // 0x2e150c: 0x1443006f  bne         $v0, $v1, . + 4 + (0x6F << 2)
label_2e1510:
    if (ctx->pc == 0x2E1510u) {
        ctx->pc = 0x2E1510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E150Cu;
        // 0x2e1510: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1514u;
        goto label_2e1514;
    }
    ctx->pc = 0x2E150Cu;
    {
        const bool branch_taken_0x2e150c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E1510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E150Cu;
        // 0x2e1510: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e150c) {
            ctx->pc = 0x2E16CCu;
            goto label_2e16cc;
        }
    }
    ctx->pc = 0x2E1514u;
label_2e1514:
    // 0x2e1514: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e1514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e1518:
    // 0x2e1518: 0xc60000f4  lwc1        $f0, 0xF4($s0)
    ctx->pc = 0x2e1518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e151c:
    // 0x2e151c: 0xc44102c0  lwc1        $f1, 0x2C0($v0)
    ctx->pc = 0x2e151cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e1520:
    // 0x2e1520: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e1520u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e1524:
    // 0x2e1524: 0x0  nop
    ctx->pc = 0x2e1524u;
    // NOP
label_2e1528:
    // 0x2e1528: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2e152c:
    if (ctx->pc == 0x2E152Cu) {
        ctx->pc = 0x2E152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1528u;
        // 0x2e152c: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1530u;
        goto label_2e1530;
    }
    ctx->pc = 0x2E1528u;
    {
        const bool branch_taken_0x2e1528 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1528u;
        // 0x2e152c: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1528) {
            ctx->pc = 0x2E1544u;
            goto label_2e1544;
        }
    }
    ctx->pc = 0x2E1530u;
label_2e1530:
    // 0x2e1530: 0xc60000f8  lwc1        $f0, 0xF8($s0)
    ctx->pc = 0x2e1530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e1534:
    // 0x2e1534: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e1534u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e1538:
    // 0x2e1538: 0x0  nop
    ctx->pc = 0x2e1538u;
    // NOP
label_2e153c:
    // 0x2e153c: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_2e1540:
    if (ctx->pc == 0x2E1540u) {
        ctx->pc = 0x2E1544u;
        goto label_2e1544;
    }
    ctx->pc = 0x2E153Cu;
    {
        const bool branch_taken_0x2e153c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e153c) {
            ctx->pc = 0x2E1570u;
            goto label_2e1570;
        }
    }
    ctx->pc = 0x2E1544u;
label_2e1544:
    // 0x2e1544: 0xc44002c4  lwc1        $f0, 0x2C4($v0)
    ctx->pc = 0x2e1544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e1548:
    // 0x2e1548: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2e1548u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_2e154c:
    // 0x2e154c: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x2e154cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e1550:
    // 0x2e1550: 0x0  nop
    ctx->pc = 0x2e1550u;
    // NOP
label_2e1554:
    // 0x2e1554: 0x4502002b  bc1fl       . + 4 + (0x2B << 2)
label_2e1558:
    if (ctx->pc == 0x2E1558u) {
        ctx->pc = 0x2E1558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1554u;
        // 0x2e1558: 0x8e22006c  lw          $v0, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E155Cu;
        goto label_2e155c;
    }
    ctx->pc = 0x2E1554u;
    {
        const bool branch_taken_0x2e1554 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e1554) {
            ctx->pc = 0x2E1558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1554u;
            // 0x2e1558: 0x8e22006c  lw          $v0, 0x6C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1604u;
            goto label_2e1604;
        }
    }
    ctx->pc = 0x2E155Cu;
label_2e155c:
    // 0x2e155c: 0xc60000f8  lwc1        $f0, 0xF8($s0)
    ctx->pc = 0x2e155cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e1560:
    // 0x2e1560: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e1560u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e1564:
    // 0x2e1564: 0x0  nop
    ctx->pc = 0x2e1564u;
    // NOP
label_2e1568:
    // 0x2e1568: 0x45020026  bc1fl       . + 4 + (0x26 << 2)
label_2e156c:
    if (ctx->pc == 0x2E156Cu) {
        ctx->pc = 0x2E156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1568u;
        // 0x2e156c: 0x8e22006c  lw          $v0, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1570u;
        goto label_2e1570;
    }
    ctx->pc = 0x2E1568u;
    {
        const bool branch_taken_0x2e1568 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e1568) {
            ctx->pc = 0x2E156Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1568u;
            // 0x2e156c: 0x8e22006c  lw          $v0, 0x6C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1604u;
            goto label_2e1604;
        }
    }
    ctx->pc = 0x2E1570u;
label_2e1570:
    // 0x2e1570: 0xc0998f6  jal         func_2663D8
label_2e1574:
    if (ctx->pc == 0x2E1574u) {
        ctx->pc = 0x2E1574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1570u;
        // 0x2e1574: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1578u;
        goto label_2e1578;
    }
    ctx->pc = 0x2E1570u;
    SET_GPR_U32(ctx, 31, 0x2E1578u);
    ctx->pc = 0x2E1574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1570u;
    // 0x2e1574: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2663D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2663D8u, 0x2E1570u, 0x2E1578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1578u;
label_2e1578:
    // 0x2e1578: 0x26030090  addiu       $v1, $s0, 0x90
    ctx->pc = 0x2e1578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_2e157c:
    // 0x2e157c: 0xc6030090  lwc1        $f3, 0x90($s0)
    ctx->pc = 0x2e157cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2e1580:
    // 0x2e1580: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x2e1580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2e1584:
    // 0x2e1584: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2e1584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2e1588:
    // 0x2e1588: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2e1588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e158c:
    // 0x2e158c: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x2e158cu;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
label_2e1590:
    // 0x2e1590: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x2e1590u;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
label_2e1594:
    // 0x2e1594: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x2e1594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_2e1598:
    // 0x2e1598: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2e1598u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2e159c:
    // 0x2e159c: 0xe7a30090  swc1        $f3, 0x90($sp)
    ctx->pc = 0x2e159cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_2e15a0:
    // 0x2e15a0: 0xe7a40094  swc1        $f4, 0x94($sp)
    ctx->pc = 0x2e15a0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_2e15a4:
    // 0x2e15a4: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x2e15a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_2e15a8:
    // 0x2e15a8: 0xc7a2009c  lwc1        $f2, 0x9C($sp)
    ctx->pc = 0x2e15a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e15ac:
    // 0x2e15ac: 0xc6200068  lwc1        $f0, 0x68($s1)
    ctx->pc = 0x2e15acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e15b0:
    // 0x2e15b0: 0xe7a2008c  swc1        $f2, 0x8C($sp)
    ctx->pc = 0x2e15b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_2e15b4:
    // 0x2e15b4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2e15b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2e15b8:
    // 0x2e15b8: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x2e15b8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_2e15bc:
    // 0x2e15bc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2e15bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_2e15c0:
    // 0x2e15c0: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x2e15c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_2e15c4:
    // 0x2e15c4: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x2e15c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_2e15c8:
    // 0x2e15c8: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2e15c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_2e15cc:
    // 0x2e15cc: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2e15ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2e15d0:
    // 0x2e15d0: 0xfa010090  sqc2        $vf1, 0x90($s0)
    ctx->pc = 0x2e15d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), _mm_castps_si128(ctx->vu0_vf[1]));
label_2e15d4:
    // 0x2e15d4: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x2e15d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_2e15d8:
    // 0x2e15d8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2e15d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2e15dc:
    // 0x2e15dc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2e15dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2e15e0:
    // 0x2e15e0: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x2e15e0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_2e15e4:
    // 0x2e15e4: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x2e15e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_2e15e8:
    // 0x2e15e8: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x2e15e8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_2e15ec:
    // 0x2e15ec: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2e15ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2e15f0:
    // 0x2e15f0: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2e15f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2e15f4:
    // 0x2e15f4: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x2e15f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2e15f8:
    // 0x2e15f8: 0xfa0500a0  sqc2        $vf5, 0xA0($s0)
    ctx->pc = 0x2e15f8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), _mm_castps_si128(ctx->vu0_vf[5]));
label_2e15fc:
    // 0x2e15fc: 0x10000033  b           . + 4 + (0x33 << 2)
label_2e1600:
    if (ctx->pc == 0x2E1600u) {
        ctx->pc = 0x2E1600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E15FCu;
        // 0x2e1600: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1604u;
        goto label_2e1604;
    }
    ctx->pc = 0x2E15FCu;
    {
        const bool branch_taken_0x2e15fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E15FCu;
        // 0x2e1600: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e15fc) {
            ctx->pc = 0x2E16CCu;
            goto label_2e16cc;
        }
    }
    ctx->pc = 0x2E1604u;
label_2e1604:
    // 0x2e1604: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
label_2e1608:
    if (ctx->pc == 0x2E1608u) {
        ctx->pc = 0x2E1608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1604u;
        // 0x2e1608: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E160Cu;
        goto label_2e160c;
    }
    ctx->pc = 0x2E1604u;
    {
        const bool branch_taken_0x2e1604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1604u;
        // 0x2e1608: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1604) {
            ctx->pc = 0x2E16CCu;
            goto label_2e16cc;
        }
    }
    ctx->pc = 0x2E160Cu;
label_2e160c:
    // 0x2e160c: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x2e160cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2e1610:
    // 0x2e1610: 0x5440002e  bnel        $v0, $zero, . + 4 + (0x2E << 2)
label_2e1614:
    if (ctx->pc == 0x2E1614u) {
        ctx->pc = 0x2E1614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1610u;
        // 0x2e1614: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1618u;
        goto label_2e1618;
    }
    ctx->pc = 0x2E1610u;
    {
        const bool branch_taken_0x2e1610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1610) {
            ctx->pc = 0x2E1614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1610u;
            // 0x2e1614: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E16CCu;
            goto label_2e16cc;
        }
    }
    ctx->pc = 0x2E1618u;
label_2e1618:
    // 0x2e1618: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e1618u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e161c:
    // 0x2e161c: 0x0  nop
    ctx->pc = 0x2e161cu;
    // NOP
label_2e1620:
    // 0x2e1620: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x2e1620u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e1624:
    // 0x2e1624: 0x0  nop
    ctx->pc = 0x2e1624u;
    // NOP
label_2e1628:
    // 0x2e1628: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2e162c:
    if (ctx->pc == 0x2E162Cu) {
        ctx->pc = 0x2E1630u;
        goto label_2e1630;
    }
    ctx->pc = 0x2E1628u;
    {
        const bool branch_taken_0x2e1628 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e1628) {
            ctx->pc = 0x2E1644u;
            goto label_2e1644;
        }
    }
    ctx->pc = 0x2E1630u;
label_2e1630:
    // 0x2e1630: 0xc60000f8  lwc1        $f0, 0xF8($s0)
    ctx->pc = 0x2e1630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e1634:
    // 0x2e1634: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e1634u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e1638:
    // 0x2e1638: 0x0  nop
    ctx->pc = 0x2e1638u;
    // NOP
label_2e163c:
    // 0x2e163c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_2e1640:
    if (ctx->pc == 0x2E1640u) {
        ctx->pc = 0x2E1644u;
        goto label_2e1644;
    }
    ctx->pc = 0x2E163Cu;
    {
        const bool branch_taken_0x2e163c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e163c) {
            ctx->pc = 0x2E1668u;
            goto label_2e1668;
        }
    }
    ctx->pc = 0x2E1644u;
label_2e1644:
    // 0x2e1644: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x2e1644u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e1648:
    // 0x2e1648: 0x0  nop
    ctx->pc = 0x2e1648u;
    // NOP
label_2e164c:
    // 0x2e164c: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
label_2e1650:
    if (ctx->pc == 0x2E1650u) {
        ctx->pc = 0x2E1650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E164Cu;
        // 0x2e1650: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1654u;
        goto label_2e1654;
    }
    ctx->pc = 0x2E164Cu;
    {
        const bool branch_taken_0x2e164c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E1650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E164Cu;
        // 0x2e1650: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e164c) {
            ctx->pc = 0x2E16CCu;
            goto label_2e16cc;
        }
    }
    ctx->pc = 0x2E1654u;
label_2e1654:
    // 0x2e1654: 0xc60000f8  lwc1        $f0, 0xF8($s0)
    ctx->pc = 0x2e1654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e1658:
    // 0x2e1658: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e1658u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e165c:
    // 0x2e165c: 0x0  nop
    ctx->pc = 0x2e165cu;
    // NOP
label_2e1660:
    // 0x2e1660: 0x4502001b  bc1fl       . + 4 + (0x1B << 2)
label_2e1664:
    if (ctx->pc == 0x2E1664u) {
        ctx->pc = 0x2E1664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1660u;
        // 0x2e1664: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1668u;
        goto label_2e1668;
    }
    ctx->pc = 0x2E1660u;
    {
        const bool branch_taken_0x2e1660 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e1660) {
            ctx->pc = 0x2E1664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1660u;
            // 0x2e1664: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E16D0u;
            goto label_2e16d0;
        }
    }
    ctx->pc = 0x2E1668u;
label_2e1668:
    // 0x2e1668: 0xc0998c2  jal         func_266308
label_2e166c:
    if (ctx->pc == 0x2E166Cu) {
        ctx->pc = 0x2E166Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1668u;
        // 0x2e166c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1670u;
        goto label_2e1670;
    }
    ctx->pc = 0x2E1668u;
    SET_GPR_U32(ctx, 31, 0x2E1670u);
    ctx->pc = 0x2E166Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1668u;
    // 0x2e166c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266308u, 0x2E1668u, 0x2E1670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1670u;
label_2e1670:
    // 0x2e1670: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x2e1670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_2e1674:
    // 0x2e1674: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x2e1674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
label_2e1678:
    // 0x2e1678: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2e1678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e167c:
    // 0x2e167c: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x2e167cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_2e1680:
    // 0x2e1680: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2e1680u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2e1684:
    // 0x2e1684: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2e1684u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_2e1688:
    // 0x2e1688: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2e1688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2e168c:
    // 0x2e168c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2e168cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2e1690:
    // 0x2e1690: 0xf8a10010  sqc2        $vf1, 0x10($a1)
    ctx->pc = 0x2e1690u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2e1694:
    // 0x2e1694: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x2e1694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_2e1698:
    // 0x2e1698: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2e1698u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2e169c:
    // 0x2e169c: 0xf8a10020  sqc2        $vf1, 0x20($a1)
    ctx->pc = 0x2e169cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_2e16a0:
    // 0x2e16a0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2e16a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_2e16a4:
    // 0x2e16a4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2e16a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2e16a8:
    // 0x2e16a8: 0xf8a10030  sqc2        $vf1, 0x30($a1)
    ctx->pc = 0x2e16a8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_2e16ac:
    // 0x2e16ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e16acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e16b0:
    // 0x2e16b0: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x2e16b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_2e16b4:
    // 0x2e16b4: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2e16b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
label_2e16b8:
    // 0x2e16b8: 0xe60000f8  swc1        $f0, 0xF8($s0)
    ctx->pc = 0x2e16b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
label_2e16bc:
    // 0x2e16bc: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x2e16bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2e16c0:
    // 0x2e16c0: 0x40f809  jalr        $v0
label_2e16c4:
    if (ctx->pc == 0x2E16C4u) {
        ctx->pc = 0x2E16C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E16C0u;
        // 0x2e16c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E16C8u;
        goto label_2e16c8;
    }
    ctx->pc = 0x2E16C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E16C8u);
        ctx->pc = 0x2E16C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E16C0u;
        // 0x2e16c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E16C0u, 0x2E16C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E16C8u;
label_2e16c8:
    // 0x2e16c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e16c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e16cc:
    // 0x2e16cc: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x2e16ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2e16d0:
    // 0x2e16d0: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x2e16d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_2e16d4:
    // 0x2e16d4: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2e16d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2e16d8:
    // 0x2e16d8: 0x3e00008  jr          $ra
label_2e16dc:
    if (ctx->pc == 0x2E16DCu) {
        ctx->pc = 0x2E16DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E16D8u;
        // 0x2e16dc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E16E0u;
        goto label_fallthrough_0x2e16d8;
    }
    ctx->pc = 0x2E16D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E16DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E16D8u;
        // 0x2e16dc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E16D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e16d8:
    ctx->pc = 0x2E16E0u;
}
