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

// Function: sub_00308E40
// Address: 0x308e40 - 0x308e70
void sub_00308E40_0x308e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308E40_0x308e40");
#endif

    switch (ctx->pc) {
        case 0x308e58u: goto label_308e58;
        case 0x308e60u: goto label_308e60;
        default: break;
    }

    ctx->pc = 0x308e40u;

    // 0x308e40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x308e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x308e44: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x308e44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x308e48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x308e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x308e4c: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x308e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x308e50: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x308E50u;
    SET_GPR_U32(ctx, 31, 0x308E58u);
    ctx->pc = 0x308E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308E50u;
    // 0x308e54: 0x24846810  addiu       $a0, $a0, 0x6810 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x308E50u, 0x308E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308E58u;
label_308e58:
    // 0x308e58: 0xc0c239c  jal         func_308E70
    ctx->pc = 0x308E58u;
    SET_GPR_U32(ctx, 31, 0x308E60u);
    ctx->pc = 0x308E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308E58u;
    // 0x308e5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308E70u, 0x308E58u, 0x308E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308E60u;
label_308e60:
    // 0x308e60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x308e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308e64: 0x3e00008  jr          $ra
    ctx->pc = 0x308E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308E64u;
        // 0x308e68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308E6Cu;
    // 0x308e6c: 0x0  nop
    ctx->pc = 0x308e6cu;
    // NOP
    ctx->pc = 0x308e70u;
}
