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

// Function: sub_0039C130
// Address: 0x39c130 - 0x39c160
void sub_0039C130_0x39c130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C130_0x39c130");
#endif

    switch (ctx->pc) {
        case 0x39c148u: goto label_39c148;
        default: break;
    }

    ctx->pc = 0x39c130u;

    // 0x39c130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39c130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39c134: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39C134u;
    {
        const bool branch_taken_0x39c134 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x39C138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C134u;
        // 0x39c138: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c134) {
            ctx->pc = 0x39C150u;
            goto label_39c150;
        }
    }
    ctx->pc = 0x39C13Cu;
    // 0x39c13c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39c13cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x39c140: 0xc0ec0fe  jal         func_3B03F8
    ctx->pc = 0x39C140u;
    SET_GPR_U32(ctx, 31, 0x39C148u);
    ctx->pc = 0x39C144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C140u;
    // 0x39c144: 0x2484b558  addiu       $a0, $a0, -0x4AA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B03F8u, 0x39C140u, 0x39C148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C148u;
label_39c148:
    // 0x39c148: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x39C148u;
    {
        const bool branch_taken_0x39c148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C148u;
        // 0x39c14c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c148) {
            ctx->pc = 0x39C154u;
            goto label_39c154;
        }
    }
    ctx->pc = 0x39C150u;
label_39c150:
    // 0x39c150: 0x84820046  lh          $v0, 0x46($a0)
    ctx->pc = 0x39c150u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 70)));
label_39c154:
    // 0x39c154: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39c154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39c158: 0x3e00008  jr          $ra
    ctx->pc = 0x39C158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C158u;
        // 0x39c15c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C160u;
}
