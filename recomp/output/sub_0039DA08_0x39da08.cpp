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

// Function: sub_0039DA08
// Address: 0x39da08 - 0x39db88
void sub_0039DA08_0x39da08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039DA08_0x39da08");
#endif

    switch (ctx->pc) {
        case 0x39da08u: goto label_39da08;
        case 0x39da0cu: goto label_39da0c;
        case 0x39da10u: goto label_39da10;
        case 0x39da14u: goto label_39da14;
        case 0x39da18u: goto label_39da18;
        case 0x39da1cu: goto label_39da1c;
        case 0x39da20u: goto label_39da20;
        case 0x39da24u: goto label_39da24;
        case 0x39da28u: goto label_39da28;
        case 0x39da2cu: goto label_39da2c;
        case 0x39da30u: goto label_39da30;
        case 0x39da34u: goto label_39da34;
        case 0x39da38u: goto label_39da38;
        case 0x39da3cu: goto label_39da3c;
        case 0x39da40u: goto label_39da40;
        case 0x39da44u: goto label_39da44;
        case 0x39da48u: goto label_39da48;
        case 0x39da4cu: goto label_39da4c;
        case 0x39da50u: goto label_39da50;
        case 0x39da54u: goto label_39da54;
        case 0x39da58u: goto label_39da58;
        case 0x39da5cu: goto label_39da5c;
        case 0x39da60u: goto label_39da60;
        case 0x39da64u: goto label_39da64;
        case 0x39da68u: goto label_39da68;
        case 0x39da6cu: goto label_39da6c;
        case 0x39da70u: goto label_39da70;
        case 0x39da74u: goto label_39da74;
        case 0x39da78u: goto label_39da78;
        case 0x39da7cu: goto label_39da7c;
        case 0x39da80u: goto label_39da80;
        case 0x39da84u: goto label_39da84;
        case 0x39da88u: goto label_39da88;
        case 0x39da8cu: goto label_39da8c;
        case 0x39da90u: goto label_39da90;
        case 0x39da94u: goto label_39da94;
        case 0x39da98u: goto label_39da98;
        case 0x39da9cu: goto label_39da9c;
        case 0x39daa0u: goto label_39daa0;
        case 0x39daa4u: goto label_39daa4;
        case 0x39daa8u: goto label_39daa8;
        case 0x39daacu: goto label_39daac;
        case 0x39dab0u: goto label_39dab0;
        case 0x39dab4u: goto label_39dab4;
        case 0x39dab8u: goto label_39dab8;
        case 0x39dabcu: goto label_39dabc;
        case 0x39dac0u: goto label_39dac0;
        case 0x39dac4u: goto label_39dac4;
        case 0x39dac8u: goto label_39dac8;
        case 0x39daccu: goto label_39dacc;
        case 0x39dad0u: goto label_39dad0;
        case 0x39dad4u: goto label_39dad4;
        case 0x39dad8u: goto label_39dad8;
        case 0x39dadcu: goto label_39dadc;
        case 0x39dae0u: goto label_39dae0;
        case 0x39dae4u: goto label_39dae4;
        case 0x39dae8u: goto label_39dae8;
        case 0x39daecu: goto label_39daec;
        case 0x39daf0u: goto label_39daf0;
        case 0x39daf4u: goto label_39daf4;
        case 0x39daf8u: goto label_39daf8;
        case 0x39dafcu: goto label_39dafc;
        case 0x39db00u: goto label_39db00;
        case 0x39db04u: goto label_39db04;
        case 0x39db08u: goto label_39db08;
        case 0x39db0cu: goto label_39db0c;
        case 0x39db10u: goto label_39db10;
        case 0x39db14u: goto label_39db14;
        case 0x39db18u: goto label_39db18;
        case 0x39db1cu: goto label_39db1c;
        case 0x39db20u: goto label_39db20;
        case 0x39db24u: goto label_39db24;
        case 0x39db28u: goto label_39db28;
        case 0x39db2cu: goto label_39db2c;
        case 0x39db30u: goto label_39db30;
        case 0x39db34u: goto label_39db34;
        case 0x39db38u: goto label_39db38;
        case 0x39db3cu: goto label_39db3c;
        case 0x39db40u: goto label_39db40;
        case 0x39db44u: goto label_39db44;
        case 0x39db48u: goto label_39db48;
        case 0x39db4cu: goto label_39db4c;
        case 0x39db50u: goto label_39db50;
        case 0x39db54u: goto label_39db54;
        case 0x39db58u: goto label_39db58;
        case 0x39db5cu: goto label_39db5c;
        case 0x39db60u: goto label_39db60;
        case 0x39db64u: goto label_39db64;
        case 0x39db68u: goto label_39db68;
        case 0x39db6cu: goto label_39db6c;
        case 0x39db70u: goto label_39db70;
        case 0x39db74u: goto label_39db74;
        case 0x39db78u: goto label_39db78;
        case 0x39db7cu: goto label_39db7c;
        case 0x39db80u: goto label_39db80;
        case 0x39db84u: goto label_39db84;
        default: break;
    }

    ctx->pc = 0x39da08u;

