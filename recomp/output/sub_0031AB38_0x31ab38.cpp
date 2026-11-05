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

// Function: sub_0031AB38
// Address: 0x31ab38 - 0x31ab70
void sub_0031AB38_0x31ab38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031AB38_0x31ab38");
#endif

    switch (ctx->pc) {
        case 0x31ab50u: goto label_31ab50;
        case 0x31ab5cu: goto label_31ab5c;
        default: break;
    }

    ctx->pc = 0x31ab38u;

    // 0x31ab38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31ab38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31ab3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31ab3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31ab40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31ab40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ab44: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x31ab44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x31ab48: 0xc0c580c  jal         func_316030
    ctx->pc = 0x31AB48u;
    SET_GPR_U32(ctx, 31, 0x31AB50u);
    ctx->pc = 0x31AB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AB48u;
    // 0x31ab4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316030u, 0x31AB48u, 0x31AB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AB50u;
label_31ab50:
    // 0x31ab50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31ab50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ab54: 0xc0c8b0e  jal         func_322C38
    ctx->pc = 0x31AB54u;
    SET_GPR_U32(ctx, 31, 0x31AB5Cu);
    ctx->pc = 0x31AB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AB54u;
    // 0x31ab58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322C38u, 0x31AB54u, 0x31AB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AB5Cu;
label_31ab5c:
    // 0x31ab5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31ab5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ab60: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x31ab60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31ab64: 0x3e00008  jr          $ra
    ctx->pc = 0x31AB64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31AB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AB64u;
        // 0x31ab68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AB64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31AB6Cu;
    // 0x31ab6c: 0x0  nop
    ctx->pc = 0x31ab6cu;
    // NOP
    ctx->pc = 0x31ab70u;
}
