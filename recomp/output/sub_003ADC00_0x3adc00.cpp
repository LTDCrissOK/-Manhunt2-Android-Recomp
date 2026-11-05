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

// Function: sub_003ADC00
// Address: 0x3adc00 - 0x3adf38
void sub_003ADC00_0x3adc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ADC00_0x3adc00");
#endif

    switch (ctx->pc) {
        case 0x3adc00u: goto label_3adc00;
        case 0x3adc04u: goto label_3adc04;
        case 0x3adc08u: goto label_3adc08;
        case 0x3adc0cu: goto label_3adc0c;
        case 0x3adc10u: goto label_3adc10;
        case 0x3adc14u: goto label_3adc14;
        case 0x3adc18u: goto label_3adc18;
        case 0x3adc1cu: goto label_3adc1c;
        case 0x3adc20u: goto label_3adc20;
        case 0x3adc24u: goto label_3adc24;
        case 0x3adc28u: goto label_3adc28;
        case 0x3adc2cu: goto label_3adc2c;
        case 0x3adc30u: goto label_3adc30;
        case 0x3adc34u: goto label_3adc34;
        case 0x3adc38u: goto label_3adc38;
        case 0x3adc3cu: goto label_3adc3c;
        case 0x3adc40u: goto label_3adc40;
        case 0x3adc44u: goto label_3adc44;
        case 0x3adc48u: goto label_3adc48;
        case 0x3adc4cu: goto label_3adc4c;
        case 0x3adc50u: goto label_3adc50;
        case 0x3adc54u: goto label_3adc54;
        case 0x3adc58u: goto label_3adc58;
        case 0x3adc5cu: goto label_3adc5c;
        case 0x3adc60u: goto label_3adc60;
        case 0x3adc64u: goto label_3adc64;
        case 0x3adc68u: goto label_3adc68;
        case 0x3adc6cu: goto label_3adc6c;
        case 0x3adc70u: goto label_3adc70;
        case 0x3adc74u: goto label_3adc74;
        case 0x3adc78u: goto label_3adc78;
        case 0x3adc7cu: goto label_3adc7c;
        case 0x3adc80u: goto label_3adc80;
        case 0x3adc84u: goto label_3adc84;
        case 0x3adc88u: goto label_3adc88;
        case 0x3adc8cu: goto label_3adc8c;
        case 0x3adc90u: goto label_3adc90;
        case 0x3adc94u: goto label_3adc94;
        case 0x3adc98u: goto label_3adc98;
        case 0x3adc9cu: goto label_3adc9c;
        case 0x3adca0u: goto label_3adca0;
        case 0x3adca4u: goto label_3adca4;
        case 0x3adca8u: goto label_3adca8;
        case 0x3adcacu: goto label_3adcac;
        case 0x3adcb0u: goto label_3adcb0;
        case 0x3adcb4u: goto label_3adcb4;
        case 0x3adcb8u: goto label_3adcb8;
        case 0x3adcbcu: goto label_3adcbc;
        case 0x3adcc0u: goto label_3adcc0;
        case 0x3adcc4u: goto label_3adcc4;
        case 0x3adcc8u: goto label_3adcc8;
        case 0x3adcccu: goto label_3adccc;
        case 0x3adcd0u: goto label_3adcd0;
        case 0x3adcd4u: goto label_3adcd4;
        case 0x3adcd8u: goto label_3adcd8;
        case 0x3adcdcu: goto label_3adcdc;
        case 0x3adce0u: goto label_3adce0;
        case 0x3adce4u: goto label_3adce4;
        case 0x3adce8u: goto label_3adce8;
        case 0x3adcecu: goto label_3adcec;
        case 0x3adcf0u: goto label_3adcf0;
        case 0x3adcf4u: goto label_3adcf4;
        case 0x3adcf8u: goto label_3adcf8;
        case 0x3adcfcu: goto label_3adcfc;
        case 0x3add00u: goto label_3add00;
        case 0x3add04u: goto label_3add04;
        case 0x3add08u: goto label_3add08;
        case 0x3add0cu: goto label_3add0c;
        case 0x3add10u: goto label_3add10;
        case 0x3add14u: goto label_3add14;
        case 0x3add18u: goto label_3add18;
        case 0x3add1cu: goto label_3add1c;
        case 0x3add20u: goto label_3add20;
        case 0x3add24u: goto label_3add24;
        case 0x3add28u: goto label_3add28;
        case 0x3add2cu: goto label_3add2c;
        case 0x3add30u: goto label_3add30;
        case 0x3add34u: goto label_3add34;
        case 0x3add38u: goto label_3add38;
        case 0x3add3cu: goto label_3add3c;
        case 0x3add40u: goto label_3add40;
        case 0x3add44u: goto label_3add44;
        case 0x3add48u: goto label_3add48;
        case 0x3add4cu: goto label_3add4c;
        case 0x3add50u: goto label_3add50;
        case 0x3add54u: goto label_3add54;
        case 0x3add58u: goto label_3add58;
        case 0x3add5cu: goto label_3add5c;
        case 0x3add60u: goto label_3add60;
        case 0x3add64u: goto label_3add64;
        case 0x3add68u: goto label_3add68;
        case 0x3add6cu: goto label_3add6c;
        case 0x3add70u: goto label_3add70;
        case 0x3add74u: goto label_3add74;
        case 0x3add78u: goto label_3add78;
        case 0x3add7cu: goto label_3add7c;
        case 0x3add80u: goto label_3add80;
        case 0x3add84u: goto label_3add84;
        case 0x3add88u: goto label_3add88;
        case 0x3add8cu: goto label_3add8c;
        case 0x3add90u: goto label_3add90;
        case 0x3add94u: goto label_3add94;
        case 0x3add98u: goto label_3add98;
        case 0x3add9cu: goto label_3add9c;
        case 0x3adda0u: goto label_3adda0;
        case 0x3adda4u: goto label_3adda4;
        case 0x3adda8u: goto label_3adda8;
        case 0x3addacu: goto label_3addac;
        case 0x3addb0u: goto label_3addb0;
        case 0x3addb4u: goto label_3addb4;
        case 0x3addb8u: goto label_3addb8;
        case 0x3addbcu: goto label_3addbc;
        case 0x3addc0u: goto label_3addc0;
        case 0x3addc4u: goto label_3addc4;
        case 0x3addc8u: goto label_3addc8;
        case 0x3addccu: goto label_3addcc;
        case 0x3addd0u: goto label_3addd0;
        case 0x3addd4u: goto label_3addd4;
        case 0x3addd8u: goto label_3addd8;
        case 0x3adddcu: goto label_3adddc;
        case 0x3adde0u: goto label_3adde0;
        case 0x3adde4u: goto label_3adde4;
        case 0x3adde8u: goto label_3adde8;
        case 0x3addecu: goto label_3addec;
        case 0x3addf0u: goto label_3addf0;
        case 0x3addf4u: goto label_3addf4;
        case 0x3addf8u: goto label_3addf8;
        case 0x3addfcu: goto label_3addfc;
        case 0x3ade00u: goto label_3ade00;
        case 0x3ade04u: goto label_3ade04;
        case 0x3ade08u: goto label_3ade08;
        case 0x3ade0cu: goto label_3ade0c;
        case 0x3ade10u: goto label_3ade10;
        case 0x3ade14u: goto label_3ade14;
        case 0x3ade18u: goto label_3ade18;
        case 0x3ade1cu: goto label_3ade1c;
        case 0x3ade20u: goto label_3ade20;
        case 0x3ade24u: goto label_3ade24;
        case 0x3ade28u: goto label_3ade28;
        case 0x3ade2cu: goto label_3ade2c;
        case 0x3ade30u: goto label_3ade30;
        case 0x3ade34u: goto label_3ade34;
        case 0x3ade38u: goto label_3ade38;
        case 0x3ade3cu: goto label_3ade3c;
        case 0x3ade40u: goto label_3ade40;
        case 0x3ade44u: goto label_3ade44;
        case 0x3ade48u: goto label_3ade48;
        case 0x3ade4cu: goto label_3ade4c;
        case 0x3ade50u: goto label_3ade50;
        case 0x3ade54u: goto label_3ade54;
        case 0x3ade58u: goto label_3ade58;
        case 0x3ade5cu: goto label_3ade5c;
        case 0x3ade60u: goto label_3ade60;
        case 0x3ade64u: goto label_3ade64;
        case 0x3ade68u: goto label_3ade68;
        case 0x3ade6cu: goto label_3ade6c;
        case 0x3ade70u: goto label_3ade70;
        case 0x3ade74u: goto label_3ade74;
        case 0x3ade78u: goto label_3ade78;
        case 0x3ade7cu: goto label_3ade7c;
        case 0x3ade80u: goto label_3ade80;
        case 0x3ade84u: goto label_3ade84;
        case 0x3ade88u: goto label_3ade88;
        case 0x3ade8cu: goto label_3ade8c;
        case 0x3ade90u: goto label_3ade90;
        case 0x3ade94u: goto label_3ade94;
        case 0x3ade98u: goto label_3ade98;
        case 0x3ade9cu: goto label_3ade9c;
        case 0x3adea0u: goto label_3adea0;
        case 0x3adea4u: goto label_3adea4;
        case 0x3adea8u: goto label_3adea8;
        case 0x3adeacu: goto label_3adeac;
        case 0x3adeb0u: goto label_3adeb0;
        case 0x3adeb4u: goto label_3adeb4;
        case 0x3adeb8u: goto label_3adeb8;
        case 0x3adebcu: goto label_3adebc;
        case 0x3adec0u: goto label_3adec0;
        case 0x3adec4u: goto label_3adec4;
        case 0x3adec8u: goto label_3adec8;
        case 0x3adeccu: goto label_3adecc;
        case 0x3aded0u: goto label_3aded0;
        case 0x3aded4u: goto label_3aded4;
        case 0x3aded8u: goto label_3aded8;
        case 0x3adedcu: goto label_3adedc;
        case 0x3adee0u: goto label_3adee0;
        case 0x3adee4u: goto label_3adee4;
        case 0x3adee8u: goto label_3adee8;
        case 0x3adeecu: goto label_3adeec;
        case 0x3adef0u: goto label_3adef0;
        case 0x3adef4u: goto label_3adef4;
        case 0x3adef8u: goto label_3adef8;
        case 0x3adefcu: goto label_3adefc;
        case 0x3adf00u: goto label_3adf00;
        case 0x3adf04u: goto label_3adf04;
        case 0x3adf08u: goto label_3adf08;
        case 0x3adf0cu: goto label_3adf0c;
        case 0x3adf10u: goto label_3adf10;
        case 0x3adf14u: goto label_3adf14;
        case 0x3adf18u: goto label_3adf18;
        case 0x3adf1cu: goto label_3adf1c;
        case 0x3adf20u: goto label_3adf20;
        case 0x3adf24u: goto label_3adf24;
        case 0x3adf28u: goto label_3adf28;
        case 0x3adf2cu: goto label_3adf2c;
        case 0x3adf30u: goto label_3adf30;
        case 0x3adf34u: goto label_3adf34;
        default: break;
    }

    ctx->pc = 0x3adc00u;

