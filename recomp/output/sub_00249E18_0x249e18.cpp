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

// Function: sub_00249E18
// Address: 0x249e18 - 0x249e58
void sub_00249E18_0x249e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249E18_0x249e18");
#endif

    ctx->pc = 0x249e18u;

    // 0x249e18: 0x8c860334  lw          $a2, 0x334($a0)
    ctx->pc = 0x249e18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
    // 0x249e1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x249e1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249e20: 0x8c820418  lw          $v0, 0x418($a0)
    ctx->pc = 0x249e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1048)));
    // 0x249e24: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x249e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x249e28: 0x8cc30150  lw          $v1, 0x150($a2)
    ctx->pc = 0x249e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 336)));
    // 0x249e2c: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x249e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x249e30: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x249E30u;
    {
        const bool branch_taken_0x249e30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x249E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E30u;
        // 0x249e34: 0x2c440001  sltiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x249e30) {
            ctx->pc = 0x249E44u;
            goto label_249e44;
        }
    }
    ctx->pc = 0x249E38u;
    // 0x249e38: 0x8cc20154  lw          $v0, 0x154($a2)
    ctx->pc = 0x249e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 340)));
    // 0x249e3c: 0x38420022  xori        $v0, $v0, 0x22
    ctx->pc = 0x249e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)34);
    // 0x249e40: 0x2382b  sltu        $a3, $zero, $v0
    ctx->pc = 0x249e40u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_249e44:
    // 0x249e44: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x249E44u;
    {
        const bool branch_taken_0x249e44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x249E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E44u;
        // 0x249e48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249e44) {
            ctx->pc = 0x249E50u;
            goto label_249e50;
        }
    }
    ctx->pc = 0x249E4Cu;
    // 0x249e4c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x249e4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_249e50:
    // 0x249e50: 0x3e00008  jr          $ra
    ctx->pc = 0x249E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249E58u;
}
