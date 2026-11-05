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

// Function: sub_002B6178
// Address: 0x2b6178 - 0x2b61b0
void sub_002B6178_0x2b6178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6178_0x2b6178");
#endif

    switch (ctx->pc) {
        case 0x2b618cu: goto label_2b618c;
        default: break;
    }

    ctx->pc = 0x2b6178u;

    // 0x2b6178: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b6178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b617c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b617cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b6180: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2b6180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2b6184: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2B6184u;
    SET_GPR_U32(ctx, 31, 0x2B618Cu);
    ctx->pc = 0x2B6188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6184u;
    // 0x2b6188: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2B6184u, 0x2B618Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B618Cu;
label_2b618c:
    // 0x2b618c: 0x24030110  addiu       $v1, $zero, 0x110
    ctx->pc = 0x2b618cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x2b6190: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2b6190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6194: 0x2038018  mult        $s0, $s0, $v1
    ctx->pc = 0x2b6194u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2b6198: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2b6198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2b619c: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x2b619cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2b61a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b61a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b61a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B61A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B61A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B61A4u;
        // 0x2b61a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B61A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B61ACu;
    // 0x2b61ac: 0x0  nop
    ctx->pc = 0x2b61acu;
    // NOP
    ctx->pc = 0x2b61b0u;
}
