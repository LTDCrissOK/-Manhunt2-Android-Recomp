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

// Function: sub_003EA000
// Address: 0x3ea000 - 0x3ea138
void sub_003EA000_0x3ea000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EA000_0x3ea000");
#endif

    switch (ctx->pc) {
        case 0x3ea000u: goto label_3ea000;
        case 0x3ea004u: goto label_3ea004;
        case 0x3ea008u: goto label_3ea008;
        case 0x3ea00cu: goto label_3ea00c;
        case 0x3ea010u: goto label_3ea010;
        case 0x3ea014u: goto label_3ea014;
        case 0x3ea018u: goto label_3ea018;
        case 0x3ea01cu: goto label_3ea01c;
        case 0x3ea020u: goto label_3ea020;
        case 0x3ea024u: goto label_3ea024;
        case 0x3ea028u: goto label_3ea028;
        case 0x3ea02cu: goto label_3ea02c;
        case 0x3ea030u: goto label_3ea030;
        case 0x3ea034u: goto label_3ea034;
        case 0x3ea038u: goto label_3ea038;
        case 0x3ea03cu: goto label_3ea03c;
        case 0x3ea040u: goto label_3ea040;
        case 0x3ea044u: goto label_3ea044;
        case 0x3ea048u: goto label_3ea048;
        case 0x3ea04cu: goto label_3ea04c;
        case 0x3ea050u: goto label_3ea050;
        case 0x3ea054u: goto label_3ea054;
        case 0x3ea058u: goto label_3ea058;
        case 0x3ea05cu: goto label_3ea05c;
        case 0x3ea060u: goto label_3ea060;
        case 0x3ea064u: goto label_3ea064;
        case 0x3ea068u: goto label_3ea068;
        case 0x3ea06cu: goto label_3ea06c;
        case 0x3ea070u: goto label_3ea070;
        case 0x3ea074u: goto label_3ea074;
        case 0x3ea078u: goto label_3ea078;
        case 0x3ea07cu: goto label_3ea07c;
        case 0x3ea080u: goto label_3ea080;
        case 0x3ea084u: goto label_3ea084;
        case 0x3ea088u: goto label_3ea088;
        case 0x3ea08cu: goto label_3ea08c;
        case 0x3ea090u: goto label_3ea090;
        case 0x3ea094u: goto label_3ea094;
        case 0x3ea098u: goto label_3ea098;
        case 0x3ea09cu: goto label_3ea09c;
        case 0x3ea0a0u: goto label_3ea0a0;
        case 0x3ea0a4u: goto label_3ea0a4;
        case 0x3ea0a8u: goto label_3ea0a8;
        case 0x3ea0acu: goto label_3ea0ac;
        case 0x3ea0b0u: goto label_3ea0b0;
        case 0x3ea0b4u: goto label_3ea0b4;
        case 0x3ea0b8u: goto label_3ea0b8;
        case 0x3ea0bcu: goto label_3ea0bc;
        case 0x3ea0c0u: goto label_3ea0c0;
        case 0x3ea0c4u: goto label_3ea0c4;
        case 0x3ea0c8u: goto label_3ea0c8;
        case 0x3ea0ccu: goto label_3ea0cc;
        case 0x3ea0d0u: goto label_3ea0d0;
        case 0x3ea0d4u: goto label_3ea0d4;
        case 0x3ea0d8u: goto label_3ea0d8;
        case 0x3ea0dcu: goto label_3ea0dc;
        case 0x3ea0e0u: goto label_3ea0e0;
        case 0x3ea0e4u: goto label_3ea0e4;
        case 0x3ea0e8u: goto label_3ea0e8;
        case 0x3ea0ecu: goto label_3ea0ec;
        case 0x3ea0f0u: goto label_3ea0f0;
        case 0x3ea0f4u: goto label_3ea0f4;
        case 0x3ea0f8u: goto label_3ea0f8;
        case 0x3ea0fcu: goto label_3ea0fc;
        case 0x3ea100u: goto label_3ea100;
        case 0x3ea104u: goto label_3ea104;
        case 0x3ea108u: goto label_3ea108;
        case 0x3ea10cu: goto label_3ea10c;
        case 0x3ea110u: goto label_3ea110;
        case 0x3ea114u: goto label_3ea114;
        case 0x3ea118u: goto label_3ea118;
        case 0x3ea11cu: goto label_3ea11c;
        case 0x3ea120u: goto label_3ea120;
        case 0x3ea124u: goto label_3ea124;
        case 0x3ea128u: goto label_3ea128;
        case 0x3ea12cu: goto label_3ea12c;
        case 0x3ea130u: goto label_3ea130;
        case 0x3ea134u: goto label_3ea134;
        default: break;
    }

    ctx->pc = 0x3ea000u;

