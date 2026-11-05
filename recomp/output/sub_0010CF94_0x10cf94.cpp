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

// Function: sub_0010CF94
// Address: 0x10cf94 - 0x10cfb0
void sub_0010CF94_0x10cf94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CF94_0x10cf94");
#endif

    switch (ctx->pc) {
        case 0x10cf98u: goto label_10cf98;
        default: break;
    }

    ctx->pc = 0x10cf94u;

    // 0x10cf94: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10cf94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10cf98:
    // 0x10cf98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10cf98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10cf9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10cf9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10cfa0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10cfa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10cfa4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x10cfa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10cfa8: 0x3e00008  jr          $ra
    ctx->pc = 0x10CFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CFA8u;
        // 0x10cfac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CFB0u;
}
