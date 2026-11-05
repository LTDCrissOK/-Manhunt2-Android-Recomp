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

// Function: sub_002477F0
// Address: 0x2477f0 - 0x247820
void sub_002477F0_0x2477f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002477F0_0x2477f0");
#endif

    switch (ctx->pc) {
        case 0x247814u: goto label_247814;
        default: break;
    }

    ctx->pc = 0x2477f0u;

    // 0x2477f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2477f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2477f4: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2477f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2477f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2477f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2477fc: 0x8c840334  lw          $a0, 0x334($a0)
    ctx->pc = 0x2477fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
    // 0x247800: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x247800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x247804: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x247804u;
    {
        const bool branch_taken_0x247804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x247808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247804u;
        // 0x247808: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247804) {
            ctx->pc = 0x247818u;
            goto label_247818;
        }
    }
    ctx->pc = 0x24780Cu;
    // 0x24780c: 0xc0921e8  jal         func_2487A0
    ctx->pc = 0x24780Cu;
    SET_GPR_U32(ctx, 31, 0x247814u);
    ctx->pc = 0x2487A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2487A0u, 0x24780Cu, 0x247814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247814u;
label_247814:
    // 0x247814: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x247814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_247818:
    // 0x247818: 0x3e00008  jr          $ra
    ctx->pc = 0x247818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24781Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247818u;
        // 0x24781c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247820u;
}
