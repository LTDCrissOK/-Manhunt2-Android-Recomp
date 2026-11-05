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

// Function: sub_0012EDF8
// Address: 0x12edf8 - 0x12efb8
void sub_0012EDF8_0x12edf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012EDF8_0x12edf8");
#endif

    switch (ctx->pc) {
        case 0x12ee4cu: goto label_12ee4c;
        case 0x12ee64u: goto label_12ee64;
        case 0x12ef74u: goto label_12ef74;
        case 0x12ef98u: goto label_12ef98;
        case 0x12efa4u: goto label_12efa4;
        default: break;
    }

    ctx->pc = 0x12edf8u;

    // 0x12edf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12edf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12edfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12edfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12ee00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12ee00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12ee04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12ee04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ee08: 0x14a00010  bnez        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x12EE08u;
    {
        const bool branch_taken_0x12ee08 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EE08u;
        // 0x12ee0c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ee08) {
            ctx->pc = 0x12EE4Cu;
            goto label_12ee4c;
        }
    }
    ctx->pc = 0x12EE10u;
    // 0x12ee10: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x12ee10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12ee14: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x12ee14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x12ee18: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x12ee18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x12ee1c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x12ee1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x12ee20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12ee20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12ee24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12ee24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12ee28: 0x8c640108  lw          $a0, 0x108($v1)
    ctx->pc = 0x12ee28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x12ee2c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12EE2Cu;
    {
        const bool branch_taken_0x12ee2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EE2Cu;
        // 0x12ee30: 0x24030011  addiu       $v1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ee2c) {
            ctx->pc = 0x12EE4Cu;
            goto label_12ee4c;
        }
    }
    ctx->pc = 0x12EE34u;
    // 0x12ee34: 0x8c840334  lw          $a0, 0x334($a0)
    ctx->pc = 0x12ee34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
    // 0x12ee38: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x12ee38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x12ee3c: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12EE3Cu;
    {
        const bool branch_taken_0x12ee3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x12ee3c) {
            ctx->pc = 0x12EE40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EE3Cu;
            // 0x12ee40: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EE50u;
            goto label_12ee50;
        }
    }
    ctx->pc = 0x12EE44u;
    // 0x12ee44: 0xc06a05e  jal         func_1A8178
    ctx->pc = 0x12EE44u;
    SET_GPR_U32(ctx, 31, 0x12EE4Cu);
    ctx->pc = 0x12EE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EE44u;
    // 0x12ee48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x12EE44u, 0x12EE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EE4Cu;
label_12ee4c:
    // 0x12ee4c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x12ee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_12ee50:
    // 0x12ee50: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x12EE50u;
    {
        const bool branch_taken_0x12ee50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EE50u;
        // 0x12ee54: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ee50) {
            ctx->pc = 0x12EFA4u;
            goto label_12efa4;
        }
    }
    ctx->pc = 0x12EE58u;
    // 0x12ee58: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x12ee58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12ee5c: 0xc047866  jal         func_11E198
    ctx->pc = 0x12EE5Cu;
    SET_GPR_U32(ctx, 31, 0x12EE64u);
    ctx->pc = 0x12EE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EE5Cu;
    // 0x12ee60: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E198u, 0x12EE5Cu, 0x12EE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EE64u;
