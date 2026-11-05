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

// Function: sub_001B3F50
// Address: 0x1b3f50 - 0x1b4480
void sub_001B3F50_0x1b3f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3F50_0x1b3f50");
#endif

    switch (ctx->pc) {
        case 0x1b3f70u: goto label_1b3f70;
        case 0x1b3f8cu: goto label_1b3f8c;
        case 0x1b3fc0u: goto label_1b3fc0;
        case 0x1b3fc8u: goto label_1b3fc8;
        case 0x1b3fd8u: goto label_1b3fd8;
        case 0x1b3fe4u: goto label_1b3fe4;
        case 0x1b3ff8u: goto label_1b3ff8;
        case 0x1b4008u: goto label_1b4008;
        case 0x1b4014u: goto label_1b4014;
        case 0x1b4094u: goto label_1b4094;
        case 0x1b40a0u: goto label_1b40a0;
        case 0x1b40b0u: goto label_1b40b0;
        case 0x1b4120u: goto label_1b4120;
        case 0x1b41d0u: goto label_1b41d0;
        case 0x1b41d8u: goto label_1b41d8;
        case 0x1b4284u: goto label_1b4284;
        case 0x1b42c0u: goto label_1b42c0;
        case 0x1b43acu: goto label_1b43ac;
        case 0x1b4408u: goto label_1b4408;
        case 0x1b4418u: goto label_1b4418;
        case 0x1b4428u: goto label_1b4428;
        case 0x1b4438u: goto label_1b4438;
        case 0x1b4448u: goto label_1b4448;
        default: break;
    }

    ctx->pc = 0x1b3f50u;

    // 0x1b3f50: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1b3f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1b3f54: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x1b3f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x1b3f58: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x1b3f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x1b3f5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b3f5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3f60: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x1b3f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x1b3f64: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x1b3f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x1b3f68: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1B3F68u;
    SET_GPR_U32(ctx, 31, 0x1B3F70u);
    ctx->pc = 0x1B3F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3F68u;
    // 0x1b3f6c: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1B3F68u, 0x1B3F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3F70u;
label_1b3f70:
    // 0x1b3f70: 0x1040013e  beqz        $v0, . + 4 + (0x13E << 2)
    ctx->pc = 0x1B3F70u;
    {
        const bool branch_taken_0x1b3f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3F70u;
        // 0x1b3f74: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3f70) {
            ctx->pc = 0x1B446Cu;
            goto label_1b446c;
        }
    }
    ctx->pc = 0x1B3F78u;
    // 0x1b3f78: 0x8c420274  lw          $v0, 0x274($v0)
    ctx->pc = 0x1b3f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
    // 0x1b3f7c: 0x5040013c  beql        $v0, $zero, . + 4 + (0x13C << 2)
    ctx->pc = 0x1B3F7Cu;
    {
        const bool branch_taken_0x1b3f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3f7c) {
            ctx->pc = 0x1B3F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B3F7Cu;
            // 0x1b3f80: 0xdfb10098  ld          $s1, 0x98($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4470u;
            goto label_1b4470;
        }
    }
    ctx->pc = 0x1B3F84u;
    // 0x1b3f84: 0xc06ce8c  jal         func_1B3A30
    ctx->pc = 0x1B3F84u;
    SET_GPR_U32(ctx, 31, 0x1B3F8Cu);
    ctx->pc = 0x1B3F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3F84u;
    // 0x1b3f88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A30u, 0x1B3F84u, 0x1B3F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3F8Cu;
label_1b3f8c:
    // 0x1b3f8c: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x1b3f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x1b3f90: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B3F90u;
    {
        const bool branch_taken_0x1b3f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3f90) {
            ctx->pc = 0x1B3FB8u;
            goto label_1b3fb8;
        }
    }
    ctx->pc = 0x1B3F98u;
    // 0x1b3f98: 0x8e230084  lw          $v1, 0x84($s1)
    ctx->pc = 0x1b3f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x1b3f9c: 0xdc621020  ld          $v0, 0x1020($v1)
    ctx->pc = 0x1b3f9cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4128)));
    // 0x1b3fa0: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x1b3fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x1b3fa4: 0x217ff  dsra32      $v0, $v0, 31
    ctx->pc = 0x1b3fa4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 31));
    // 0x1b3fa8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b3fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b3fac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b3facu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1b3fb0: 0x104000c6  beqz        $v0, . + 4 + (0xC6 << 2)
    ctx->pc = 0x1B3FB0u;
    {
        const bool branch_taken_0x1b3fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3FB0u;
        // 0x1b3fb4: 0x26220090  addiu       $v0, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3fb0) {
            ctx->pc = 0x1B42CCu;
            goto label_1b42cc;
        }
    }
    ctx->pc = 0x1B3FB8u;
