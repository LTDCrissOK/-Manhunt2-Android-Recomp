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

// Function: sub_003432C8
// Address: 0x3432c8 - 0x343318
void sub_003432C8_0x3432c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003432C8_0x3432c8");
#endif

    switch (ctx->pc) {
        case 0x343300u: goto label_343300;
        default: break;
    }

    ctx->pc = 0x3432c8u;

    // 0x3432c8: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x3432c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x3432cc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3432ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3432d0: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x3432d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3432d4: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x3432d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x3432d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3432d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3432dc: 0x24638bf0  addiu       $v1, $v1, -0x7410
    ctx->pc = 0x3432dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937584));
    // 0x3432e0: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x3432e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3432e4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3432e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3432e8: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x3432e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x3432ec: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3432ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3432f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3432F0u;
    {
        const bool branch_taken_0x3432f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3432F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3432F0u;
        // 0x3432f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3432f0) {
            ctx->pc = 0x343308u;
            goto label_343308;
        }
    }
    ctx->pc = 0x3432F8u;
    // 0x3432f8: 0xc0d0ca0  jal         func_343280
    ctx->pc = 0x3432F8u;
    SET_GPR_U32(ctx, 31, 0x343300u);
    ctx->pc = 0x3432FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3432F8u;
    // 0x3432fc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343280u, 0x3432F8u, 0x343300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343300u;
label_343300:
    // 0x343300: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x343300u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x343304: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x343304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_343308:
    // 0x343308: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x343308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34330c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x34330cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343310: 0x3e00008  jr          $ra
    ctx->pc = 0x343310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343310u;
        // 0x343314: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343318u;
}
