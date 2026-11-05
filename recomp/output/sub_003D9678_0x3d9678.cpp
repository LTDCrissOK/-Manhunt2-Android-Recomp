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

// Function: sub_003D9678
// Address: 0x3d9678 - 0x3d96c8
void sub_003D9678_0x3d9678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9678_0x3d9678");
#endif

    switch (ctx->pc) {
        case 0x3d9688u: goto label_3d9688;
        default: break;
    }

    ctx->pc = 0x3d9678u;

    // 0x3d9678: 0x94820010  lhu         $v0, 0x10($a0)
    ctx->pc = 0x3d9678u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3d967c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D967Cu;
    {
        const bool branch_taken_0x3d967c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d967c) {
            ctx->pc = 0x3D9680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D967Cu;
            // 0x3d9680: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D9690u;
            goto label_3d9690;
        }
    }
    ctx->pc = 0x3D9684u;
    // 0x3d9684: 0xa4800012  sh          $zero, 0x12($a0)
    ctx->pc = 0x3d9684u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 0));
label_3d9688:
    // 0x3d9688: 0x3e00008  jr          $ra
    ctx->pc = 0x3D9688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D968Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9688u;
        // 0x3d968c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D9690u;
label_3d9690:
    // 0x3d9690: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D9690u;
    {
        const bool branch_taken_0x3d9690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9690) {
            ctx->pc = 0x3D9694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D9690u;
            // 0x3d9694: 0x94820010  lhu         $v0, 0x10($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D96ACu;
            goto label_3d96ac;
        }
    }
    ctx->pc = 0x3D9698u;
    // 0x3d9698: 0x94820012  lhu         $v0, 0x12($a0)
    ctx->pc = 0x3d9698u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x3d969c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3D969Cu;
    {
        const bool branch_taken_0x3d969c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D96A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D969Cu;
        // 0x3d96a0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d969c) {
            ctx->pc = 0x3D9688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d9688;
        }
    }
    ctx->pc = 0x3D96A4u;
    // 0x3d96a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3D96A4u;
    {
        const bool branch_taken_0x3d96a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D96A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D96A4u;
        // 0x3d96a8: 0xa4820012  sh          $v0, 0x12($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d96a4) {
            ctx->pc = 0x3D96C0u;
            goto label_3d96c0;
        }
    }
    ctx->pc = 0x3D96ACu;
label_3d96ac:
    // 0x3d96ac: 0x94830012  lhu         $v1, 0x12($a0)
    ctx->pc = 0x3d96acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x3d96b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3d96b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3d96b4: 0x1062fff4  beq         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3D96B4u;
    {
        const bool branch_taken_0x3d96b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D96B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D96B4u;
        // 0x3d96b8: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d96b4) {
            ctx->pc = 0x3D9688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d9688;
        }
    }
    ctx->pc = 0x3D96BCu;
    // 0x3d96bc: 0xa4820012  sh          $v0, 0x12($a0)
    ctx->pc = 0x3d96bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 2));
label_3d96c0:
    // 0x3d96c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3D96C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D96C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D96C0u;
        // 0x3d96c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D96C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D96C8u;
}
