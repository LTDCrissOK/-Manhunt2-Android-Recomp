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

// Function: sub_003EAFC0
// Address: 0x3eafc0 - 0x3eb0f8
void sub_003EAFC0_0x3eafc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EAFC0_0x3eafc0");
#endif

    switch (ctx->pc) {
        case 0x3eafc0u: goto label_3eafc0;
        case 0x3eafc4u: goto label_3eafc4;
        case 0x3eafc8u: goto label_3eafc8;
        case 0x3eafccu: goto label_3eafcc;
        case 0x3eafd0u: goto label_3eafd0;
        case 0x3eafd4u: goto label_3eafd4;
        case 0x3eafd8u: goto label_3eafd8;
        case 0x3eafdcu: goto label_3eafdc;
        case 0x3eafe0u: goto label_3eafe0;
        case 0x3eafe4u: goto label_3eafe4;
        case 0x3eafe8u: goto label_3eafe8;
        case 0x3eafecu: goto label_3eafec;
        case 0x3eaff0u: goto label_3eaff0;
        case 0x3eaff4u: goto label_3eaff4;
        case 0x3eaff8u: goto label_3eaff8;
        case 0x3eaffcu: goto label_3eaffc;
        case 0x3eb000u: goto label_3eb000;
        case 0x3eb004u: goto label_3eb004;
        case 0x3eb008u: goto label_3eb008;
        case 0x3eb00cu: goto label_3eb00c;
        case 0x3eb010u: goto label_3eb010;
        case 0x3eb014u: goto label_3eb014;
        case 0x3eb018u: goto label_3eb018;
        case 0x3eb01cu: goto label_3eb01c;
        case 0x3eb020u: goto label_3eb020;
        case 0x3eb024u: goto label_3eb024;
        case 0x3eb028u: goto label_3eb028;
        case 0x3eb02cu: goto label_3eb02c;
        case 0x3eb030u: goto label_3eb030;
        case 0x3eb034u: goto label_3eb034;
        case 0x3eb038u: goto label_3eb038;
        case 0x3eb03cu: goto label_3eb03c;
        case 0x3eb040u: goto label_3eb040;
        case 0x3eb044u: goto label_3eb044;
        case 0x3eb048u: goto label_3eb048;
        case 0x3eb04cu: goto label_3eb04c;
        case 0x3eb050u: goto label_3eb050;
        case 0x3eb054u: goto label_3eb054;
        case 0x3eb058u: goto label_3eb058;
        case 0x3eb05cu: goto label_3eb05c;
        case 0x3eb060u: goto label_3eb060;
        case 0x3eb064u: goto label_3eb064;
        case 0x3eb068u: goto label_3eb068;
        case 0x3eb06cu: goto label_3eb06c;
        case 0x3eb070u: goto label_3eb070;
        case 0x3eb074u: goto label_3eb074;
        case 0x3eb078u: goto label_3eb078;
        case 0x3eb07cu: goto label_3eb07c;
        case 0x3eb080u: goto label_3eb080;
        case 0x3eb084u: goto label_3eb084;
        case 0x3eb088u: goto label_3eb088;
        case 0x3eb08cu: goto label_3eb08c;
        case 0x3eb090u: goto label_3eb090;
        case 0x3eb094u: goto label_3eb094;
        case 0x3eb098u: goto label_3eb098;
        case 0x3eb09cu: goto label_3eb09c;
        case 0x3eb0a0u: goto label_3eb0a0;
        case 0x3eb0a4u: goto label_3eb0a4;
        case 0x3eb0a8u: goto label_3eb0a8;
        case 0x3eb0acu: goto label_3eb0ac;
        case 0x3eb0b0u: goto label_3eb0b0;
        case 0x3eb0b4u: goto label_3eb0b4;
        case 0x3eb0b8u: goto label_3eb0b8;
        case 0x3eb0bcu: goto label_3eb0bc;
        case 0x3eb0c0u: goto label_3eb0c0;
        case 0x3eb0c4u: goto label_3eb0c4;
        case 0x3eb0c8u: goto label_3eb0c8;
        case 0x3eb0ccu: goto label_3eb0cc;
        case 0x3eb0d0u: goto label_3eb0d0;
        case 0x3eb0d4u: goto label_3eb0d4;
        case 0x3eb0d8u: goto label_3eb0d8;
        case 0x3eb0dcu: goto label_3eb0dc;
        case 0x3eb0e0u: goto label_3eb0e0;
        case 0x3eb0e4u: goto label_3eb0e4;
        case 0x3eb0e8u: goto label_3eb0e8;
        case 0x3eb0ecu: goto label_3eb0ec;
        case 0x3eb0f0u: goto label_3eb0f0;
        case 0x3eb0f4u: goto label_3eb0f4;
        default: break;
    }

    ctx->pc = 0x3eafc0u;

