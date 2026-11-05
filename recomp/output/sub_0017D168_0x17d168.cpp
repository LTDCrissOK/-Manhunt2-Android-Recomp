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

// Function: sub_0017D168
// Address: 0x17d168 - 0x17d198
void sub_0017D168_0x17d168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D168_0x17d168");
#endif

    switch (ctx->pc) {
        case 0x17d17cu: goto label_17d17c;
        default: break;
    }

    ctx->pc = 0x17d168u;

    // 0x17d168: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17d168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17d16c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17d16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17d170: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17d170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17d174: 0xc05f5a8  jal         func_17D6A0
    ctx->pc = 0x17D174u;
    SET_GPR_U32(ctx, 31, 0x17D17Cu);
    ctx->pc = 0x17D178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D174u;
    // 0x17d178: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D6A0u, 0x17D174u, 0x17D17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D17Cu;
label_17d17c:
    // 0x17d17c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17d17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d180: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17d180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17d184: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x17d184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x17d188: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17d188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d18c: 0x3e00008  jr          $ra
    ctx->pc = 0x17D18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D18Cu;
        // 0x17d190: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D18Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D194u;
    // 0x17d194: 0x0  nop
    ctx->pc = 0x17d194u;
    // NOP
    ctx->pc = 0x17d198u;
}
