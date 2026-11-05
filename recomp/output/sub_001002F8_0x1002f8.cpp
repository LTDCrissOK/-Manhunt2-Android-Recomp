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

// Function: sub_001002F8
// Address: 0x1002f8 - 0x100330
void sub_001002F8_0x1002f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001002F8_0x1002f8");
#endif

    ctx->pc = 0x1002f8u;

    // 0x1002f8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1002f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1002fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1002fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x100300: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x100300u;
    {
        const bool branch_taken_0x100300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100300u;
        // 0x100304: 0x30a4ffff  andi        $a0, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x100300) {
            ctx->pc = 0x100310u;
            goto label_100310;
        }
    }
    ctx->pc = 0x100308u;
    // 0x100308: 0x3e00008  jr          $ra
    ctx->pc = 0x100308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100308u;
        // 0x10030c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100310u;
label_100310:
    // 0x100310: 0x94620010  lhu         $v0, 0x10($v1)
    ctx->pc = 0x100310u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x100314: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x100314u;
    {
        const bool branch_taken_0x100314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100314u;
        // 0x100318: 0x441024  and         $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100314) {
            ctx->pc = 0x100328u;
            goto label_100328;
        }
    }
    ctx->pc = 0x10031Cu;
    // 0x10031c: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x10031cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x100320: 0x3e00008  jr          $ra
    ctx->pc = 0x100320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100320u;
        // 0x100324: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100328u;
label_100328:
    // 0x100328: 0x3e00008  jr          $ra
    ctx->pc = 0x100328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10032Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100328u;
        // 0x10032c: 0x2c820001  sltiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100330u;
}