label_3eafc0:
    // 0x3eafc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3eafc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3eafc4:
    // 0x3eafc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3eafc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3eafc8:
    // 0x3eafc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3eafc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3eafcc:
    // 0x3eafcc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3eafccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3eafd0:
    // 0x3eafd0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3eafd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3eafd4:
    // 0x3eafd4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3eafd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3eafd8:
    // 0x3eafd8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eafd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eafdc:
    // 0x3eafdc: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_3eafe0:
    if (ctx->pc == 0x3EAFE0u) {
        ctx->pc = 0x3EAFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAFDCu;
        // 0x3eafe0: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAFE4u;
        goto label_3eafe4;
    }
    ctx->pc = 0x3EAFDCu;
    {
        const bool branch_taken_0x3eafdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAFDCu;
        // 0x3eafe0: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eafdc) {
            ctx->pc = 0x3EB05Cu;
            goto label_3eb05c;
        }
    }
    ctx->pc = 0x3EAFE4u;
label_3eafe4:
    // 0x3eafe4: 0x0  nop
    ctx->pc = 0x3eafe4u;
    // NOP
label_3eafe8:
    // 0x3eafe8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eafe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eafec:
    // 0x3eafec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3eafecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eaff0:
    // 0x3eaff0: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3eaff4:
    if (ctx->pc == 0x3EAFF4u) {
        ctx->pc = 0x3EAFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAFF0u;
        // 0x3eaff4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAFF8u;
        goto label_3eaff8;
    }
    ctx->pc = 0x3EAFF0u;
    {
        const bool branch_taken_0x3eaff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eaff0) {
            ctx->pc = 0x3EAFF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EAFF0u;
            // 0x3eaff4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EB04Cu;
            goto label_3eb04c;
        }
    }
    ctx->pc = 0x3EAFF8u;
label_3eaff8:
    // 0x3eaff8: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3eaff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3eaffc:
    // 0x3eaffc: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3eaffcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3eb000:
    // 0x3eb000: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3eb000u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3eb004:
    // 0x3eb004: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3eb008:
    if (ctx->pc == 0x3EB008u) {
        ctx->pc = 0x3EB008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB004u;
        // 0x3eb008: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB00Cu;
        goto label_3eb00c;
    }
    ctx->pc = 0x3EB004u;
    {
        const bool branch_taken_0x3eb004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3eb004) {
            ctx->pc = 0x3EB008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EB004u;
            // 0x3eb008: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EB038u;
            goto label_3eb038;
        }
    }
    ctx->pc = 0x3EB00Cu;
label_3eb00c:
    // 0x3eb00c: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3eb00cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3eb010:
    // 0x3eb010: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3eb010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb014:
    // 0x3eb014: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3eb014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3eb018:
    // 0x3eb018: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3eb018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3eb01c:
    // 0x3eb01c: 0x40f809  jalr        $v0
label_3eb020:
    if (ctx->pc == 0x3EB020u) {
        ctx->pc = 0x3EB020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB01Cu;
        // 0x3eb020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB024u;
        goto label_3eb024;
    }
    ctx->pc = 0x3EB01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EB024u);
        ctx->pc = 0x3EB020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB01Cu;
        // 0x3eb020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB01Cu, 0x3EB024u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EB024u;
label_3eb024:
    // 0x3eb024: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3eb024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eb028:
    // 0x3eb028: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3eb028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3eb02c:
    // 0x3eb02c: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3eb030:
    if (ctx->pc == 0x3EB030u) {
        ctx->pc = 0x3EB030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB02Cu;
        // 0x3eb030: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB034u;
        goto label_3eb034;
    }
    ctx->pc = 0x3EB02Cu;
    {
        const bool branch_taken_0x3eb02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3EB030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB02Cu;
        // 0x3eb030: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb02c) {
            ctx->pc = 0x3EB010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eb010;
        }
    }
    ctx->pc = 0x3EB034u;