label_3adc00:
    // 0x3adc00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3adc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3adc04:
    // 0x3adc04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3adc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3adc08:
    // 0x3adc08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3adc08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3adc0c:
    // 0x3adc0c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_3adc10:
    if (ctx->pc == 0x3ADC10u) {
        ctx->pc = 0x3ADC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADC0Cu;
        // 0x3adc10: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADC14u;
        goto label_3adc14;
    }
    ctx->pc = 0x3ADC0Cu;
    {
        const bool branch_taken_0x3adc0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADC0Cu;
        // 0x3adc10: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adc0c) {
            ctx->pc = 0x3ADC34u;
            goto label_3adc34;
        }
    }
    ctx->pc = 0x3ADC14u;
label_3adc14:
    // 0x3adc14: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3adc14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3adc18:
    // 0x3adc18: 0xc0ec408  jal         func_3B1020
label_3adc1c:
    if (ctx->pc == 0x3ADC1Cu) {
        ctx->pc = 0x3ADC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADC18u;
        // 0x3adc1c: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADC20u;
        goto label_3adc20;
    }
    ctx->pc = 0x3ADC18u;
    SET_GPR_U32(ctx, 31, 0x3ADC20u);
    ctx->pc = 0x3ADC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADC18u;
    // 0x3adc1c: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1020u, 0x3ADC18u, 0x3ADC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADC20u;
