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

// Function: sub_003E00B0
// Address: 0x3e00b0 - 0x3e00f0
void sub_003E00B0_0x3e00b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E00B0_0x3e00b0");
#endif

    switch (ctx->pc) {
        case 0x3e00d4u: goto label_3e00d4;
        default: break;
    }

    ctx->pc = 0x3e00b0u;

    // 0x3e00b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e00b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e00b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e00b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e00b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3e00b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3e00bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e00bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e00c0: 0x8e042040  lw          $a0, 0x2040($s0)
    ctx->pc = 0x3e00c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8256)));
    // 0x3e00c4: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E00C4u;
    {
        const bool branch_taken_0x3e00c4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3E00C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E00C4u;
        // 0x3e00c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e00c4) {
            ctx->pc = 0x3E00D8u;
            goto label_3e00d8;
        }
    }
    ctx->pc = 0x3E00CCu;
    // 0x3e00cc: 0xc0f3916  jal         func_3CE458
    ctx->pc = 0x3E00CCu;
    SET_GPR_U32(ctx, 31, 0x3E00D4u);
    ctx->pc = 0x3CE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CE458u, 0x3E00CCu, 0x3E00D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E00D4u;
label_3e00d4:
    // 0x3e00d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3e00d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3e00d8:
    // 0x3e00d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3e00d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e00dc: 0xae022040  sw          $v0, 0x2040($s0)
    ctx->pc = 0x3e00dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8256), GPR_U32(ctx, 2));
    // 0x3e00e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e00e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e00e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3E00E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E00E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E00E4u;
        // 0x3e00e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E00E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E00ECu;
    // 0x3e00ec: 0x0  nop
    ctx->pc = 0x3e00ecu;
    // NOP
    ctx->pc = 0x3e00f0u;
}
