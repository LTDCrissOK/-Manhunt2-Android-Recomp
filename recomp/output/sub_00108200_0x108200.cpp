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

// Function: sub_00108200
// Address: 0x108200 - 0x108228
void sub_00108200_0x108200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108200_0x108200");
#endif

    switch (ctx->pc) {
        case 0x108218u: goto label_108218;
        default: break;
    }

    ctx->pc = 0x108200u;

    // 0x108200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x108200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x108204: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x108204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108208: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x108208u;
    {
        const bool branch_taken_0x108208 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10820Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108208u;
        // 0x10820c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108208) {
            ctx->pc = 0x108218u;
            goto label_108218;
        }
    }
    ctx->pc = 0x108210u;
    // 0x108210: 0xc04bfe6  jal         func_12FF98
    ctx->pc = 0x108210u;
    SET_GPR_U32(ctx, 31, 0x108218u);
    ctx->pc = 0x108214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108210u;
    // 0x108214: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FF98u, 0x108210u, 0x108218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108218u;
label_108218:
    // 0x108218: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x108218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10821c: 0x3e00008  jr          $ra
    ctx->pc = 0x10821Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10821Cu;
        // 0x108220: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10821Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108224u;
    // 0x108224: 0x0  nop
    ctx->pc = 0x108224u;
    // NOP
    ctx->pc = 0x108228u;
}
