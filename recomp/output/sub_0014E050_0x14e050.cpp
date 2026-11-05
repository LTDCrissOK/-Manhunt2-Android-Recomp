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

// Function: sub_0014E050
// Address: 0x14e050 - 0x14e070
void sub_0014E050_0x14e050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E050_0x14e050");
#endif

    switch (ctx->pc) {
        case 0x14e064u: goto label_14e064;
        default: break;
    }

    ctx->pc = 0x14e050u;

    // 0x14e050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14e050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14e054: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x14e054u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14e058: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14e058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14e05c: 0xc04d88a  jal         func_136228
    ctx->pc = 0x14E05Cu;
    SET_GPR_U32(ctx, 31, 0x14E064u);
    ctx->pc = 0x14E060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E05Cu;
    // 0x14e060: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136228u, 0x14E05Cu, 0x14E064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E064u;
label_14e064:
    // 0x14e064: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14e064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e068: 0x3e00008  jr          $ra
    ctx->pc = 0x14E068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E068u;
        // 0x14e06c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E070u;
}
