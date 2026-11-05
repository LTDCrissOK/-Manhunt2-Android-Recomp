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

// Function: sub_0039D018
// Address: 0x39d018 - 0x39d1b0
void sub_0039D018_0x39d018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039D018_0x39d018");
#endif

    switch (ctx->pc) {
        case 0x39d018u: goto label_39d018;
        case 0x39d01cu: goto label_39d01c;
        case 0x39d020u: goto label_39d020;
        case 0x39d024u: goto label_39d024;
        case 0x39d028u: goto label_39d028;
        case 0x39d02cu: goto label_39d02c;
        case 0x39d030u: goto label_39d030;
        case 0x39d034u: goto label_39d034;
        case 0x39d038u: goto label_39d038;
        case 0x39d03cu: goto label_39d03c;
        case 0x39d040u: goto label_39d040;
        case 0x39d044u: goto label_39d044;
        case 0x39d048u: goto label_39d048;
        case 0x39d04cu: goto label_39d04c;
        case 0x39d050u: goto label_39d050;
        case 0x39d054u: goto label_39d054;
        case 0x39d058u: goto label_39d058;
        case 0x39d05cu: goto label_39d05c;
        case 0x39d060u: goto label_39d060;
        case 0x39d064u: goto label_39d064;
        case 0x39d068u: goto label_39d068;
        case 0x39d06cu: goto label_39d06c;
        case 0x39d070u: goto label_39d070;
        case 0x39d074u: goto label_39d074;
        case 0x39d078u: goto label_39d078;
        case 0x39d07cu: goto label_39d07c;
        case 0x39d080u: goto label_39d080;
        case 0x39d084u: goto label_39d084;
        case 0x39d088u: goto label_39d088;
        case 0x39d08cu: goto label_39d08c;
        case 0x39d090u: goto label_39d090;
        case 0x39d094u: goto label_39d094;
        case 0x39d098u: goto label_39d098;
        case 0x39d09cu: goto label_39d09c;
        case 0x39d0a0u: goto label_39d0a0;
        case 0x39d0a4u: goto label_39d0a4;
        case 0x39d0a8u: goto label_39d0a8;
        case 0x39d0acu: goto label_39d0ac;
        case 0x39d0b0u: goto label_39d0b0;
        case 0x39d0b4u: goto label_39d0b4;
        case 0x39d0b8u: goto label_39d0b8;
        case 0x39d0bcu: goto label_39d0bc;
        case 0x39d0c0u: goto label_39d0c0;
        case 0x39d0c4u: goto label_39d0c4;
        case 0x39d0c8u: goto label_39d0c8;
        case 0x39d0ccu: goto label_39d0cc;
        case 0x39d0d0u: goto label_39d0d0;
        case 0x39d0d4u: goto label_39d0d4;
        case 0x39d0d8u: goto label_39d0d8;
        case 0x39d0dcu: goto label_39d0dc;
        case 0x39d0e0u: goto label_39d0e0;
        case 0x39d0e4u: goto label_39d0e4;
        case 0x39d0e8u: goto label_39d0e8;
        case 0x39d0ecu: goto label_39d0ec;
        case 0x39d0f0u: goto label_39d0f0;
        case 0x39d0f4u: goto label_39d0f4;
        case 0x39d0f8u: goto label_39d0f8;
        case 0x39d0fcu: goto label_39d0fc;
        case 0x39d100u: goto label_39d100;
        case 0x39d104u: goto label_39d104;
        case 0x39d108u: goto label_39d108;
        case 0x39d10cu: goto label_39d10c;
        case 0x39d110u: goto label_39d110;
        case 0x39d114u: goto label_39d114;
        case 0x39d118u: goto label_39d118;
        case 0x39d11cu: goto label_39d11c;
        case 0x39d120u: goto label_39d120;
        case 0x39d124u: goto label_39d124;
        case 0x39d128u: goto label_39d128;
        case 0x39d12cu: goto label_39d12c;
        case 0x39d130u: goto label_39d130;
        case 0x39d134u: goto label_39d134;
        case 0x39d138u: goto label_39d138;
        case 0x39d13cu: goto label_39d13c;
        case 0x39d140u: goto label_39d140;
        case 0x39d144u: goto label_39d144;
        case 0x39d148u: goto label_39d148;
        case 0x39d14cu: goto label_39d14c;
        case 0x39d150u: goto label_39d150;
        case 0x39d154u: goto label_39d154;
        case 0x39d158u: goto label_39d158;
        case 0x39d15cu: goto label_39d15c;
        case 0x39d160u: goto label_39d160;
        case 0x39d164u: goto label_39d164;
        case 0x39d168u: goto label_39d168;
        case 0x39d16cu: goto label_39d16c;
        case 0x39d170u: goto label_39d170;
        case 0x39d174u: goto label_39d174;
        case 0x39d178u: goto label_39d178;
        case 0x39d17cu: goto label_39d17c;
        case 0x39d180u: goto label_39d180;
        case 0x39d184u: goto label_39d184;
        case 0x39d188u: goto label_39d188;
        case 0x39d18cu: goto label_39d18c;
        case 0x39d190u: goto label_39d190;
        case 0x39d194u: goto label_39d194;
        case 0x39d198u: goto label_39d198;
        case 0x39d19cu: goto label_39d19c;
        case 0x39d1a0u: goto label_39d1a0;
        case 0x39d1a4u: goto label_39d1a4;
        case 0x39d1a8u: goto label_39d1a8;
        case 0x39d1acu: goto label_39d1ac;
        default: break;
    }

    ctx->pc = 0x39d018u;

