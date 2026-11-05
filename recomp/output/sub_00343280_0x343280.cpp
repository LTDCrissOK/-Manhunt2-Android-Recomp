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

// Function: sub_00343280
// Address: 0x343280 - 0x3432c8
void sub_00343280_0x343280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343280_0x343280");
#endif

    ctx->pc = 0x343280u;

    // 0x343280: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x343280u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x343284: 0x2403076c  addiu       $v1, $zero, 0x76C
    ctx->pc = 0x343284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1900));
    // 0x343288: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x343288u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34328c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x34328cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x343290: 0x8c822b00  lw          $v0, 0x2B00($a0)
    ctx->pc = 0x343290u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x343294: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x343294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x343298: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x343298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x34329c: 0x2c4207d0  sltiu       $v0, $v0, 0x7D0
    ctx->pc = 0x34329cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2000) ? 1 : 0);
    // 0x3432a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3432A0u;
    {
        const bool branch_taken_0x3432a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3432A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3432A0u;
        // 0x3432a4: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3432a0) {
            ctx->pc = 0x3432BCu;
            goto label_3432bc;
        }
    }
    ctx->pc = 0x3432A8u;
    // 0x3432a8: 0x94832b48  lhu         $v1, 0x2B48($a0)
    ctx->pc = 0x3432a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 11080)));
    // 0x3432ac: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3432acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3432b0: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x3432b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x3432b4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3432B4u;
    {
        const bool branch_taken_0x3432b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3432B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3432B4u;
        // 0x3432b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3432b4) {
            ctx->pc = 0x3432C0u;
            goto label_3432c0;
        }
    }
    ctx->pc = 0x3432BCu;
label_3432bc:
    // 0x3432bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3432bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3432c0:
    // 0x3432c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3432C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3432C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3432C8u;
}
