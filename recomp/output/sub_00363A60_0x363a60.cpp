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

// Function: sub_00363A60
// Address: 0x363a60 - 0x363aa8
void sub_00363A60_0x363a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363A60_0x363a60");
#endif

    switch (ctx->pc) {
        case 0x363a60u: goto label_363a60;
        case 0x363a64u: goto label_363a64;
        case 0x363a68u: goto label_363a68;
        case 0x363a6cu: goto label_363a6c;
        case 0x363a70u: goto label_363a70;
        case 0x363a74u: goto label_363a74;
        case 0x363a78u: goto label_363a78;
        case 0x363a7cu: goto label_363a7c;
        case 0x363a80u: goto label_363a80;
        case 0x363a84u: goto label_363a84;
        case 0x363a88u: goto label_363a88;
        case 0x363a8cu: goto label_363a8c;
        case 0x363a90u: goto label_363a90;
        case 0x363a94u: goto label_363a94;
        case 0x363a98u: goto label_363a98;
        case 0x363a9cu: goto label_363a9c;
        case 0x363aa0u: goto label_363aa0;
        case 0x363aa4u: goto label_363aa4;
        default: break;
    }

    ctx->pc = 0x363a60u;

label_363a60:
    // 0x363a60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x363a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_363a64:
    // 0x363a64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x363a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_363a68:
    // 0x363a68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x363a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_363a6c:
    // 0x363a6c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x363a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_363a70:
    // 0x363a70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x363a70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_363a74:
    // 0x363a74: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x363a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_363a78:
    // 0x363a78: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x363a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_363a7c:
    // 0x363a7c: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x363a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_363a80:
    // 0x363a80: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x363a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_363a84:
    // 0x363a84: 0x40f809  jalr        $v0
label_363a88:
    if (ctx->pc == 0x363A88u) {
        ctx->pc = 0x363A8Cu;
        goto label_363a8c;
    }
    ctx->pc = 0x363A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x363A8Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363A84u, 0x363A8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x363A8Cu;
label_363a8c:
    // 0x363a8c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x363a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_363a90:
    // 0x363a90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x363a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_363a94:
    // 0x363a94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x363a94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_363a98:
    // 0x363a98: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x363a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_363a9c:
    // 0x363a9c: 0x3e00008  jr          $ra
label_363aa0:
    if (ctx->pc == 0x363AA0u) {
        ctx->pc = 0x363AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363A9Cu;
        // 0x363aa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x363AA4u;
        goto label_363aa4;
    }
    ctx->pc = 0x363A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363A9Cu;
        // 0x363aa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363AA4u;
label_363aa4:
    // 0x363aa4: 0x0  nop
    ctx->pc = 0x363aa4u;
    // NOP
    ctx->pc = 0x363aa8u;
}
