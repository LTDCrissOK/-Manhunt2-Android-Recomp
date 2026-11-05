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

// Function: sub_002A5D20
// Address: 0x2a5d20 - 0x2a5d60
void sub_002A5D20_0x2a5d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5D20_0x2a5d20");
#endif

    switch (ctx->pc) {
        case 0x2a5d34u: goto label_2a5d34;
        case 0x2a5d44u: goto label_2a5d44;
        case 0x2a5d4cu: goto label_2a5d4c;
        default: break;
    }

    ctx->pc = 0x2a5d20u;

    // 0x2a5d20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a5d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a5d24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a5d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a5d28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2a5d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2a5d2c: 0xc0a9c2a  jal         func_2A70A8
    ctx->pc = 0x2A5D2Cu;
    SET_GPR_U32(ctx, 31, 0x2A5D34u);
    ctx->pc = 0x2A5D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5D2Cu;
    // 0x2a5d30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A70A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A70A8u, 0x2A5D2Cu, 0x2A5D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5D34u;
label_2a5d34:
    // 0x2a5d34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A5D34u;
    {
        const bool branch_taken_0x2a5d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5d34) {
            ctx->pc = 0x2A5D44u;
            goto label_2a5d44;
        }
    }
    ctx->pc = 0x2A5D3Cu;
    // 0x2a5d3c: 0xc0a7adc  jal         func_29EB70
    ctx->pc = 0x2A5D3Cu;
    SET_GPR_U32(ctx, 31, 0x2A5D44u);
    ctx->pc = 0x2A5D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5D3Cu;
    // 0x2a5d40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EB70u, 0x2A5D3Cu, 0x2A5D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5D44u;
label_2a5d44:
    // 0x2a5d44: 0xc0a9aba  jal         func_2A6AE8
    ctx->pc = 0x2A5D44u;
    SET_GPR_U32(ctx, 31, 0x2A5D4Cu);
    ctx->pc = 0x2A5D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5D44u;
    // 0x2a5d48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6AE8u, 0x2A5D44u, 0x2A5D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5D4Cu;
label_2a5d4c:
    // 0x2a5d4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a5d4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a5d50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2a5d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a5d54: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5D54u;
        // 0x2a5d58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5D5Cu;
    // 0x2a5d5c: 0x0  nop
    ctx->pc = 0x2a5d5cu;
    // NOP
    ctx->pc = 0x2a5d60u;
}