label_39d018:
    // 0x39d018: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x39d018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_39d01c:
    // 0x39d01c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x39d01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_39d020:
    // 0x39d020: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39d020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39d024:
    // 0x39d024: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x39d024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_39d028:
    // 0x39d028: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x39d028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_39d02c:
    // 0x39d02c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x39d02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_39d030:
    // 0x39d030: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x39d030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_39d034:
    // 0x39d034: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x39d034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_39d038:
    // 0x39d038: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x39d038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_39d03c:
    // 0x39d03c: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x39d03cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_39d040:
    // 0x39d040: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x39d040u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_39d044:
    // 0x39d044: 0xc0e6476  jal         func_3991D8
label_39d048:
    if (ctx->pc == 0x39D048u) {
        ctx->pc = 0x39D048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D044u;
        // 0x39d048: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D04Cu;
        goto label_39d04c;
    }
    ctx->pc = 0x39D044u;
    SET_GPR_U32(ctx, 31, 0x39D04Cu);
    ctx->pc = 0x39D048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D044u;
    // 0x39d048: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3991D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3991D8u, 0x39D044u, 0x39D04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D04Cu;
label_39d04c:
    // 0x39d04c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39d04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39d050:
    // 0x39d050: 0xc0e647c  jal         func_3991F0
label_39d054:
    if (ctx->pc == 0x39D054u) {
        ctx->pc = 0x39D054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D050u;
        // 0x39d054: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D058u;
        goto label_39d058;
    }
    ctx->pc = 0x39D050u;
    SET_GPR_U32(ctx, 31, 0x39D058u);
    ctx->pc = 0x39D054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D050u;
    // 0x39d054: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3991F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3991F0u, 0x39D050u, 0x39D058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D058u;
label_39d058:
    // 0x39d058: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39d058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39d05c:
    // 0x39d05c: 0xc0e6488  jal         func_399220
label_39d060:
    if (ctx->pc == 0x39D060u) {
        ctx->pc = 0x39D060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D05Cu;
        // 0x39d060: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D064u;
        goto label_39d064;
    }
    ctx->pc = 0x39D05Cu;
    SET_GPR_U32(ctx, 31, 0x39D064u);
    ctx->pc = 0x39D060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D05Cu;
    // 0x39d060: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399220u, 0x39D05Cu, 0x39D064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D064u;
