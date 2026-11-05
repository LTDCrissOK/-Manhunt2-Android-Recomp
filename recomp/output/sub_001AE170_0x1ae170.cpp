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

// Function: sub_001AE170
// Address: 0x1ae170 - 0x1ae198
void sub_001AE170_0x1ae170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE170_0x1ae170");
#endif

    switch (ctx->pc) {
        case 0x1ae188u: goto label_1ae188;
        default: break;
    }

    ctx->pc = 0x1ae170u;

    // 0x1ae170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ae170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ae174: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1ae174u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae178: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ae178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ae17c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ae17cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae180: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x1AE180u;
    SET_GPR_U32(ctx, 31, 0x1AE188u);
    ctx->pc = 0x1AE184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE180u;
    // 0x1ae184: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x1AE180u, 0x1AE188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE188u;
label_1ae188:
    // 0x1ae188: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ae188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae18c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE18Cu;
        // 0x1ae190: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE18Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE194u;
    // 0x1ae194: 0x0  nop
    ctx->pc = 0x1ae194u;
    // NOP
    ctx->pc = 0x1ae198u;
}
