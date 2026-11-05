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

// Function: sub_00180260
// Address: 0x180260 - 0x180478
void sub_00180260_0x180260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180260_0x180260");
#endif

    switch (ctx->pc) {
        case 0x180290u: goto label_180290;
        case 0x1802b0u: goto label_1802b0;
        case 0x180338u: goto label_180338;
        case 0x1803c0u: goto label_1803c0;
        default: break;
    }

    ctx->pc = 0x180260u;

    // 0x180260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x180260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x180264: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x180264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x180268: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x180268u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x18026c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18026cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x180270: 0x8e22a9d4  lw          $v0, -0x562C($s1)
    ctx->pc = 0x180270u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FA9D4u));
    // 0x180274: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x180274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180278: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x180278u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x18027c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18027Cu;
    {
        const bool branch_taken_0x18027c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18027Cu;
        // 0x180280: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18027c) {
            ctx->pc = 0x180298u;
            goto label_180298;
        }
    }
    ctx->pc = 0x180284u;
    // 0x180284: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x180284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x180288: 0xc06011e  jal         func_180478
    ctx->pc = 0x180288u;
    SET_GPR_U32(ctx, 31, 0x180290u);
    ctx->pc = 0x18028Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180288u;
    // 0x18028c: 0xac4007c8  sw          $zero, 0x7C8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 1992), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180478u, 0x180288u, 0x180290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180290u;
label_180290:
    // 0x180290: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x180290u;
    {
        const bool branch_taken_0x180290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180290u;
        // 0x180294: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180290) {
            ctx->pc = 0x180468u;
            goto label_180468;
        }
    }
    ctx->pc = 0x180298u;
label_180298:
    // 0x180298: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x180298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x18029c: 0x8c4307c8  lw          $v1, 0x7C8($v0)
    ctx->pc = 0x18029cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F07C8u));
    // 0x1802a0: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1802A0u;
    {
        const bool branch_taken_0x1802a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1802a0) {
            ctx->pc = 0x1802A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1802A0u;
            // 0x1802a4: 0x92020410  lbu         $v0, 0x410($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1040)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1802B4u;
            goto label_1802b4;
        }
    }
    ctx->pc = 0x1802A8u;
    // 0x1802a8: 0xc06011e  jal         func_180478
    ctx->pc = 0x1802A8u;
    SET_GPR_U32(ctx, 31, 0x1802B0u);
    ctx->pc = 0x1802ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1802A8u;
    // 0x1802ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180478u, 0x1802A8u, 0x1802B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1802B0u;
label_1802b0:
    // 0x1802b0: 0x92020410  lbu         $v0, 0x410($s0)
    ctx->pc = 0x1802b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1040)));
label_1802b4:
    // 0x1802b4: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x1802b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1802b8: 0x5040006b  beql        $v0, $zero, . + 4 + (0x6B << 2)
    ctx->pc = 0x1802B8u;
    {
        const bool branch_taken_0x1802b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1802b8) {
            ctx->pc = 0x1802BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1802B8u;
            // 0x1802bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180468u;
            goto label_180468;
        }
    }
    ctx->pc = 0x1802C0u;
    // 0x1802c0: 0x92020413  lbu         $v0, 0x413($s0)
    ctx->pc = 0x1802c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1043)));
    // 0x1802c4: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x1802c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1802c8: 0x50400067  beql        $v0, $zero, . + 4 + (0x67 << 2)
    ctx->pc = 0x1802C8u;
    {
        const bool branch_taken_0x1802c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1802c8) {
            ctx->pc = 0x1802CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1802C8u;
            // 0x1802cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180468u;
            goto label_180468;
        }
    }
    ctx->pc = 0x1802D0u;
    // 0x1802d0: 0x92020412  lbu         $v0, 0x412($s0)
    ctx->pc = 0x1802d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1042)));
    // 0x1802d4: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x1802d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1802d8: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x1802D8u;
    {
        const bool branch_taken_0x1802d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1802DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1802D8u;
        // 0x1802dc: 0x3c06003f  lui         $a2, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1802d8) {
            ctx->pc = 0x180464u;
            goto label_180464;
        }
    }
    ctx->pc = 0x1802E0u;
    // 0x1802e0: 0x8e25a9d4  lw          $a1, -0x562C($s1)
    ctx->pc = 0x1802e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945236)));
    // 0x1802e4: 0x8cc207d0  lw          $v0, 0x7D0($a2)
    ctx->pc = 0x1802e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2000)));
    // 0x1802e8: 0x3c0f003f  lui         $t7, 0x3F
    ctx->pc = 0x1802e8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
    // 0x1802ec: 0x3c0e0048  lui         $t6, 0x48
    ctx->pc = 0x1802ecu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)72 << 16));
    // 0x1802f0: 0x1045003a  beq         $v0, $a1, . + 4 + (0x3A << 2)
    ctx->pc = 0x1802F0u;
    {
        const bool branch_taken_0x1802f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1802F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1802F0u;
        // 0x1802f4: 0x3c0d003f  lui         $t5, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1802f0) {
            ctx->pc = 0x1803DCu;
            goto label_1803dc;
        }
    }
    ctx->pc = 0x1802F8u;
    // 0x1802f8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1802f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1802fc: 0x91e307cd  lbu         $v1, 0x7CD($t7)
    ctx->pc = 0x1802fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 1997)));
    // 0x180300: 0x904407cc  lbu         $a0, 0x7CC($v0)
    ctx->pc = 0x180300u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x3F07CCu));
    // 0x180304: 0x25cc2b28  addiu       $t4, $t6, 0x2B28
    ctx->pc = 0x180304u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), 11048));
    // 0x180308: 0xa04307cc  sb          $v1, 0x7CC($v0)
    ctx->pc = 0x180308u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3F07CCu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F07CCu, _value); } while (0);
    // 0x18030c: 0x3c0a003f  lui         $t2, 0x3F
    ctx->pc = 0x18030cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)63 << 16));
    // 0x180310: 0xacc507d0  sw          $a1, 0x7D0($a2)
    ctx->pc = 0x180310u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2000), GPR_U32(ctx, 5));
    // 0x180314: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x180314u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
    // 0x180318: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x180318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18031c: 0xa1e407cd  sb          $a0, 0x7CD($t7)
    ctx->pc = 0x18031cu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 1997), (uint8_t)GPR_U32(ctx, 4));
    // 0x180320: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x180320u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x180324: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x180324u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180328: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x180328u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18032c: 0xcc5821  addu        $t3, $a2, $t4
    ctx->pc = 0x18032cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x180330: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x180330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180334: 0x0  nop
    ctx->pc = 0x180334u;
    // NOP