label_3ea000:
    // 0x3ea000: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ea000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3ea004:
    // 0x3ea004: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3ea004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3ea008:
    // 0x3ea008: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ea008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3ea00c:
    // 0x3ea00c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ea00cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ea010:
    // 0x3ea010: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3ea010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3ea014:
    // 0x3ea014: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3ea014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3ea018:
    // 0x3ea018: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ea018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ea01c:
    // 0x3ea01c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_3ea020:
    if (ctx->pc == 0x3EA020u) {
        ctx->pc = 0x3EA020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA01Cu;
        // 0x3ea020: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA024u;
        goto label_3ea024;
    }
    ctx->pc = 0x3EA01Cu;
    {
        const bool branch_taken_0x3ea01c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA01Cu;
        // 0x3ea020: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea01c) {
            ctx->pc = 0x3EA09Cu;
            goto label_3ea09c;
        }
    }
    ctx->pc = 0x3EA024u;
label_3ea024:
    // 0x3ea024: 0x0  nop
    ctx->pc = 0x3ea024u;
    // NOP
label_3ea028:
    // 0x3ea028: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ea028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ea02c:
    // 0x3ea02c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ea02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ea030:
    // 0x3ea030: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3ea034:
    if (ctx->pc == 0x3EA034u) {
        ctx->pc = 0x3EA034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA030u;
        // 0x3ea034: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA038u;
        goto label_3ea038;
    }
    ctx->pc = 0x3EA030u;
    {
        const bool branch_taken_0x3ea030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea030) {
            ctx->pc = 0x3EA034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA030u;
            // 0x3ea034: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EA08Cu;
            goto label_3ea08c;
        }
    }
    ctx->pc = 0x3EA038u;
label_3ea038:
    // 0x3ea038: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3ea038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3ea03c:
    // 0x3ea03c: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3ea03cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3ea040:
    // 0x3ea040: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3ea040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3ea044:
    // 0x3ea044: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3ea048:
    if (ctx->pc == 0x3EA048u) {
        ctx->pc = 0x3EA048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA044u;
        // 0x3ea048: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA04Cu;
        goto label_3ea04c;
    }
    ctx->pc = 0x3EA044u;
    {
        const bool branch_taken_0x3ea044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3ea044) {
            ctx->pc = 0x3EA048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA044u;
            // 0x3ea048: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EA078u;
            goto label_3ea078;
        }
    }
    ctx->pc = 0x3EA04Cu;
label_3ea04c:
    // 0x3ea04c: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3ea04cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3ea050:
    // 0x3ea050: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ea050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ea054:
    // 0x3ea054: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3ea054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3ea058:
    // 0x3ea058: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3ea058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3ea05c:
    // 0x3ea05c: 0x40f809  jalr        $v0
label_3ea060:
    if (ctx->pc == 0x3EA060u) {
        ctx->pc = 0x3EA060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA05Cu;
        // 0x3ea060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA064u;
        goto label_3ea064;
    }
    ctx->pc = 0x3EA05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EA064u);
        ctx->pc = 0x3EA060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA05Cu;
        // 0x3ea060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA05Cu, 0x3EA064u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EA064u;
label_3ea064:
    // 0x3ea064: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ea064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ea068:
    // 0x3ea068: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3ea068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3ea06c:
    // 0x3ea06c: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3ea070:
    if (ctx->pc == 0x3EA070u) {
        ctx->pc = 0x3EA070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA06Cu;
        // 0x3ea070: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA074u;
        goto label_3ea074;
    }
    ctx->pc = 0x3EA06Cu;
    {
        const bool branch_taken_0x3ea06c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3EA070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA06Cu;
        // 0x3ea070: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea06c) {
            ctx->pc = 0x3EA050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ea050;
        }
    }
    ctx->pc = 0x3EA074u;