label_12ee64:
    // 0x12ee64: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x12ee64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12ee68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12ee68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ee6c: 0x3c04bfff  lui         $a0, 0xBFFF
    ctx->pc = 0x12ee6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49151 << 16));
    // 0x12ee70: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x12ee70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x12ee74: 0x421f8  dsll        $a0, $a0, 7
    ctx->pc = 0x12ee74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 7);
    // 0x12ee78: 0x3484007f  ori         $a0, $a0, 0x7F
    ctx->pc = 0x12ee78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)127);
    // 0x12ee7c: 0xac600240  sw          $zero, 0x240($v1)
    ctx->pc = 0x12ee7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 576), GPR_U32(ctx, 0));
    // 0x12ee80: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x12ee80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12ee84: 0xac400244  sw          $zero, 0x244($v0)
    ctx->pc = 0x12ee84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 580), GPR_U32(ctx, 0));
    // 0x12ee88: 0xde231020  ld          $v1, 0x1020($s1)
    ctx->pc = 0x12ee88u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 4128)));
    // 0x12ee8c: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x12ee8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x12ee90: 0xfe241020  sd          $a0, 0x1020($s1)
    ctx->pc = 0x12ee90u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 4128), GPR_U64(ctx, 4));
    // 0x12ee94: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x12ee94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12ee98: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x12ee98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
    // 0x12ee9c: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x12EE9Cu;
    {
        const bool branch_taken_0x12ee9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EE9Cu;
        // 0x12eea0: 0x8c650110  lw          $a1, 0x110($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ee9c) {
            ctx->pc = 0x12EF0Cu;
            goto label_12ef0c;
        }
    }
    ctx->pc = 0x12EEA4u;
    // 0x12eea4: 0x8c6200e8  lw          $v0, 0xE8($v1)
    ctx->pc = 0x12eea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 232)));
    // 0x12eea8: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x12EEA8u;
    {
        const bool branch_taken_0x12eea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12eea8) {
            ctx->pc = 0x12EEACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EEA8u;
            // 0x12eeac: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EF10u;
            goto label_12ef10;
        }
    }
    ctx->pc = 0x12EEB0u;
    // 0x12eeb0: 0x54a00017  bnel        $a1, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x12EEB0u;
    {
        const bool branch_taken_0x12eeb0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x12eeb0) {
            ctx->pc = 0x12EEB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EEB0u;
            // 0x12eeb4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EF10u;
            goto label_12ef10;
        }
    }
    ctx->pc = 0x12EEB8u;
    // 0x12eeb8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x12eeb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12eebc: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x12eebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
    // 0x12eec0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x12eec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x12eec4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x12EEC4u;
    {
        const bool branch_taken_0x12eec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12eec4) {
            ctx->pc = 0x12EEC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EEC4u;
            // 0x12eec8: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EF10u;
            goto label_12ef10;
        }
    }
    ctx->pc = 0x12EECCu;
    // 0x12eecc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x12eeccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12eed0: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x12eed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x12eed4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x12eed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x12eed8: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x12EED8u;
    {
        const bool branch_taken_0x12eed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12eed8) {
            ctx->pc = 0x12EEDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EED8u;
            // 0x12eedc: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EF10u;
            goto label_12ef10;
        }
    }
    ctx->pc = 0x12EEE0u;
    // 0x12eee0: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x12eee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x12eee4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12eee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12eee8: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x12eee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x12eeec: 0x3442001f  ori         $v0, $v0, 0x1F
    ctx->pc = 0x12eeecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
    // 0x12eef0: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x12eef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x12eef4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x12eef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x12eef8: 0x319b8  dsll        $v1, $v1, 6
    ctx->pc = 0x12eef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 6);
    // 0x12eefc: 0x3463003f  ori         $v1, $v1, 0x3F
    ctx->pc = 0x12eefcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63);
    // 0x12ef00: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x12ef00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x12ef04: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x12ef04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x12ef08: 0xfe221020  sd          $v0, 0x1020($s1)
    ctx->pc = 0x12ef08u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 4128), GPR_U64(ctx, 2));
