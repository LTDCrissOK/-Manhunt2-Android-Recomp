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

// Function: sub_0030C538
// Address: 0x30c538 - 0x30c560
void sub_0030C538_0x30c538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C538_0x30c538");
#endif

    switch (ctx->pc) {
        case 0x30c550u: goto label_30c550;
        default: break;
    }

    ctx->pc = 0x30c538u;

    // 0x30c538: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30c538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30c53c: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x30c53cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x30c540: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30c540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30c544: 0x24a5c428  addiu       $a1, $a1, -0x3BD8
    ctx->pc = 0x30c544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951976));
    // 0x30c548: 0xc0c3164  jal         func_30C590
    ctx->pc = 0x30C548u;
    SET_GPR_U32(ctx, 31, 0x30C550u);
    ctx->pc = 0x30C54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C548u;
    // 0x30c54c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C590u, 0x30C548u, 0x30C550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C550u;
label_30c550:
    // 0x30c550: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30c550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c554: 0x3e00008  jr          $ra
    ctx->pc = 0x30C554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C554u;
        // 0x30c558: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C55Cu;
    // 0x30c55c: 0x0  nop
    ctx->pc = 0x30c55cu;
    // NOP
    ctx->pc = 0x30c560u;
}
