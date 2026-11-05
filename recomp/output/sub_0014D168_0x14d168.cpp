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

// Function: sub_0014D168
// Address: 0x14d168 - 0x14d1a8
void sub_0014D168_0x14d168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D168_0x14d168");
#endif

    switch (ctx->pc) {
        case 0x14d17cu: goto label_14d17c;
        case 0x14d194u: goto label_14d194;
        default: break;
    }

    ctx->pc = 0x14d168u;

    // 0x14d168: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14d168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14d16c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14d16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14d170: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x14d170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14d174: 0xc04d6b0  jal         func_135AC0
    ctx->pc = 0x14D174u;
    SET_GPR_U32(ctx, 31, 0x14D17Cu);
    ctx->pc = 0x14D178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D174u;
    // 0x14d178: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135AC0u, 0x14D174u, 0x14D17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D17Cu;
label_14d17c:
    // 0x14d17c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x14d17cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x14d180: 0xae000460  sw          $zero, 0x460($s0)
    ctx->pc = 0x14d180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 0));
    // 0x14d184: 0x24630a68  addiu       $v1, $v1, 0xA68
    ctx->pc = 0x14d184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2664));
    // 0x14d188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14d188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d18c: 0xc0535f4  jal         func_14D7D0
    ctx->pc = 0x14D18Cu;
    SET_GPR_U32(ctx, 31, 0x14D194u);
    ctx->pc = 0x14D190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D18Cu;
    // 0x14d190: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D7D0u, 0x14D18Cu, 0x14D194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D194u;
label_14d194:
    // 0x14d194: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14d194u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d198: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x14d198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14d19c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14d19cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d1a0: 0x3e00008  jr          $ra
    ctx->pc = 0x14D1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D1A0u;
        // 0x14d1a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D1A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D1A8u;
}