label_1b3fb8:
    // 0x1b3fb8: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1B3FB8u;
    SET_GPR_U32(ctx, 31, 0x1B3FC0u);
    ctx->pc = 0x1B3FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3FB8u;
    // 0x1b3fbc: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1B3FB8u, 0x1B3FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3FC0u;
label_1b3fc0:
    // 0x1b3fc0: 0xc097f76  jal         func_25FDD8
    ctx->pc = 0x1B3FC0u;
    SET_GPR_U32(ctx, 31, 0x1B3FC8u);
    ctx->pc = 0x1B3FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3FC0u;
    // 0x1b3fc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FDD8u, 0x1B3FC0u, 0x1B3FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3FC8u;
label_1b3fc8:
    // 0x1b3fc8: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1B3FC8u;
    {
        const bool branch_taken_0x1b3fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3fc8) {
            ctx->pc = 0x1B40A8u;
            goto label_1b40a8;
        }
    }
    ctx->pc = 0x1B3FD0u;
    // 0x1b3fd0: 0xc08951c  jal         func_225470
    ctx->pc = 0x1B3FD0u;
    SET_GPR_U32(ctx, 31, 0x1B3FD8u);
    ctx->pc = 0x1B3FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3FD0u;
    // 0x1b3fd4: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225470u, 0x1B3FD0u, 0x1B3FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3FD8u;
label_1b3fd8:
    // 0x1b3fd8: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x1b3fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x1b3fdc: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1B3FDCu;
    SET_GPR_U32(ctx, 31, 0x1B3FE4u);
    ctx->pc = 0x1B3FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3FDCu;
    // 0x1b3fe0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1B3FDCu, 0x1B3FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3FE4u;
label_1b3fe4:
    // 0x1b3fe4: 0x8c50029c  lw          $s0, 0x29C($v0)
    ctx->pc = 0x1b3fe4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 668)));
    // 0x1b3fe8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B3FE8u;
    {
        const bool branch_taken_0x1b3fe8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3FE8u;
        // 0x1b3fec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3fe8) {
            ctx->pc = 0x1B400Cu;
            goto label_1b400c;
        }
    }
    ctx->pc = 0x1B3FF0u;
    // 0x1b3ff0: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x1B3FF0u;
    SET_GPR_U32(ctx, 31, 0x1B3FF8u);
    ctx->pc = 0x1B3FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3FF0u;
    // 0x1b3ff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x1B3FF0u, 0x1B3FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3FF8u;
label_1b3ff8:
    // 0x1b3ff8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3FF8u;
    {
        const bool branch_taken_0x1b3ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3FF8u;
        // 0x1b3ffc: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3ff8) {
            ctx->pc = 0x1B400Cu;
            goto label_1b400c;
        }
    }
    ctx->pc = 0x1B4000u;
    // 0x1b4000: 0xc0c4900  jal         func_312400
    ctx->pc = 0x1B4000u;
    SET_GPR_U32(ctx, 31, 0x1B4008u);
    ctx->pc = 0x1B4004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4000u;
    // 0x1b4004: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x1B4000u, 0x1B4008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4008u;
label_1b4008:
    // 0x1b4008: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x1b4008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_1b400c:
    // 0x1b400c: 0xc0d8e26  jal         func_363898
    ctx->pc = 0x1B400Cu;
    SET_GPR_U32(ctx, 31, 0x1B4014u);
    ctx->pc = 0x1B4010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B400Cu;
    // 0x1b4010: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363898u, 0x1B400Cu, 0x1B4014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4014u;
