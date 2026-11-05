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

// Function: sub_003DCF30
// Address: 0x3dcf30 - 0x3dcf60
void sub_003DCF30_0x3dcf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DCF30_0x3dcf30");
#endif

    switch (ctx->pc) {
        case 0x3dcf54u: goto label_3dcf54;
        default: break;
    }

    ctx->pc = 0x3dcf30u;

    // 0x3dcf30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dcf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dcf34: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3dcf34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3dcf38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dcf38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3dcf3c: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x3dcf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x3dcf40: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x3dcf40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3dcf44: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DCF44u;
    {
        const bool branch_taken_0x3dcf44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCF44u;
        // 0x3dcf48: 0xac820044  sw          $v0, 0x44($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcf44) {
            ctx->pc = 0x3DCF54u;
            goto label_3dcf54;
        }
    }
    ctx->pc = 0x3DCF4Cu;
    // 0x3dcf4c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3DCF4Cu;
    SET_GPR_U32(ctx, 31, 0x3DCF54u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3DCF4Cu, 0x3DCF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCF54u;
label_3dcf54:
    // 0x3dcf54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dcf54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dcf58: 0x3e00008  jr          $ra
    ctx->pc = 0x3DCF58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DCF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCF58u;
        // 0x3dcf5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DCF58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DCF60u;
}
