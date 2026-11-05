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

// Function: sub_001DEC58
// Address: 0x1dec58 - 0x1dec80
void sub_001DEC58_0x1dec58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DEC58_0x1dec58");
#endif

    switch (ctx->pc) {
        case 0x1dec74u: goto label_1dec74;
        default: break;
    }

    ctx->pc = 0x1dec58u;

    // 0x1dec58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dec58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dec5c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1dec5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dec60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dec60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dec64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dec64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dec68: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1dec68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dec6c: 0xc077cda  jal         func_1DF368
    ctx->pc = 0x1DEC6Cu;
    SET_GPR_U32(ctx, 31, 0x1DEC74u);
    ctx->pc = 0x1DEC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEC6Cu;
    // 0x1dec70: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF368u, 0x1DEC6Cu, 0x1DEC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEC74u;
label_1dec74:
    // 0x1dec74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dec74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dec78: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEC78u;
        // 0x1dec7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEC80u;
}