label_1b4014:
    // 0x1b4014: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x1b4014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x1b4018: 0x8c430334  lw          $v1, 0x334($v0)
    ctx->pc = 0x1b4018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    // 0x1b401c: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x1b401cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x1b4020: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x1b4020u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b4024: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B4024u;
    {
        const bool branch_taken_0x1b4024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4024u;
        // 0x1b4028: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4024) {
            ctx->pc = 0x1B4058u;
            goto label_1b4058;
        }
    }
    ctx->pc = 0x1B402Cu;
    // 0x1b402c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1b402cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1b4030: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B4030u;
    {
        const bool branch_taken_0x1b4030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B4034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4030u;
        // 0x1b4034: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4030) {
            ctx->pc = 0x1B4058u;
            goto label_1b4058;
        }
    }
    ctx->pc = 0x1B4038u;
    // 0x1b4038: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B4038u;
    {
        const bool branch_taken_0x1b4038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B403Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4038u;
        // 0x1b403c: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4038) {
            ctx->pc = 0x1B4058u;
            goto label_1b4058;
        }
    }
    ctx->pc = 0x1B4040u;
    // 0x1b4040: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4040u;
    {
        const bool branch_taken_0x1b4040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B4044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4040u;
        // 0x1b4044: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4040) {
            ctx->pc = 0x1B4058u;
            goto label_1b4058;
        }
    }
    ctx->pc = 0x1B4048u;
    // 0x1b4048: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B4048u;
    {
        const bool branch_taken_0x1b4048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B404Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4048u;
        // 0x1b404c: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4048) {
            ctx->pc = 0x1B4058u;
            goto label_1b4058;
        }
    }
    ctx->pc = 0x1B4050u;
    // 0x1b4050: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B4050u;
    {
        const bool branch_taken_0x1b4050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b4050) {
            ctx->pc = 0x1B405Cu;
            goto label_1b405c;
        }
    }
    ctx->pc = 0x1B4058u;
label_1b4058:
    // 0x1b4058: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b4058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b405c:
    // 0x1b405c: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B405Cu;
    {
        const bool branch_taken_0x1b405c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B405Cu;
        // 0x1b4060: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b405c) {
            ctx->pc = 0x1B4080u;
            goto label_1b4080;
        }
    }
    ctx->pc = 0x1B4064u;
    // 0x1b4064: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x1b4064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x1b4068: 0x8c440334  lw          $a0, 0x334($v0)
    ctx->pc = 0x1b4068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    // 0x1b406c: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x1b406cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x1b4070: 0x2463fff7  addiu       $v1, $v1, -0x9
    ctx->pc = 0x1b4070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967287));
    // 0x1b4074: 0x2c630004  sltiu       $v1, $v1, 0x4
    ctx->pc = 0x1b4074u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1b4078: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B4078u;
    {
        const bool branch_taken_0x1b4078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4078u;
        // 0x1b407c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4078) {
            ctx->pc = 0x1B4088u;
            goto label_1b4088;
        }
    }
    ctx->pc = 0x1B4080u;
label_1b4080:
    // 0x1b4080: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B4080u;
    {
        const bool branch_taken_0x1b4080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4080u;
        // 0x1b4084: 0xae220220  sw          $v0, 0x220($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4080) {
            ctx->pc = 0x1B408Cu;
            goto label_1b408c;
        }
    }
    ctx->pc = 0x1B4088u;
label_1b4088:
    // 0x1b4088: 0xae200220  sw          $zero, 0x220($s1)
    ctx->pc = 0x1b4088u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 544), GPR_U32(ctx, 0));
label_1b408c:
    // 0x1b408c: 0xc08951c  jal         func_225470
    ctx->pc = 0x1B408Cu;
    SET_GPR_U32(ctx, 31, 0x1B4094u);
    ctx->pc = 0x1B4090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B408Cu;
    // 0x1b4090: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225470u, 0x1B408Cu, 0x1B4094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4094u;
label_1b4094:
    // 0x1b4094: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b4094u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b4098: 0xc0d93aa  jal         func_364EA8
    ctx->pc = 0x1B4098u;
    SET_GPR_U32(ctx, 31, 0x1B40A0u);
    ctx->pc = 0x1B409Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4098u;
    // 0x1b409c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364EA8u, 0x1B4098u, 0x1B40A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B40A0u;
label_1b40a0:
    // 0x1b40a0: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x1B40A0u;
    {
        const bool branch_taken_0x1b40a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B40A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B40A0u;
        // 0x1b40a4: 0x26230050  addiu       $v1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b40a0) {
            ctx->pc = 0x1B42A4u;
            goto label_1b42a4;
        }
    }
    ctx->pc = 0x1B40A8u;
