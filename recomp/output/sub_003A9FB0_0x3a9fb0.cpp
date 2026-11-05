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

// Function: sub_003A9FB0
// Address: 0x3a9fb0 - 0x3a9ff8
void sub_003A9FB0_0x3a9fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A9FB0_0x3a9fb0");
#endif

    switch (ctx->pc) {
        case 0x3a9fd0u: goto label_3a9fd0;
        case 0x3a9fdcu: goto label_3a9fdc;
        case 0x3a9fe4u: goto label_3a9fe4;
        default: break;
    }

    ctx->pc = 0x3a9fb0u;

    // 0x3a9fb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3a9fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3a9fb4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3a9fb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9fb8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x3a9fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x3a9fbc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3a9fbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9fc0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3a9fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9fc4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x3a9fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x3a9fc8: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x3A9FC8u;
    SET_GPR_U32(ctx, 31, 0x3A9FD0u);
    ctx->pc = 0x3A9FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9FC8u;
    // 0x3a9fcc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x3A9FC8u, 0x3A9FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9FD0u;
label_3a9fd0:
    // 0x3a9fd0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3a9fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9fd4: 0xc0efae1  jal         func_3BEB84
    ctx->pc = 0x3A9FD4u;
    SET_GPR_U32(ctx, 31, 0x3A9FDCu);
    ctx->pc = 0x3A9FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9FD4u;
    // 0x3a9fd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x3A9FD4u, 0x3A9FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9FDCu;
label_3a9fdc:
    // 0x3a9fdc: 0xc0ecf82  jal         func_3B3E08
    ctx->pc = 0x3A9FDCu;
    SET_GPR_U32(ctx, 31, 0x3A9FE4u);
    ctx->pc = 0x3A9FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9FDCu;
    // 0x3a9fe0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3E08u, 0x3A9FDCu, 0x3A9FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9FE4u;
label_3a9fe4:
    // 0x3a9fe4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x3a9fe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a9fe8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x3a9fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3a9fec: 0x3e00008  jr          $ra
    ctx->pc = 0x3A9FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A9FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9FECu;
        // 0x3a9ff0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A9FF4u;
    // 0x3a9ff4: 0x0  nop
    ctx->pc = 0x3a9ff4u;
    // NOP
    ctx->pc = 0x3a9ff8u;
}