label_39da08:
    // 0x39da08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x39da08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_39da0c:
    // 0x39da0c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x39da0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_39da10:
    // 0x39da10: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x39da10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_39da14:
    // 0x39da14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39da14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39da18:
    // 0x39da18: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x39da18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_39da1c:
    // 0x39da1c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x39da1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_39da20:
    // 0x39da20: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x39da20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_39da24:
    // 0x39da24: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x39da24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_39da28:
    // 0x39da28: 0x8e32000c  lw          $s2, 0xC($s1)
    ctx->pc = 0x39da28u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_39da2c:
    // 0x39da2c: 0x8e340004  lw          $s4, 0x4($s1)
    ctx->pc = 0x39da2cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_39da30:
    // 0x39da30: 0xc0e5f2e  jal         func_397CB8
label_39da34:
    if (ctx->pc == 0x39DA34u) {
        ctx->pc = 0x39DA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DA30u;
        // 0x39da34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DA38u;
        goto label_39da38;
    }
    ctx->pc = 0x39DA30u;
    SET_GPR_U32(ctx, 31, 0x39DA38u);
    ctx->pc = 0x39DA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DA30u;
    // 0x39da34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397CB8u, 0x39DA30u, 0x39DA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DA38u;
label_39da38:
    // 0x39da38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39da38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39da3c:
    // 0x39da3c: 0xc0e5f34  jal         func_397CD0
label_39da40:
    if (ctx->pc == 0x39DA40u) {
        ctx->pc = 0x39DA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DA3Cu;
        // 0x39da40: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DA44u;
        goto label_39da44;
    }
    ctx->pc = 0x39DA3Cu;
    SET_GPR_U32(ctx, 31, 0x39DA44u);
    ctx->pc = 0x39DA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DA3Cu;
    // 0x39da40: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397CD0u, 0x39DA3Cu, 0x39DA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DA44u;
label_39da44:
    // 0x39da44: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x39da44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39da48:
    // 0x39da48: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x39da48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_39da4c:
    // 0x39da4c: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x39da4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_39da50:
    // 0x39da50: 0x28432001  slti        $v1, $v0, 0x2001
    ctx->pc = 0x39da50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8193) ? 1 : 0);
label_39da54:
    // 0x39da54: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x39da54u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_39da58:
    // 0x39da58: 0x202802a  slt         $s0, $s0, $v0
    ctx->pc = 0x39da58u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_39da5c:
    // 0x39da5c: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_39da60:
    if (ctx->pc == 0x39DA60u) {
        ctx->pc = 0x39DA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DA5Cu;
        // 0x39da60: 0x82220070  lb          $v0, 0x70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DA64u;
        goto label_39da64;
    }
    ctx->pc = 0x39DA5Cu;
    {
        const bool branch_taken_0x39da5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x39da5c) {
            ctx->pc = 0x39DA60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39DA5Cu;
            // 0x39da60: 0x82220070  lb          $v0, 0x70($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39DA90u;
            goto label_39da90;
        }
    }
    ctx->pc = 0x39DA64u;
