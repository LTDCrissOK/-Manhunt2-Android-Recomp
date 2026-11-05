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

// Function: sub_002C0080
// Address: 0x2c0080 - 0x2c00b0
void sub_002C0080_0x2c0080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0080_0x2c0080");
#endif

    switch (ctx->pc) {
        case 0x2c00a4u: goto label_2c00a4;
        default: break;
    }

    ctx->pc = 0x2c0080u;

    // 0x2c0080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c0080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c0084: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2c0084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2c0088: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c0088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c008c: 0x24423d28  addiu       $v0, $v0, 0x3D28
    ctx->pc = 0x2c008cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15656));
    // 0x2c0090: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x2c0090u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2c0094: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0094u;
    {
        const bool branch_taken_0x2c0094 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0094u;
        // 0x2c0098: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0094) {
            ctx->pc = 0x2C00A4u;
            goto label_2c00a4;
        }
    }
    ctx->pc = 0x2C009Cu;
    // 0x2c009c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2C009Cu;
    SET_GPR_U32(ctx, 31, 0x2C00A4u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2C009Cu, 0x2C00A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C00A4u;
label_2c00a4:
    // 0x2c00a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c00a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c00a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C00A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C00ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C00A8u;
        // 0x2c00ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C00A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C00B0u;
}
