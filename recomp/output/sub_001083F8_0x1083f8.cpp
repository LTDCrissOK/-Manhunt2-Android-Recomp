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

// Function: sub_001083F8
// Address: 0x1083f8 - 0x108420
void sub_001083F8_0x1083f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001083F8_0x1083f8");
#endif

    switch (ctx->pc) {
        case 0x108410u: goto label_108410;
        default: break;
    }

    ctx->pc = 0x1083f8u;

    // 0x1083f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1083f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1083fc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1083fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108400: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x108400u;
    {
        const bool branch_taken_0x108400 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x108404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108400u;
        // 0x108404: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108400) {
            ctx->pc = 0x108410u;
            goto label_108410;
        }
    }
    ctx->pc = 0x108408u;
    // 0x108408: 0xc05f446  jal         func_17D118
    ctx->pc = 0x108408u;
    SET_GPR_U32(ctx, 31, 0x108410u);
    ctx->pc = 0x10840Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108408u;
    // 0x10840c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D118u, 0x108408u, 0x108410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108410u;
label_108410:
    // 0x108410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x108410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108414: 0x3e00008  jr          $ra
    ctx->pc = 0x108414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108414u;
        // 0x108418: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10841Cu;
    // 0x10841c: 0x0  nop
    ctx->pc = 0x10841cu;
    // NOP
    ctx->pc = 0x108420u;
}
