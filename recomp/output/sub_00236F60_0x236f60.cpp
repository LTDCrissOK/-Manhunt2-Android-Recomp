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

// Function: sub_00236F60
// Address: 0x236f60 - 0x236fd8
void sub_00236F60_0x236f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236F60_0x236f60");
#endif

    switch (ctx->pc) {
        case 0x236f90u: goto label_236f90;
        case 0x236f9cu: goto label_236f9c;
        case 0x236fbcu: goto label_236fbc;
        case 0x236fc8u: goto label_236fc8;
        default: break;
    }

    ctx->pc = 0x236f60u;

    // 0x236f60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x236f64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x236f68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x236f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x236f6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x236f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236f70: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x236F70u;
    {
        const bool branch_taken_0x236f70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x236F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F70u;
        // 0x236f74: 0xae050388  sw          $a1, 0x388($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 904), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236f70) {
            ctx->pc = 0x236FA4u;
            goto label_236fa4;
        }
    }
    ctx->pc = 0x236F78u;
    // 0x236f78: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x236f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x236f7c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x236f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x236f80: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x236F80u;
    {
        const bool branch_taken_0x236f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236f80) {
            ctx->pc = 0x236F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236F80u;
            // 0x236f84: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236FCCu;
            goto label_236fcc;
        }
    }
    ctx->pc = 0x236F88u;
    // 0x236f88: 0xc0b65b4  jal         func_2D96D0
    ctx->pc = 0x236F88u;
    SET_GPR_U32(ctx, 31, 0x236F90u);
    ctx->pc = 0x2D96D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D96D0u, 0x236F88u, 0x236F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236F90u;
label_236f90:
    // 0x236f90: 0x8e050388  lw          $a1, 0x388($s0)
    ctx->pc = 0x236f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 904)));
    // 0x236f94: 0xc0b65be  jal         func_2D96F8
    ctx->pc = 0x236F94u;
    SET_GPR_U32(ctx, 31, 0x236F9Cu);
    ctx->pc = 0x236F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236F94u;
    // 0x236f98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D96F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D96F8u, 0x236F94u, 0x236F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236F9Cu;
label_236f9c:
    // 0x236f9c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x236F9Cu;
    {
        const bool branch_taken_0x236f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F9Cu;
        // 0x236fa0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236f9c) {
            ctx->pc = 0x236FCCu;
            goto label_236fcc;
        }
    }
    ctx->pc = 0x236FA4u;
label_236fa4:
    // 0x236fa4: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x236fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x236fa8: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x236fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x236fac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x236FACu;
    {
        const bool branch_taken_0x236fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236FACu;
        // 0x236fb0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236fac) {
            ctx->pc = 0x236FCCu;
            goto label_236fcc;
        }
    }
    ctx->pc = 0x236FB4u;
    // 0x236fb4: 0xc0b65b4  jal         func_2D96D0
    ctx->pc = 0x236FB4u;
    SET_GPR_U32(ctx, 31, 0x236FBCu);
    ctx->pc = 0x2D96D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D96D0u, 0x236FB4u, 0x236FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236FBCu;
label_236fbc:
    // 0x236fbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x236fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236fc0: 0xc0b65be  jal         func_2D96F8
    ctx->pc = 0x236FC0u;
    SET_GPR_U32(ctx, 31, 0x236FC8u);
    ctx->pc = 0x236FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236FC0u;
    // 0x236fc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D96F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D96F8u, 0x236FC0u, 0x236FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236FC8u;
label_236fc8:
    // 0x236fc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236fc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236fcc:
    // 0x236fcc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x236fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x236fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x236FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236FD0u;
        // 0x236fd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236FD8u;
}