label_3adc20:
    // 0x3adc20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3adc20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3adc24:
    // 0x3adc24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3adc24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3adc28:
    // 0x3adc28: 0xc0efab3  jal         func_3BEACC
label_3adc2c:
    if (ctx->pc == 0x3ADC2Cu) {
        ctx->pc = 0x3ADC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADC28u;
        // 0x3adc2c: 0x24060104  addiu       $a2, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADC30u;
        goto label_3adc30;
    }
    ctx->pc = 0x3ADC28u;
    SET_GPR_U32(ctx, 31, 0x3ADC30u);
    ctx->pc = 0x3ADC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADC28u;
    // 0x3adc2c: 0x24060104  addiu       $a2, $zero, 0x104 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3ADC28u, 0x3ADC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADC30u;
label_3adc30:
    // 0x3adc30: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x3adc30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
label_3adc34:
    // 0x3adc34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3adc34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3adc38:
    // 0x3adc38: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3adc38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3adc3c:
    // 0x3adc3c: 0x3e00008  jr          $ra
label_3adc40:
    if (ctx->pc == 0x3ADC40u) {
        ctx->pc = 0x3ADC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADC3Cu;
        // 0x3adc40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADC44u;
        goto label_3adc44;
    }
    ctx->pc = 0x3ADC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ADC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADC3Cu;
        // 0x3adc40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ADC3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ADC44u;
label_3adc44:
    // 0x3adc44: 0x0  nop
    ctx->pc = 0x3adc44u;
    // NOP
label_3adc48:
    // 0x3adc48: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3adc48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3adc4c:
    // 0x3adc4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3adc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3adc50:
    // 0x3adc50: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x3adc50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_3adc54:
    // 0x3adc54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3adc54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3adc58:
    // 0x3adc58: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x3adc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
label_3adc5c:
    // 0x3adc5c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3adc5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3adc60:
    // 0x3adc60: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x3adc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_3adc64:
    // 0x3adc64: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3adc64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3adc68:
    // 0x3adc68: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x3adc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
label_3adc6c:
    // 0x3adc6c: 0x2613000c  addiu       $s3, $s0, 0xC
    ctx->pc = 0x3adc6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_3adc70:
    // 0x3adc70: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x3adc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_3adc74:
    // 0x3adc74: 0x26140018  addiu       $s4, $s0, 0x18
    ctx->pc = 0x3adc74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_3adc78:
    // 0x3adc78: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x3adc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
label_3adc7c:
    // 0x3adc7c: 0x2615000d  addiu       $s5, $s0, 0xD
    ctx->pc = 0x3adc7cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
label_3adc80:
    // 0x3adc80: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x3adc80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_3adc84:
    // 0x3adc84: 0x2616000e  addiu       $s6, $s0, 0xE
    ctx->pc = 0x3adc84u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
label_3adc88:
    // 0x3adc88: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x3adc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
label_3adc8c:
    // 0x3adc8c: 0x26170010  addiu       $s7, $s0, 0x10
    ctx->pc = 0x3adc8cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3adc90:
    // 0x3adc90: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x3adc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_3adc94:
    // 0x3adc94: 0x261e000f  addiu       $fp, $s0, 0xF
    ctx->pc = 0x3adc94u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
label_3adc98:
    // 0x3adc98: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x3adc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
label_3adc9c:
    // 0x3adc9c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3adc9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3adca0:
    // 0x3adca0: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x3adca0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_3adca4:
    // 0x3adca4: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x3adca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_3adca8:
    // 0x3adca8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3adca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3adcac:
    // 0x3adcac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3adcacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3adcb0:
    // 0x3adcb0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3adcb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3adcb4:
    // 0x3adcb4: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x3adcb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3adcb8:
    // 0x3adcb8: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x3adcb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3adcbc:
    // 0x3adcbc: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x3adcbcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3adcc0:
    // 0x3adcc0: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x3adcc0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3adcc4:
    // 0x3adcc4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x3adcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_3adcc8:
    // 0x3adcc8: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x3adcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
label_3adccc:
    // 0x3adccc: 0xc0ebeda  jal         func_3AFB68