label_180338:
    // 0x180338: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x180338u;
    {
        const bool branch_taken_0x180338 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x18033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180338u;
        // 0x18033c: 0xa61021  addu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180338) {
            ctx->pc = 0x180350u;
            goto label_180350;
        }
    }
    ctx->pc = 0x180340u;
    // 0x180340: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x180340u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x180344: 0xa0e207d5  sb          $v0, 0x7D5($a3)
    ctx->pc = 0x180344u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2005), (uint8_t)GPR_U32(ctx, 2));
    // 0x180348: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x180348u;
    {
        const bool branch_taken_0x180348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180348u;
        // 0x18034c: 0xa10207d4  sb          $v0, 0x7D4($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 2004), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180348) {
            ctx->pc = 0x180378u;
            goto label_180378;
        }
    }
    ctx->pc = 0x180350u;
label_180350:
    // 0x180350: 0x910307d4  lbu         $v1, 0x7D4($t0)
    ctx->pc = 0x180350u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2004)));
    // 0x180354: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x180354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x180358: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x180358u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18035c: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x18035cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x180360: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x180360u;
    {
        const bool branch_taken_0x180360 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x180360) {
            ctx->pc = 0x180364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180360u;
            // 0x180364: 0xa14407d4  sb          $a0, 0x7D4($t2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 10), 2004), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180368u;
            goto label_180368;
        }
    }
    ctx->pc = 0x180368u;
label_180368:
    // 0x180368: 0x90e207d5  lbu         $v0, 0x7D5($a3)
    ctx->pc = 0x180368u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2005)));
    // 0x18036c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x18036cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x180370: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x180370u;
    {
        const bool branch_taken_0x180370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x180370) {
            ctx->pc = 0x180374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180370u;
            // 0x180374: 0xa12407d5  sb          $a0, 0x7D5($t1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 9), 2005), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180378u;
            goto label_180378;
        }
    }
    ctx->pc = 0x180378u;
label_180378:
    // 0x180378: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x180378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x18037c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x18037cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x180380: 0x2ca30004  sltiu       $v1, $a1, 0x4
    ctx->pc = 0x180380u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x180384: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x180384u;
    {
        const bool branch_taken_0x180384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x180388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180384u;
        // 0x180388: 0x912207d5  lbu         $v0, 0x7D5($t1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2005)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180384) {
            ctx->pc = 0x180338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_180338;
        }
    }
    ctx->pc = 0x18038Cu;
    // 0x18038c: 0x914307d4  lbu         $v1, 0x7D4($t2)
    ctx->pc = 0x18038cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 2004)));
    // 0x180390: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x180390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x180394: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x180394u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x180398: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x180398u;
    {
        const bool branch_taken_0x180398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18039Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180398u;
        // 0x18039c: 0xada007d8  sw          $zero, 0x7D8($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 2008), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180398) {
            ctx->pc = 0x1803A8u;
            goto label_1803a8;
        }
    }
    ctx->pc = 0x1803A0u;
    // 0x1803a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1803a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1803a4: 0xada207d8  sw          $v0, 0x7D8($t5)
    ctx->pc = 0x1803a4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 2008), GPR_U32(ctx, 2));
