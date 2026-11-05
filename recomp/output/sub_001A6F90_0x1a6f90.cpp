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

// Function: sub_001A6F90
// Address: 0x1a6f90 - 0x1a6ff0
void sub_001A6F90_0x1a6f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6F90_0x1a6f90");
#endif

    switch (ctx->pc) {
        case 0x1a6facu: goto label_1a6fac;
        case 0x1a6fbcu: goto label_1a6fbc;
        case 0x1a6fd4u: goto label_1a6fd4;
        case 0x1a6fe4u: goto label_1a6fe4;
        default: break;
    }

    ctx->pc = 0x1a6f90u;

    // 0x1a6f90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a6f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a6f94: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1A6F94u;
    {
        const bool branch_taken_0x1a6f94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F94u;
        // 0x1a6f98: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6f94) {
            ctx->pc = 0x1A6FC4u;
            goto label_1a6fc4;
        }
    }
    ctx->pc = 0x1A6F9Cu;
    // 0x1a6f9c: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A6F9Cu;
    {
        const bool branch_taken_0x1a6f9c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F9Cu;
        // 0x1a6fa0: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6f9c) {
            ctx->pc = 0x1A6FB4u;
            goto label_1a6fb4;
        }
    }
    ctx->pc = 0x1A6FA4u;
    // 0x1a6fa4: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A6FA4u;
    SET_GPR_U32(ctx, 31, 0x1A6FACu);
    ctx->pc = 0x1A6FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6FA4u;
    // 0x1a6fa8: 0x2406078d  addiu       $a2, $zero, 0x78D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1933));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A6FA4u, 0x1A6FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6FACu;
label_1a6fac:
    // 0x1a6fac: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1A6FACu;
    {
        const bool branch_taken_0x1a6fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FACu;
        // 0x1a6fb0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6fac) {
            ctx->pc = 0x1A6FE8u;
            goto label_1a6fe8;
        }
    }
    ctx->pc = 0x1A6FB4u;
label_1a6fb4:
    // 0x1a6fb4: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A6FB4u;
    SET_GPR_U32(ctx, 31, 0x1A6FBCu);
    ctx->pc = 0x1A6FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6FB4u;
    // 0x1a6fb8: 0x2406078b  addiu       $a2, $zero, 0x78B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1931));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A6FB4u, 0x1A6FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6FBCu;
label_1a6fbc:
    // 0x1a6fbc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A6FBCu;
    {
        const bool branch_taken_0x1a6fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FBCu;
        // 0x1a6fc0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6fbc) {
            ctx->pc = 0x1A6FE8u;
            goto label_1a6fe8;
        }
    }
    ctx->pc = 0x1A6FC4u;
label_1a6fc4:
    // 0x1a6fc4: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A6FC4u;
    {
        const bool branch_taken_0x1a6fc4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FC4u;
        // 0x1a6fc8: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6fc4) {
            ctx->pc = 0x1A6FDCu;
            goto label_1a6fdc;
        }
    }
    ctx->pc = 0x1A6FCCu;
    // 0x1a6fcc: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A6FCCu;
    SET_GPR_U32(ctx, 31, 0x1A6FD4u);
    ctx->pc = 0x1A6FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6FCCu;
    // 0x1a6fd0: 0x2406078e  addiu       $a2, $zero, 0x78E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1934));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A6FCCu, 0x1A6FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6FD4u;
label_1a6fd4:
    // 0x1a6fd4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6FD4u;
    {
        const bool branch_taken_0x1a6fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FD4u;
        // 0x1a6fd8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6fd4) {
            ctx->pc = 0x1A6FE8u;
            goto label_1a6fe8;
        }
    }
    ctx->pc = 0x1A6FDCu;
label_1a6fdc:
    // 0x1a6fdc: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A6FDCu;
    SET_GPR_U32(ctx, 31, 0x1A6FE4u);
    ctx->pc = 0x1A6FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6FDCu;
    // 0x1a6fe0: 0x2406078c  addiu       $a2, $zero, 0x78C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1932));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A6FDCu, 0x1A6FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6FE4u;
label_1a6fe4:
    // 0x1a6fe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6fe8:
    // 0x1a6fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FE8u;
        // 0x1a6fec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6FF0u;
}
