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

// Function: sub_0014D970
// Address: 0x14d970 - 0x14d9b0
void sub_0014D970_0x14d970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D970_0x14d970");
#endif

    switch (ctx->pc) {
        case 0x14d988u: goto label_14d988;
        case 0x14d99cu: goto label_14d99c;
        default: break;
    }

    ctx->pc = 0x14d970u;

    // 0x14d970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14d970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14d974: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14d974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14d978: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x14d978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14d97c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14d97cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d980: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x14D980u;
    SET_GPR_U32(ctx, 31, 0x14D988u);
    ctx->pc = 0x14D984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D980u;
    // 0x14d984: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x14D980u, 0x14D988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D988u;
label_14d988:
    // 0x14d988: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14d988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14d98c: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14D98Cu;
    {
        const bool branch_taken_0x14d98c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14d98c) {
            ctx->pc = 0x14D990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D98Cu;
            // 0x14d990: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D9A0u;
            goto label_14d9a0;
        }
    }
    ctx->pc = 0x14D994u;
    // 0x14d994: 0xc05366c  jal         func_14D9B0
    ctx->pc = 0x14D994u;
    SET_GPR_U32(ctx, 31, 0x14D99Cu);
    ctx->pc = 0x14D998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D994u;
    // 0x14d998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D9B0u, 0x14D994u, 0x14D99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D99Cu;
label_14d99c:
    // 0x14d99c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14d99cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14d9a0:
    // 0x14d9a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x14d9a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14d9a4: 0x3e00008  jr          $ra
    ctx->pc = 0x14D9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D9A4u;
        // 0x14d9a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D9A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D9ACu;
    // 0x14d9ac: 0x0  nop
    ctx->pc = 0x14d9acu;
    // NOP
    ctx->pc = 0x14d9b0u;
}