label_39da64:
    // 0x39da64: 0xc0e6464  jal         func_399190
label_39da68:
    if (ctx->pc == 0x39DA68u) {
        ctx->pc = 0x39DA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DA64u;
        // 0x39da68: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DA6Cu;
        goto label_39da6c;
    }
    ctx->pc = 0x39DA64u;
    SET_GPR_U32(ctx, 31, 0x39DA6Cu);
    ctx->pc = 0x39DA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DA64u;
    // 0x39da68: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399190u, 0x39DA64u, 0x39DA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DA6Cu;
label_39da6c:
    // 0x39da6c: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x39da6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_39da70:
    // 0x39da70: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_39da74:
    if (ctx->pc == 0x39DA74u) {
        ctx->pc = 0x39DA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DA70u;
        // 0x39da74: 0x82220070  lb          $v0, 0x70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DA78u;
        goto label_39da78;
    }
    ctx->pc = 0x39DA70u;
    {
        const bool branch_taken_0x39da70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39da70) {
            ctx->pc = 0x39DA74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39DA70u;
            // 0x39da74: 0x82220070  lb          $v0, 0x70($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39DA90u;
            goto label_39da90;
        }
    }
    ctx->pc = 0x39DA78u;
label_39da78:
    // 0x39da78: 0xc0e6032  jal         func_3980C8
label_39da7c:
    if (ctx->pc == 0x39DA7Cu) {
        ctx->pc = 0x39DA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DA78u;
        // 0x39da7c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DA80u;
        goto label_39da80;
    }
    ctx->pc = 0x39DA78u;
    SET_GPR_U32(ctx, 31, 0x39DA80u);
    ctx->pc = 0x39DA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DA78u;
    // 0x39da7c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3980C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3980C8u, 0x39DA78u, 0x39DA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DA80u;
label_39da80:
    // 0x39da80: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x39da80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_39da84:
    // 0x39da84: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
label_39da88:
    if (ctx->pc == 0x39DA88u) {
        ctx->pc = 0x39DA8Cu;
        goto label_39da8c;
    }
    ctx->pc = 0x39DA84u;
    {
        const bool branch_taken_0x39da84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x39da84) {
            ctx->pc = 0x39DAD4u;
            goto label_39dad4;
        }
    }
    ctx->pc = 0x39DA8Cu;
label_39da8c:
    // 0x39da8c: 0x82220070  lb          $v0, 0x70($s1)
    ctx->pc = 0x39da8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
label_39da90:
    // 0x39da90: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_39da94:
    if (ctx->pc == 0x39DA94u) {
        ctx->pc = 0x39DA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DA90u;
        // 0x39da94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DA98u;
        goto label_39da98;
    }
    ctx->pc = 0x39DA90u;
    {
        const bool branch_taken_0x39da90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39DA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DA90u;
        // 0x39da94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39da90) {
            ctx->pc = 0x39DAD0u;
            goto label_39dad0;
        }
    }
    ctx->pc = 0x39DA98u;
label_39da98:
    // 0x39da98: 0x82220072  lb          $v0, 0x72($s1)
    ctx->pc = 0x39da98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 114)));
label_39da9c:
    // 0x39da9c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_39daa0:
    if (ctx->pc == 0x39DAA0u) {
        ctx->pc = 0x39DAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DA9Cu;
        // 0x39daa0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DAA4u;
        goto label_39daa4;
    }
    ctx->pc = 0x39DA9Cu;
    {
        const bool branch_taken_0x39da9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39da9c) {
            ctx->pc = 0x39DAA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39DA9Cu;
            // 0x39daa0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39DAC8u;
            goto label_39dac8;
        }
    }
    ctx->pc = 0x39DAA4u;
label_39daa4:
    // 0x39daa4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39daa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39daa8:
    // 0x39daa8: 0xc0e5f26  jal         func_397C98
