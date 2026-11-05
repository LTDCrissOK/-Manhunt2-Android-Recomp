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

// Function: sub_003EC238
// Address: 0x3ec238 - 0x3ec258
void sub_003EC238_0x3ec238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EC238_0x3ec238");
#endif

    switch (ctx->pc) {
        case 0x3ec248u: goto label_3ec248;
        default: break;
    }

    ctx->pc = 0x3ec238u;

    // 0x3ec238: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ec238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ec23c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ec23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ec240: 0xc0fa562  jal         func_3E9588
    ctx->pc = 0x3EC240u;
    SET_GPR_U32(ctx, 31, 0x3EC248u);
    ctx->pc = 0x3E9588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E9588u, 0x3EC240u, 0x3EC248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC248u;
label_3ec248:
    // 0x3ec248: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ec248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ec24c: 0x3e00008  jr          $ra
    ctx->pc = 0x3EC24Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EC250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC24Cu;
        // 0x3ec250: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EC24Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EC254u;
    // 0x3ec254: 0x0  nop
    ctx->pc = 0x3ec254u;
    // NOP
    ctx->pc = 0x3ec258u;
}
