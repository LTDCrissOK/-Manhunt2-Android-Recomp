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

// Function: sub_001AF984
// Address: 0x1af984 - 0x1af9a0
void sub_001AF984_0x1af984(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF984_0x1af984");
#endif

    switch (ctx->pc) {
        case 0x1af98cu: goto label_1af98c;
        default: break;
    }

    ctx->pc = 0x1af984u;

    // 0x1af984: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1af984u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af988: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af988u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1af98c:
    // 0x1af98c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1af98cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1af990: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1af990u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af994: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1af994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1af998: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF998u;
        // 0x1af99c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF9A0u;
}