label_3eb034:
    // 0x3eb034: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eb034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eb038:
    // 0x3eb038: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3eb038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eb03c:
    // 0x3eb03c: 0xc0f528a  jal         func_3D4A28
label_3eb040:
    if (ctx->pc == 0x3EB040u) {
        ctx->pc = 0x3EB040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB03Cu;
        // 0x3eb040: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB044u;
        goto label_3eb044;
    }
    ctx->pc = 0x3EB03Cu;
    SET_GPR_U32(ctx, 31, 0x3EB044u);
    ctx->pc = 0x3EB040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB03Cu;
    // 0x3eb040: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3EB03Cu, 0x3EB044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB044u;
label_3eb044:
    // 0x3eb044: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eb044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eb048:
    // 0x3eb048: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3eb048u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3eb04c:
    // 0x3eb04c: 0xc0f5222  jal         func_3D4888
label_3eb050:
    if (ctx->pc == 0x3EB050u) {
        ctx->pc = 0x3EB050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB04Cu;
        // 0x3eb050: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB054u;
        goto label_3eb054;
    }
    ctx->pc = 0x3EB04Cu;
    SET_GPR_U32(ctx, 31, 0x3EB054u);
    ctx->pc = 0x3EB050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB04Cu;
    // 0x3eb050: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EB04Cu, 0x3EB054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB054u;
label_3eb054:
    // 0x3eb054: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3eb058:
    if (ctx->pc == 0x3EB058u) {
        ctx->pc = 0x3EB058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB054u;
        // 0x3eb058: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB05Cu;
        goto label_3eb05c;
    }
    ctx->pc = 0x3EB054u;
    {
        const bool branch_taken_0x3eb054 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EB058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB054u;
        // 0x3eb058: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb054) {
            ctx->pc = 0x3EAFE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eafe8;
        }
    }
    ctx->pc = 0x3EB05Cu;
label_3eb05c:
    // 0x3eb05c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eb05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eb060:
    // 0x3eb060: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_3eb064:
    if (ctx->pc == 0x3EB064u) {
        ctx->pc = 0x3EB064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB060u;
        // 0x3eb064: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB068u;
        goto label_3eb068;
    }
    ctx->pc = 0x3EB060u;
    {
        const bool branch_taken_0x3eb060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB060u;
        // 0x3eb064: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb060) {
            ctx->pc = 0x3EB0DCu;
            goto label_3eb0dc;
        }
    }
    ctx->pc = 0x3EB068u;
label_3eb068:
    // 0x3eb068: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eb068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eb06c:
    // 0x3eb06c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3eb06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eb070:
    // 0x3eb070: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3eb074:
    if (ctx->pc == 0x3EB074u) {
        ctx->pc = 0x3EB074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB070u;
        // 0x3eb074: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB078u;
        goto label_3eb078;
    }
    ctx->pc = 0x3EB070u;
    {
        const bool branch_taken_0x3eb070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb070) {
            ctx->pc = 0x3EB074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EB070u;
            // 0x3eb074: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EB0CCu;
            goto label_3eb0cc;
        }
    }
    ctx->pc = 0x3EB078u;
label_3eb078:
    // 0x3eb078: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3eb078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3eb07c:
    // 0x3eb07c: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3eb07cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3eb080:
    // 0x3eb080: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3eb080u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3eb084:
    // 0x3eb084: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3eb088:
    if (ctx->pc == 0x3EB088u) {
        ctx->pc = 0x3EB088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB084u;
        // 0x3eb088: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB08Cu;
        goto label_3eb08c;
    }
    ctx->pc = 0x3EB084u;
    {
        const bool branch_taken_0x3eb084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3eb084) {
            ctx->pc = 0x3EB088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EB084u;
            // 0x3eb088: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EB0B8u;
            goto label_3eb0b8;
        }
    }
    ctx->pc = 0x3EB08Cu;
