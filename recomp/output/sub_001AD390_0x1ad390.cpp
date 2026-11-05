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

// Function: sub_001AD390
// Address: 0x1ad390 - 0x1ad400
void sub_001AD390_0x1ad390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AD390_0x1ad390");
#endif

    ctx->pc = 0x1ad390u;

    // 0x1ad390: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x1ad390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x1ad394: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x1ad394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x1ad398: 0x24634e20  addiu       $v1, $v1, 0x4E20
    ctx->pc = 0x1ad398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20000));
    // 0x1ad39c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ad39cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ad3a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ad3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ad3a4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ad3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ad3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD3A8u;
        // 0x1ad3ac: 0xac850154  sw          $a1, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD3A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD3B0u;
    // 0x1ad3b0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1ad3b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad3b4: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x1ad3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x1ad3b8: 0x8cc20150  lw          $v0, 0x150($a2)
    ctx->pc = 0x1ad3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 336)));
    // 0x1ad3bc: 0x24634f68  addiu       $v1, $v1, 0x4F68
    ctx->pc = 0x1ad3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20328));
    // 0x1ad3c0: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x1ad3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x1ad3c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ad3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ad3c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ad3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ad3cc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ad3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ad3d0: 0x14850008  bne         $a0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AD3D0u;
    {
        const bool branch_taken_0x1ad3d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x1AD3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD3D0u;
        // 0x1ad3d4: 0xacc40154  sw          $a0, 0x154($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 340), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad3d0) {
            ctx->pc = 0x1AD3F4u;
            goto label_1ad3f4;
        }
    }
    ctx->pc = 0x1AD3D8u;
    // 0x1ad3d8: 0x8cc4014c  lw          $a0, 0x14C($a2)
    ctx->pc = 0x1ad3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 332)));
    // 0x1ad3dc: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x1ad3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1ad3e0: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD3E0u;
    {
        const bool branch_taken_0x1ad3e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AD3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD3E0u;
        // 0x1ad3e4: 0x24020680  addiu       $v0, $zero, 0x680 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad3e0) {
            ctx->pc = 0x1AD3F4u;
            goto label_1ad3f4;
        }
    }
    ctx->pc = 0x1AD3E8u;
    // 0x1ad3e8: 0x8cc300bc  lw          $v1, 0xBC($a2)
    ctx->pc = 0x1ad3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 188)));
    // 0x1ad3ec: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1AD3ECu;
    {
        const bool branch_taken_0x1ad3ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ad3ec) {
            ctx->pc = 0x1AD3F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD3ECu;
            // 0x1ad3f0: 0xacc40154  sw          $a0, 0x154($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 340), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD3F4u;
            goto label_1ad3f4;
        }
    }
    ctx->pc = 0x1AD3F4u;
label_1ad3f4:
    // 0x1ad3f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD3F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD3FCu;
    // 0x1ad3fc: 0x0  nop
    ctx->pc = 0x1ad3fcu;
    // NOP
    ctx->pc = 0x1ad400u;
}
