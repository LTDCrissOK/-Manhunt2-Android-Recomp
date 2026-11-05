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

// Function: sub_00277E38
// Address: 0x277e38 - 0x277e80
void sub_00277E38_0x277e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277E38_0x277e38");
#endif

    switch (ctx->pc) {
        case 0x277e74u: goto label_277e74;
        default: break;
    }

    ctx->pc = 0x277e38u;

    // 0x277e38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x277e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x277e3c: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x277e3cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277e40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x277e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x277e44: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x277e44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277e48: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x277e48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277e4c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x277e4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277e50: 0x8c820114  lw          $v0, 0x114($a0)
    ctx->pc = 0x277e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x277e54: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x277e54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x277e58: 0x24a58338  addiu       $a1, $a1, -0x7CC8
    ctx->pc = 0x277e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935352));
    // 0x277e5c: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x277e5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277e60: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x277e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x277e64: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x277e64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277e68: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x277e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x277e6c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x277E6Cu;
    SET_GPR_U32(ctx, 31, 0x277E74u);
    ctx->pc = 0x277E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277E6Cu;
    // 0x277e70: 0x140402d  daddu       $t0, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x277E6Cu, 0x277E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277E74u;
label_277e74:
    // 0x277e74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x277e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277e78: 0x3e00008  jr          $ra
    ctx->pc = 0x277E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277E78u;
        // 0x277e7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277E80u;
}
