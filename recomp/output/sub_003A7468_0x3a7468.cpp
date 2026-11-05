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

// Function: sub_003A7468
// Address: 0x3a7468 - 0x3a7498
void sub_003A7468_0x3a7468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A7468_0x3a7468");
#endif

    ctx->pc = 0x3a7468u;

    // 0x3a7468: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a7468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a746c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A746Cu;
    {
        const bool branch_taken_0x3a746c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A7470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A746Cu;
        // 0x3a7470: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a746c) {
            ctx->pc = 0x3A7488u;
            goto label_3a7488;
        }
    }
    ctx->pc = 0x3A7474u;
    // 0x3a7474: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a7474u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a7478: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a7478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a747c: 0x2484e410  addiu       $a0, $a0, -0x1BF0
    ctx->pc = 0x3a747cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960144));
    // 0x3a7480: 0x80e9d40  j           func_3A7500
    ctx->pc = 0x3A7480u;
    ctx->pc = 0x3A7484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7480u;
    // 0x3a7484: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7500u;
    sub_003A7500_0x3a7500(rdram, ctx, runtime); return;
    ctx->pc = 0x3A7488u;
label_3a7488:
    // 0x3a7488: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a7488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a748c: 0xa0850003  sb          $a1, 0x3($a0)
    ctx->pc = 0x3a748cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x3a7490: 0x3e00008  jr          $ra
    ctx->pc = 0x3A7490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7490u;
        // 0x3a7494: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A7498u;
}