label_1b40a8:
    // 0x1b40a8: 0xc06e0fa  jal         func_1B83E8
    ctx->pc = 0x1B40A8u;
    SET_GPR_U32(ctx, 31, 0x1B40B0u);
    ctx->pc = 0x1B40ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B40A8u;
    // 0x1b40ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83E8u, 0x1B40A8u, 0x1B40B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B40B0u;
label_1b40b0:
    // 0x1b40b0: 0x1040007c  beqz        $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x1B40B0u;
    {
        const bool branch_taken_0x1b40b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B40B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B40B0u;
        // 0x1b40b4: 0x26230050  addiu       $v1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b40b0) {
            ctx->pc = 0x1B42A4u;
            goto label_1b42a4;
        }
    }
    ctx->pc = 0x1B40B8u;
    // 0x1b40b8: 0x8e230084  lw          $v1, 0x84($s1)
    ctx->pc = 0x1b40b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x1b40bc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1b40bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b40c0: 0x8c6300c0  lw          $v1, 0xC0($v1)
    ctx->pc = 0x1b40c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x1b40c4: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x1b40c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1b40c8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B40C8u;
    {
        const bool branch_taken_0x1b40c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B40CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B40C8u;
        // 0x1b40cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b40c8) {
            ctx->pc = 0x1B40DCu;
            goto label_1b40dc;
        }
    }
    ctx->pc = 0x1B40D0u;
    // 0x1b40d0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1b40d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1b40d4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B40D4u;
    {
        const bool branch_taken_0x1b40d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b40d4) {
            ctx->pc = 0x1B40E0u;
            goto label_1b40e0;
        }
    }
    ctx->pc = 0x1B40DCu;
label_1b40dc:
    // 0x1b40dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b40dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b40e0:
    // 0x1b40e0: 0x10a00070  beqz        $a1, . + 4 + (0x70 << 2)
    ctx->pc = 0x1B40E0u;
    {
        const bool branch_taken_0x1b40e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B40E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B40E0u;
        // 0x1b40e4: 0x26230050  addiu       $v1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b40e0) {
            ctx->pc = 0x1B42A4u;
            goto label_1b42a4;
        }
    }
    ctx->pc = 0x1B40E8u;
    // 0x1b40e8: 0x8e2200c8  lw          $v0, 0xC8($s1)
    ctx->pc = 0x1b40e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x1b40ec: 0x1440006e  bnez        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x1B40ECu;
    {
        const bool branch_taken_0x1b40ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B40F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B40ECu;
        // 0x1b40f0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b40ec) {
            ctx->pc = 0x1B42A8u;
            goto label_1b42a8;
        }
    }
    ctx->pc = 0x1B40F4u;
    // 0x1b40f4: 0x8c900334  lw          $s0, 0x334($a0)
    ctx->pc = 0x1b40f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
    // 0x1b40f8: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1b40f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1b40fc: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x1b40fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x1b4100: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1b4100u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b4104: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1B4104u;
    {
        const bool branch_taken_0x1b4104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4104u;
        // 0x1b4108: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4104) {
            ctx->pc = 0x1B4140u;
            goto label_1b4140;
        }
    }
    ctx->pc = 0x1B410Cu;
    // 0x1b410c: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1b410cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1b4110: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B4110u;
    {
        const bool branch_taken_0x1b4110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b4110) {
            ctx->pc = 0x1B4114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4110u;
            // 0x1b4114: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4144u;
            goto label_1b4144;
        }
    }
    ctx->pc = 0x1B4118u;
    // 0x1b4118: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x1B4118u;
    SET_GPR_U32(ctx, 31, 0x1B4120u);
    ctx->pc = 0x1B411Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4118u;
    // 0x1b411c: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x1B4118u, 0x1B4120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4120u;
label_1b4120:
    // 0x1b4120: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B4120u;
    {
        const bool branch_taken_0x1b4120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4120) {
            ctx->pc = 0x1B4124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4120u;
            // 0x1b4124: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4144u;
            goto label_1b4144;
        }
    }
    ctx->pc = 0x1B4128u;
    // 0x1b4128: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1b4128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1b412c: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x1b412cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1b4130: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B4130u;
    {
        const bool branch_taken_0x1b4130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B4134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4130u;
        // 0x1b4134: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4130) {
            ctx->pc = 0x1B4140u;
            goto label_1b4140;
        }
    }
    ctx->pc = 0x1B4138u;
    // 0x1b4138: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B4138u;
    {
        const bool branch_taken_0x1b4138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b4138) {
            ctx->pc = 0x1B4144u;
            goto label_1b4144;
        }
    }
    ctx->pc = 0x1B4140u;
