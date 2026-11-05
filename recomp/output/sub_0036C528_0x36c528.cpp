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

// Function: sub_0036C528
// Address: 0x36c528 - 0x36c560
void sub_0036C528_0x36c528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C528_0x36c528");
#endif

    switch (ctx->pc) {
        case 0x36c538u: goto label_36c538;
        case 0x36c544u: goto label_36c544;
        case 0x36c550u: goto label_36c550;
        default: break;
    }

    ctx->pc = 0x36c528u;

    // 0x36c528: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c52c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36c52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36c530: 0xc0db1c0  jal         func_36C700
    ctx->pc = 0x36C530u;
    SET_GPR_U32(ctx, 31, 0x36C538u);
    ctx->pc = 0x36C700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C700u, 0x36C530u, 0x36C538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C538u;
label_36c538:
    // 0x36c538: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x36c538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36c53c: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x36C53Cu;
    SET_GPR_U32(ctx, 31, 0x36C544u);
    ctx->pc = 0x36C540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C53Cu;
    // 0x36c540: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x36C53Cu, 0x36C544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C544u;
label_36c544:
    // 0x36c544: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x36c544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x36c548: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x36C548u;
    SET_GPR_U32(ctx, 31, 0x36C550u);
    ctx->pc = 0x36C54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C548u;
    // 0x36c54c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x36C548u, 0x36C550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C550u;
label_36c550:
    // 0x36c550: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36c550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c554: 0x3e00008  jr          $ra
    ctx->pc = 0x36C554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C554u;
        // 0x36c558: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C55Cu;
    // 0x36c55c: 0x0  nop
    ctx->pc = 0x36c55cu;
    // NOP
    ctx->pc = 0x36c560u;
}
