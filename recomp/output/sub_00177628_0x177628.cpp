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

// Function: sub_00177628
// Address: 0x177628 - 0x177650
void sub_00177628_0x177628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177628_0x177628");
#endif

    switch (ctx->pc) {
        case 0x177638u: goto label_177638;
        case 0x177640u: goto label_177640;
        default: break;
    }

    ctx->pc = 0x177628u;

    // 0x177628: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x177628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17762c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17762cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x177630: 0xc05e128  jal         func_1784A0
    ctx->pc = 0x177630u;
    SET_GPR_U32(ctx, 31, 0x177638u);
    ctx->pc = 0x1784A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1784A0u, 0x177630u, 0x177638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177638u;
label_177638:
    // 0x177638: 0xc05e390  jal         func_178E40
    ctx->pc = 0x177638u;
    SET_GPR_U32(ctx, 31, 0x177640u);
    ctx->pc = 0x17763Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177638u;
    // 0x17763c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178E40u, 0x177638u, 0x177640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177640u;
label_177640:
    // 0x177640: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x177640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177644: 0x3e00008  jr          $ra
    ctx->pc = 0x177644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177644u;
        // 0x177648: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17764Cu;
    // 0x17764c: 0x0  nop
    ctx->pc = 0x17764cu;
    // NOP
    ctx->pc = 0x177650u;
}
