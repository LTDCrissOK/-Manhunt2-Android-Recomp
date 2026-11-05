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

// Function: sub_003AA430
// Address: 0x3aa430 - 0x3aa498
void sub_003AA430_0x3aa430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA430_0x3aa430");
#endif

    ctx->pc = 0x3aa430u;

    // 0x3aa430: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3aa430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3aa434: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3AA434u;
    {
        const bool branch_taken_0x3aa434 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA434u;
        // 0x3aa438: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa434) {
            ctx->pc = 0x3AA458u;
            goto label_3aa458;
        }
    }
    ctx->pc = 0x3AA43Cu;
    // 0x3aa43c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3aa43cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3aa440: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3aa440u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3aa444: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3aa444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aa448: 0x2484ee20  addiu       $a0, $a0, -0x11E0
    ctx->pc = 0x3aa448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962720));
    // 0x3aa44c: 0x24a5ed90  addiu       $a1, $a1, -0x1270
    ctx->pc = 0x3aa44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962576));
    // 0x3aa450: 0x80ea7ec  j           func_3A9FB0
    ctx->pc = 0x3AA450u;
    ctx->pc = 0x3AA454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA450u;
    // 0x3aa454: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9FB0u;
    sub_003A9FB0_0x3a9fb0(rdram, ctx, runtime); return;
    ctx->pc = 0x3AA458u;
label_3aa458:
    // 0x3aa458: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3aa458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3aa45c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3AA45Cu;
    {
        const bool branch_taken_0x3aa45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aa45c) {
            ctx->pc = 0x3AA460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AA45Cu;
            // 0x3aa460: 0x8c820018  lw          $v0, 0x18($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AA480u;
            goto label_3aa480;
        }
    }
    ctx->pc = 0x3AA464u;
    // 0x3aa464: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3aa464u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3aa468: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3aa468u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3aa46c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3aa46cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aa470: 0x2484ee30  addiu       $a0, $a0, -0x11D0
    ctx->pc = 0x3aa470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962736));
    // 0x3aa474: 0x24a5edc0  addiu       $a1, $a1, -0x1240
    ctx->pc = 0x3aa474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962624));
    // 0x3aa478: 0x80ea7ec  j           func_3A9FB0
    ctx->pc = 0x3AA478u;
    ctx->pc = 0x3AA47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA478u;
    // 0x3aa47c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9FB0u;
    sub_003A9FB0_0x3a9fb0(rdram, ctx, runtime); return;
    ctx->pc = 0x3AA480u;
label_3aa480:
    // 0x3aa480: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3aa480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aa484: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x3aa484u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x3aa488: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3aa488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x3aa48c: 0x3e00008  jr          $ra
    ctx->pc = 0x3AA48Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AA490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA48Cu;
        // 0x3aa490: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA48Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AA494u;
    // 0x3aa494: 0x0  nop
    ctx->pc = 0x3aa494u;
    // NOP
    ctx->pc = 0x3aa498u;
}