label_1b4140:
    // 0x1b4140: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1b4140u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b4144:
    // 0x1b4144: 0x12400056  beqz        $s2, . + 4 + (0x56 << 2)
    ctx->pc = 0x1B4144u;
    {
        const bool branch_taken_0x1b4144 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4144u;
        // 0x1b4148: 0x26260090  addiu       $a2, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4144) {
            ctx->pc = 0x1B42A0u;
            goto label_1b42a0;
        }
    }
    ctx->pc = 0x1B414Cu;
    // 0x1b414c: 0x8e230084  lw          $v1, 0x84($s1)
    ctx->pc = 0x1b414cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x1b4150: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1b4150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1b4154: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1b4154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1b4158: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1b4158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b415c: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x1b415cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x1b4160: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b4160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b4164: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x1b4164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1b4168: 0xc4810060  lwc1        $f1, 0x60($a0)
    ctx->pc = 0x1b4168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b416c: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x1b416cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b4170: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x1b4170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b4174: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1b4174u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1b4178: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1b4178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b417c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1b417cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1b4180: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1b4180u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1b4184: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1b4184u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1b4188: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1b4188u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1b418c: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x1b418cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1b4190: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x1b4190u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1b4194: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1b4194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1b4198: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1b4198u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b419c: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1b419cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b41a0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1b41a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b41a4: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1b41a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b41a8: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x1b41a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b41ac: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1b41acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b41b0: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1b41b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b41b4: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1b41b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b41b8: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x1b41b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b41bc: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x1b41bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b41c0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1b41c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b41c4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1b41c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1b41c8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1B41C8u;
    SET_GPR_U32(ctx, 31, 0x1B41D0u);
    ctx->pc = 0x1B41CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B41C8u;
    // 0x1b41cc: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1B41C8u, 0x1B41D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B41D0u;
label_1b41d0:
    // 0x1b41d0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1B41D0u;
    SET_GPR_U32(ctx, 31, 0x1B41D8u);
    ctx->pc = 0x1B41D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B41D0u;
    // 0x1b41d4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1B41D0u, 0x1B41D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B41D8u;
label_1b41d8:
    // 0x1b41d8: 0x7a220090  lq          $v0, 0x90($s1)
    ctx->pc = 0x1b41d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1b41dc: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1b41dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b41e0: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x1b41e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b41e4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1b41e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b41e8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1b41e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x1b41ec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1b41ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b41f0: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x1b41f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x1b41f4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1b41f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b41f8: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1b41f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b41fc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1b41fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b4200: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1b4200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b4204: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x1b4204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b4208: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x1b4208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b420c: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x1b420cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b4210: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1b4210u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1b4214: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1b4214u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1b4218: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1b4218u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1b421c: 0x0  nop
    ctx->pc = 0x1b421cu;
    // NOP
    // 0x1b4220: 0x0  nop
    ctx->pc = 0x1b4220u;
    // NOP
    // 0x1b4224: 0x46010084  c1          0x10084
    ctx->pc = 0x1b4224u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x1b4228: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x1b4228u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1b422c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b422cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4230: 0x0  nop
    ctx->pc = 0x1b4230u;
    // NOP
    // 0x1b4234: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1b4234u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b4238: 0x0  nop
    ctx->pc = 0x1b4238u;
    // NOP
    // 0x1b423c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1B423Cu;
    {
        const bool branch_taken_0x1b423c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B4240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B423Cu;
        // 0x1b4240: 0xe7a20080  swc1        $f2, 0x80($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b423c) {
            ctx->pc = 0x1B4268u;
            goto label_1b4268;
        }
    }
    ctx->pc = 0x1B4244u;
    // 0x1b4244: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b4244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b4248: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b4248u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b424c: 0x0  nop
    ctx->pc = 0x1b424cu;
    // NOP
    // 0x1b4250: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1b4250u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1b4254: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b4254u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b4258: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1b4258u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b425c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1b425cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1b4260: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1b4260u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b4264: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1b4264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_1b4268:
    // 0x1b4268: 0x3c05fffb  lui         $a1, 0xFFFB
    ctx->pc = 0x1b4268u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65531 << 16));
    // 0x1b426c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1b426cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b4270: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1b4270u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1b4274: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b4274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4278: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b4278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b427c: 0xc077cda  jal         func_1DF368
    ctx->pc = 0x1B427Cu;
    SET_GPR_U32(ctx, 31, 0x1B4284u);
    ctx->pc = 0x1B4280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B427Cu;
    // 0x1b4280: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF368u, 0x1B427Cu, 0x1B4284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4284u;