label_3eb08c:
    // 0x3eb08c: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3eb08cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3eb090:
    // 0x3eb090: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3eb090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb094:
    // 0x3eb094: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3eb094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3eb098:
    // 0x3eb098: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3eb098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3eb09c:
    // 0x3eb09c: 0x40f809  jalr        $v0
label_3eb0a0:
    if (ctx->pc == 0x3EB0A0u) {
        ctx->pc = 0x3EB0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB09Cu;
        // 0x3eb0a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB0A4u;
        goto label_3eb0a4;
    }
    ctx->pc = 0x3EB09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EB0A4u);
        ctx->pc = 0x3EB0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB09Cu;
        // 0x3eb0a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB09Cu, 0x3EB0A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EB0A4u;
label_3eb0a4:
    // 0x3eb0a4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3eb0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eb0a8:
    // 0x3eb0a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3eb0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3eb0ac:
    // 0x3eb0ac: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3eb0b0:
    if (ctx->pc == 0x3EB0B0u) {
        ctx->pc = 0x3EB0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB0ACu;
        // 0x3eb0b0: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB0B4u;
        goto label_3eb0b4;
    }
    ctx->pc = 0x3EB0ACu;
    {
        const bool branch_taken_0x3eb0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3EB0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB0ACu;
        // 0x3eb0b0: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb0ac) {
            ctx->pc = 0x3EB090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eb090;
        }
    }
    ctx->pc = 0x3EB0B4u;
label_3eb0b4:
    // 0x3eb0b4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eb0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eb0b8:
    // 0x3eb0b8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3eb0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eb0bc:
    // 0x3eb0bc: 0xc0f528a  jal         func_3D4A28
label_3eb0c0:
    if (ctx->pc == 0x3EB0C0u) {
        ctx->pc = 0x3EB0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB0BCu;
        // 0x3eb0c0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB0C4u;
        goto label_3eb0c4;
    }
    ctx->pc = 0x3EB0BCu;
    SET_GPR_U32(ctx, 31, 0x3EB0C4u);
    ctx->pc = 0x3EB0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB0BCu;
    // 0x3eb0c0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3EB0BCu, 0x3EB0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB0C4u;
label_3eb0c4:
    // 0x3eb0c4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eb0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eb0c8:
    // 0x3eb0c8: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3eb0c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3eb0cc:
    // 0x3eb0cc: 0xc0f5222  jal         func_3D4888
label_3eb0d0:
    if (ctx->pc == 0x3EB0D0u) {
        ctx->pc = 0x3EB0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB0CCu;
        // 0x3eb0d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB0D4u;
        goto label_3eb0d4;
    }
    ctx->pc = 0x3EB0CCu;
    SET_GPR_U32(ctx, 31, 0x3EB0D4u);
    ctx->pc = 0x3EB0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB0CCu;
    // 0x3eb0d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EB0CCu, 0x3EB0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB0D4u;
label_3eb0d4:
    // 0x3eb0d4: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3eb0d8:
    if (ctx->pc == 0x3EB0D8u) {
        ctx->pc = 0x3EB0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB0D4u;
        // 0x3eb0d8: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB0DCu;
        goto label_3eb0dc;
    }
    ctx->pc = 0x3EB0D4u;
    {
        const bool branch_taken_0x3eb0d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EB0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB0D4u;
        // 0x3eb0d8: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb0d4) {
            ctx->pc = 0x3EB068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eb068;
        }
    }
    ctx->pc = 0x3EB0DCu;
label_3eb0dc:
    // 0x3eb0dc: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x3eb0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_3eb0e0:
    // 0x3eb0e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3eb0e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3eb0e4:
    // 0x3eb0e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3eb0e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3eb0e8:
    // 0x3eb0e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3eb0e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3eb0ec:
    // 0x3eb0ec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3eb0ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3eb0f0:
    // 0x3eb0f0: 0x3e00008  jr          $ra
label_3eb0f4:
    if (ctx->pc == 0x3EB0F4u) {
        ctx->pc = 0x3EB0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB0F0u;
        // 0x3eb0f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB0F8u;
        goto label_fallthrough_0x3eb0f0;
    }
    ctx->pc = 0x3EB0F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EB0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB0F0u;
        // 0x3eb0f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB0F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3eb0f0:
    ctx->pc = 0x3EB0F8u;
}
