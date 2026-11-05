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

// Function: sub_00338230
// Address: 0x338230 - 0x338270
void sub_00338230_0x338230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338230_0x338230");
#endif

    switch (ctx->pc) {
        case 0x338240u: goto label_338240;
        default: break;
    }

    ctx->pc = 0x338230u;

    // 0x338230: 0x18a0000a  blez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x338230u;
    {
        const bool branch_taken_0x338230 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x338230) {
            ctx->pc = 0x33825Cu;
            goto label_33825c;
        }
    }
    ctx->pc = 0x338238u;
    // 0x338238: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x338238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x33823c: 0x0  nop
    ctx->pc = 0x33823cu;
    // NOP
label_338240:
    // 0x338240: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x338240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x338244: 0x0  nop
    ctx->pc = 0x338244u;
    // NOP
    // 0x338248: 0x0  nop
    ctx->pc = 0x338248u;
    // NOP
    // 0x33824c: 0x0  nop
    ctx->pc = 0x33824cu;
    // NOP
    // 0x338250: 0x14a0fffb  bnez        $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x338250u;
    {
        const bool branch_taken_0x338250 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x338254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338250u;
        // 0x338254: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338250) {
            ctx->pc = 0x338240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338240;
        }
    }
    ctx->pc = 0x338258u;
    // 0x338258: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x338258u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
label_33825c:
    // 0x33825c: 0x3e00008  jr          $ra
    ctx->pc = 0x33825Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33825Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338264u;
    // 0x338264: 0x0  nop
    ctx->pc = 0x338264u;
    // NOP
    // 0x338268: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x338268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33826c: 0x0  nop
    ctx->pc = 0x33826cu;
    // NOP
    ctx->pc = 0x338270u;
}
