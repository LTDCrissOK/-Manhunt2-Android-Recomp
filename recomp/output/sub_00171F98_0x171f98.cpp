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

// Function: sub_00171F98
// Address: 0x171f98 - 0x171fc8
void sub_00171F98_0x171f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171F98_0x171f98");
#endif

    switch (ctx->pc) {
        case 0x171facu: goto label_171fac;
        case 0x171fb4u: goto label_171fb4;
        default: break;
    }

    ctx->pc = 0x171f98u;

    // 0x171f98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171f9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x171f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171fa0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x171fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x171fa4: 0xc04f820  jal         func_13E080
    ctx->pc = 0x171FA4u;
    SET_GPR_U32(ctx, 31, 0x171FACu);
    ctx->pc = 0x171FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171FA4u;
    // 0x171fa8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E080u, 0x171FA4u, 0x171FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171FACu;
label_171fac:
    // 0x171fac: 0xc05cd68  jal         func_1735A0
    ctx->pc = 0x171FACu;
    SET_GPR_U32(ctx, 31, 0x171FB4u);
    ctx->pc = 0x171FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171FACu;
    // 0x171fb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1735A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1735A0u, 0x171FACu, 0x171FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171FB4u;
label_171fb4:
    // 0x171fb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x171fb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171fb8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x171fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x171fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x171FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171FBCu;
        // 0x171fc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171FC4u;
    // 0x171fc4: 0x0  nop
    ctx->pc = 0x171fc4u;
    // NOP
    ctx->pc = 0x171fc8u;
}