label_39d064:
    // 0x39d064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39d064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39d068:
    // 0x39d068: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x39d068u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39d06c:
    // 0x39d06c: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x39d06cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_39d070:
    // 0x39d070: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x39d070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39d074:
    // 0x39d074: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x39d074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_39d078:
    // 0x39d078: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x39d078u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_39d07c:
    // 0x39d07c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_39d080:
    if (ctx->pc == 0x39D080u) {
        ctx->pc = 0x39D080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D07Cu;
        // 0x39d080: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D084u;
        goto label_39d084;
    }
    ctx->pc = 0x39D07Cu;
    {
        const bool branch_taken_0x39d07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D07Cu;
        // 0x39d080: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d07c) {
            ctx->pc = 0x39D0A8u;
            goto label_39d0a8;
        }
    }
    ctx->pc = 0x39D084u;
label_39d084:
    // 0x39d084: 0x8222006c  lb          $v0, 0x6C($s1)
    ctx->pc = 0x39d084u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 108)));
label_39d088:
    // 0x39d088: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_39d08c:
    if (ctx->pc == 0x39D08Cu) {
        ctx->pc = 0x39D08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D088u;
        // 0x39d08c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D090u;
        goto label_39d090;
    }
    ctx->pc = 0x39D088u;
    {
        const bool branch_taken_0x39d088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39d088) {
            ctx->pc = 0x39D08Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D088u;
            // 0x39d08c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D0ACu;
            goto label_39d0ac;
        }
    }
    ctx->pc = 0x39D090u;
label_39d090:
    // 0x39d090: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x39d090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_39d094:
    // 0x39d094: 0xc0e6446  jal         func_399118
label_39d098:
    if (ctx->pc == 0x39D098u) {
        ctx->pc = 0x39D098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D094u;
        // 0x39d098: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D09Cu;
        goto label_39d09c;
    }
    ctx->pc = 0x39D094u;
    SET_GPR_U32(ctx, 31, 0x39D09Cu);
    ctx->pc = 0x39D098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D094u;
    // 0x39d098: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399118u, 0x39D094u, 0x39D09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D09Cu;
label_39d09c:
    // 0x39d09c: 0x1000003c  b           . + 4 + (0x3C << 2)
label_39d0a0:
    if (ctx->pc == 0x39D0A0u) {
        ctx->pc = 0x39D0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D09Cu;
        // 0x39d0a0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D0A4u;
        goto label_39d0a4;
    }
    ctx->pc = 0x39D09Cu;
    {
        const bool branch_taken_0x39d09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D09Cu;
        // 0x39d0a0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d09c) {
            ctx->pc = 0x39D190u;
            goto label_39d190;
        }
    }
    ctx->pc = 0x39D0A4u;
label_39d0a4:
    // 0x39d0a4: 0x0  nop
    ctx->pc = 0x39d0a4u;
    // NOP
label_39d0a8:
    // 0x39d0a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x39d0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39d0ac:
    // 0x39d0ac: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x39d0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_39d0b0:
    // 0x39d0b0: 0x40f809  jalr        $v0
label_39d0b4:
    if (ctx->pc == 0x39D0B4u) {
        ctx->pc = 0x39D0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D0B0u;
        // 0x39d0b4: 0x8e260050  lw          $a2, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D0B8u;
        goto label_39d0b8;
    }
    ctx->pc = 0x39D0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39D0B8u);
        ctx->pc = 0x39D0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D0B0u;
        // 0x39d0b4: 0x8e260050  lw          $a2, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D0B0u, 0x39D0B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D0B8u;
label_39d0b8:
    // 0x39d0b8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39d0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_39d0bc:
    // 0x39d0bc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x39d0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_39d0c0:
    // 0x39d0c0: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x39d0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_39d0c4:
    // 0x39d0c4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x39d0c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_39d0c8:
    // 0x39d0c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_39d0cc:
    if (ctx->pc == 0x39D0CCu) {
        ctx->pc = 0x39D0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D0C8u;
        // 0x39d0cc: 0x2484bbb0  addiu       $a0, $a0, -0x4450 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949808));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D0D0u;
        goto label_39d0d0;
    }
    ctx->pc = 0x39D0C8u;
    {
        const bool branch_taken_0x39d0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D0C8u;
        // 0x39d0cc: 0x2484bbb0  addiu       $a0, $a0, -0x4450 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d0c8) {
            ctx->pc = 0x39D0D8u;
            goto label_39d0d8;
        }
    }
    ctx->pc = 0x39D0D0u;
