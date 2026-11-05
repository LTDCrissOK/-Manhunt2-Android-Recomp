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

// Function: sub_003B8348
// Address: 0x3b8348 - 0x3b8368
void sub_003B8348_0x3b8348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B8348_0x3b8348");
#endif

    switch (ctx->pc) {
        case 0x3b8358u: goto label_3b8358;
        default: break;
    }

    ctx->pc = 0x3b8348u;

    // 0x3b8348: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b8348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b834c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b834cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b8350: 0xc0ee012  jal         func_3B8048
    ctx->pc = 0x3B8350u;
    SET_GPR_U32(ctx, 31, 0x3B8358u);
    ctx->pc = 0x3B8354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8350u;
    // 0x3b8354: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8048u, 0x3B8350u, 0x3B8358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8358u;
label_3b8358:
    // 0x3b8358: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b8358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b835c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B835Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B8360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B835Cu;
        // 0x3b8360: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B835Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B8364u;
    // 0x3b8364: 0x0  nop
    ctx->pc = 0x3b8364u;
    // NOP
    ctx->pc = 0x3b8368u;
}
