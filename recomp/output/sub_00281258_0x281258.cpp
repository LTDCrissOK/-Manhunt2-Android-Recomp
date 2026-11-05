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

// Function: sub_00281258
// Address: 0x281258 - 0x281280
void sub_00281258_0x281258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281258_0x281258");
#endif

    switch (ctx->pc) {
        case 0x281268u: goto label_281268;
        case 0x281270u: goto label_281270;
        default: break;
    }

    ctx->pc = 0x281258u;

    // 0x281258: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x281258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28125c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28125cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x281260: 0xc0a6bf0  jal         func_29AFC0
    ctx->pc = 0x281260u;
    SET_GPR_U32(ctx, 31, 0x281268u);
    ctx->pc = 0x29AFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AFC0u, 0x281260u, 0x281268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281268u;
label_281268:
    // 0x281268: 0xc0a6c28  jal         func_29B0A0
    ctx->pc = 0x281268u;
    SET_GPR_U32(ctx, 31, 0x281270u);
    ctx->pc = 0x28126Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281268u;
    // 0x28126c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B0A0u, 0x281268u, 0x281270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281270u;
label_281270:
    // 0x281270: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x281270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281274: 0x3e00008  jr          $ra
    ctx->pc = 0x281274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281274u;
        // 0x281278: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28127Cu;
    // 0x28127c: 0x0  nop
    ctx->pc = 0x28127cu;
    // NOP
    ctx->pc = 0x281280u;
}
