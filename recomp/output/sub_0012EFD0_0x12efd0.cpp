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

// Function: sub_0012EFD0
// Address: 0x12efd0 - 0x12f080
void sub_0012EFD0_0x12efd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012EFD0_0x12efd0");
#endif

    switch (ctx->pc) {
        case 0x12f00cu: goto label_12f00c;
        case 0x12f02cu: goto label_12f02c;
        case 0x12f038u: goto label_12f038;
        case 0x12f048u: goto label_12f048;
        case 0x12f054u: goto label_12f054;
        case 0x12f068u: goto label_12f068;
        default: break;
    }

    ctx->pc = 0x12efd0u;

    // 0x12efd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12efd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12efd4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x12efd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x12efd8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12efd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12efdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12efdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12efe0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x12efe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12efe4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x12EFE4u;
    {
        const bool branch_taken_0x12efe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EFE4u;
        // 0x12efe8: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12efe4) {
            ctx->pc = 0x12F068u;
            goto label_12f068;
        }
    }
    ctx->pc = 0x12EFECu;
    // 0x12efec: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x12efecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12eff0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x12EFF0u;
    {
        const bool branch_taken_0x12eff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EFF0u;
        // 0x12eff4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eff0) {
            ctx->pc = 0x12F06Cu;
            goto label_12f06c;
        }
    }
    ctx->pc = 0x12EFF8u;
    // 0x12eff8: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x12eff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x12effc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12EFFCu;
    {
        const bool branch_taken_0x12effc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12effc) {
            ctx->pc = 0x12F000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EFFCu;
            // 0x12f000: 0x8e030024  lw          $v1, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F014u;
            goto label_12f014;
        }
    }
    ctx->pc = 0x12F004u;
    // 0x12f004: 0xc04bc88  jal         func_12F220
    ctx->pc = 0x12F004u;
    SET_GPR_U32(ctx, 31, 0x12F00Cu);
    ctx->pc = 0x12F008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F004u;
    // 0x12f008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F220u, 0x12F004u, 0x12F00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F00Cu;
label_12f00c:
    // 0x12f00c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x12F00Cu;
    {
        const bool branch_taken_0x12f00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F00Cu;
        // 0x12f010: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f00c) {
            ctx->pc = 0x12F06Cu;
            goto label_12f06c;
        }
    }
    ctx->pc = 0x12F014u;
label_12f014:
    // 0x12f014: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x12f014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x12f018: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12f018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12f01c: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x12F01Cu;
    {
        const bool branch_taken_0x12f01c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12F020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F01Cu;
        // 0x12f020: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f01c) {
            ctx->pc = 0x12F06Cu;
            goto label_12f06c;
        }
    }
    ctx->pc = 0x12F024u;
    // 0x12f024: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x12F024u;
    SET_GPR_U32(ctx, 31, 0x12F02Cu);
    ctx->pc = 0x12F028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F024u;
    // 0x12f028: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x12F024u, 0x12F02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F02Cu;
label_12f02c:
    // 0x12f02c: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x12f02cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x12f030: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x12F030u;
    SET_GPR_U32(ctx, 31, 0x12F038u);
    ctx->pc = 0x12F034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F030u;
    // 0x12f034: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x12F030u, 0x12F038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F038u;
label_12f038:
    // 0x12f038: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12F038u;
    {
        const bool branch_taken_0x12f038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F038u;
        // 0x12f03c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f038) {
            ctx->pc = 0x12F05Cu;
            goto label_12f05c;
        }
    }
    ctx->pc = 0x12F040u;
    // 0x12f040: 0xc04bb7e  jal         func_12EDF8
    ctx->pc = 0x12F040u;
    SET_GPR_U32(ctx, 31, 0x12F048u);
    ctx->pc = 0x12F044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F040u;
    // 0x12f044: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EDF8u, 0x12F040u, 0x12F048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F048u;
label_12f048:
    // 0x12f048: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12f048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f04c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x12F04Cu;
    SET_GPR_U32(ctx, 31, 0x12F054u);
    ctx->pc = 0x12F050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F04Cu;
    // 0x12f050: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x12F04Cu, 0x12F054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F054u;
label_12f054:
    // 0x12f054: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12F054u;
    {
        const bool branch_taken_0x12f054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F054u;
        // 0x12f058: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f054) {
            ctx->pc = 0x12F06Cu;
            goto label_12f06c;
        }
    }
    ctx->pc = 0x12F05Cu;
label_12f05c:
    // 0x12f05c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12f05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f060: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x12F060u;
    SET_GPR_U32(ctx, 31, 0x12F068u);
    ctx->pc = 0x12F064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F060u;
    // 0x12f064: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x12F060u, 0x12F068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F068u;
label_12f068:
    // 0x12f068: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12f068u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12f06c:
    // 0x12f06c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x12f06cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f070: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12f070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12f074: 0x3e00008  jr          $ra
    ctx->pc = 0x12F074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F074u;
        // 0x12f078: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F07Cu;
    // 0x12f07c: 0x0  nop
    ctx->pc = 0x12f07cu;
    // NOP
    ctx->pc = 0x12f080u;
}