label_3adcd0:
    if (ctx->pc == 0x3ADCD0u) {
        ctx->pc = 0x3ADCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADCCCu;
        // 0x3adcd0: 0xafb70008  sw          $s7, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADCD4u;
        goto label_3adcd4;
    }
    ctx->pc = 0x3ADCCCu;
    SET_GPR_U32(ctx, 31, 0x3ADCD4u);
    ctx->pc = 0x3ADCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADCCCu;
    // 0x3adcd0: 0xafb70008  sw          $s7, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFB68u, 0x3ADCCCu, 0x3ADCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADCD4u;
label_3adcd4:
    // 0x3adcd4: 0x440008b  bltz        $v0, . + 4 + (0x8B << 2)
label_3adcd8:
    if (ctx->pc == 0x3ADCD8u) {
        ctx->pc = 0x3ADCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADCD4u;
        // 0x3adcd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADCDCu;
        goto label_3adcdc;
    }
    ctx->pc = 0x3ADCD4u;
    {
        const bool branch_taken_0x3adcd4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3ADCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADCD4u;
        // 0x3adcd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adcd4) {
            ctx->pc = 0x3ADF04u;
            goto label_3adf04;
        }
    }
    ctx->pc = 0x3ADCDCu;
label_3adcdc:
    // 0x3adcdc: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x3adcdcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_3adce0:
    // 0x3adce0: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x3adce0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_3adce4:
    // 0x3adce4: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
label_3adce8:
    if (ctx->pc == 0x3ADCE8u) {
        ctx->pc = 0x3ADCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADCE4u;
        // 0x3adce8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADCECu;
        goto label_3adcec;
    }
    ctx->pc = 0x3ADCE4u;
    {
        const bool branch_taken_0x3adce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ADCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADCE4u;
        // 0x3adce8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adce4) {
            ctx->pc = 0x3ADDD0u;
            goto label_3addd0;
        }
    }
    ctx->pc = 0x3ADCECu;
label_3adcec:
    // 0x3adcec: 0x8e0200b4  lw          $v0, 0xB4($s0)
    ctx->pc = 0x3adcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_3adcf0:
    // 0x3adcf0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_3adcf4:
    if (ctx->pc == 0x3ADCF4u) {
        ctx->pc = 0x3ADCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADCF0u;
        // 0x3adcf4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADCF8u;
        goto label_3adcf8;
    }
    ctx->pc = 0x3ADCF0u;
    {
        const bool branch_taken_0x3adcf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3adcf0) {
            ctx->pc = 0x3ADCF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ADCF0u;
            // 0x3adcf4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ADD18u;
            goto label_3add18;
        }
    }
    ctx->pc = 0x3ADCF8u;
label_3adcf8:
    // 0x3adcf8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3adcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3adcfc:
    // 0x3adcfc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3adcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_3add00:
    // 0x3add00: 0x2484fd48  addiu       $a0, $a0, -0x2B8
    ctx->pc = 0x3add00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966600));
label_3add04:
    // 0x3add04: 0xc0ec11c  jal         func_3B0470
label_3add08:
    if (ctx->pc == 0x3ADD08u) {
        ctx->pc = 0x3ADD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADD04u;
        // 0x3add08: 0x24a5fd68  addiu       $a1, $a1, -0x298 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966632));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADD0Cu;
        goto label_3add0c;
    }
    ctx->pc = 0x3ADD04u;
    SET_GPR_U32(ctx, 31, 0x3ADD0Cu);
    ctx->pc = 0x3ADD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADD04u;
    // 0x3add08: 0x24a5fd68  addiu       $a1, $a1, -0x298 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0470u, 0x3ADD04u, 0x3ADD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADD0Cu;
label_3add0c:
    // 0x3add0c: 0x1000007d  b           . + 4 + (0x7D << 2)
label_3add10:
    if (ctx->pc == 0x3ADD10u) {
        ctx->pc = 0x3ADD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADD0Cu;
        // 0x3add10: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADD14u;
        goto label_3add14;
    }
    ctx->pc = 0x3ADD0Cu;
    {
        const bool branch_taken_0x3add0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADD0Cu;
        // 0x3add10: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3add0c) {
            ctx->pc = 0x3ADF04u;
            goto label_3adf04;
        }
    }
    ctx->pc = 0x3ADD14u;
label_3add14:
    // 0x3add14: 0x0  nop
    ctx->pc = 0x3add14u;
    // NOP
label_3add18:
    // 0x3add18: 0x24090060  addiu       $t1, $zero, 0x60
    ctx->pc = 0x3add18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_3add1c:
    // 0x3add1c: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x3add1cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_3add20:
    // 0x3add20: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x3add20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3add24:
    // 0x3add24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3add24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3add28:
    // 0x3add28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3add28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3add2c:
    // 0x3add2c: 0x82c30000  lb          $v1, 0x0($s6)
    ctx->pc = 0x3add2cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_3add30:
    // 0x3add30: 0x27a60042  addiu       $a2, $sp, 0x42
    ctx->pc = 0x3add30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 66));
label_3add34:
    // 0x3add34: 0x27a70043  addiu       $a3, $sp, 0x43
    ctx->pc = 0x3add34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 67));
label_3add38:
    // 0x3add38: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3add38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3add3c:
    // 0x3add3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3add3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3add40:
    // 0x3add40: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3add40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_3add44:
    // 0x3add44: 0xa3c20000  sb          $v0, 0x0($fp)
    ctx->pc = 0x3add44u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 0), (uint8_t)GPR_U32(ctx, 2));
label_3add48:
    // 0x3add48: 0xaee90000  sw          $t1, 0x0($s7)
    ctx->pc = 0x3add48u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 9));
