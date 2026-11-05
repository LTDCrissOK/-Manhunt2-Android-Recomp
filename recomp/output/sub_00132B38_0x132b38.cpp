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

// Function: sub_00132B38
// Address: 0x132b38 - 0x132b80
void sub_00132B38_0x132b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132B38_0x132b38");
#endif

    switch (ctx->pc) {
        case 0x132b5cu: goto label_132b5c;
        case 0x132b68u: goto label_132b68;
        case 0x132b70u: goto label_132b70;
        default: break;
    }

    ctx->pc = 0x132b38u;

    // 0x132b38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x132b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x132b3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x132b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x132b40: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x132b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x132b44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x132b44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132b48: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x132b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x132b4c: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x132B4Cu;
    {
        const bool branch_taken_0x132b4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x132b4c) {
            ctx->pc = 0x132B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132B4Cu;
            // 0x132b50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132B74u;
            goto label_132b74;
        }
    }
    ctx->pc = 0x132B54u;
    // 0x132b54: 0xc042448  jal         func_109120
    ctx->pc = 0x132B54u;
    SET_GPR_U32(ctx, 31, 0x132B5Cu);
    ctx->pc = 0x109120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109120u, 0x132B54u, 0x132B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132B5Cu;
label_132b5c:
    // 0x132b5c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x132b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x132b60: 0xc04b4a2  jal         func_12D288
    ctx->pc = 0x132B60u;
    SET_GPR_U32(ctx, 31, 0x132B68u);
    ctx->pc = 0x132B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132B60u;
    // 0x132b64: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D288u, 0x132B60u, 0x132B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132B68u;
label_132b68:
    // 0x132b68: 0xc04cc10  jal         func_133040
    ctx->pc = 0x132B68u;
    SET_GPR_U32(ctx, 31, 0x132B70u);
    ctx->pc = 0x132B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132B68u;
    // 0x132b6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133040u, 0x132B68u, 0x132B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132B70u;
label_132b70:
    // 0x132b70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x132b70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_132b74:
    // 0x132b74: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x132b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x132b78: 0x3e00008  jr          $ra
    ctx->pc = 0x132B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132B78u;
        // 0x132b7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132B80u;
}