label_3ea074:
    // 0x3ea074: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ea074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ea078:
    // 0x3ea078: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3ea078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ea07c:
    // 0x3ea07c: 0xc0f528a  jal         func_3D4A28
label_3ea080:
    if (ctx->pc == 0x3EA080u) {
        ctx->pc = 0x3EA080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA07Cu;
        // 0x3ea080: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA084u;
        goto label_3ea084;
    }
    ctx->pc = 0x3EA07Cu;
    SET_GPR_U32(ctx, 31, 0x3EA084u);
    ctx->pc = 0x3EA080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA07Cu;
    // 0x3ea080: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3EA07Cu, 0x3EA084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA084u;
label_3ea084:
    // 0x3ea084: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ea084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ea088:
    // 0x3ea088: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3ea088u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3ea08c:
    // 0x3ea08c: 0xc0f5222  jal         func_3D4888
label_3ea090:
    if (ctx->pc == 0x3EA090u) {
        ctx->pc = 0x3EA090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA08Cu;
        // 0x3ea090: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA094u;
        goto label_3ea094;
    }
    ctx->pc = 0x3EA08Cu;
    SET_GPR_U32(ctx, 31, 0x3EA094u);
    ctx->pc = 0x3EA090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA08Cu;
    // 0x3ea090: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EA08Cu, 0x3EA094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA094u;
label_3ea094:
    // 0x3ea094: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3ea098:
    if (ctx->pc == 0x3EA098u) {
        ctx->pc = 0x3EA098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA094u;
        // 0x3ea098: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA09Cu;
        goto label_3ea09c;
    }
    ctx->pc = 0x3EA094u;
    {
        const bool branch_taken_0x3ea094 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EA098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA094u;
        // 0x3ea098: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea094) {
            ctx->pc = 0x3EA028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ea028;
        }
    }
    ctx->pc = 0x3EA09Cu;
label_3ea09c:
    // 0x3ea09c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ea09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ea0a0:
    // 0x3ea0a0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_3ea0a4:
    if (ctx->pc == 0x3EA0A4u) {
        ctx->pc = 0x3EA0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA0A0u;
        // 0x3ea0a4: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA0A8u;
        goto label_3ea0a8;
    }
    ctx->pc = 0x3EA0A0u;
    {
        const bool branch_taken_0x3ea0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA0A0u;
        // 0x3ea0a4: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea0a0) {
            ctx->pc = 0x3EA11Cu;
            goto label_3ea11c;
        }
    }
    ctx->pc = 0x3EA0A8u;
label_3ea0a8:
    // 0x3ea0a8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ea0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ea0ac:
    // 0x3ea0ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ea0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ea0b0:
    // 0x3ea0b0: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3ea0b4:
    if (ctx->pc == 0x3EA0B4u) {
        ctx->pc = 0x3EA0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA0B0u;
        // 0x3ea0b4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA0B8u;
        goto label_3ea0b8;
    }
    ctx->pc = 0x3EA0B0u;
    {
        const bool branch_taken_0x3ea0b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea0b0) {
            ctx->pc = 0x3EA0B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA0B0u;
            // 0x3ea0b4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EA10Cu;
            goto label_3ea10c;
        }
    }
    ctx->pc = 0x3EA0B8u;
label_3ea0b8:
    // 0x3ea0b8: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3ea0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3ea0bc:
    // 0x3ea0bc: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3ea0bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3ea0c0:
    // 0x3ea0c0: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3ea0c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3ea0c4:
    // 0x3ea0c4: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3ea0c8:
    if (ctx->pc == 0x3EA0C8u) {
        ctx->pc = 0x3EA0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA0C4u;
        // 0x3ea0c8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA0CCu;
        goto label_3ea0cc;
    }
    ctx->pc = 0x3EA0C4u;
    {
        const bool branch_taken_0x3ea0c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3ea0c4) {
            ctx->pc = 0x3EA0C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA0C4u;
            // 0x3ea0c8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EA0F8u;
            goto label_3ea0f8;
        }
    }
    ctx->pc = 0x3EA0CCu;