label_3add4c:
    // 0x3add4c: 0xa6080098  sh          $t0, 0x98($s0)
    ctx->pc = 0x3add4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 8));
label_3add50:
    // 0x3add50: 0xa600001c  sh          $zero, 0x1C($s0)
    ctx->pc = 0x3add50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 0));
label_3add54:
    // 0x3add54: 0xa6000024  sh          $zero, 0x24($s0)
    ctx->pc = 0x3add54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
label_3add58:
    // 0x3add58: 0xa6000026  sh          $zero, 0x26($s0)
    ctx->pc = 0x3add58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 0));
label_3add5c:
    // 0x3add5c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x3add5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_3add60:
    // 0x3add60: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x3add60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_3add64:
    // 0x3add64: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x3add64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_3add68:
    // 0x3add68: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x3add68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_3add6c:
    // 0x3add6c: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x3add6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_3add70:
    // 0x3add70: 0xc0ebf3a  jal         func_3AFCE8
label_3add74:
    if (ctx->pc == 0x3ADD74u) {
        ctx->pc = 0x3ADD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADD70u;
        // 0x3add74: 0xae000088  sw          $zero, 0x88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADD78u;
        goto label_3add78;
    }
    ctx->pc = 0x3ADD70u;
    SET_GPR_U32(ctx, 31, 0x3ADD78u);
    ctx->pc = 0x3ADD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADD70u;
    // 0x3add74: 0xae000088  sw          $zero, 0x88($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCE8u, 0x3ADD70u, 0x3ADD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADD78u;
label_3add78:
    // 0x3add78: 0x4400036  bltz        $v0, . + 4 + (0x36 << 2)
label_3add7c:
    if (ctx->pc == 0x3ADD7Cu) {
        ctx->pc = 0x3ADD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADD78u;
        // 0x3add7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADD80u;
        goto label_3add80;
    }
    ctx->pc = 0x3ADD78u;
    {
        const bool branch_taken_0x3add78 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3ADD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADD78u;
        // 0x3add7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3add78) {
            ctx->pc = 0x3ADE54u;
            goto label_3ade54;
        }
    }
    ctx->pc = 0x3ADD80u;
label_3add80:
    // 0x3add80: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x3add80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3add84:
    // 0x3add84: 0x93a50042  lbu         $a1, 0x42($sp)
    ctx->pc = 0x3add84u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 66)));
label_3add88:
    // 0x3add88: 0x27a80032  addiu       $t0, $sp, 0x32
    ctx->pc = 0x3add88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 50));
label_3add8c:
    // 0x3add8c: 0x93a60043  lbu         $a2, 0x43($sp)
    ctx->pc = 0x3add8cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 67)));
label_3add90:
    // 0x3add90: 0x27a90034  addiu       $t1, $sp, 0x34
    ctx->pc = 0x3add90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_3add94:
    // 0x3add94: 0x27aa0036  addiu       $t2, $sp, 0x36
    ctx->pc = 0x3add94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 54));
label_3add98:
    // 0x3add98: 0xc0eb8cc  jal         func_3AE330
label_3add9c:
    if (ctx->pc == 0x3ADD9Cu) {
        ctx->pc = 0x3ADD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADD98u;
        // 0x3add9c: 0xa7a00030  sh          $zero, 0x30($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADDA0u;
        goto label_3adda0;
    }
    ctx->pc = 0x3ADD98u;
    SET_GPR_U32(ctx, 31, 0x3ADDA0u);
    ctx->pc = 0x3ADD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADD98u;
    // 0x3add9c: 0xa7a00030  sh          $zero, 0x30($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE330u, 0x3ADD98u, 0x3ADDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADDA0u;
label_3adda0:
    // 0x3adda0: 0x4400058  bltz        $v0, . + 4 + (0x58 << 2)
label_3adda4:
    if (ctx->pc == 0x3ADDA4u) {
        ctx->pc = 0x3ADDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADDA0u;
        // 0x3adda4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADDA8u;
        goto label_3adda8;
    }
    ctx->pc = 0x3ADDA0u;
    {
        const bool branch_taken_0x3adda0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3ADDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADDA0u;
        // 0x3adda4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adda0) {
            ctx->pc = 0x3ADF04u;
            goto label_3adf04;
        }
    }
    ctx->pc = 0x3ADDA8u;
label_3adda8:
    // 0x3adda8: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3adda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3addac:
    // 0x3addac: 0x8c423708  lw          $v0, 0x3708($v0)
    ctx->pc = 0x3addacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14088)));
label_3addb0:
    // 0x3addb0: 0x50400047  beql        $v0, $zero, . + 4 + (0x47 << 2)
label_3addb4:
    if (ctx->pc == 0x3ADDB4u) {
        ctx->pc = 0x3ADDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADDB0u;
        // 0x3addb4: 0x8202000e  lb          $v0, 0xE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADDB8u;
        goto label_3addb8;
    }
    ctx->pc = 0x3ADDB0u;
    {
        const bool branch_taken_0x3addb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3addb0) {
            ctx->pc = 0x3ADDB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ADDB0u;
            // 0x3addb4: 0x8202000e  lb          $v0, 0xE($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ADED0u;
            goto label_3aded0;
        }
    }
    ctx->pc = 0x3ADDB8u;
label_3addb8:
    // 0x3addb8: 0x8e0400b4  lw          $a0, 0xB4($s0)
    ctx->pc = 0x3addb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_3addbc:
    // 0x3addbc: 0x40f809  jalr        $v0
