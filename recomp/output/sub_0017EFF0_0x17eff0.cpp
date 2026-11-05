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

// Function: sub_0017EFF0
// Address: 0x17eff0 - 0x17f040
void sub_0017EFF0_0x17eff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017EFF0_0x17eff0");
#endif

    switch (ctx->pc) {
        case 0x17f00cu: goto label_17f00c;
        case 0x17f018u: goto label_17f018;
        case 0x17f020u: goto label_17f020;
        default: break;
    }

    ctx->pc = 0x17eff0u;

    // 0x17eff0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17eff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17eff4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17eff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17eff8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17eff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17effc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17effcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17f000: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17f000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17f004: 0xc05fcfe  jal         func_17F3F8
    ctx->pc = 0x17F004u;
    SET_GPR_U32(ctx, 31, 0x17F00Cu);
    ctx->pc = 0x17F008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F004u;
    // 0x17f008: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F3F8u, 0x17F004u, 0x17F00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F00Cu;
label_17f00c:
    // 0x17f00c: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x17f00cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x17f010: 0xc05fcc2  jal         func_17F308
    ctx->pc = 0x17F010u;
    SET_GPR_U32(ctx, 31, 0x17F018u);
    ctx->pc = 0x17F014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F010u;
    // 0x17f014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F308u, 0x17F010u, 0x17F018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F018u;
label_17f018:
    // 0x17f018: 0xc05fcd2  jal         func_17F348
    ctx->pc = 0x17F018u;
    SET_GPR_U32(ctx, 31, 0x17F020u);
    ctx->pc = 0x17F01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F018u;
    // 0x17f01c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F348u, 0x17F018u, 0x17F020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F020u;
label_17f020:
    // 0x17f020: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17f020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17f024: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17f024u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17f028: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x17f028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x17f02c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17f02cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f030: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17f030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f034: 0x3e00008  jr          $ra
    ctx->pc = 0x17F034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F034u;
        // 0x17f038: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F03Cu;
    // 0x17f03c: 0x0  nop
    ctx->pc = 0x17f03cu;
    // NOP
    ctx->pc = 0x17f040u;
}
