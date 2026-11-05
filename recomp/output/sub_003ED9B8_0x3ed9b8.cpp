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

// Function: sub_003ED9B8
// Address: 0x3ed9b8 - 0x3eda08
void sub_003ED9B8_0x3ed9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ED9B8_0x3ed9b8");
#endif

    ctx->pc = 0x3ed9b8u;

    // 0x3ed9b8: 0x9486000e  lhu         $a2, 0xE($a0)
    ctx->pc = 0x3ed9b8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x3ed9bc: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x3ed9bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3ed9c0: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x3ed9c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3ed9c4: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x3ed9c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x3ed9c8: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x3ed9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x3ed9cc: 0xc3001a  div         $zero, $a2, $v1
    ctx->pc = 0x3ed9ccu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3ed9d0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3ED9D0u;
    {
        const bool branch_taken_0x3ed9d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed9d0) {
            ctx->pc = 0x3ED9D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ED9D0u;
            // 0x3ed9d4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ED9D8u;
            goto label_3ed9d8;
        }
    }
    ctx->pc = 0x3ED9D8u;
label_3ed9d8:
    // 0x3ed9d8: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x3ed9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3ed9dc: 0x1010  mfhi        $v0
    ctx->pc = 0x3ed9dcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3ed9e0: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x3ed9e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3ed9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3ED9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ED9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED9E4u;
        // 0x3ed9e8: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ED9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ED9ECu;
    // 0x3ed9ec: 0x0  nop
    ctx->pc = 0x3ed9ecu;
    // NOP
    // 0x3ed9f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ed9f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed9f4: 0x0  nop
    ctx->pc = 0x3ed9f4u;
    // NOP
    // 0x3ed9f8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3ed9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3ed9fc: 0x0  nop
    ctx->pc = 0x3ed9fcu;
    // NOP
    // 0x3eda00: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3eda00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3eda04: 0x0  nop
    ctx->pc = 0x3eda04u;
    // NOP
    ctx->pc = 0x3eda08u;
}