label_1b4284:
    // 0x1b4284: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4284u;
    {
        const bool branch_taken_0x1b4284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4284u;
        // 0x1b4288: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4284) {
            ctx->pc = 0x1B4298u;
            goto label_1b4298;
        }
    }
    ctx->pc = 0x1B428Cu;
    // 0x1b428c: 0xae2000c8  sw          $zero, 0xC8($s1)
    ctx->pc = 0x1b428cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 0));
    // 0x1b4290: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B4290u;
    {
        const bool branch_taken_0x1b4290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4290u;
        // 0x1b4294: 0xae220218  sw          $v0, 0x218($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4290) {
            ctx->pc = 0x1B42A0u;
            goto label_1b42a0;
        }
    }
    ctx->pc = 0x1B4298u;
label_1b4298:
    // 0x1b4298: 0xae200218  sw          $zero, 0x218($s1)
    ctx->pc = 0x1b4298u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 536), GPR_U32(ctx, 0));
    // 0x1b429c: 0xae2000c8  sw          $zero, 0xC8($s1)
    ctx->pc = 0x1b429cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 0));
label_1b42a0:
    // 0x1b42a0: 0x26230050  addiu       $v1, $s1, 0x50
    ctx->pc = 0x1b42a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_1b42a4:
    // 0x1b42a4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1b42a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1b42a8:
    // 0x1b42a8: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x1b42a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x1b42ac: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x1b42acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x1b42b0: 0x7e200070  sq          $zero, 0x70($s1)
    ctx->pc = 0x1b42b0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), GPR_VEC(ctx, 0));
    // 0x1b42b4: 0xae200080  sw          $zero, 0x80($s1)
    ctx->pc = 0x1b42b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
    // 0x1b42b8: 0xc06d5a4  jal         func_1B5690
    ctx->pc = 0x1B42B8u;
    SET_GPR_U32(ctx, 31, 0x1B42C0u);
    ctx->pc = 0x1B42BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B42B8u;
    // 0x1b42bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5690u, 0x1B42B8u, 0x1B42C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B42C0u;
label_1b42c0:
    // 0x1b42c0: 0xae2000b8  sw          $zero, 0xB8($s1)
    ctx->pc = 0x1b42c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 0));
    // 0x1b42c4: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x1B42C4u;
    {
        const bool branch_taken_0x1b42c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B42C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B42C4u;
        // 0x1b42c8: 0xae2000b0  sw          $zero, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b42c4) {
            ctx->pc = 0x1B4468u;
            goto label_1b4468;
        }
    }
    ctx->pc = 0x1B42CCu;
