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

// Function: sub_003AA3A0
// Address: 0x3aa3a0 - 0x3aa400
void sub_003AA3A0_0x3aa3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA3A0_0x3aa3a0");
#endif

    ctx->pc = 0x3aa3a0u;

    // 0x3aa3a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3aa3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3aa3a4: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3AA3A4u;
    {
        const bool branch_taken_0x3aa3a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA3A4u;
        // 0x3aa3a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa3a4) {
            ctx->pc = 0x3AA3C8u;
            goto label_3aa3c8;
        }
    }
    ctx->pc = 0x3AA3ACu;
    // 0x3aa3ac: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3aa3acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3aa3b0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3aa3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3aa3b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3aa3b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aa3b8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x3aa3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x3aa3bc: 0x24a5ed90  addiu       $a1, $a1, -0x1270
    ctx->pc = 0x3aa3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962576));
    // 0x3aa3c0: 0x80ea7ec  j           func_3A9FB0
    ctx->pc = 0x3AA3C0u;
    ctx->pc = 0x3AA3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA3C0u;
    // 0x3aa3c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9FB0u;
    sub_003A9FB0_0x3a9fb0(rdram, ctx, runtime); return;
    ctx->pc = 0x3AA3C8u;
label_3aa3c8:
    // 0x3aa3c8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3aa3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3aa3cc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3AA3CCu;
    {
        const bool branch_taken_0x3aa3cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA3CCu;
        // 0x3aa3d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa3cc) {
            ctx->pc = 0x3AA3F0u;
            goto label_3aa3f0;
        }
    }
    ctx->pc = 0x3AA3D4u;
    // 0x3aa3d4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3aa3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3aa3d8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3aa3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3aa3dc: 0x2484ee10  addiu       $a0, $a0, -0x11F0
    ctx->pc = 0x3aa3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962704));
    // 0x3aa3e0: 0x24a5edc0  addiu       $a1, $a1, -0x1240
    ctx->pc = 0x3aa3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962624));
    // 0x3aa3e4: 0x80ea7ec  j           func_3A9FB0
    ctx->pc = 0x3AA3E4u;
    ctx->pc = 0x3AA3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA3E4u;
    // 0x3aa3e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9FB0u;
    sub_003A9FB0_0x3a9fb0(rdram, ctx, runtime); return;
    ctx->pc = 0x3AA3ECu;
    // 0x3aa3ec: 0x0  nop
    ctx->pc = 0x3aa3ecu;
    // NOP
label_3aa3f0:
    // 0x3aa3f0: 0xac860020  sw          $a2, 0x20($a0)
    ctx->pc = 0x3aa3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 6));
    // 0x3aa3f4: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x3aa3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x3aa3f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3AA3F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AA3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA3F8u;
        // 0x3aa3fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA3F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AA400u;
}
