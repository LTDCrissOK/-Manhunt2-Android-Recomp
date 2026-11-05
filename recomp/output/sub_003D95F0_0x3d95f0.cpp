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

// Function: sub_003D95F0
// Address: 0x3d95f0 - 0x3d9628
void sub_003D95F0_0x3d95f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D95F0_0x3d95f0");
#endif

    ctx->pc = 0x3d95f0u;

    // 0x3d95f0: 0x94830010  lhu         $v1, 0x10($a0)
    ctx->pc = 0x3d95f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3d95f4: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D95F4u;
    {
        const bool branch_taken_0x3d95f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d95f4) {
            ctx->pc = 0x3D95F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D95F4u;
            // 0x3d95f8: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D9608u;
            goto label_3d9608;
        }
    }
    ctx->pc = 0x3D95FCu;
    // 0x3d95fc: 0xa4800012  sh          $zero, 0x12($a0)
    ctx->pc = 0x3d95fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d9600: 0x3e00008  jr          $ra
    ctx->pc = 0x3D9600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9600u;
        // 0x3d9604: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D9608u;
label_3d9608:
    // 0x3d9608: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D9608u;
    {
        const bool branch_taken_0x3d9608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9608u;
        // 0x3d960c: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9608) {
            ctx->pc = 0x3D9618u;
            goto label_3d9618;
        }
    }
    ctx->pc = 0x3D9610u;
    // 0x3d9610: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3D9610u;
    {
        const bool branch_taken_0x3d9610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9610u;
        // 0x3d9614: 0xa4820012  sh          $v0, 0x12($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9610) {
            ctx->pc = 0x3D961Cu;
            goto label_3d961c;
        }
    }
    ctx->pc = 0x3D9618u;
label_3d9618:
    // 0x3d9618: 0xa4800012  sh          $zero, 0x12($a0)
    ctx->pc = 0x3d9618u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 0));
label_3d961c:
    // 0x3d961c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D961Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D961Cu;
        // 0x3d9620: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D961Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D9624u;
    // 0x3d9624: 0x0  nop
    ctx->pc = 0x3d9624u;
    // NOP
    ctx->pc = 0x3d9628u;
}
