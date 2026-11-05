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

// Function: sub_00336A18
// Address: 0x336a18 - 0x336a78
void sub_00336A18_0x336a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336A18_0x336a18");
#endif

    switch (ctx->pc) {
        case 0x336a40u: goto label_336a40;
        case 0x336a60u: goto label_336a60;
        case 0x336a68u: goto label_336a68;
        default: break;
    }

    ctx->pc = 0x336a18u;

    // 0x336a18: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x336a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x336a1c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x336a1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x336a20: 0x8c422c80  lw          $v0, 0x2C80($v0)
    ctx->pc = 0x336a20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482C80u));
    // 0x336a24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x336A24u;
    {
        const bool branch_taken_0x336a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x336A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336A24u;
        // 0x336a28: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336a24) {
            ctx->pc = 0x336A40u;
            goto label_336a40;
        }
    }
    ctx->pc = 0x336A2Cu;
    // 0x336a2c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x336a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x336a30: 0x8c460204  lw          $a2, 0x204($v0)
    ctx->pc = 0x336a30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 516)));
    // 0x336a34: 0x8c4501bc  lw          $a1, 0x1BC($v0)
    ctx->pc = 0x336a34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 444)));
    // 0x336a38: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x336A38u;
    SET_GPR_U32(ctx, 31, 0x336A40u);
    ctx->pc = 0x336A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336A38u;
    // 0x336a3c: 0x2484a358  addiu       $a0, $a0, -0x5CA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x336A38u, 0x336A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336A40u;
label_336a40:
    // 0x336a40: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x336a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x336a44: 0x8c422c7c  lw          $v0, 0x2C7C($v0)
    ctx->pc = 0x336a44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482C7Cu));
    // 0x336a48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x336A48u;
    {
        const bool branch_taken_0x336a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x336A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336A48u;
        // 0x336a4c: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336a48) {
            ctx->pc = 0x336A60u;
            goto label_336a60;
        }
    }
    ctx->pc = 0x336A50u;
    // 0x336a50: 0x8c460204  lw          $a2, 0x204($v0)
    ctx->pc = 0x336a50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 516)));
    // 0x336a54: 0x8c4501bc  lw          $a1, 0x1BC($v0)
    ctx->pc = 0x336a54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 444)));
    // 0x336a58: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x336A58u;
    SET_GPR_U32(ctx, 31, 0x336A60u);
    ctx->pc = 0x336A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336A58u;
    // 0x336a5c: 0x2484a758  addiu       $a0, $a0, -0x58A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x336A58u, 0x336A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336A60u;
label_336a60:
    // 0x336a60: 0xc0cdaa2  jal         func_336A88
    ctx->pc = 0x336A60u;
    SET_GPR_U32(ctx, 31, 0x336A68u);
    ctx->pc = 0x336A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336A60u;
    // 0x336a64: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A88u, 0x336A60u, 0x336A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336A68u;
label_336a68:
    // 0x336a68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x336a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x336A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336A6Cu;
        // 0x336a70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336A74u;
    // 0x336a74: 0x0  nop
    ctx->pc = 0x336a74u;
    // NOP
    ctx->pc = 0x336a78u;
}
