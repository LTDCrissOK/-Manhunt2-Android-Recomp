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

// Function: sub_00222FD0
// Address: 0x222fd0 - 0x2230c0
void sub_00222FD0_0x222fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222FD0_0x222fd0");
#endif

    switch (ctx->pc) {
        case 0x22300cu: goto label_22300c;
        case 0x223014u: goto label_223014;
        case 0x22301cu: goto label_22301c;
        case 0x223024u: goto label_223024;
        case 0x223030u: goto label_223030;
        case 0x22303cu: goto label_22303c;
        case 0x223068u: goto label_223068;
        case 0x223070u: goto label_223070;
        case 0x223078u: goto label_223078;
        case 0x223080u: goto label_223080;
        case 0x223088u: goto label_223088;
        default: break;
    }

    ctx->pc = 0x222fd0u;

    // 0x222fd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x222fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x222fd4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x222fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x222fd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x222fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x222fdc: 0x24421830  addiu       $v0, $v0, 0x1830
    ctx->pc = 0x222fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6192));
    // 0x222fe0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x222fe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222fe4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x222fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x222fe8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x222fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x222fec: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x222fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x222ff0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x222ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x222ff4: 0x26110030  addiu       $s1, $s0, 0x30
    ctx->pc = 0x222ff4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x222ff8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x222ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x222ffc: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x222ffcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x223000: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x223000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x223004: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x223004u;
    SET_GPR_U32(ctx, 31, 0x22300Cu);
    ctx->pc = 0x223008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223004u;
    // 0x223008: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x223004u, 0x22300Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22300Cu;
label_22300c:
    // 0x22300c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x22300Cu;
    SET_GPR_U32(ctx, 31, 0x223014u);
    ctx->pc = 0x223010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22300Cu;
    // 0x223010: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x22300Cu, 0x223014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223014u;
label_223014:
    // 0x223014: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x223014u;
    SET_GPR_U32(ctx, 31, 0x22301Cu);
    ctx->pc = 0x223018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223014u;
    // 0x223018: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x223014u, 0x22301Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22301Cu;
label_22301c:
    // 0x22301c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x22301Cu;
    SET_GPR_U32(ctx, 31, 0x223024u);
    ctx->pc = 0x223020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22301Cu;
    // 0x223020: 0x2604001c  addiu       $a0, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x22301Cu, 0x223024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223024u;
label_223024:
    // 0x223024: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x223024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x223028: 0x24631818  addiu       $v1, $v1, 0x1818
    ctx->pc = 0x223028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6168));
    // 0x22302c: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x22302cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
label_223030:
    // 0x223030: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223034: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x223034u;
    SET_GPR_U32(ctx, 31, 0x22303Cu);
    ctx->pc = 0x223038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223034u;
    // 0x223038: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x223034u, 0x22303Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22303Cu;
label_22303c:
    // 0x22303c: 0x0  nop
    ctx->pc = 0x22303cu;
    // NOP
    // 0x223040: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x223040u;
    {
        const bool branch_taken_0x223040 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x223044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223040u;
        // 0x223044: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223040) {
            ctx->pc = 0x223030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223030;
        }
    }
    ctx->pc = 0x223048u;
    // 0x223048: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x223048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x22304c: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x22304cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x223050: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x223050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x223054: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x223054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x223058: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x223058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x22305c: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x22305cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x223060: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x223060u;
    SET_GPR_U32(ctx, 31, 0x223068u);
    ctx->pc = 0x223064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223060u;
    // 0x223064: 0xae000074  sw          $zero, 0x74($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x223060u, 0x223068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223068u;
label_223068:
    // 0x223068: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x223068u;
    SET_GPR_U32(ctx, 31, 0x223070u);
    ctx->pc = 0x22306Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223068u;
    // 0x22306c: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x223068u, 0x223070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223070u;
label_223070:
    // 0x223070: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x223070u;
    SET_GPR_U32(ctx, 31, 0x223078u);
    ctx->pc = 0x223074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223070u;
    // 0x223074: 0x260400c0  addiu       $a0, $s0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x223070u, 0x223078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223078u;
label_223078:
    // 0x223078: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x223078u;
    SET_GPR_U32(ctx, 31, 0x223080u);
    ctx->pc = 0x22307Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223078u;
    // 0x22307c: 0x260400d0  addiu       $a0, $s0, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x223078u, 0x223080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223080u;
label_223080:
    // 0x223080: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x223080u;
    SET_GPR_U32(ctx, 31, 0x223088u);
    ctx->pc = 0x223084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223080u;
    // 0x223084: 0x260400e0  addiu       $a0, $s0, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x223080u, 0x223088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223088u;
label_223088:
    // 0x223088: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x223088u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22308c: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x22308cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
    // 0x223090: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x223090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
    // 0x223094: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x223094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
    // 0x223098: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x223098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
    // 0x22309c: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x22309cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x2230a0: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x2230a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x2230a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2230a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2230a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2230a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2230ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2230acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2230b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2230b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2230b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2230b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2230b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2230B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2230BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2230B8u;
        // 0x2230bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2230B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2230C0u;
}