label_3addc0:
    if (ctx->pc == 0x3ADDC0u) {
        ctx->pc = 0x3ADDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADDBCu;
        // 0x3addc0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADDC4u;
        goto label_3addc4;
    }
    ctx->pc = 0x3ADDBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3ADDC4u);
        ctx->pc = 0x3ADDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADDBCu;
        // 0x3addc0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ADDBCu, 0x3ADDC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ADDC4u;
label_3addc4:
    // 0x3addc4: 0x10000042  b           . + 4 + (0x42 << 2)
label_3addc8:
    if (ctx->pc == 0x3ADDC8u) {
        ctx->pc = 0x3ADDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADDC4u;
        // 0x3addc8: 0x8202000e  lb          $v0, 0xE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADDCCu;
        goto label_3addcc;
    }
    ctx->pc = 0x3ADDC4u;
    {
        const bool branch_taken_0x3addc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADDC4u;
        // 0x3addc8: 0x8202000e  lb          $v0, 0xE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3addc4) {
            ctx->pc = 0x3ADED0u;
            goto label_3aded0;
        }
    }
    ctx->pc = 0x3ADDCCu;
label_3addcc:
    // 0x3addcc: 0x0  nop
    ctx->pc = 0x3addccu;
    // NOP
label_3addd0:
    // 0x3addd0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3addd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3addd4:
    // 0x3addd4: 0x27a60042  addiu       $a2, $sp, 0x42
    ctx->pc = 0x3addd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 66));
label_3addd8:
    // 0x3addd8: 0xc0ebf3a  jal         func_3AFCE8
label_3adddc:
    if (ctx->pc == 0x3ADDDCu) {
        ctx->pc = 0x3ADDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADDD8u;
        // 0x3adddc: 0x27a70043  addiu       $a3, $sp, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 67));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADDE0u;
        goto label_3adde0;
    }
    ctx->pc = 0x3ADDD8u;
    SET_GPR_U32(ctx, 31, 0x3ADDE0u);
    ctx->pc = 0x3ADDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADDD8u;
    // 0x3adddc: 0x27a70043  addiu       $a3, $sp, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCE8u, 0x3ADDD8u, 0x3ADDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADDE0u;
label_3adde0:
    // 0x3adde0: 0x440001c  bltz        $v0, . + 4 + (0x1C << 2)
label_3adde4:
    if (ctx->pc == 0x3ADDE4u) {
        ctx->pc = 0x3ADDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADDE0u;
        // 0x3adde4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADDE8u;
        goto label_3adde8;
    }
    ctx->pc = 0x3ADDE0u;
    {
        const bool branch_taken_0x3adde0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3ADDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADDE0u;
        // 0x3adde4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adde0) {
            ctx->pc = 0x3ADE54u;
            goto label_3ade54;
        }
    }
    ctx->pc = 0x3ADDE8u;
label_3adde8:
    // 0x3adde8: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x3adde8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3addec:
    // 0x3addec: 0x93a50042  lbu         $a1, 0x42($sp)
    ctx->pc = 0x3addecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 66)));
label_3addf0:
    // 0x3addf0: 0x27a80044  addiu       $t0, $sp, 0x44
    ctx->pc = 0x3addf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_3addf4:
    // 0x3addf4: 0x93a60043  lbu         $a2, 0x43($sp)
    ctx->pc = 0x3addf4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 67)));
label_3addf8:
    // 0x3addf8: 0x27a90046  addiu       $t1, $sp, 0x46
    ctx->pc = 0x3addf8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 70));
label_3addfc:
    // 0x3addfc: 0xc0eb8cc  jal         func_3AE330
label_3ade00:
    if (ctx->pc == 0x3ADE00u) {
        ctx->pc = 0x3ADE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADDFCu;
        // 0x3ade00: 0x27aa0048  addiu       $t2, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADE04u;
        goto label_3ade04;
    }
    ctx->pc = 0x3ADDFCu;
    SET_GPR_U32(ctx, 31, 0x3ADE04u);
    ctx->pc = 0x3ADE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADDFCu;
    // 0x3ade00: 0x27aa0048  addiu       $t2, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE330u, 0x3ADDFCu, 0x3ADE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADE04u;
label_3ade04:
    // 0x3ade04: 0x440ffc1  bltz        $v0, . + 4 + (-0x3F << 2)
label_3ade08:
    if (ctx->pc == 0x3ADE08u) {
        ctx->pc = 0x3ADE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADE04u;
        // 0x3ade08: 0x2613001c  addiu       $s3, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADE0Cu;
        goto label_3ade0c;
    }
    ctx->pc = 0x3ADE04u;
    {
        const bool branch_taken_0x3ade04 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3ADE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADE04u;
        // 0x3ade08: 0x2613001c  addiu       $s3, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ade04) {
            ctx->pc = 0x3ADD0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3add0c;
        }
    }
    ctx->pc = 0x3ADE0Cu;
label_3ade0c:
    // 0x3ade0c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3ade0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3ade10:
    // 0x3ade10: 0x87a50044  lh          $a1, 0x44($sp)
    ctx->pc = 0x3ade10u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 68)));
label_3ade14:
    // 0x3ade14: 0x87a60046  lh          $a2, 0x46($sp)
    ctx->pc = 0x3ade14u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 70)));
label_3ade18:
    // 0x3ade18: 0xc0ec3fc  jal         func_3B0FF0
