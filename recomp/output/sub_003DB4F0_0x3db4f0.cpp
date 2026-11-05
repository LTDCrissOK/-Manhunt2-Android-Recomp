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

// Function: sub_003DB4F0
// Address: 0x3db4f0 - 0x3db520
void sub_003DB4F0_0x3db4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB4F0_0x3db4f0");
#endif

    switch (ctx->pc) {
        case 0x3db508u: goto label_3db508;
        case 0x3db510u: goto label_3db510;
        default: break;
    }

    ctx->pc = 0x3db4f0u;

    // 0x3db4f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3db4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3db4f4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x3db4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x3db4f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3db4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3db4fc: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x3db4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x3db500: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x3DB500u;
    SET_GPR_U32(ctx, 31, 0x3DB508u);
    ctx->pc = 0x3DB504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB500u;
    // 0x3db504: 0x24848780  addiu       $a0, $a0, -0x7880 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x3DB500u, 0x3DB508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB508u;
label_3db508:
    // 0x3db508: 0xc045eb0  jal         func_117AC0
    ctx->pc = 0x3DB508u;
    SET_GPR_U32(ctx, 31, 0x3DB510u);
    ctx->pc = 0x3DB50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB508u;
    // 0x3db50c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117AC0u, 0x3DB508u, 0x3DB510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB510u;
label_3db510:
    // 0x3db510: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3db510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3db514: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB514u;
        // 0x3db518: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB51Cu;
    // 0x3db51c: 0x0  nop
    ctx->pc = 0x3db51cu;
    // NOP
    ctx->pc = 0x3db520u;
}