label_3ea0cc:
    // 0x3ea0cc: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3ea0ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3ea0d0:
    // 0x3ea0d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ea0d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ea0d4:
    // 0x3ea0d4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3ea0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3ea0d8:
    // 0x3ea0d8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3ea0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3ea0dc:
    // 0x3ea0dc: 0x40f809  jalr        $v0
label_3ea0e0:
    if (ctx->pc == 0x3EA0E0u) {
        ctx->pc = 0x3EA0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA0DCu;
        // 0x3ea0e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA0E4u;
        goto label_3ea0e4;
    }
    ctx->pc = 0x3EA0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EA0E4u);
        ctx->pc = 0x3EA0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA0DCu;
        // 0x3ea0e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA0DCu, 0x3EA0E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EA0E4u;
label_3ea0e4:
    // 0x3ea0e4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3ea0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ea0e8:
    // 0x3ea0e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3ea0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3ea0ec:
    // 0x3ea0ec: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3ea0f0:
    if (ctx->pc == 0x3EA0F0u) {
        ctx->pc = 0x3EA0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA0ECu;
        // 0x3ea0f0: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA0F4u;
        goto label_3ea0f4;
    }
    ctx->pc = 0x3EA0ECu;
    {
        const bool branch_taken_0x3ea0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3EA0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA0ECu;
        // 0x3ea0f0: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea0ec) {
            ctx->pc = 0x3EA0D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ea0d0;
        }
    }
    ctx->pc = 0x3EA0F4u;
label_3ea0f4:
    // 0x3ea0f4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ea0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ea0f8:
    // 0x3ea0f8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3ea0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ea0fc:
    // 0x3ea0fc: 0xc0f528a  jal         func_3D4A28
label_3ea100:
    if (ctx->pc == 0x3EA100u) {
        ctx->pc = 0x3EA100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA0FCu;
        // 0x3ea100: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA104u;
        goto label_3ea104;
    }
    ctx->pc = 0x3EA0FCu;
    SET_GPR_U32(ctx, 31, 0x3EA104u);
    ctx->pc = 0x3EA100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA0FCu;
    // 0x3ea100: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3EA0FCu, 0x3EA104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA104u;
label_3ea104:
    // 0x3ea104: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ea104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ea108:
    // 0x3ea108: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3ea108u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3ea10c:
    // 0x3ea10c: 0xc0f5222  jal         func_3D4888
label_3ea110:
    if (ctx->pc == 0x3EA110u) {
        ctx->pc = 0x3EA110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA10Cu;
        // 0x3ea110: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA114u;
        goto label_3ea114;
    }
    ctx->pc = 0x3EA10Cu;
    SET_GPR_U32(ctx, 31, 0x3EA114u);
    ctx->pc = 0x3EA110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA10Cu;
    // 0x3ea110: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EA10Cu, 0x3EA114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA114u;
label_3ea114:
    // 0x3ea114: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3ea118:
    if (ctx->pc == 0x3EA118u) {
        ctx->pc = 0x3EA118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA114u;
        // 0x3ea118: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA11Cu;
        goto label_3ea11c;
    }
    ctx->pc = 0x3EA114u;
    {
        const bool branch_taken_0x3ea114 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EA118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA114u;
        // 0x3ea118: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea114) {
            ctx->pc = 0x3EA0A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ea0a8;
        }
    }
    ctx->pc = 0x3EA11Cu;
label_3ea11c:
    // 0x3ea11c: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x3ea11cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_3ea120:
    // 0x3ea120: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ea120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ea124:
    // 0x3ea124: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ea124u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3ea128:
    // 0x3ea128: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3ea128u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3ea12c:
    // 0x3ea12c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3ea12cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3ea130:
    // 0x3ea130: 0x3e00008  jr          $ra
label_3ea134:
    if (ctx->pc == 0x3EA134u) {
        ctx->pc = 0x3EA134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA130u;
        // 0x3ea134: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA138u;
        goto label_fallthrough_0x3ea130;
    }
    ctx->pc = 0x3EA130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EA134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA130u;
        // 0x3ea134: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ea130:
    ctx->pc = 0x3EA138u;
}
