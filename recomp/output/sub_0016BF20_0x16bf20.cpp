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

// Function: sub_0016BF20
// Address: 0x16bf20 - 0x16bf70
void sub_0016BF20_0x16bf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016BF20_0x16bf20");
#endif

    switch (ctx->pc) {
        case 0x16bf50u: goto label_16bf50;
        case 0x16bf58u: goto label_16bf58;
        default: break;
    }

    ctx->pc = 0x16bf20u;

    // 0x16bf20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16bf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16bf24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16bf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16bf28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16bf28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16bf2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16bf2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bf30: 0x8e0201a0  lw          $v0, 0x1A0($s0)
    ctx->pc = 0x16bf30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x16bf34: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x16BF34u;
    {
        const bool branch_taken_0x16bf34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bf34) {
            ctx->pc = 0x16BF38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16BF34u;
            // 0x16bf38: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16BF60u;
            goto label_16bf60;
        }
    }
    ctx->pc = 0x16BF3Cu;
    // 0x16bf3c: 0x8e040198  lw          $a0, 0x198($s0)
    ctx->pc = 0x16bf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x16bf40: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16BF40u;
    {
        const bool branch_taken_0x16bf40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bf40) {
            ctx->pc = 0x16BF50u;
            goto label_16bf50;
        }
    }
    ctx->pc = 0x16BF48u;
    // 0x16bf48: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x16BF48u;
    SET_GPR_U32(ctx, 31, 0x16BF50u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x16BF48u, 0x16BF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BF50u;
label_16bf50:
    // 0x16bf50: 0xc05afdc  jal         func_16BF70
    ctx->pc = 0x16BF50u;
    SET_GPR_U32(ctx, 31, 0x16BF58u);
    ctx->pc = 0x16BF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BF50u;
    // 0x16bf54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BF70u, 0x16BF50u, 0x16BF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BF58u;
label_16bf58:
    // 0x16bf58: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x16bf58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x16bf5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16bf5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16bf60:
    // 0x16bf60: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16bf60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16bf64: 0x3e00008  jr          $ra
    ctx->pc = 0x16BF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BF64u;
        // 0x16bf68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BF64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BF6Cu;
    // 0x16bf6c: 0x0  nop
    ctx->pc = 0x16bf6cu;
    // NOP
    ctx->pc = 0x16bf70u;
}