label_12ef0c:
    // 0x12ef0c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x12ef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_12ef10:
    // 0x12ef10: 0x14a0000f  bnez        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x12EF10u;
    {
        const bool branch_taken_0x12ef10 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF10u;
        // 0x12ef14: 0x8c420120  lw          $v0, 0x120($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef10) {
            ctx->pc = 0x12EF50u;
            goto label_12ef50;
        }
    }
    ctx->pc = 0x12EF18u;
    // 0x12ef18: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x12EF18u;
    {
        const bool branch_taken_0x12ef18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ef18) {
            ctx->pc = 0x12EF1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EF18u;
            // 0x12ef1c: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EF54u;
            goto label_12ef54;
        }
    }
    ctx->pc = 0x12EF20u;
    // 0x12ef20: 0xde231020  ld          $v1, 0x1020($s1)
    ctx->pc = 0x12ef20u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 4128)));
    // 0x12ef24: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x12ef24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12ef28: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x12ef28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
    // 0x12ef2c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x12ef2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x12ef30: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x12EF30u;
    {
        const bool branch_taken_0x12ef30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ef30) {
            ctx->pc = 0x12EF34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EF30u;
            // 0x12ef34: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EF54u;
            goto label_12ef54;
        }
    }
    ctx->pc = 0x12EF38u;
    // 0x12ef38: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x12ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x12ef3c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12ef3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12ef40: 0x211b8  dsll        $v0, $v0, 6
    ctx->pc = 0x12ef40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 6);
    // 0x12ef44: 0x3442003f  ori         $v0, $v0, 0x3F
    ctx->pc = 0x12ef44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63);
    // 0x12ef48: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x12ef48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x12ef4c: 0xfe221020  sd          $v0, 0x1020($s1)
    ctx->pc = 0x12ef4cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 4128), GPR_U64(ctx, 2));
label_12ef50:
    // 0x12ef50: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x12ef50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_12ef54:
    // 0x12ef54: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x12EF54u;
    {
        const bool branch_taken_0x12ef54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF54u;
        // 0x12ef58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef54) {
            ctx->pc = 0x12EF9Cu;
            goto label_12ef9c;
        }
    }
    ctx->pc = 0x12EF5Cu;
    // 0x12ef5c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x12ef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x12ef60: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12EF60u;
    {
        const bool branch_taken_0x12ef60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ef60) {
            ctx->pc = 0x12EF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EF60u;
            // 0x12ef64: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EF78u;
            goto label_12ef78;
        }
    }
    ctx->pc = 0x12EF68u;
    // 0x12ef68: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x12ef68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12ef6c: 0xc044086  jal         func_110218
    ctx->pc = 0x12EF6Cu;
    SET_GPR_U32(ctx, 31, 0x12EF74u);
    ctx->pc = 0x12EF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EF6Cu;
    // 0x12ef70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110218u, 0x12EF6Cu, 0x12EF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EF74u;
label_12ef74:
    // 0x12ef74: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x12ef74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_12ef78:
    // 0x12ef78: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12EF78u;
    {
        const bool branch_taken_0x12ef78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF78u;
        // 0x12ef7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef78) {
            ctx->pc = 0x12EF9Cu;
            goto label_12ef9c;
        }
    }
    ctx->pc = 0x12EF80u;
    // 0x12ef80: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x12ef80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x12ef84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12EF84u;
    {
        const bool branch_taken_0x12ef84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF84u;
        // 0x12ef88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef84) {
            ctx->pc = 0x12EF98u;
            goto label_12ef98;
        }
    }
    ctx->pc = 0x12EF8Cu;
    // 0x12ef8c: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x12ef8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x12ef90: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x12EF90u;
    SET_GPR_U32(ctx, 31, 0x12EF98u);
    ctx->pc = 0x12EF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EF90u;
    // 0x12ef94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x12EF90u, 0x12EF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EF98u;
label_12ef98:
    // 0x12ef98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12ef98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12ef9c:
    // 0x12ef9c: 0xc04bc88  jal         func_12F220
    ctx->pc = 0x12EF9Cu;
    SET_GPR_U32(ctx, 31, 0x12EFA4u);
    ctx->pc = 0x12EFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EF9Cu;
    // 0x12efa0: 0x24850008  addiu       $a1, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F220u, 0x12EF9Cu, 0x12EFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EFA4u;
label_12efa4:
    // 0x12efa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12efa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12efa8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12efa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12efac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12efacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12efb0: 0x3e00008  jr          $ra
    ctx->pc = 0x12EFB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EFB0u;
        // 0x12efb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EFB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EFB8u;
}