label_1b42cc:
    // 0x1b42cc: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1b42ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b42d0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1b42d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b42d4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1b42d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b42d8: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1b42d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b42dc: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1b42dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b42e0: 0x262200a0  addiu       $v0, $s1, 0xA0
    ctx->pc = 0x1b42e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x1b42e4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1b42e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b42e8: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1b42e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b42ec: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x1b42ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b42f0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1b42f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b42f4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1b42f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b42f8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1b42f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1b42fc: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x1b42fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1b4300: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1b4300u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4304: 0xfa2100a0  sqc2        $vf1, 0xA0($s1)
    ctx->pc = 0x1b4304u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b4308: 0xc62000bc  lwc1        $f0, 0xBC($s1)
    ctx->pc = 0x1b4308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b430c: 0xe62000c4  swc1        $f0, 0xC4($s1)
    ctx->pc = 0x1b430cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 196), bits); }
    // 0x1b4310: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1b4310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b4314: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1b4314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b4318: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x1b4318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b431c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1b431cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1b4320: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1b4320u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1b4324: 0x4604215c  madd.s      $f5, $f4, $f4
    ctx->pc = 0x1b4324u;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1b4328: 0x46050144  c1          0x50144
    ctx->pc = 0x1b4328u;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
    // 0x1b432c: 0xc62100a0  lwc1        $f1, 0xA0($s1)
    ctx->pc = 0x1b432cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4330: 0xe62500bc  swc1        $f5, 0xBC($s1)
    ctx->pc = 0x1b4330u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 188), bits); }
    // 0x1b4334: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1b4334u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b4338: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1b4338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b433c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1b433cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b4340: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1b4340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4344: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1b4344u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1b4348: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1b4348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b434c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1b434cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1b4350: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1b4350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1b4354: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1b4354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b4358: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1b4358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b435c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1b435cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b4360: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1b4360u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1b4364: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1b4364u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1b4368: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1b4368u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1b436c: 0x46010044  c1          0x10044
    ctx->pc = 0x1b436cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1b4370: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1b4370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4374: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x1b4374u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b4378: 0x0  nop
    ctx->pc = 0x1b4378u;
    // NOP
    // 0x1b437c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1B437Cu;
    {
        const bool branch_taken_0x1b437c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B4380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B437Cu;
        // 0x1b4380: 0xe62100c0  swc1        $f1, 0xC0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b437c) {
            ctx->pc = 0x1B43A4u;
            goto label_1b43a4;
        }
    }
    ctx->pc = 0x1B4384u;
    // 0x1b4384: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1b4384u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b4388: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1b4388u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b438c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1b438cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b4390: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1b4390u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b4394: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1b4394u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1b4398: 0x4a0003bf  vwaitq
    ctx->pc = 0x1b4398u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1b439c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1b439cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b43a0: 0xfa2100a0  sqc2        $vf1, 0xA0($s1)
    ctx->pc = 0x1b43a0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 160), _mm_castps_si128(ctx->vu0_vf[1]));
label_1b43a4:
    // 0x1b43a4: 0xc09521a  jal         func_254868
    ctx->pc = 0x1B43A4u;
    SET_GPR_U32(ctx, 31, 0x1B43ACu);
    ctx->pc = 0x1B43A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B43A4u;
    // 0x1b43a8: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254868u, 0x1B43A4u, 0x1B43ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B43ACu;
label_1b43ac:
    // 0x1b43ac: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1B43ACu;
    {
        const bool branch_taken_0x1b43ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B43B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B43ACu;
        // 0x1b43b0: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b43ac) {
            ctx->pc = 0x1B446Cu;
            goto label_1b446c;
        }
    }
    ctx->pc = 0x1B43B4u;
    // 0x1b43b4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1b43b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1b43b8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B43B8u;
    {
        const bool branch_taken_0x1b43b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B43BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B43B8u;
        // 0x1b43bc: 0x38420006  xori        $v0, $v0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b43b8) {
            ctx->pc = 0x1B43F8u;
            goto label_1b43f8;
        }
    }
    ctx->pc = 0x1B43C0u;
    // 0x1b43c0: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1b43c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1b43c4: 0x8c621060  lw          $v0, 0x1060($v1)
    ctx->pc = 0x1b43c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4192)));
    // 0x1b43c8: 0x3842001b  xori        $v0, $v0, 0x1B
    ctx->pc = 0x1b43c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)27);
    // 0x1b43cc: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B43CCu;
    {
        const bool branch_taken_0x1b43cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b43cc) {
            ctx->pc = 0x1B43D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B43CCu;
            // 0x1b43d0: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B43F4u;
            goto label_1b43f4;
        }
    }
    ctx->pc = 0x1B43D4u;
    // 0x1b43d4: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x1b43d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x1b43d8: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x1b43d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
    // 0x1b43dc: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x1b43dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x1b43e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B43E0u;
    {
        const bool branch_taken_0x1b43e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B43E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B43E0u;
        // 0x1b43e4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b43e0) {
            ctx->pc = 0x1B43F0u;
            goto label_1b43f0;
        }
    }
    ctx->pc = 0x1B43E8u;
    // 0x1b43e8: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1b43e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x1b43ec: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1b43ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_1b43f0:
    // 0x1b43f0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1b43f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1b43f4:
    // 0x1b43f4: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1b43f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