label_3ade1c:
    if (ctx->pc == 0x3ADE1Cu) {
        ctx->pc = 0x3ADE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADE18u;
        // 0x3ade1c: 0x87a70048  lh          $a3, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADE20u;
        goto label_3ade20;
    }
    ctx->pc = 0x3ADE18u;
    SET_GPR_U32(ctx, 31, 0x3ADE20u);
    ctx->pc = 0x3ADE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADE18u;
    // 0x3ade1c: 0x87a70048  lh          $a3, 0x48($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0FF0u, 0x3ADE18u, 0x3ADE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADE20u;
label_3ade20:
    // 0x3ade20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ade20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ade24:
    // 0x3ade24: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3ade24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ade28:
    // 0x3ade28: 0xc0ebf1a  jal         func_3AFC68
label_3ade2c:
    if (ctx->pc == 0x3ADE2Cu) {
        ctx->pc = 0x3ADE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADE28u;
        // 0x3ade2c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADE30u;
        goto label_3ade30;
    }
    ctx->pc = 0x3ADE28u;
    SET_GPR_U32(ctx, 31, 0x3ADE30u);
    ctx->pc = 0x3ADE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADE28u;
    // 0x3ade2c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFC68u, 0x3ADE28u, 0x3ADE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADE30u;
label_3ade30:
    // 0x3ade30: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
label_3ade34:
    if (ctx->pc == 0x3ADE34u) {
        ctx->pc = 0x3ADE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADE30u;
        // 0x3ade34: 0x27b40020  addiu       $s4, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADE38u;
        goto label_3ade38;
    }
    ctx->pc = 0x3ADE30u;
    {
        const bool branch_taken_0x3ade30 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3ADE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADE30u;
        // 0x3ade34: 0x27b40020  addiu       $s4, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ade30) {
            ctx->pc = 0x3ADE54u;
            goto label_3ade54;
        }
    }
    ctx->pc = 0x3ADE38u;
label_3ade38:
    // 0x3ade38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ade38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ade3c:
    // 0x3ade3c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3ade3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ade40:
    // 0x3ade40: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3ade40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3ade44:
    // 0x3ade44: 0xc0ebf58  jal         func_3AFD60
label_3ade48:
    if (ctx->pc == 0x3ADE48u) {
        ctx->pc = 0x3ADE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADE44u;
        // 0x3ade48: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADE4Cu;
        goto label_3ade4c;
    }
    ctx->pc = 0x3ADE44u;
    SET_GPR_U32(ctx, 31, 0x3ADE4Cu);
    ctx->pc = 0x3ADE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADE44u;
    // 0x3ade48: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFD60u, 0x3ADE44u, 0x3ADE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADE4Cu;
label_3ade4c:
    // 0x3ade4c: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
label_3ade50:
    if (ctx->pc == 0x3ADE50u) {
        ctx->pc = 0x3ADE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADE4Cu;
        // 0x3ade50: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADE54u;
        goto label_3ade54;
    }
    ctx->pc = 0x3ADE4Cu;
    {
        const bool branch_taken_0x3ade4c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3ade4c) {
            ctx->pc = 0x3ADE50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ADE4Cu;
            // 0x3ade50: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ADE60u;
            goto label_3ade60;
        }
    }
    ctx->pc = 0x3ADE54u;
label_3ade54:
    // 0x3ade54: 0x1000002b  b           . + 4 + (0x2B << 2)
label_3ade58:
    if (ctx->pc == 0x3ADE58u) {
        ctx->pc = 0x3ADE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADE54u;
        // 0x3ade58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADE5Cu;
        goto label_3ade5c;
    }
    ctx->pc = 0x3ADE54u;
    {
        const bool branch_taken_0x3ade54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADE54u;
        // 0x3ade58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ade54) {
            ctx->pc = 0x3ADF04u;
            goto label_3adf04;
        }
    }
    ctx->pc = 0x3ADE5Cu;
label_3ade5c:
    // 0x3ade5c: 0x0  nop
    ctx->pc = 0x3ade5cu;
    // NOP
label_3ade60:
    // 0x3ade60: 0x86660000  lh          $a2, 0x0($s3)
    ctx->pc = 0x3ade60u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_3ade64:
    // 0x3ade64: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3ade64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ade68:
    // 0x3ade68: 0xc0ec3de  jal         func_3B0F78
label_3ade6c:
    if (ctx->pc == 0x3ADE6Cu) {
        ctx->pc = 0x3ADE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADE68u;
        // 0x3ade6c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADE70u;
        goto label_3ade70;
    }
    ctx->pc = 0x3ADE68u;
    SET_GPR_U32(ctx, 31, 0x3ADE70u);
    ctx->pc = 0x3ADE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADE68u;
    // 0x3ade6c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0F78u, 0x3ADE68u, 0x3ADE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADE70u;
label_3ade70:
    // 0x3ade70: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3ade70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3ade74:
    // 0x3ade74: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3ade74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3ade78:
    // 0x3ade78: 0xc0ec3e8  jal         func_3B0FA0
label_3ade7c:
    if (ctx->pc == 0x3ADE7Cu) {
        ctx->pc = 0x3ADE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADE78u;
        // 0x3ade7c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADE80u;
        goto label_3ade80;
    }
    ctx->pc = 0x3ADE78u;
    SET_GPR_U32(ctx, 31, 0x3ADE80u);
    ctx->pc = 0x3ADE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADE78u;
    // 0x3ade7c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0FA0u, 0x3ADE78u, 0x3ADE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADE80u;
label_3ade80:
    // 0x3ade80: 0x26020034  addiu       $v0, $s0, 0x34
    ctx->pc = 0x3ade80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