label_39d0d0:
    // 0x39d0d0: 0xc0ec0fe  jal         func_3B03F8
label_39d0d4:
    if (ctx->pc == 0x39D0D4u) {
        ctx->pc = 0x39D0D8u;
        goto label_39d0d8;
    }
    ctx->pc = 0x39D0D0u;
    SET_GPR_U32(ctx, 31, 0x39D0D8u);
    ctx->pc = 0x3B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B03F8u, 0x39D0D0u, 0x39D0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D0D8u;
label_39d0d8:
    // 0x39d0d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x39d0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39d0dc:
    // 0x39d0dc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x39d0dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_39d0e0:
    // 0x39d0e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39d0e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39d0e4:
    // 0x39d0e4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x39d0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_39d0e8:
    // 0x39d0e8: 0x40f809  jalr        $v0
label_39d0ec:
    if (ctx->pc == 0x39D0ECu) {
        ctx->pc = 0x39D0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D0E8u;
        // 0x39d0ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D0F0u;
        goto label_39d0f0;
    }
    ctx->pc = 0x39D0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39D0F0u);
        ctx->pc = 0x39D0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D0E8u;
        // 0x39d0ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D0E8u, 0x39D0F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D0F0u;
label_39d0f0:
    // 0x39d0f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39d0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39d0f4:
    // 0x39d0f4: 0xc0e6448  jal         func_399120
label_39d0f8:
    if (ctx->pc == 0x39D0F8u) {
        ctx->pc = 0x39D0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D0F4u;
        // 0x39d0f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D0FCu;
        goto label_39d0fc;
    }
    ctx->pc = 0x39D0F4u;
    SET_GPR_U32(ctx, 31, 0x39D0FCu);
    ctx->pc = 0x39D0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D0F4u;
    // 0x39d0f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399120u, 0x39D0F4u, 0x39D0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D0FCu;
label_39d0fc:
    // 0x39d0fc: 0x2932823  subu        $a1, $s4, $s3
    ctx->pc = 0x39d0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_39d100:
    // 0x39d100: 0xae250090  sw          $a1, 0x90($s1)
    ctx->pc = 0x39d100u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 5));
label_39d104:
    // 0x39d104: 0xc0e6446  jal         func_399118
label_39d108:
    if (ctx->pc == 0x39D108u) {
        ctx->pc = 0x39D108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D104u;
        // 0x39d108: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D10Cu;
        goto label_39d10c;
    }
    ctx->pc = 0x39D104u;
    SET_GPR_U32(ctx, 31, 0x39D10Cu);
    ctx->pc = 0x39D108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D104u;
    // 0x39d108: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399118u, 0x39D104u, 0x39D10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D10Cu;
label_39d10c:
    // 0x39d10c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39d10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39d110:
    // 0x39d110: 0xc0e644a  jal         func_399128
label_39d114:
    if (ctx->pc == 0x39D114u) {
        ctx->pc = 0x39D114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D110u;
        // 0x39d114: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D118u;
        goto label_39d118;
    }
    ctx->pc = 0x39D110u;
    SET_GPR_U32(ctx, 31, 0x39D118u);
    ctx->pc = 0x39D114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D110u;
    // 0x39d114: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399128u, 0x39D110u, 0x39D118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D118u;
label_39d118:
    // 0x39d118: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39d118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39d11c:
    // 0x39d11c: 0xc0e6438  jal         func_3990E0
label_39d120:
    if (ctx->pc == 0x39D120u) {
        ctx->pc = 0x39D120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D11Cu;
        // 0x39d120: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D124u;
        goto label_39d124;
    }
    ctx->pc = 0x39D11Cu;
    SET_GPR_U32(ctx, 31, 0x39D124u);
    ctx->pc = 0x39D120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D11Cu;
    // 0x39d120: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3990E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3990E0u, 0x39D11Cu, 0x39D124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D124u;
