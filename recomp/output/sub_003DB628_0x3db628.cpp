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

// Function: sub_003DB628
// Address: 0x3db628 - 0x3db658
void sub_003DB628_0x3db628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB628_0x3db628");
#endif

    switch (ctx->pc) {
        case 0x3db64cu: goto label_3db64c;
        default: break;
    }

    ctx->pc = 0x3db628u;

    // 0x3db628: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3db628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3db62c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3db62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3db630: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3db630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3db634: 0x24420338  addiu       $v0, $v0, 0x338
    ctx->pc = 0x3db634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 824));
    // 0x3db638: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x3db638u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3db63c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DB63Cu;
    {
        const bool branch_taken_0x3db63c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB63Cu;
        // 0x3db640: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db63c) {
            ctx->pc = 0x3DB64Cu;
            goto label_3db64c;
        }
    }
    ctx->pc = 0x3DB644u;
    // 0x3db644: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3DB644u;
    SET_GPR_U32(ctx, 31, 0x3DB64Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3DB644u, 0x3DB64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB64Cu;
label_3db64c:
    // 0x3db64c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3db64cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3db650: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB650u;
        // 0x3db654: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB658u;
}
