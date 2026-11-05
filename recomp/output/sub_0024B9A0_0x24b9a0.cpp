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

// Function: sub_0024B9A0
// Address: 0x24b9a0 - 0x24b9c0
void sub_0024B9A0_0x24b9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B9A0_0x24b9a0");
#endif

    switch (ctx->pc) {
        case 0x24b9b4u: goto label_24b9b4;
        default: break;
    }

    ctx->pc = 0x24b9a0u;

    // 0x24b9a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24b9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24b9a4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x24b9a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b9a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24b9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24b9ac: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x24B9ACu;
    SET_GPR_U32(ctx, 31, 0x24B9B4u);
    ctx->pc = 0x24B9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B9ACu;
    // 0x24b9b0: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x24B9ACu, 0x24B9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B9B4u;
label_24b9b4:
    // 0x24b9b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24b9b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b9b8: 0x3e00008  jr          $ra
    ctx->pc = 0x24B9B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B9B8u;
        // 0x24b9bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B9B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B9C0u;
}
