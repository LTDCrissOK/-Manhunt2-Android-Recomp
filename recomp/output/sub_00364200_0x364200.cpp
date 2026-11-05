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

// Function: sub_00364200
// Address: 0x364200 - 0x364250
void sub_00364200_0x364200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364200_0x364200");
#endif

    ctx->pc = 0x364200u;

    // 0x364200: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x364200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364204: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x364204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x364208: 0x8c83006c  lw          $v1, 0x6C($a0)
    ctx->pc = 0x364208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x36420c: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x36420cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x364210: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x364210u;
    {
        const bool branch_taken_0x364210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x364210) {
            ctx->pc = 0x364214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x364210u;
            // 0x364214: 0x8c820068  lw          $v0, 0x68($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x364224u;
            goto label_364224;
        }
    }
    ctx->pc = 0x364218u;
    // 0x364218: 0xacc50070  sw          $a1, 0x70($a2)
    ctx->pc = 0x364218u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 112), GPR_U32(ctx, 5));
    // 0x36421c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x36421Cu;
    {
        const bool branch_taken_0x36421c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x364220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36421Cu;
        // 0x364220: 0xacc00068  sw          $zero, 0x68($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36421c) {
            ctx->pc = 0x364240u;
            goto label_364240;
        }
    }
    ctx->pc = 0x364224u;
label_364224:
    // 0x364224: 0xacc30070  sw          $v1, 0x70($a2)
    ctx->pc = 0x364224u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 112), GPR_U32(ctx, 3));
    // 0x364228: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x364228u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x36422c: 0x8c83006c  lw          $v1, 0x6C($a0)
    ctx->pc = 0x36422cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x364230: 0x45202b  sltu        $a0, $v0, $a1
    ctx->pc = 0x364230u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x364234: 0x44280b  movn        $a1, $v0, $a0
    ctx->pc = 0x364234u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x364238: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x364238u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x36423c: 0xacc30068  sw          $v1, 0x68($a2)
    ctx->pc = 0x36423cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 104), GPR_U32(ctx, 3));
label_364240:
    // 0x364240: 0x8cc20070  lw          $v0, 0x70($a2)
    ctx->pc = 0x364240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 112)));
    // 0x364244: 0x3e00008  jr          $ra
    ctx->pc = 0x364244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364244u;
        // 0x364248: 0xacc20074  sw          $v0, 0x74($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36424Cu;
    // 0x36424c: 0x0  nop
    ctx->pc = 0x36424cu;
    // NOP
    ctx->pc = 0x364250u;
}
