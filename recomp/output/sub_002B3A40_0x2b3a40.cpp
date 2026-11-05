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

// Function: sub_002B3A40
// Address: 0x2b3a40 - 0x2b3ae8
void sub_002B3A40_0x2b3a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3A40_0x2b3a40");
#endif

    switch (ctx->pc) {
        case 0x2b3a58u: goto label_2b3a58;
        case 0x2b3a6cu: goto label_2b3a6c;
        case 0x2b3a84u: goto label_2b3a84;
        case 0x2b3a94u: goto label_2b3a94;
        case 0x2b3aa4u: goto label_2b3aa4;
        case 0x2b3ab8u: goto label_2b3ab8;
        case 0x2b3ac8u: goto label_2b3ac8;
        default: break;
    }

    ctx->pc = 0x2b3a40u;

    // 0x2b3a40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b3a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b3a44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b3a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b3a48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b3a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b3a4c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b3a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b3a50: 0xc0ace7c  jal         func_2B39F0
    ctx->pc = 0x2B3A50u;
    SET_GPR_U32(ctx, 31, 0x2B3A58u);
    ctx->pc = 0x2B3A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3A50u;
    // 0x2b3a54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B39F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B39F0u, 0x2B3A50u, 0x2B3A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3A58u;
label_2b3a58:
    // 0x2b3a58: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2B3A58u;
    {
        const bool branch_taken_0x2b3a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3A58u;
        // 0x2b3a5c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3a58) {
            ctx->pc = 0x2B3AD0u;
            goto label_2b3ad0;
        }
    }
    ctx->pc = 0x2B3A60u;
    // 0x2b3a60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b3a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3a64: 0xc0acfd2  jal         func_2B3F48
    ctx->pc = 0x2B3A64u;
    SET_GPR_U32(ctx, 31, 0x2B3A6Cu);
    ctx->pc = 0x2B3A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3A64u;
    // 0x2b3a68: 0x24a5f8b0  addiu       $a1, $a1, -0x750 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3F48u, 0x2B3A64u, 0x2B3A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3A6Cu;
label_2b3a6c:
    // 0x2b3a6c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2B3A6Cu;
    {
        const bool branch_taken_0x2b3a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3A6Cu;
        // 0x2b3a70: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3a6c) {
            ctx->pc = 0x2B3AD0u;
            goto label_2b3ad0;
        }
    }
    ctx->pc = 0x2B3A74u;
    // 0x2b3a74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b3a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3a78: 0x2451ac30  addiu       $s1, $v0, -0x53D0
    ctx->pc = 0x2b3a78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945840));
    // 0x2b3a7c: 0xc0acfd2  jal         func_2B3F48
    ctx->pc = 0x2B3A7Cu;
    SET_GPR_U32(ctx, 31, 0x2B3A84u);
    ctx->pc = 0x2B3A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3A7Cu;
    // 0x2b3a80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3F48u, 0x2B3A7Cu, 0x2B3A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3A84u;
label_2b3a84:
    // 0x2b3a84: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B3A84u;
    {
        const bool branch_taken_0x2b3a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3A84u;
        // 0x2b3a88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3a84) {
            ctx->pc = 0x2B3AD0u;
            goto label_2b3ad0;
        }
    }
    ctx->pc = 0x2B3A8Cu;
    // 0x2b3a8c: 0xc0acfd2  jal         func_2B3F48
    ctx->pc = 0x2B3A8Cu;
    SET_GPR_U32(ctx, 31, 0x2B3A94u);
    ctx->pc = 0x2B3A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3A8Cu;
    // 0x2b3a90: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3F48u, 0x2B3A8Cu, 0x2B3A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3A94u;
label_2b3a94:
    // 0x2b3a94: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B3A94u;
    {
        const bool branch_taken_0x2b3a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3A94u;
        // 0x2b3a98: 0x26250040  addiu       $a1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3a94) {
            ctx->pc = 0x2B3AD0u;
            goto label_2b3ad0;
        }
    }
    ctx->pc = 0x2B3A9Cu;
    // 0x2b3a9c: 0xc0acfd2  jal         func_2B3F48
    ctx->pc = 0x2B3A9Cu;
    SET_GPR_U32(ctx, 31, 0x2B3AA4u);
    ctx->pc = 0x2B3AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3A9Cu;
    // 0x2b3aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3F48u, 0x2B3A9Cu, 0x2B3AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3AA4u;
label_2b3aa4:
    // 0x2b3aa4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B3AA4u;
    {
        const bool branch_taken_0x2b3aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3AA4u;
        // 0x2b3aa8: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3aa4) {
            ctx->pc = 0x2B3AD0u;
            goto label_2b3ad0;
        }
    }
    ctx->pc = 0x2B3AACu;
    // 0x2b3aac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b3aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3ab0: 0xc0acfd2  jal         func_2B3F48
    ctx->pc = 0x2B3AB0u;
    SET_GPR_U32(ctx, 31, 0x2B3AB8u);
    ctx->pc = 0x2B3AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3AB0u;
    // 0x2b3ab4: 0x24a5ac91  addiu       $a1, $a1, -0x536F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945937));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3F48u, 0x2B3AB0u, 0x2B3AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3AB8u;
label_2b3ab8:
    // 0x2b3ab8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B3AB8u;
    {
        const bool branch_taken_0x2b3ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3ab8) {
            ctx->pc = 0x2B3ABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3AB8u;
            // 0x2b3abc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3AD4u;
            goto label_2b3ad4;
        }
    }
    ctx->pc = 0x2B3AC0u;
    // 0x2b3ac0: 0xc0ad336  jal         func_2B4CD8
    ctx->pc = 0x2B3AC0u;
    SET_GPR_U32(ctx, 31, 0x2B3AC8u);
    ctx->pc = 0x2B3AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3AC0u;
    // 0x2b3ac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4CD8u, 0x2B3AC0u, 0x2B3AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3AC8u;
label_2b3ac8:
    // 0x2b3ac8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B3AC8u;
    {
        const bool branch_taken_0x2b3ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3AC8u;
        // 0x2b3acc: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3ac8) {
            ctx->pc = 0x2B3AD4u;
            goto label_2b3ad4;
        }
    }
    ctx->pc = 0x2B3AD0u;
label_2b3ad0:
    // 0x2b3ad0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b3ad0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b3ad4:
    // 0x2b3ad4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b3ad4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3ad8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b3ad8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b3adc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b3adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3AE0u;
        // 0x2b3ae4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3AE8u;
}
