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

// Function: sub_002ACF68
// Address: 0x2acf68 - 0x2acfa0
void sub_002ACF68_0x2acf68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ACF68_0x2acf68");
#endif

    switch (ctx->pc) {
        case 0x2acf8cu: goto label_2acf8c;
        default: break;
    }

    ctx->pc = 0x2acf68u;

    // 0x2acf68: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2acf68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2acf6c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2acf6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2acf70: 0x24423898  addiu       $v0, $v0, 0x3898
    ctx->pc = 0x2acf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14488));
    // 0x2acf74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2acf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2acf78: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x2acf78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2acf7c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ACF7Cu;
    {
        const bool branch_taken_0x2acf7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACF7Cu;
        // 0x2acf80: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acf7c) {
            ctx->pc = 0x2ACF8Cu;
            goto label_2acf8c;
        }
    }
    ctx->pc = 0x2ACF84u;
    // 0x2acf84: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2ACF84u;
    SET_GPR_U32(ctx, 31, 0x2ACF8Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2ACF84u, 0x2ACF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACF8Cu;
label_2acf8c:
    // 0x2acf8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2acf8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2acf90: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACF90u;
        // 0x2acf94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACF98u;
    // 0x2acf98: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2acf98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2acf9c: 0x0  nop
    ctx->pc = 0x2acf9cu;
    // NOP
    ctx->pc = 0x2acfa0u;
}
