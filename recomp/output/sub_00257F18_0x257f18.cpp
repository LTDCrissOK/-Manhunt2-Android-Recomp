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

// Function: sub_00257F18
// Address: 0x257f18 - 0x257f60
void sub_00257F18_0x257f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257F18_0x257f18");
#endif

    switch (ctx->pc) {
        case 0x257f2cu: goto label_257f2c;
        case 0x257f34u: goto label_257f34;
        case 0x257f44u: goto label_257f44;
        case 0x257f4cu: goto label_257f4c;
        default: break;
    }

    ctx->pc = 0x257f18u;

    // 0x257f18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x257f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x257f1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x257f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x257f20: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x257f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x257f24: 0xc09532e  jal         func_254CB8
    ctx->pc = 0x257F24u;
    SET_GPR_U32(ctx, 31, 0x257F2Cu);
    ctx->pc = 0x257F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257F24u;
    // 0x257f28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254CB8u, 0x257F24u, 0x257F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257F2Cu;
label_257f2c:
    // 0x257f2c: 0xc066968  jal         func_19A5A0
    ctx->pc = 0x257F2Cu;
    SET_GPR_U32(ctx, 31, 0x257F34u);
    ctx->pc = 0x257F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257F2Cu;
    // 0x257f30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A5A0u, 0x257F2Cu, 0x257F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257F34u;
label_257f34:
    // 0x257f34: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x257F34u;
    {
        const bool branch_taken_0x257f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257F34u;
        // 0x257f38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257f34) {
            ctx->pc = 0x257F50u;
            goto label_257f50;
        }
    }
    ctx->pc = 0x257F3Cu;
    // 0x257f3c: 0xc09532e  jal         func_254CB8
    ctx->pc = 0x257F3Cu;
    SET_GPR_U32(ctx, 31, 0x257F44u);
    ctx->pc = 0x257F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257F3Cu;
    // 0x257f40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254CB8u, 0x257F3Cu, 0x257F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257F44u;
label_257f44:
    // 0x257f44: 0xc06671c  jal         func_199C70
    ctx->pc = 0x257F44u;
    SET_GPR_U32(ctx, 31, 0x257F4Cu);
    ctx->pc = 0x257F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257F44u;
    // 0x257f48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199C70u, 0x257F44u, 0x257F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257F4Cu;
label_257f4c:
    // 0x257f4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x257f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_257f50:
    // 0x257f50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x257f50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257f54: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x257f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x257f58: 0x3e00008  jr          $ra
    ctx->pc = 0x257F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257F58u;
        // 0x257f5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257F60u;
}
