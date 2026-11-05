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

// Function: sub_003D9628
// Address: 0x3d9628 - 0x3d9670
void sub_003D9628_0x3d9628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9628_0x3d9628");
#endif

    ctx->pc = 0x3d9628u;

    // 0x3d9628: 0x94830010  lhu         $v1, 0x10($a0)
    ctx->pc = 0x3d9628u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3d962c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D962Cu;
    {
        const bool branch_taken_0x3d962c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D9630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D962Cu;
        // 0x3d9630: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d962c) {
            ctx->pc = 0x3D963Cu;
            goto label_3d963c;
        }
    }
    ctx->pc = 0x3D9634u;
    // 0x3d9634: 0x3e00008  jr          $ra
    ctx->pc = 0x3D9634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9634u;
        // 0x3d9638: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D963Cu;
label_3d963c:
    // 0x3d963c: 0x94820012  lhu         $v0, 0x12($a0)
    ctx->pc = 0x3d963cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x3d9640: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3d9640u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3d9644: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D9644u;
    {
        const bool branch_taken_0x3d9644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9644u;
        // 0x3d9648: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9644) {
            ctx->pc = 0x3D9668u;
            goto label_3d9668;
        }
    }
    ctx->pc = 0x3D964Cu;
    // 0x3d964c: 0x94830012  lhu         $v1, 0x12($a0)
    ctx->pc = 0x3d964cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x3d9650: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x3d9650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3d9654: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3d9654u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3d9658: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3d9658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3d965c: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x3d965cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d9660: 0x3e00008  jr          $ra
    ctx->pc = 0x3D9660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9660u;
        // 0x3d9664: 0xa0c40000  sb          $a0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D9668u;
label_3d9668:
    // 0x3d9668: 0x3e00008  jr          $ra
    ctx->pc = 0x3D9668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D966Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9668u;
        // 0x3d966c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D9670u;
}
