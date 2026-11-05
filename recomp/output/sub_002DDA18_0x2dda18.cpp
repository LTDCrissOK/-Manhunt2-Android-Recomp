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

// Function: sub_002DDA18
// Address: 0x2dda18 - 0x2dda58
void sub_002DDA18_0x2dda18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDA18_0x2dda18");
#endif

    switch (ctx->pc) {
        case 0x2dda2cu: goto label_2dda2c;
        case 0x2dda40u: goto label_2dda40;
        default: break;
    }

    ctx->pc = 0x2dda18u;

    // 0x2dda18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dda18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dda1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dda1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dda20: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2dda20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2dda24: 0xc0b7292  jal         func_2DCA48
    ctx->pc = 0x2DDA24u;
    SET_GPR_U32(ctx, 31, 0x2DDA2Cu);
    ctx->pc = 0x2DDA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDA24u;
    // 0x2dda28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCA48u, 0x2DDA24u, 0x2DDA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDA2Cu;
label_2dda2c:
    // 0x2dda2c: 0x8e0400e0  lw          $a0, 0xE0($s0)
    ctx->pc = 0x2dda2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x2dda30: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DDA30u;
    {
        const bool branch_taken_0x2dda30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dda30) {
            ctx->pc = 0x2DDA34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DDA30u;
            // 0x2dda34: 0xae0000e0  sw          $zero, 0xE0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DDA44u;
            goto label_2dda44;
        }
    }
    ctx->pc = 0x2DDA38u;
    // 0x2dda38: 0xc0b884c  jal         func_2E2130
    ctx->pc = 0x2DDA38u;
    SET_GPR_U32(ctx, 31, 0x2DDA40u);
    ctx->pc = 0x2DDA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDA38u;
    // 0x2dda3c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2130u, 0x2DDA38u, 0x2DDA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDA40u;
label_2dda40:
    // 0x2dda40: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x2dda40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_2dda44:
    // 0x2dda44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dda44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dda48: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2dda48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dda4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDA4Cu;
        // 0x2dda50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDA4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDA54u;
    // 0x2dda54: 0x0  nop
    ctx->pc = 0x2dda54u;
    // NOP
    ctx->pc = 0x2dda58u;
}
