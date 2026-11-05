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

// Function: sub_001733D0
// Address: 0x1733d0 - 0x173540
void sub_001733D0_0x1733d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001733D0_0x1733d0");
#endif

    switch (ctx->pc) {
        case 0x173414u: goto label_173414;
        case 0x173440u: goto label_173440;
        case 0x17344cu: goto label_17344c;
        case 0x173478u: goto label_173478;
        case 0x173484u: goto label_173484;
        case 0x1734b0u: goto label_1734b0;
        case 0x1734bcu: goto label_1734bc;
        case 0x1734e8u: goto label_1734e8;
        case 0x1734f4u: goto label_1734f4;
        case 0x173520u: goto label_173520;
        default: break;
    }

    ctx->pc = 0x1733d0u;

    // 0x1733d0: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1733d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1733d4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1733d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1733d8: 0x8c6207b4  lw          $v0, 0x7B4($v1)
    ctx->pc = 0x1733d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F07B4u));
    // 0x1733dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1733dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1733e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1733e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1733e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1733e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1733e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1733e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1733ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1733ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1733f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1733f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1733f4: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x1733f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1733f8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1733f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1733fc: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x1733fcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x173400: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x173400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x173404: 0x3652fffd  ori         $s2, $s2, 0xFFFD
    ctx->pc = 0x173404u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65533);
    // 0x173408: 0xac6207b4  sw          $v0, 0x7B4($v1)
    ctx->pc = 0x173408u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F07B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F07B4u, _value); } while (0);
    // 0x17340c: 0xc04f90e  jal         func_13E438
    ctx->pc = 0x17340Cu;
    SET_GPR_U32(ctx, 31, 0x173414u);
    ctx->pc = 0x173410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17340Cu;
    // 0x173410: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E438u, 0x17340Cu, 0x173414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173414u;
label_173414:
    // 0x173414: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x173414u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173418: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x173418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17341c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17341cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x173420: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x173420u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173424: 0xac730008  sw          $s3, 0x8($v1)
    ctx->pc = 0x173424u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 19));
    // 0x173428: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x173428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17342c: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x17342cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x173430: 0xac730004  sw          $s3, 0x4($v1)
    ctx->pc = 0x173430u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 19));
    // 0x173434: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x173434u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x173438: 0xc05ccb8  jal         func_1732E0
    ctx->pc = 0x173438u;
    SET_GPR_U32(ctx, 31, 0x173440u);
    ctx->pc = 0x17343Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173438u;
    // 0x17343c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1732E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1732E0u, 0x173438u, 0x173440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173440u;
label_173440:
    // 0x173440: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x173440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173444: 0xc04f90e  jal         func_13E438
    ctx->pc = 0x173444u;
    SET_GPR_U32(ctx, 31, 0x17344Cu);
    ctx->pc = 0x173448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173444u;
    // 0x173448: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E438u, 0x173444u, 0x17344Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17344Cu;
label_17344c:
    // 0x17344c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x17344cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173450: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x173450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173454: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x173454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x173458: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x173458u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17345c: 0xac710008  sw          $s1, 0x8($v1)
    ctx->pc = 0x17345cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 17));
    // 0x173460: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x173460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173464: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x173464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x173468: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x173468u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
    // 0x17346c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x17346cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x173470: 0xc05ccb8  jal         func_1732E0
    ctx->pc = 0x173470u;
    SET_GPR_U32(ctx, 31, 0x173478u);
    ctx->pc = 0x173474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173470u;
    // 0x173474: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1732E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1732E0u, 0x173470u, 0x173478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173478u;
label_173478:
    // 0x173478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x173478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17347c: 0xc04f90e  jal         func_13E438
    ctx->pc = 0x17347Cu;
    SET_GPR_U32(ctx, 31, 0x173484u);
    ctx->pc = 0x173480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17347Cu;
    // 0x173480: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E438u, 0x17347Cu, 0x173484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173484u;
label_173484:
    // 0x173484: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x173484u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173488: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x173488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17348c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17348cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x173490: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x173490u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173494: 0xac710008  sw          $s1, 0x8($v1)
    ctx->pc = 0x173494u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 17));
    // 0x173498: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x173498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17349c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x17349cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1734a0: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x1734a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
    // 0x1734a4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1734a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1734a8: 0xc05ccb8  jal         func_1732E0
    ctx->pc = 0x1734A8u;
    SET_GPR_U32(ctx, 31, 0x1734B0u);
    ctx->pc = 0x1734ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1734A8u;
    // 0x1734ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1732E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1732E0u, 0x1734A8u, 0x1734B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1734B0u;
label_1734b0:
    // 0x1734b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1734b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1734b4: 0xc04f90e  jal         func_13E438
    ctx->pc = 0x1734B4u;
    SET_GPR_U32(ctx, 31, 0x1734BCu);
    ctx->pc = 0x1734B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1734B4u;
    // 0x1734b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E438u, 0x1734B4u, 0x1734BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1734BCu;
label_1734bc:
    // 0x1734bc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1734bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1734c0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1734c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1734c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1734c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1734c8: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1734c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1734cc: 0xac730008  sw          $s3, 0x8($v1)
    ctx->pc = 0x1734ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 19));
    // 0x1734d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1734d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1734d4: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x1734d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x1734d8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1734d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1734dc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1734dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1734e0: 0xc05ccb8  jal         func_1732E0
    ctx->pc = 0x1734E0u;
    SET_GPR_U32(ctx, 31, 0x1734E8u);
    ctx->pc = 0x1734E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1734E0u;
    // 0x1734e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1732E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1732E0u, 0x1734E0u, 0x1734E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1734E8u;
label_1734e8:
    // 0x1734e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1734e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1734ec: 0xc04f90e  jal         func_13E438
    ctx->pc = 0x1734ECu;
    SET_GPR_U32(ctx, 31, 0x1734F4u);
    ctx->pc = 0x1734F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1734ECu;
    // 0x1734f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E438u, 0x1734ECu, 0x1734F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1734F4u;
label_1734f4:
    // 0x1734f4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1734f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1734f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1734f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1734fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1734fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x173500: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x173500u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173504: 0xac710008  sw          $s1, 0x8($v1)
    ctx->pc = 0x173504u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 17));
    // 0x173508: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x173508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17350c: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x17350cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x173510: 0xac730004  sw          $s3, 0x4($v1)
    ctx->pc = 0x173510u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 19));
    // 0x173514: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x173514u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x173518: 0xc05ccb8  jal         func_1732E0
    ctx->pc = 0x173518u;
    SET_GPR_U32(ctx, 31, 0x173520u);
    ctx->pc = 0x17351Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173518u;
    // 0x17351c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1732E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1732E0u, 0x173518u, 0x173520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173520u;
label_173520:
    // 0x173520: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x173520u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173524: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x173524u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x173528: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x173528u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17352c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17352cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x173530: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x173530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173534: 0x3e00008  jr          $ra
    ctx->pc = 0x173534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173534u;
        // 0x173538: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17353Cu;
    // 0x17353c: 0x0  nop
    ctx->pc = 0x17353cu;
    // NOP
    ctx->pc = 0x173540u;
}
