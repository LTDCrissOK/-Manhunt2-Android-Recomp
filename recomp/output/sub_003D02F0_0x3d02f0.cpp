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

// Function: sub_003D02F0
// Address: 0x3d02f0 - 0x3d0338
void sub_003D02F0_0x3d02f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D02F0_0x3d02f0");
#endif

    switch (ctx->pc) {
        case 0x3d02f8u: goto label_3d02f8;
        case 0x3d0300u: goto label_3d0300;
        case 0x3d0310u: goto label_3d0310;
        default: break;
    }

    ctx->pc = 0x3d02f0u;

    // 0x3d02f0: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x3d02f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x3d02f4: 0xc  syscall     0
    ctx->pc = 0x3d02f4u;
    ctx->pc = 0x3D02F8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3d02f8:
    // 0x3d02f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D02F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D02F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D0300u;
label_3d0300:
    // 0x3d0300: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x3d0300u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x3d0304: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x3D0304u;
    {
        const bool branch_taken_0x3d0304 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0304u;
        // 0x3d0308: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0304) {
            ctx->pc = 0x3D0330u;
            goto label_3d0330;
        }
    }
    ctx->pc = 0x3D030Cu;
    // 0x3d030c: 0x0  nop
    ctx->pc = 0x3d030cu;
    // NOP
label_3d0310:
    // 0x3d0310: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3d0310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3d0314: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3d0314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3d0318: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3d0318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3d031c: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x3d031cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3d0320: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3d0320u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x3d0324: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3d0324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3d0328: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3D0328u;
    {
        const bool branch_taken_0x3d0328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d0328) {
            ctx->pc = 0x3D0310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d0310;
        }
    }
    ctx->pc = 0x3D0330u;
label_3d0330:
    // 0x3d0330: 0x3e00008  jr          $ra
    ctx->pc = 0x3D0330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D0334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0330u;
        // 0x3d0334: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D0330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D0338u;
}
