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

// Function: sub_00254B20
// Address: 0x254b20 - 0x254b78
void sub_00254B20_0x254b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254B20_0x254b20");
#endif

    switch (ctx->pc) {
        case 0x254b44u: goto label_254b44;
        case 0x254b60u: goto label_254b60;
        default: break;
    }

    ctx->pc = 0x254b20u;

    // 0x254b20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x254b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x254b24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x254b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x254b28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x254b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x254b2c: 0x8c831060  lw          $v1, 0x1060($a0)
    ctx->pc = 0x254b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4192)));
    // 0x254b30: 0x38620011  xori        $v0, $v1, 0x11
    ctx->pc = 0x254b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)17);
    // 0x254b34: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x254B34u;
    {
        const bool branch_taken_0x254b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254B34u;
        // 0x254b38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254b34) {
            ctx->pc = 0x254B4Cu;
            goto label_254b4c;
        }
    }
    ctx->pc = 0x254B3Cu;
    // 0x254b3c: 0xc095326  jal         func_254C98
    ctx->pc = 0x254B3Cu;
    SET_GPR_U32(ctx, 31, 0x254B44u);
    ctx->pc = 0x254C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254C98u, 0x254B3Cu, 0x254B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254B44u;
label_254b44:
    // 0x254b44: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x254B44u;
    {
        const bool branch_taken_0x254b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254B44u;
        // 0x254b48: 0xac500060  sw          $s0, 0x60($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254b44) {
            ctx->pc = 0x254B64u;
            goto label_254b64;
        }
    }
    ctx->pc = 0x254B4Cu;
label_254b4c:
    // 0x254b4c: 0x38620015  xori        $v0, $v1, 0x15
    ctx->pc = 0x254b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)21);
    // 0x254b50: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x254B50u;
    {
        const bool branch_taken_0x254b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x254b50) {
            ctx->pc = 0x254B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254B50u;
            // 0x254b54: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254B68u;
            goto label_254b68;
        }
    }
    ctx->pc = 0x254B58u;
    // 0x254b58: 0xc095336  jal         func_254CD8
    ctx->pc = 0x254B58u;
    SET_GPR_U32(ctx, 31, 0x254B60u);
    ctx->pc = 0x254CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254CD8u, 0x254B58u, 0x254B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254B60u;
label_254b60:
    // 0x254b60: 0xac500078  sw          $s0, 0x78($v0)
    ctx->pc = 0x254b60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 16));
label_254b64:
    // 0x254b64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x254b64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_254b68:
    // 0x254b68: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x254b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x254b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x254B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254B6Cu;
        // 0x254b70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254B74u;
    // 0x254b74: 0x0  nop
    ctx->pc = 0x254b74u;
    // NOP
    ctx->pc = 0x254b78u;
}