label_39daac:
    if (ctx->pc == 0x39DAACu) {
        ctx->pc = 0x39DAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DAA8u;
        // 0x39daac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DAB0u;
        goto label_39dab0;
    }
    ctx->pc = 0x39DAA8u;
    SET_GPR_U32(ctx, 31, 0x39DAB0u);
    ctx->pc = 0x39DAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DAA8u;
    // 0x39daac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397C98u, 0x39DAA8u, 0x39DAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DAB0u;
label_39dab0:
    // 0x39dab0: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x39dab0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_39dab4:
    // 0x39dab4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x39dab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_39dab8:
    // 0x39dab8: 0x24420c20  addiu       $v0, $v0, 0xC20
    ctx->pc = 0x39dab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3104));
label_39dabc:
    // 0x39dabc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x39dabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39dac0:
    // 0x39dac0: 0xae2300a0  sw          $v1, 0xA0($s1)
    ctx->pc = 0x39dac0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 3));
label_39dac4:
    // 0x39dac4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x39dac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_39dac8:
    // 0x39dac8: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x39dac8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
label_39dacc:
    // 0x39dacc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39daccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39dad0:
    // 0x39dad0: 0xa2220071  sb          $v0, 0x71($s1)
    ctx->pc = 0x39dad0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 113), (uint8_t)GPR_U32(ctx, 2));
label_39dad4:
    // 0x39dad4: 0xc0e6032  jal         func_3980C8
label_39dad8:
    if (ctx->pc == 0x39DAD8u) {
        ctx->pc = 0x39DAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DAD4u;
        // 0x39dad8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DADCu;
        goto label_39dadc;
    }
    ctx->pc = 0x39DAD4u;
    SET_GPR_U32(ctx, 31, 0x39DADCu);
    ctx->pc = 0x39DAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DAD4u;
    // 0x39dad8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3980C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3980C8u, 0x39DAD4u, 0x39DADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DADCu;
label_39dadc:
    // 0x39dadc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x39dadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_39dae0:
    // 0x39dae0: 0x14430021  bne         $v0, $v1, . + 4 + (0x21 << 2)
label_39dae4:
    if (ctx->pc == 0x39DAE4u) {
        ctx->pc = 0x39DAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DAE0u;
        // 0x39dae4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DAE8u;
        goto label_39dae8;
    }
    ctx->pc = 0x39DAE0u;
    {
        const bool branch_taken_0x39dae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x39DAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DAE0u;
        // 0x39dae4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dae0) {
            ctx->pc = 0x39DB68u;
            goto label_39db68;
        }
    }
    ctx->pc = 0x39DAE8u;
label_39dae8:
    // 0x39dae8: 0xc0e6f98  jal         func_39BE60
label_39daec:
    if (ctx->pc == 0x39DAECu) {
        ctx->pc = 0x39DAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DAE8u;
        // 0x39daec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DAF0u;
        goto label_39daf0;
    }
    ctx->pc = 0x39DAE8u;
    SET_GPR_U32(ctx, 31, 0x39DAF0u);
    ctx->pc = 0x39DAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DAE8u;
    // 0x39daec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BE60u, 0x39DAE8u, 0x39DAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DAF0u;
label_39daf0:
    // 0x39daf0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x39daf0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39daf4:
    // 0x39daf4: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x39daf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_39daf8:
    // 0x39daf8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x39daf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_39dafc:
    // 0x39dafc: 0x18600019  blez        $v1, . + 4 + (0x19 << 2)
label_39db00:
    if (ctx->pc == 0x39DB00u) {
        ctx->pc = 0x39DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DAFCu;
        // 0x39db00: 0x29840  sll         $s3, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DB04u;
        goto label_39db04;
    }
    ctx->pc = 0x39DAFCu;
    {
        const bool branch_taken_0x39dafc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x39DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DAFCu;
        // 0x39db00: 0x29840  sll         $s3, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dafc) {
            ctx->pc = 0x39DB64u;
            goto label_39db64;
        }
    }
    ctx->pc = 0x39DB04u;