label_1803a8:
    // 0x1803a8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1803a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1803ac: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1803acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1803b0: 0x904407cd  lbu         $a0, 0x7CD($v0)
    ctx->pc = 0x1803b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x3F07CDu));
    // 0x1803b4: 0x24662b28  addiu       $a2, $v1, 0x2B28
    ctx->pc = 0x1803b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 11048));
    // 0x1803b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1803b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1803bc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1803bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1803c0:
    // 0x1803c0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1803c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1803c4: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x1803c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1803c8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1803c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1803cc: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1803ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1803d0: 0x2ca20004  sltiu       $v0, $a1, 0x4
    ctx->pc = 0x1803d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1803d4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1803D4u;
    {
        const bool branch_taken_0x1803d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1803D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1803D4u;
        // 0x1803d8: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1803d4) {
            ctx->pc = 0x1803C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1803c0;
        }
    }
    ctx->pc = 0x1803DCu;
label_1803dc:
    // 0x1803dc: 0x8da207d8  lw          $v0, 0x7D8($t5)
    ctx->pc = 0x1803dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 2008)));
    // 0x1803e0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1803E0u;
    {
        const bool branch_taken_0x1803e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1803E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1803E0u;
        // 0x1803e4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1803e0) {
            ctx->pc = 0x180418u;
            goto label_180418;
        }
    }
    ctx->pc = 0x1803E8u;
    // 0x1803e8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1803e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1803ec: 0x92030413  lbu         $v1, 0x413($s0)
    ctx->pc = 0x1803ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1043)));
    // 0x1803f0: 0x908207cc  lbu         $v0, 0x7CC($a0)
    ctx->pc = 0x1803f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3F07CCu));
    // 0x1803f4: 0x25c62b28  addiu       $a2, $t6, 0x2B28
    ctx->pc = 0x1803f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 14), 11048));
    // 0x1803f8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1803f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1803fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1803fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x180400: 0x908507d4  lbu         $a1, 0x7D4($a0)
    ctx->pc = 0x180400u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2004)));
    // 0x180404: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x180404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x180408: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x180408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18040c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x18040cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x180410: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x180410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x180414: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x180414u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_180418:
    // 0x180418: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x180418u;
    {
        const bool branch_taken_0x180418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180418u;
        // 0x18041c: 0x91e207cd  lbu         $v0, 0x7CD($t7) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 1997)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180418) {
            ctx->pc = 0x180444u;
            goto label_180444;
        }
    }
    ctx->pc = 0x180420u;
    // 0x180420: 0x92020412  lbu         $v0, 0x412($s0)
    ctx->pc = 0x180420u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1042)));
    // 0x180424: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x180424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x180428: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x180428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18042c: 0x2c630004  sltiu       $v1, $v1, 0x4
    ctx->pc = 0x18042cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x180430: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x180430u;
    {
        const bool branch_taken_0x180430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x180434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180430u;
        // 0x180434: 0xa2020412  sb          $v0, 0x412($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1042), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180430) {
            ctx->pc = 0x18043Cu;
            goto label_18043c;
        }
    }
    ctx->pc = 0x180438u;
    // 0x180438: 0xa2000412  sb          $zero, 0x412($s0)
    ctx->pc = 0x180438u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1042), (uint8_t)GPR_U32(ctx, 0));
label_18043c:
    // 0x18043c: 0xada007d8  sw          $zero, 0x7D8($t5)
    ctx->pc = 0x18043cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 2008), GPR_U32(ctx, 0));
    // 0x180440: 0x91e207cd  lbu         $v0, 0x7CD($t7)
    ctx->pc = 0x180440u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 1997)));
label_180444:
    // 0x180444: 0x25c42b28  addiu       $a0, $t6, 0x2B28
    ctx->pc = 0x180444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 11048));
    // 0x180448: 0x92030412  lbu         $v1, 0x412($s0)
    ctx->pc = 0x180448u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1042)));
    // 0x18044c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18044cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x180450: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x180450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x180454: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x180454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x180458: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x180458u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18045c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18045cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x180460: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x180460u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_180464:
    // 0x180464: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x180464u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_180468:
    // 0x180468: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x180468u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18046c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18046cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180470: 0x3e00008  jr          $ra
    ctx->pc = 0x180470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180470u;
        // 0x180474: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180478u;
}
