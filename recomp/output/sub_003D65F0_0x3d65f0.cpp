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

// Function: sub_003D65F0
// Address: 0x3d65f0 - 0x3d6638
void sub_003D65F0_0x3d65f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D65F0_0x3d65f0");
#endif

    switch (ctx->pc) {
        case 0x3d6608u: goto label_3d6608;
        default: break;
    }

    ctx->pc = 0x3d65f0u;

    // 0x3d65f0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x3d65f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d65f4: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x3D65F4u;
    {
        const bool branch_taken_0x3d65f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D65F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D65F4u;
        // 0x3d65f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d65f4) {
            ctx->pc = 0x3D6630u;
            goto label_3d6630;
        }
    }
    ctx->pc = 0x3D65FCu;
    // 0x3d65fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3D65FCu;
    {
        const bool branch_taken_0x3d65fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D65FCu;
        // 0x3d6600: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d65fc) {
            ctx->pc = 0x3D6610u;
            goto label_3d6610;
        }
    }
    ctx->pc = 0x3D6604u;
    // 0x3d6604: 0x0  nop
    ctx->pc = 0x3d6604u;
    // NOP
label_3d6608:
    // 0x3d6608: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3d6608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d660c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3d660cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3d6610:
    // 0x3d6610: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D6610u;
    {
        const bool branch_taken_0x3d6610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6610u;
        // 0x3d6614: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6610) {
            ctx->pc = 0x3D6620u;
            goto label_3d6620;
        }
    }
    ctx->pc = 0x3D6618u;
    // 0x3d6618: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3d6618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3d661c: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x3d661cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_3d6620:
    // 0x3d6620: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x3d6620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3d6624: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3d6624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3d6628: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3D6628u;
    {
        const bool branch_taken_0x3d6628 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D662Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6628u;
        // 0x3d662c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6628) {
            ctx->pc = 0x3D6608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d6608;
        }
    }
    ctx->pc = 0x3D6630u;
label_3d6630:
    // 0x3d6630: 0x3e00008  jr          $ra
    ctx->pc = 0x3D6630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D6634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6630u;
        // 0x3d6634: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D6630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D6638u;
}
