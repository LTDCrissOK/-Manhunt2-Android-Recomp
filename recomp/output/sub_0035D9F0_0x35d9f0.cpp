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

// Function: sub_0035D9F0
// Address: 0x35d9f0 - 0x35da50
void sub_0035D9F0_0x35d9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D9F0_0x35d9f0");
#endif

    switch (ctx->pc) {
        case 0x35da38u: goto label_35da38;
        default: break;
    }

    ctx->pc = 0x35d9f0u;

    // 0x35d9f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35d9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35d9f4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x35d9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x35d9f8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35d9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x35d9fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35d9fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35da00: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x35da00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x35da04: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x35DA04u;
    {
        const bool branch_taken_0x35da04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DA04u;
        // 0x35da08: 0x3c04005c  lui         $a0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35da04) {
            ctx->pc = 0x35DA40u;
            goto label_35da40;
        }
    }
    ctx->pc = 0x35DA0Cu;
    // 0x35da0c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x35da0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x35da10: 0x2484dc30  addiu       $a0, $a0, -0x23D0
    ctx->pc = 0x35da10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958128));
    // 0x35da14: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x35da14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x35da18: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x35da18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x35da1c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x35da1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35da20: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x35da20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x35da24: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x35da24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35da28: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x35da28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x35da2c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x35da2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x35da30: 0xc0fbcc6  jal         func_3EF318
    ctx->pc = 0x35DA30u;
    SET_GPR_U32(ctx, 31, 0x35DA38u);
    ctx->pc = 0x35DA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DA30u;
    // 0x35da34: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EF318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EF318u, 0x35DA30u, 0x35DA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DA38u;
label_35da38:
    // 0x35da38: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x35da38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x35da3c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x35da3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_35da40:
    // 0x35da40: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x35da40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35da44: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35da44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35da48: 0x3e00008  jr          $ra
    ctx->pc = 0x35DA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35DA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DA48u;
        // 0x35da4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35DA48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35DA50u;
}