label_3ade84:
    // 0x3ade84: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x3ade84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_3ade88:
    // 0x3ade88: 0x26070024  addiu       $a3, $s0, 0x24
    ctx->pc = 0x3ade88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_3ade8c:
    // 0x3ade8c: 0x26080026  addiu       $t0, $s0, 0x26
    ctx->pc = 0x3ade8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 38));
label_3ade90:
    // 0x3ade90: 0x26090028  addiu       $t1, $s0, 0x28
    ctx->pc = 0x3ade90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_3ade94:
    // 0x3ade94: 0x260a002c  addiu       $t2, $s0, 0x2C
    ctx->pc = 0x3ade94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_3ade98:
    // 0x3ade98: 0x260b0030  addiu       $t3, $s0, 0x30
    ctx->pc = 0x3ade98u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_3ade9c:
    // 0x3ade9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ade9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3adea0:
    // 0x3adea0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3adea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3adea4:
    // 0x3adea4: 0xc0ebfa6  jal         func_3AFE98
label_3adea8:
    if (ctx->pc == 0x3ADEA8u) {
        ctx->pc = 0x3ADEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADEA4u;
        // 0x3adea8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADEACu;
        goto label_3adeac;
    }
    ctx->pc = 0x3ADEA4u;
    SET_GPR_U32(ctx, 31, 0x3ADEACu);
    ctx->pc = 0x3ADEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADEA4u;
    // 0x3adea8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFE98u, 0x3ADEA4u, 0x3ADEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADEACu;
label_3adeac:
    // 0x3adeac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3adeacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3adeb0:
    // 0x3adeb0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3adeb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3adeb4:
    // 0x3adeb4: 0x260600cc  addiu       $a2, $s0, 0xCC
    ctx->pc = 0x3adeb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 204));
label_3adeb8:
    // 0x3adeb8: 0x260700d0  addiu       $a3, $s0, 0xD0
    ctx->pc = 0x3adeb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_3adebc:
    // 0x3adebc: 0x260800e0  addiu       $t0, $s0, 0xE0
    ctx->pc = 0x3adebcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_3adec0:
    // 0x3adec0: 0xc0ec03e  jal         func_3B00F8
label_3adec4:
    if (ctx->pc == 0x3ADEC4u) {
        ctx->pc = 0x3ADEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADEC0u;
        // 0x3adec4: 0x260900e2  addiu       $t1, $s0, 0xE2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 226));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADEC8u;
        goto label_3adec8;
    }
    ctx->pc = 0x3ADEC0u;
    SET_GPR_U32(ctx, 31, 0x3ADEC8u);
    ctx->pc = 0x3ADEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADEC0u;
    // 0x3adec4: 0x260900e2  addiu       $t1, $s0, 0xE2 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 226));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B00F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B00F8u, 0x3ADEC0u, 0x3ADEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADEC8u;
label_3adec8:
    // 0x3adec8: 0xa6000098  sh          $zero, 0x98($s0)
    ctx->pc = 0x3adec8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 0));
label_3adecc:
    // 0x3adecc: 0x8202000e  lb          $v0, 0xE($s0)
    ctx->pc = 0x3adeccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_3aded0:
    // 0x3aded0: 0x8203000f  lb          $v1, 0xF($s0)
    ctx->pc = 0x3aded0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
label_3aded4:
    // 0x3aded4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3aded4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3aded8:
    // 0x3aded8: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x3aded8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_3adedc:
    // 0x3adedc: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x3adedcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_3adee0:
    // 0x3adee0: 0x8e070044  lw          $a3, 0x44($s0)
    ctx->pc = 0x3adee0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_3adee4:
    // 0x3adee4: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x3adee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_3adee8:
    // 0x3adee8: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3adee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3adeec:
    // 0x3adeec: 0xae040058  sw          $a0, 0x58($s0)
    ctx->pc = 0x3adeecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 4));
label_3adef0:
    // 0x3adef0: 0xae05005c  sw          $a1, 0x5C($s0)
    ctx->pc = 0x3adef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 5));
label_3adef4:
    // 0x3adef4: 0xae060060  sw          $a2, 0x60($s0)
    ctx->pc = 0x3adef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 6));
label_3adef8:
    // 0x3adef8: 0xae070064  sw          $a3, 0x64($s0)
    ctx->pc = 0x3adef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 7));
label_3adefc:
    // 0x3adefc: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x3adefcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
label_3adf00:
    // 0x3adf00: 0x87a20040  lh          $v0, 0x40($sp)
    ctx->pc = 0x3adf00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 64)));
label_3adf04:
    // 0x3adf04: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x3adf04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3adf08:
    // 0x3adf08: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x3adf08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_3adf0c:
    // 0x3adf0c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x3adf0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3adf10:
    // 0x3adf10: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x3adf10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_3adf14:
    // 0x3adf14: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x3adf14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3adf18:
    // 0x3adf18: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x3adf18u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_3adf1c:
    // 0x3adf1c: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x3adf1cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3adf20:
    // 0x3adf20: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x3adf20u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_3adf24:
    // 0x3adf24: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x3adf24u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3adf28:
    // 0x3adf28: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x3adf28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_3adf2c:
    // 0x3adf2c: 0x3e00008  jr          $ra
label_3adf30:
    if (ctx->pc == 0x3ADF30u) {
        ctx->pc = 0x3ADF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADF2Cu;
        // 0x3adf30: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADF34u;
        goto label_3adf34;
    }
    ctx->pc = 0x3ADF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ADF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADF2Cu;
        // 0x3adf30: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ADF2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ADF34u;
label_3adf34:
    // 0x3adf34: 0x0  nop
    ctx->pc = 0x3adf34u;
    // NOP
    ctx->pc = 0x3adf38u;
}
