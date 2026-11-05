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

// Function: sub_003D04D8
// Address: 0x3d04d8 - 0x3d0520
void sub_003D04D8_0x3d04d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D04D8_0x3d04d8");
#endif

    switch (ctx->pc) {
        case 0x3d04e0u: goto label_3d04e0;
        case 0x3d04e8u: goto label_3d04e8;
        case 0x3d04f8u: goto label_3d04f8;
        default: break;
    }

    ctx->pc = 0x3d04d8u;

    // 0x3d04d8: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x3d04d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x3d04dc: 0xc  syscall     0
    ctx->pc = 0x3d04dcu;
    ctx->pc = 0x3D04E0u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3d04e0:
    // 0x3d04e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3D04E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D04E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D04E8u;
label_3d04e8:
    // 0x3d04e8: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x3d04e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x3d04ec: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x3D04ECu;
    {
        const bool branch_taken_0x3d04ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D04F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D04ECu;
        // 0x3d04f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d04ec) {
            ctx->pc = 0x3D0518u;
            goto label_3d0518;
        }
    }
    ctx->pc = 0x3D04F4u;
    // 0x3d04f4: 0x0  nop
    ctx->pc = 0x3d04f4u;
    // NOP
label_3d04f8:
    // 0x3d04f8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3d04f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3d04fc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3d04fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3d0500: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3d0500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3d0504: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x3d0504u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3d0508: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3d0508u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x3d050c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3d050cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3d0510: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3D0510u;
    {
        const bool branch_taken_0x3d0510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d0510) {
            ctx->pc = 0x3D04F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d04f8;
        }
    }
    ctx->pc = 0x3D0518u;
label_3d0518:
    // 0x3d0518: 0x3e00008  jr          $ra
    ctx->pc = 0x3D0518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0518u;
        // 0x3d051c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D0518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D0520u;
}