label_39d124:
    // 0x39d124: 0x82230002  lb          $v1, 0x2($s1)
    ctx->pc = 0x39d124u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_39d128:
    // 0x39d128: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x39d128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_39d12c:
    // 0x39d12c: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_39d130:
    if (ctx->pc == 0x39D130u) {
        ctx->pc = 0x39D130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D12Cu;
        // 0x39d130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D134u;
        goto label_39d134;
    }
    ctx->pc = 0x39D12Cu;
    {
        const bool branch_taken_0x39d12c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x39D130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D12Cu;
        // 0x39d130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d12c) {
            ctx->pc = 0x39D178u;
            goto label_39d178;
        }
    }
    ctx->pc = 0x39D134u;
label_39d134:
    // 0x39d134: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x39d134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39d138:
    // 0x39d138: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x39d138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_39d13c:
    // 0x39d13c: 0x60f809  jalr        $v1
label_39d140:
    if (ctx->pc == 0x39D140u) {
        ctx->pc = 0x39D144u;
        goto label_39d144;
    }
    ctx->pc = 0x39D13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39D144u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D13Cu, 0x39D144u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D144u;
label_39d144:
    // 0x39d144: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x39d144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39d148:
    // 0x39d148: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x39d148u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_39d14c:
    // 0x39d14c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39d14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39d150:
    // 0x39d150: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x39d150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_39d154:
    // 0x39d154: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x39d154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39d158:
    // 0x39d158: 0x60f809  jalr        $v1
label_39d15c:
    if (ctx->pc == 0x39D15Cu) {
        ctx->pc = 0x39D15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D158u;
        // 0x39d15c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D160u;
        goto label_39d160;
    }
    ctx->pc = 0x39D158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39D160u);
        ctx->pc = 0x39D15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D158u;
        // 0x39d15c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D158u, 0x39D160u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D160u;
label_39d160:
    // 0x39d160: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x39d160u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39d164:
    // 0x39d164: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39d164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39d168:
    // 0x39d168: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39d168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39d16c:
    // 0x39d16c: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x39d16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_39d170:
    // 0x39d170: 0x40f809  jalr        $v0
label_39d174:
    if (ctx->pc == 0x39D174u) {
        ctx->pc = 0x39D174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D170u;
        // 0x39d174: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D178u;
        goto label_39d178;
    }
    ctx->pc = 0x39D170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39D178u);
        ctx->pc = 0x39D174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D170u;
        // 0x39d174: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D170u, 0x39D178u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D178u;
label_39d178:
    // 0x39d178: 0xc0e64cc  jal         func_399330
label_39d17c:
    if (ctx->pc == 0x39D17Cu) {
        ctx->pc = 0x39D17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D178u;
        // 0x39d17c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D180u;
        goto label_39d180;
    }
    ctx->pc = 0x39D178u;
    SET_GPR_U32(ctx, 31, 0x39D180u);
    ctx->pc = 0x39D17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D178u;
    // 0x39d17c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399330u, 0x39D178u, 0x39D180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D180u;
label_39d180:
    // 0x39d180: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x39d180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_39d184:
    // 0x39d184: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x39d184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_39d188:
    // 0x39d188: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x39d188u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
label_39d18c:
    // 0x39d18c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x39d18cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39d190:
    // 0x39d190: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x39d190u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_39d194:
    // 0x39d194: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x39d194u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39d198:
    // 0x39d198: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x39d198u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_39d19c:
    // 0x39d19c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x39d19cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_39d1a0:
    // 0x39d1a0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x39d1a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_39d1a4:
    // 0x39d1a4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x39d1a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_39d1a8:
    // 0x39d1a8: 0x3e00008  jr          $ra
label_39d1ac:
    if (ctx->pc == 0x39D1ACu) {
        ctx->pc = 0x39D1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D1A8u;
        // 0x39d1ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D1B0u;
        goto label_fallthrough_0x39d1a8;
    }
    ctx->pc = 0x39D1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39D1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D1A8u;
        // 0x39d1ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D1A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x39d1a8:
    ctx->pc = 0x39D1B0u;
}
