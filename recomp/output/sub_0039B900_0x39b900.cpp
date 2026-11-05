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

// Function: sub_0039B900
// Address: 0x39b900 - 0x39b938
void sub_0039B900_0x39b900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039B900_0x39b900");
#endif

    switch (ctx->pc) {
        case 0x39b914u: goto label_39b914;
        case 0x39b91cu: goto label_39b91c;
        case 0x39b924u: goto label_39b924;
        default: break;
    }

    ctx->pc = 0x39b900u;

    // 0x39b900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39b900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39b904: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39b904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39b908: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x39b908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x39b90c: 0xc0ebe5c  jal         func_3AF970
    ctx->pc = 0x39B90Cu;
    SET_GPR_U32(ctx, 31, 0x39B914u);
    ctx->pc = 0x39B910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B90Cu;
    // 0x39b910: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF970u, 0x39B90Cu, 0x39B914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B914u;
label_39b914:
    // 0x39b914: 0xc0e6e4e  jal         func_39B938
    ctx->pc = 0x39B914u;
    SET_GPR_U32(ctx, 31, 0x39B91Cu);
    ctx->pc = 0x39B918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B914u;
    // 0x39b918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B938u, 0x39B914u, 0x39B91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B91Cu;
label_39b91c:
    // 0x39b91c: 0xc0ebe5e  jal         func_3AF978
    ctx->pc = 0x39B91Cu;
    SET_GPR_U32(ctx, 31, 0x39B924u);
    ctx->pc = 0x39B920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B91Cu;
    // 0x39b920: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF978u, 0x39B91Cu, 0x39B924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B924u;
label_39b924:
    // 0x39b924: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x39b924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39b928: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39b928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b92c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39b92cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39b930: 0x3e00008  jr          $ra
    ctx->pc = 0x39B930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39B934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B930u;
        // 0x39b934: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39B938u;
}
