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

// Function: sub_00397E18
// Address: 0x397e18 - 0x397e70
void sub_00397E18_0x397e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397E18_0x397e18");
#endif

    switch (ctx->pc) {
        case 0x397e3cu: goto label_397e3c;
        case 0x397e50u: goto label_397e50;
        default: break;
    }

    ctx->pc = 0x397e18u;

    // 0x397e18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x397e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x397e1c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x397e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x397e20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x397e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x397e24: 0x24509208  addiu       $s0, $v0, -0x6DF8
    ctx->pc = 0x397e24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939144));
    // 0x397e28: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x397e28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x409208u));
    // 0x397e2c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x397E2Cu;
    {
        const bool branch_taken_0x397e2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x397E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397E2Cu;
        // 0x397e30: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397e2c) {
            ctx->pc = 0x397E50u;
            goto label_397e50;
        }
    }
    ctx->pc = 0x397E34u;
    // 0x397e34: 0xc0eb684  jal         func_3ADA10
    ctx->pc = 0x397E34u;
    SET_GPR_U32(ctx, 31, 0x397E3Cu);
    ctx->pc = 0x3ADA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADA10u, 0x397E34u, 0x397E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397E3Cu;
label_397e3c:
    // 0x397e3c: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x397e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x397e40: 0x24849220  addiu       $a0, $a0, -0x6DE0
    ctx->pc = 0x397e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939168));
    // 0x397e44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x397e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397e48: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x397E48u;
    SET_GPR_U32(ctx, 31, 0x397E50u);
    ctx->pc = 0x397E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397E48u;
    // 0x397e4c: 0x24060ac0  addiu       $a2, $zero, 0xAC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x397E48u, 0x397E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397E50u;
label_397e50:
    // 0x397e50: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x397e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x397e54: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x397e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x397e58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x397e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x397e5c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x397e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x397e60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x397e60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x397e64: 0x3e00008  jr          $ra
    ctx->pc = 0x397E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397E64u;
        // 0x397e68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397E6Cu;
    // 0x397e6c: 0x0  nop
    ctx->pc = 0x397e6cu;
    // NOP
    ctx->pc = 0x397e70u;
}