label_1b43f8:
    // 0x1b43f8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B43F8u;
    {
        const bool branch_taken_0x1b43f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B43FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B43F8u;
        // 0x1b43fc: 0x26230050  addiu       $v1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b43f8) {
            ctx->pc = 0x1B4450u;
            goto label_1b4450;
        }
    }
    ctx->pc = 0x1B4400u;
    // 0x1b4400: 0xc06d120  jal         func_1B4480
    ctx->pc = 0x1B4400u;
    SET_GPR_U32(ctx, 31, 0x1B4408u);
    ctx->pc = 0x1B4404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4400u;
    // 0x1b4404: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4480u, 0x1B4400u, 0x1B4408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4408u;
label_1b4408:
    // 0x1b4408: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B4408u;
    {
        const bool branch_taken_0x1b4408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4408u;
        // 0x1b440c: 0x26230050  addiu       $v1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4408) {
            ctx->pc = 0x1B4450u;
            goto label_1b4450;
        }
    }
    ctx->pc = 0x1B4410u;
    // 0x1b4410: 0xc06e0f0  jal         func_1B83C0
    ctx->pc = 0x1B4410u;
    SET_GPR_U32(ctx, 31, 0x1B4418u);
    ctx->pc = 0x1B4414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4410u;
    // 0x1b4414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83C0u, 0x1B4410u, 0x1B4418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4418u;
label_1b4418:
    // 0x1b4418: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4418u;
    {
        const bool branch_taken_0x1b4418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4418) {
            ctx->pc = 0x1B4430u;
            goto label_1b4430;
        }
    }
    ctx->pc = 0x1B4420u;
    // 0x1b4420: 0xc06d600  jal         func_1B5800
    ctx->pc = 0x1B4420u;
    SET_GPR_U32(ctx, 31, 0x1B4428u);
    ctx->pc = 0x1B4424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4420u;
    // 0x1b4424: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5800u, 0x1B4420u, 0x1B4428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4428u;
label_1b4428:
    // 0x1b4428: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B4428u;
    {
        const bool branch_taken_0x1b4428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4428u;
        // 0x1b442c: 0xae2000b8  sw          $zero, 0xB8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4428) {
            ctx->pc = 0x1B4468u;
            goto label_1b4468;
        }
    }
    ctx->pc = 0x1B4430u;
label_1b4430:
    // 0x1b4430: 0xc06e0fa  jal         func_1B83E8
    ctx->pc = 0x1B4430u;
    SET_GPR_U32(ctx, 31, 0x1B4438u);
    ctx->pc = 0x1B4434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4430u;
    // 0x1b4434: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83E8u, 0x1B4430u, 0x1B4438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4438u;
label_1b4438:
    // 0x1b4438: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1B4438u;
    {
        const bool branch_taken_0x1b4438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4438) {
            ctx->pc = 0x1B443Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4438u;
            // 0x1b443c: 0xae2000b8  sw          $zero, 0xB8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4468u;
            goto label_1b4468;
        }
    }
    ctx->pc = 0x1B4440u;
    // 0x1b4440: 0xc06d840  jal         func_1B6100
    ctx->pc = 0x1B4440u;
    SET_GPR_U32(ctx, 31, 0x1B4448u);
    ctx->pc = 0x1B4444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4440u;
    // 0x1b4444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6100u, 0x1B4440u, 0x1B4448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4448u;
label_1b4448:
    // 0x1b4448: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B4448u;
    {
        const bool branch_taken_0x1b4448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4448u;
        // 0x1b444c: 0xae2000b8  sw          $zero, 0xB8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4448) {
            ctx->pc = 0x1B4468u;
            goto label_1b4468;
        }
    }
    ctx->pc = 0x1B4450u;
label_1b4450:
    // 0x1b4450: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1b4450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b4454: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x1b4454u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x1b4458: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x1b4458u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x1b445c: 0x7e200070  sq          $zero, 0x70($s1)
    ctx->pc = 0x1b445cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), GPR_VEC(ctx, 0));
    // 0x1b4460: 0xae200080  sw          $zero, 0x80($s1)
    ctx->pc = 0x1b4460u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
    // 0x1b4464: 0xae2000b8  sw          $zero, 0xB8($s1)
    ctx->pc = 0x1b4464u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 0));
label_1b4468:
    // 0x1b4468: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x1b4468u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1b446c:
    // 0x1b446c: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x1b446cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_1b4470:
    // 0x1b4470: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x1b4470u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b4474: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x1b4474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1b4478: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B447Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4478u;
        // 0x1b447c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4480u;
}
