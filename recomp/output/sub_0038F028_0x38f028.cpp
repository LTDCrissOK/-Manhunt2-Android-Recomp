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

// Function: sub_0038F028
// Address: 0x38f028 - 0x38f0b8
void sub_0038F028_0x38f028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038F028_0x38f028");
#endif

    switch (ctx->pc) {
        case 0x38f040u: goto label_38f040;
        case 0x38f04cu: goto label_38f04c;
        case 0x38f05cu: goto label_38f05c;
        case 0x38f068u: goto label_38f068;
        case 0x38f074u: goto label_38f074;
        case 0x38f084u: goto label_38f084;
        case 0x38f094u: goto label_38f094;
        case 0x38f0a0u: goto label_38f0a0;
        default: break;
    }

    ctx->pc = 0x38f028u;

    // 0x38f028: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38f028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38f02c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x38f02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38f030: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38f030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38f034: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38f034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38f038: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38F038u;
    SET_GPR_U32(ctx, 31, 0x38F040u);
    ctx->pc = 0x38F03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F038u;
    // 0x38f03c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38F038u, 0x38F040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F040u;
label_38f040:
    // 0x38f040: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38f040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f044: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38F044u;
    SET_GPR_U32(ctx, 31, 0x38F04Cu);
    ctx->pc = 0x38F048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F044u;
    // 0x38f048: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38F044u, 0x38F04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F04Cu;
label_38f04c:
    // 0x38f04c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x38F04Cu;
    {
        const bool branch_taken_0x38f04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F04Cu;
        // 0x38f050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f04c) {
            ctx->pc = 0x38F078u;
            goto label_38f078;
        }
    }
    ctx->pc = 0x38F054u;
    // 0x38f054: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38F054u;
    SET_GPR_U32(ctx, 31, 0x38F05Cu);
    ctx->pc = 0x38F058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F054u;
    // 0x38f058: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38F054u, 0x38F05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F05Cu;
label_38f05c:
    // 0x38f05c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38f05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f060: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38F060u;
    SET_GPR_U32(ctx, 31, 0x38F068u);
    ctx->pc = 0x38F064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F060u;
    // 0x38f064: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38F060u, 0x38F068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F068u;
label_38f068:
    // 0x38f068: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38f068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f06c: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38F06Cu;
    SET_GPR_U32(ctx, 31, 0x38F074u);
    ctx->pc = 0x38F070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F06Cu;
    // 0x38f070: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38F06Cu, 0x38F074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F074u;
label_38f074:
    // 0x38f074: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x38f074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
label_38f078:
    // 0x38f078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38f078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f07c: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38F07Cu;
    SET_GPR_U32(ctx, 31, 0x38F084u);
    ctx->pc = 0x38F080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F07Cu;
    // 0x38f080: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38F07Cu, 0x38F084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F084u;
label_38f084:
    // 0x38f084: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x38f084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
    // 0x38f088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38f088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f08c: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38F08Cu;
    SET_GPR_U32(ctx, 31, 0x38F094u);
    ctx->pc = 0x38F090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F08Cu;
    // 0x38f090: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38F08Cu, 0x38F094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F094u;
label_38f094:
    // 0x38f094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38f094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f098: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38F098u;
    SET_GPR_U32(ctx, 31, 0x38F0A0u);
    ctx->pc = 0x38F09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F098u;
    // 0x38f09c: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38F098u, 0x38F0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F0A0u;
label_38f0a0:
    // 0x38f0a0: 0xae02015c  sw          $v0, 0x15C($s0)
    ctx->pc = 0x38f0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 2));
    // 0x38f0a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38f0a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38f0a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38f0a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38f0ac: 0x3e00008  jr          $ra
    ctx->pc = 0x38F0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F0ACu;
        // 0x38f0b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F0ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F0B4u;
    // 0x38f0b4: 0x0  nop
    ctx->pc = 0x38f0b4u;
    // NOP
    ctx->pc = 0x38f0b8u;
}