label_39db04:
    // 0x39db04: 0x26320018  addiu       $s2, $s1, 0x18
    ctx->pc = 0x39db04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_39db08:
    // 0x39db08: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x39db08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_39db0c:
    // 0x39db0c: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x39db0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_39db10:
    // 0x39db10: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x39db10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_39db14:
    // 0x39db14: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x39db14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_39db18:
    // 0x39db18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39db18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39db1c:
    // 0x39db1c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x39db1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39db20:
    // 0x39db20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39db20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39db24:
    // 0x39db24: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x39db24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39db28:
    // 0x39db28: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x39db28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_39db2c:
    // 0x39db2c: 0x40f809  jalr        $v0
label_39db30:
    if (ctx->pc == 0x39DB30u) {
        ctx->pc = 0x39DB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DB2Cu;
        // 0x39db30: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DB34u;
        goto label_39db34;
    }
    ctx->pc = 0x39DB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39DB34u);
        ctx->pc = 0x39DB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DB2Cu;
        // 0x39db30: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39DB2Cu, 0x39DB34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39DB34u;
label_39db34:
    // 0x39db34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39db34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39db38:
    // 0x39db38: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x39db38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_39db3c:
    // 0x39db3c: 0xc0efab3  jal         func_3BEACC
label_39db40:
    if (ctx->pc == 0x39DB40u) {
        ctx->pc = 0x39DB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DB3Cu;
        // 0x39db40: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DB44u;
        goto label_39db44;
    }
    ctx->pc = 0x39DB3Cu;
    SET_GPR_U32(ctx, 31, 0x39DB44u);
    ctx->pc = 0x39DB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DB3Cu;
    // 0x39db40: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x39DB3Cu, 0x39DB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DB44u;
label_39db44:
    // 0x39db44: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x39db44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39db48:
    // 0x39db48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39db48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39db4c:
    // 0x39db4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x39db4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39db50:
    // 0x39db50: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x39db50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_39db54:
    // 0x39db54: 0x40f809  jalr        $v0
label_39db58:
    if (ctx->pc == 0x39DB58u) {
        ctx->pc = 0x39DB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DB54u;
        // 0x39db58: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DB5Cu;
        goto label_39db5c;
    }
    ctx->pc = 0x39DB54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39DB5Cu);
        ctx->pc = 0x39DB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DB54u;
        // 0x39db58: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39DB54u, 0x39DB5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39DB5Cu;
label_39db5c:
    // 0x39db5c: 0x5620ffec  bnel        $s1, $zero, . + 4 + (-0x14 << 2)
label_39db60:
    if (ctx->pc == 0x39DB60u) {
        ctx->pc = 0x39DB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DB5Cu;
        // 0x39db60: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DB64u;
        goto label_39db64;
    }
    ctx->pc = 0x39DB5Cu;
    {
        const bool branch_taken_0x39db5c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x39db5c) {
            ctx->pc = 0x39DB60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39DB5Cu;
            // 0x39db60: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39DB10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39db10;
        }
    }
    ctx->pc = 0x39DB64u;
label_39db64:
    // 0x39db64: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x39db64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39db68:
    // 0x39db68: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x39db68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_39db6c:
    // 0x39db6c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x39db6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39db70:
    // 0x39db70: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x39db70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_39db74:
    // 0x39db74: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x39db74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_39db78:
    // 0x39db78: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x39db78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_39db7c:
    // 0x39db7c: 0x3e00008  jr          $ra
label_39db80:
    if (ctx->pc == 0x39DB80u) {
        ctx->pc = 0x39DB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DB7Cu;
        // 0x39db80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DB84u;
        goto label_39db84;
    }
    ctx->pc = 0x39DB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39DB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DB7Cu;
        // 0x39db80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39DB7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39DB84u;
label_39db84:
    // 0x39db84: 0x0  nop
    ctx->pc = 0x39db84u;
    // NOP
    ctx->pc = 0x39db88u;
}
