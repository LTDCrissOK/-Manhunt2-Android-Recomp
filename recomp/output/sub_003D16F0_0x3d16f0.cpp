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

// Function: sub_003D16F0
// Address: 0x3d16f0 - 0x3d1738
void sub_003D16F0_0x3d16f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D16F0_0x3d16f0");
#endif

    switch (ctx->pc) {
        case 0x3d16f8u: goto label_3d16f8;
        case 0x3d1700u: goto label_3d1700;
        case 0x3d1710u: goto label_3d1710;
        default: break;
    }

    ctx->pc = 0x3d16f0u;

    // 0x3d16f0: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x3d16f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x3d16f4: 0xc  syscall     0
    ctx->pc = 0x3d16f4u;
    ctx->pc = 0x3D16F8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3d16f8:
    // 0x3d16f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D16F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D16F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D1700u;
label_3d1700:
    // 0x3d1700: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x3d1700u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x3d1704: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x3D1704u;
    {
        const bool branch_taken_0x3d1704 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1704u;
        // 0x3d1708: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1704) {
            ctx->pc = 0x3D1730u;
            goto label_3d1730;
        }
    }
    ctx->pc = 0x3D170Cu;
    // 0x3d170c: 0x0  nop
    ctx->pc = 0x3d170cu;
    // NOP
label_3d1710:
    // 0x3d1710: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3d1710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3d1714: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3d1714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3d1718: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3d1718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3d171c: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x3d171cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3d1720: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3d1720u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x3d1724: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3d1724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3d1728: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3D1728u;
    {
        const bool branch_taken_0x3d1728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d1728) {
            ctx->pc = 0x3D1710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d1710;
        }
    }
    ctx->pc = 0x3D1730u;
label_3d1730:
    // 0x3d1730: 0x3e00008  jr          $ra
    ctx->pc = 0x3D1730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D1734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1730u;
        // 0x3d1734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D1730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D1738u;
}
