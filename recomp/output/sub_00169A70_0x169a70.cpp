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

// Function: sub_00169A70
// Address: 0x169a70 - 0x169ac0
void sub_00169A70_0x169a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169A70_0x169a70");
#endif

    switch (ctx->pc) {
        case 0x169a94u: goto label_169a94;
        case 0x169aa4u: goto label_169aa4;
        default: break;
    }

    ctx->pc = 0x169a70u;

    // 0x169a70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x169a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x169a74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x169a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x169a78: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x169a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x169a7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x169a7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169a80: 0x8e0400b4  lw          $a0, 0xB4($s0)
    ctx->pc = 0x169a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x169a84: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x169A84u;
    {
        const bool branch_taken_0x169a84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x169a84) {
            ctx->pc = 0x169A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169A84u;
            // 0x169a88: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169AACu;
            goto label_169aac;
        }
    }
    ctx->pc = 0x169A8Cu;
    // 0x169a8c: 0xc045eee  jal         func_117BB8
    ctx->pc = 0x169A8Cu;
    SET_GPR_U32(ctx, 31, 0x169A94u);
    ctx->pc = 0x117BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BB8u, 0x169A8Cu, 0x169A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169A94u;
label_169a94:
    // 0x169a94: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x169a94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x169a98: 0x8e0500b4  lw          $a1, 0xB4($s0)
    ctx->pc = 0x169a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x169a9c: 0xc042136  jal         func_1084D8
    ctx->pc = 0x169A9Cu;
    SET_GPR_U32(ctx, 31, 0x169AA4u);
    ctx->pc = 0x169AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169A9Cu;
    // 0x169aa0: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084D8u, 0x169A9Cu, 0x169AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169AA4u;
label_169aa4:
    // 0x169aa4: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x169aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x169aa8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x169aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_169aac:
    // 0x169aac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x169aacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169ab0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x169ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x169ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x169AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169AB4u;
        // 0x169ab8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169ABCu;
    // 0x169abc: 0x0  nop
    ctx->pc = 0x169abcu;
    // NOP
    ctx->pc = 0x169ac0u;
}
