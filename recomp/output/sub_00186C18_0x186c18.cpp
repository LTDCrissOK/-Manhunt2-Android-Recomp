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

// Function: sub_00186C18
// Address: 0x186c18 - 0x186c58
void sub_00186C18_0x186c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186C18_0x186c18");
#endif

    switch (ctx->pc) {
        case 0x186c3cu: goto label_186c3c;
        case 0x186c44u: goto label_186c44;
        default: break;
    }

    ctx->pc = 0x186c18u;

    // 0x186c18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x186c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x186c1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x186c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x186c20: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x186c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x186c24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x186c24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186c28: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x186c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x186c2c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x186C2Cu;
    {
        const bool branch_taken_0x186c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186c2c) {
            ctx->pc = 0x186C3Cu;
            goto label_186c3c;
        }
    }
    ctx->pc = 0x186C34u;
    // 0x186c34: 0xc062028  jal         func_1880A0
    ctx->pc = 0x186C34u;
    SET_GPR_U32(ctx, 31, 0x186C3Cu);
    ctx->pc = 0x1880A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1880A0u, 0x186C34u, 0x186C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186C3Cu;
label_186c3c:
    // 0x186c3c: 0xc061a4c  jal         func_186930
    ctx->pc = 0x186C3Cu;
    SET_GPR_U32(ctx, 31, 0x186C44u);
    ctx->pc = 0x186C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186C3Cu;
    // 0x186c40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186930u, 0x186C3Cu, 0x186C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186C44u;
label_186c44:
    // 0x186c44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x186c44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186c48: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x186c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x186c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x186C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186C4Cu;
        // 0x186c50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186C54u;
    // 0x186c54: 0x0  nop
    ctx->pc = 0x186c54u;
    // NOP
    ctx->pc = 0x186c58u;
}
