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

// Function: sub_00248CD8
// Address: 0x248cd8 - 0x248d28
void sub_00248CD8_0x248cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248CD8_0x248cd8");
#endif

    switch (ctx->pc) {
        case 0x248cd8u: goto label_248cd8;
        case 0x248cdcu: goto label_248cdc;
        case 0x248ce0u: goto label_248ce0;
        case 0x248ce4u: goto label_248ce4;
        case 0x248ce8u: goto label_248ce8;
        case 0x248cecu: goto label_248cec;
        case 0x248cf0u: goto label_248cf0;
        case 0x248cf4u: goto label_248cf4;
        case 0x248cf8u: goto label_248cf8;
        case 0x248cfcu: goto label_248cfc;
        case 0x248d00u: goto label_248d00;
        case 0x248d04u: goto label_248d04;
        case 0x248d08u: goto label_248d08;
        case 0x248d0cu: goto label_248d0c;
        case 0x248d10u: goto label_248d10;
        case 0x248d14u: goto label_248d14;
        case 0x248d18u: goto label_248d18;
        case 0x248d1cu: goto label_248d1c;
        case 0x248d20u: goto label_248d20;
        case 0x248d24u: goto label_248d24;
        default: break;
    }

    ctx->pc = 0x248cd8u;

label_248cd8:
    // 0x248cd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x248cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_248cdc:
    // 0x248cdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x248cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_248ce0:
    // 0x248ce0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x248ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_248ce4:
    // 0x248ce4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x248ce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_248ce8:
    // 0x248ce8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x248ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_248cec:
    // 0x248cec: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x248cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_248cf0:
    // 0x248cf0: 0xac650160  sw          $a1, 0x160($v1)
    ctx->pc = 0x248cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 352), GPR_U32(ctx, 5));
label_248cf4:
    // 0x248cf4: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x248cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_248cf8:
    // 0x248cf8: 0xac400190  sw          $zero, 0x190($v0)
    ctx->pc = 0x248cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 400), GPR_U32(ctx, 0));
label_248cfc:
    // 0x248cfc: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x248cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_248d00:
    // 0x248d00: 0x8c6201cc  lw          $v0, 0x1CC($v1)
    ctx->pc = 0x248d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 460)));
label_248d04:
    // 0x248d04: 0x40f809  jalr        $v0
label_248d08:
    if (ctx->pc == 0x248D08u) {
        ctx->pc = 0x248D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248D04u;
        // 0x248d08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248D0Cu;
        goto label_248d0c;
    }
    ctx->pc = 0x248D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x248D0Cu);
        ctx->pc = 0x248D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248D04u;
        // 0x248d08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248D04u, 0x248D0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x248D0Cu;
label_248d0c:
    // 0x248d0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248d10:
    // 0x248d10: 0xc08bd96  jal         func_22F658
label_248d14:
    if (ctx->pc == 0x248D14u) {
        ctx->pc = 0x248D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248D10u;
        // 0x248d14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248D18u;
        goto label_248d18;
    }
    ctx->pc = 0x248D10u;
    SET_GPR_U32(ctx, 31, 0x248D18u);
    ctx->pc = 0x248D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248D10u;
    // 0x248d14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x248D10u, 0x248D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248D18u;
label_248d18:
    // 0x248d18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x248d18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_248d1c:
    // 0x248d1c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x248d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_248d20:
    // 0x248d20: 0x3e00008  jr          $ra
label_248d24:
    if (ctx->pc == 0x248D24u) {
        ctx->pc = 0x248D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248D20u;
        // 0x248d24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248D28u;
        goto label_fallthrough_0x248d20;
    }
    ctx->pc = 0x248D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248D20u;
        // 0x248d24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x248d20:
    ctx->pc = 0x248D28u;
}
