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

// Function: sub_00337A00
// Address: 0x337a00 - 0x337a48
void sub_00337A00_0x337a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337A00_0x337a00");
#endif

    switch (ctx->pc) {
        case 0x337a28u: goto label_337a28;
        default: break;
    }

    ctx->pc = 0x337a00u;

    // 0x337a00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x337a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x337a04: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x337a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x337a08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x337a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x337a0c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x337a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x337a10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x337a10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337a14: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x337a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x337a18: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x337a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x337a1c: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x337a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x337a20: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x337A20u;
    SET_GPR_U32(ctx, 31, 0x337A28u);
    ctx->pc = 0x337A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337A20u;
    // 0x337a24: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x337A20u, 0x337A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337A28u;
label_337a28:
    // 0x337a28: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x337a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x337a2c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x337a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x337a30: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x337a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x337a34: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x337a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x337a38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x337a38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x337a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x337A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337A3Cu;
        // 0x337a40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337A44u;
    // 0x337a44: 0x0  nop
    ctx->pc = 0x337a44u;
    // NOP
    ctx->pc = 0x337a48u;
}
