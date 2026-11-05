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

// Function: sub_003D00E8
// Address: 0x3d00e8 - 0x3d0120
void sub_003D00E8_0x3d00e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D00E8_0x3d00e8");
#endif

    switch (ctx->pc) {
        case 0x3d00f8u: goto label_3d00f8;
        default: break;
    }

    ctx->pc = 0x3d00e8u;

    // 0x3d00e8: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x3d00e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x3d00ec: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x3D00ECu;
    {
        const bool branch_taken_0x3d00ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D00F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D00ECu;
        // 0x3d00f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d00ec) {
            ctx->pc = 0x3D0118u;
            goto label_3d0118;
        }
    }
    ctx->pc = 0x3D00F4u;
    // 0x3d00f4: 0x0  nop
    ctx->pc = 0x3d00f4u;
    // NOP
label_3d00f8:
    // 0x3d00f8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3d00f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3d00fc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3d00fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3d0100: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3d0100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3d0104: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x3d0104u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3d0108: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3d0108u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x3d010c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3d010cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3d0110: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3D0110u;
    {
        const bool branch_taken_0x3d0110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d0110) {
            ctx->pc = 0x3D00F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d00f8;
        }
    }
    ctx->pc = 0x3D0118u;
label_3d0118:
    // 0x3d0118: 0x3e00008  jr          $ra
    ctx->pc = 0x3D0118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0118u;
        // 0x3d011c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D0118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D0120u;
}
