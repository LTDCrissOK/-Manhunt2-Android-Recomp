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

// Function: sub_003A6C50
// Address: 0x3a6c50 - 0x3a6c88
void sub_003A6C50_0x3a6c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A6C50_0x3a6c50");
#endif

    switch (ctx->pc) {
        case 0x3a6c64u: goto label_3a6c64;
        case 0x3a6c6cu: goto label_3a6c6c;
        case 0x3a6c74u: goto label_3a6c74;
        default: break;
    }

    ctx->pc = 0x3a6c50u;

    // 0x3a6c50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a6c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a6c54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a6c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a6c58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3a6c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3a6c5c: 0xc0e9d26  jal         func_3A7498
    ctx->pc = 0x3A6C5Cu;
    SET_GPR_U32(ctx, 31, 0x3A6C64u);
    ctx->pc = 0x3A6C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6C5Cu;
    // 0x3a6c60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7498u, 0x3A6C5Cu, 0x3A6C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6C64u;
label_3a6c64:
    // 0x3a6c64: 0xc0e9b22  jal         func_3A6C88
    ctx->pc = 0x3A6C64u;
    SET_GPR_U32(ctx, 31, 0x3A6C6Cu);
    ctx->pc = 0x3A6C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6C64u;
    // 0x3a6c68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C88u, 0x3A6C64u, 0x3A6C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6C6Cu;
label_3a6c6c:
    // 0x3a6c6c: 0xc0e9d28  jal         func_3A74A0
    ctx->pc = 0x3A6C6Cu;
    SET_GPR_U32(ctx, 31, 0x3A6C74u);
    ctx->pc = 0x3A6C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6C6Cu;
    // 0x3a6c70: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A74A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A74A0u, 0x3A6C6Cu, 0x3A6C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6C74u;
label_3a6c74:
    // 0x3a6c74: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3a6c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a6c78: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a6c78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6c7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a6c7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a6c80: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6C80u;
        // 0x3a6c84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6C80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6C88u;
}
