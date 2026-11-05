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

// Function: sub_001BCAE8
// Address: 0x1bcae8 - 0x1bcdd8
void sub_001BCAE8_0x1bcae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BCAE8_0x1bcae8");
#endif

    switch (ctx->pc) {
        case 0x1bcae8u: goto label_1bcae8;
        case 0x1bcaecu: goto label_1bcaec;
        case 0x1bcaf0u: goto label_1bcaf0;
        case 0x1bcaf4u: goto label_1bcaf4;
        case 0x1bcaf8u: goto label_1bcaf8;
        case 0x1bcafcu: goto label_1bcafc;
        case 0x1bcb00u: goto label_1bcb00;
        case 0x1bcb04u: goto label_1bcb04;
        case 0x1bcb08u: goto label_1bcb08;
        case 0x1bcb0cu: goto label_1bcb0c;
        case 0x1bcb10u: goto label_1bcb10;
        case 0x1bcb14u: goto label_1bcb14;
        case 0x1bcb18u: goto label_1bcb18;
        case 0x1bcb1cu: goto label_1bcb1c;
        case 0x1bcb20u: goto label_1bcb20;
        case 0x1bcb24u: goto label_1bcb24;
        case 0x1bcb28u: goto label_1bcb28;
        case 0x1bcb2cu: goto label_1bcb2c;
        case 0x1bcb30u: goto label_1bcb30;
        case 0x1bcb34u: goto label_1bcb34;
        case 0x1bcb38u: goto label_1bcb38;
        case 0x1bcb3cu: goto label_1bcb3c;
        case 0x1bcb40u: goto label_1bcb40;
        case 0x1bcb44u: goto label_1bcb44;
        case 0x1bcb48u: goto label_1bcb48;
        case 0x1bcb4cu: goto label_1bcb4c;
        case 0x1bcb50u: goto label_1bcb50;
        case 0x1bcb54u: goto label_1bcb54;
        case 0x1bcb58u: goto label_1bcb58;
        case 0x1bcb5cu: goto label_1bcb5c;
        case 0x1bcb60u: goto label_1bcb60;
        case 0x1bcb64u: goto label_1bcb64;
        case 0x1bcb68u: goto label_1bcb68;
        case 0x1bcb6cu: goto label_1bcb6c;
        case 0x1bcb70u: goto label_1bcb70;
        case 0x1bcb74u: goto label_1bcb74;
        case 0x1bcb78u: goto label_1bcb78;
        case 0x1bcb7cu: goto label_1bcb7c;
        case 0x1bcb80u: goto label_1bcb80;
        case 0x1bcb84u: goto label_1bcb84;
        case 0x1bcb88u: goto label_1bcb88;
        case 0x1bcb8cu: goto label_1bcb8c;
        case 0x1bcb90u: goto label_1bcb90;
        case 0x1bcb94u: goto label_1bcb94;
        case 0x1bcb98u: goto label_1bcb98;
        case 0x1bcb9cu: goto label_1bcb9c;
        case 0x1bcba0u: goto label_1bcba0;
        case 0x1bcba4u: goto label_1bcba4;
        case 0x1bcba8u: goto label_1bcba8;
        case 0x1bcbacu: goto label_1bcbac;
        case 0x1bcbb0u: goto label_1bcbb0;
        case 0x1bcbb4u: goto label_1bcbb4;
        case 0x1bcbb8u: goto label_1bcbb8;
        case 0x1bcbbcu: goto label_1bcbbc;
        case 0x1bcbc0u: goto label_1bcbc0;
        case 0x1bcbc4u: goto label_1bcbc4;
        case 0x1bcbc8u: goto label_1bcbc8;
        case 0x1bcbccu: goto label_1bcbcc;
        case 0x1bcbd0u: goto label_1bcbd0;
        case 0x1bcbd4u: goto label_1bcbd4;
        case 0x1bcbd8u: goto label_1bcbd8;
        case 0x1bcbdcu: goto label_1bcbdc;
        case 0x1bcbe0u: goto label_1bcbe0;
        case 0x1bcbe4u: goto label_1bcbe4;
        case 0x1bcbe8u: goto label_1bcbe8;
        case 0x1bcbecu: goto label_1bcbec;
        case 0x1bcbf0u: goto label_1bcbf0;
        case 0x1bcbf4u: goto label_1bcbf4;
        case 0x1bcbf8u: goto label_1bcbf8;
        case 0x1bcbfcu: goto label_1bcbfc;
        case 0x1bcc00u: goto label_1bcc00;
        case 0x1bcc04u: goto label_1bcc04;
        case 0x1bcc08u: goto label_1bcc08;
        case 0x1bcc0cu: goto label_1bcc0c;
        case 0x1bcc10u: goto label_1bcc10;
        case 0x1bcc14u: goto label_1bcc14;
        case 0x1bcc18u: goto label_1bcc18;
        case 0x1bcc1cu: goto label_1bcc1c;
        case 0x1bcc20u: goto label_1bcc20;
        case 0x1bcc24u: goto label_1bcc24;
        case 0x1bcc28u: goto label_1bcc28;
        case 0x1bcc2cu: goto label_1bcc2c;
        case 0x1bcc30u: goto label_1bcc30;
        case 0x1bcc34u: goto label_1bcc34;
        case 0x1bcc38u: goto label_1bcc38;
        case 0x1bcc3cu: goto label_1bcc3c;
        case 0x1bcc40u: goto label_1bcc40;
        case 0x1bcc44u: goto label_1bcc44;
        case 0x1bcc48u: goto label_1bcc48;
        case 0x1bcc4cu: goto label_1bcc4c;
        case 0x1bcc50u: goto label_1bcc50;
        case 0x1bcc54u: goto label_1bcc54;
        case 0x1bcc58u: goto label_1bcc58;
        case 0x1bcc5cu: goto label_1bcc5c;
        case 0x1bcc60u: goto label_1bcc60;
        case 0x1bcc64u: goto label_1bcc64;
        case 0x1bcc68u: goto label_1bcc68;
        case 0x1bcc6cu: goto label_1bcc6c;
        case 0x1bcc70u: goto label_1bcc70;
        case 0x1bcc74u: goto label_1bcc74;
        case 0x1bcc78u: goto label_1bcc78;
        case 0x1bcc7cu: goto label_1bcc7c;
        case 0x1bcc80u: goto label_1bcc80;
        case 0x1bcc84u: goto label_1bcc84;
        case 0x1bcc88u: goto label_1bcc88;
        case 0x1bcc8cu: goto label_1bcc8c;
        case 0x1bcc90u: goto label_1bcc90;
        case 0x1bcc94u: goto label_1bcc94;
        case 0x1bcc98u: goto label_1bcc98;
        case 0x1bcc9cu: goto label_1bcc9c;
        case 0x1bcca0u: goto label_1bcca0;
        case 0x1bcca4u: goto label_1bcca4;
        case 0x1bcca8u: goto label_1bcca8;
        case 0x1bccacu: goto label_1bccac;
        case 0x1bccb0u: goto label_1bccb0;
        case 0x1bccb4u: goto label_1bccb4;
        case 0x1bccb8u: goto label_1bccb8;
        case 0x1bccbcu: goto label_1bccbc;
        case 0x1bccc0u: goto label_1bccc0;
        case 0x1bccc4u: goto label_1bccc4;
        case 0x1bccc8u: goto label_1bccc8;
        case 0x1bccccu: goto label_1bcccc;
        case 0x1bccd0u: goto label_1bccd0;
        case 0x1bccd4u: goto label_1bccd4;
        case 0x1bccd8u: goto label_1bccd8;
        case 0x1bccdcu: goto label_1bccdc;
        case 0x1bcce0u: goto label_1bcce0;
        case 0x1bcce4u: goto label_1bcce4;
        case 0x1bcce8u: goto label_1bcce8;
        case 0x1bccecu: goto label_1bccec;
        case 0x1bccf0u: goto label_1bccf0;
        case 0x1bccf4u: goto label_1bccf4;
        case 0x1bccf8u: goto label_1bccf8;
        case 0x1bccfcu: goto label_1bccfc;
        case 0x1bcd00u: goto label_1bcd00;
        case 0x1bcd04u: goto label_1bcd04;
        case 0x1bcd08u: goto label_1bcd08;
        case 0x1bcd0cu: goto label_1bcd0c;
        case 0x1bcd10u: goto label_1bcd10;
        case 0x1bcd14u: goto label_1bcd14;
        case 0x1bcd18u: goto label_1bcd18;
        case 0x1bcd1cu: goto label_1bcd1c;
        case 0x1bcd20u: goto label_1bcd20;
        case 0x1bcd24u: goto label_1bcd24;
        case 0x1bcd28u: goto label_1bcd28;
        case 0x1bcd2cu: goto label_1bcd2c;
        case 0x1bcd30u: goto label_1bcd30;
        case 0x1bcd34u: goto label_1bcd34;
        case 0x1bcd38u: goto label_1bcd38;
        case 0x1bcd3cu: goto label_1bcd3c;
        case 0x1bcd40u: goto label_1bcd40;
        case 0x1bcd44u: goto label_1bcd44;
        case 0x1bcd48u: goto label_1bcd48;
        case 0x1bcd4cu: goto label_1bcd4c;
        case 0x1bcd50u: goto label_1bcd50;
        case 0x1bcd54u: goto label_1bcd54;
        case 0x1bcd58u: goto label_1bcd58;
        case 0x1bcd5cu: goto label_1bcd5c;
        case 0x1bcd60u: goto label_1bcd60;
        case 0x1bcd64u: goto label_1bcd64;
        case 0x1bcd68u: goto label_1bcd68;
        case 0x1bcd6cu: goto label_1bcd6c;
        case 0x1bcd70u: goto label_1bcd70;
        case 0x1bcd74u: goto label_1bcd74;
        case 0x1bcd78u: goto label_1bcd78;
        case 0x1bcd7cu: goto label_1bcd7c;
        case 0x1bcd80u: goto label_1bcd80;
        case 0x1bcd84u: goto label_1bcd84;
        case 0x1bcd88u: goto label_1bcd88;
        case 0x1bcd8cu: goto label_1bcd8c;
        case 0x1bcd90u: goto label_1bcd90;
        case 0x1bcd94u: goto label_1bcd94;
        case 0x1bcd98u: goto label_1bcd98;
        case 0x1bcd9cu: goto label_1bcd9c;
        case 0x1bcda0u: goto label_1bcda0;
        case 0x1bcda4u: goto label_1bcda4;
        case 0x1bcda8u: goto label_1bcda8;
        case 0x1bcdacu: goto label_1bcdac;
        case 0x1bcdb0u: goto label_1bcdb0;
        case 0x1bcdb4u: goto label_1bcdb4;
        case 0x1bcdb8u: goto label_1bcdb8;
        case 0x1bcdbcu: goto label_1bcdbc;
        case 0x1bcdc0u: goto label_1bcdc0;
        case 0x1bcdc4u: goto label_1bcdc4;
        case 0x1bcdc8u: goto label_1bcdc8;
        case 0x1bcdccu: goto label_1bcdcc;
        case 0x1bcdd0u: goto label_1bcdd0;
        case 0x1bcdd4u: goto label_1bcdd4;
        default: break;
    }

    ctx->pc = 0x1bcae8u;

label_1bcae8:
    // 0x1bcae8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bcae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1bcaec:
    // 0x1bcaec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bcaecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1bcaf0:
    // 0x1bcaf0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1bcaf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1bcaf4:
    // 0x1bcaf4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bcaf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bcaf8:
    // 0x1bcaf8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1bcaf8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1bcafc:
    // 0x1bcafc: 0x26320130  addiu       $s2, $s1, 0x130
    ctx->pc = 0x1bcafcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 304));
label_1bcb00:
    // 0x1bcb00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bcb00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1bcb04:
    // 0x1bcb04: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1bcb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1bcb08:
    // 0x1bcb08: 0xae200380  sw          $zero, 0x380($s1)
    ctx->pc = 0x1bcb08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 896), GPR_U32(ctx, 0));
label_1bcb0c:
    // 0x1bcb0c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1bcb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1bcb10:
    // 0x1bcb10: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x1bcb10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
label_1bcb14:
    // 0x1bcb14: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1bcb18:
    if (ctx->pc == 0x1BCB18u) {
        ctx->pc = 0x1BCB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB14u;
        // 0x1bcb18: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCB1Cu;
        goto label_1bcb1c;
    }
    ctx->pc = 0x1BCB14u;
    {
        const bool branch_taken_0x1bcb14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB14u;
        // 0x1bcb18: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcb14) {
            ctx->pc = 0x1BCB50u;
            goto label_1bcb50;
        }
    }
    ctx->pc = 0x1BCB1Cu;
label_1bcb1c:
    // 0x1bcb1c: 0x26300210  addiu       $s0, $s1, 0x210
    ctx->pc = 0x1bcb1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
label_1bcb20:
    // 0x1bcb20: 0xc06fc34  jal         func_1BF0D0
label_1bcb24:
    if (ctx->pc == 0x1BCB24u) {
        ctx->pc = 0x1BCB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB20u;
        // 0x1bcb24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCB28u;
        goto label_1bcb28;
    }
    ctx->pc = 0x1BCB20u;
    SET_GPR_U32(ctx, 31, 0x1BCB28u);
    ctx->pc = 0x1BCB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCB20u;
    // 0x1bcb24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF0D0u, 0x1BCB20u, 0x1BCB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCB28u;
label_1bcb28:
    // 0x1bcb28: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1bcb28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_1bcb2c:
    // 0x1bcb2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bcb2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bcb30:
    // 0x1bcb30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bcb34:
    // 0x1bcb34: 0xc06f688  jal         func_1BDA20
label_1bcb38:
    if (ctx->pc == 0x1BCB38u) {
        ctx->pc = 0x1BCB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB34u;
        // 0x1bcb38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCB3Cu;
        goto label_1bcb3c;
    }
    ctx->pc = 0x1BCB34u;
    SET_GPR_U32(ctx, 31, 0x1BCB3Cu);
    ctx->pc = 0x1BCB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCB34u;
    // 0x1bcb38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA20u, 0x1BCB34u, 0x1BCB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCB3Cu;
label_1bcb3c:
    // 0x1bcb3c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1bcb40:
    if (ctx->pc == 0x1BCB40u) {
        ctx->pc = 0x1BCB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB3Cu;
        // 0x1bcb40: 0x26300260  addiu       $s0, $s1, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCB44u;
        goto label_1bcb44;
    }
    ctx->pc = 0x1BCB3Cu;
    {
        const bool branch_taken_0x1bcb3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB3Cu;
        // 0x1bcb40: 0x26300260  addiu       $s0, $s1, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcb3c) {
            ctx->pc = 0x1BCB54u;
            goto label_1bcb54;
        }
    }
    ctx->pc = 0x1BCB44u;
label_1bcb44:
    // 0x1bcb44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bcb44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bcb48:
    // 0x1bcb48: 0xc06fb58  jal         func_1BED60
label_1bcb4c:
    if (ctx->pc == 0x1BCB4Cu) {
        ctx->pc = 0x1BCB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB48u;
        // 0x1bcb4c: 0x262500f0  addiu       $a1, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCB50u;
        goto label_1bcb50;
    }
    ctx->pc = 0x1BCB48u;
    SET_GPR_U32(ctx, 31, 0x1BCB50u);
    ctx->pc = 0x1BCB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCB48u;
    // 0x1bcb4c: 0x262500f0  addiu       $a1, $s1, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED60u, 0x1BCB48u, 0x1BCB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCB50u;
label_1bcb50:
    // 0x1bcb50: 0x26300260  addiu       $s0, $s1, 0x260
    ctx->pc = 0x1bcb50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 608));
label_1bcb54:
    // 0x1bcb54: 0xc06fc34  jal         func_1BF0D0
label_1bcb58:
    if (ctx->pc == 0x1BCB58u) {
        ctx->pc = 0x1BCB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB54u;
        // 0x1bcb58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCB5Cu;
        goto label_1bcb5c;
    }
    ctx->pc = 0x1BCB54u;
    SET_GPR_U32(ctx, 31, 0x1BCB5Cu);
    ctx->pc = 0x1BCB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCB54u;
    // 0x1bcb58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF0D0u, 0x1BCB54u, 0x1BCB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCB5Cu;
label_1bcb5c:
    // 0x1bcb5c: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1bcb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_1bcb60:
    // 0x1bcb60: 0x8e230394  lw          $v1, 0x394($s1)
    ctx->pc = 0x1bcb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 916)));
label_1bcb64:
    // 0x1bcb64: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1bcb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1bcb68:
    // 0x1bcb68: 0x40f809  jalr        $v0
label_1bcb6c:
    if (ctx->pc == 0x1BCB6Cu) {
        ctx->pc = 0x1BCB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB68u;
        // 0x1bcb6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCB70u;
        goto label_1bcb70;
    }
    ctx->pc = 0x1BCB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BCB70u);
        ctx->pc = 0x1BCB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB68u;
        // 0x1bcb6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCB68u, 0x1BCB70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BCB70u;
label_1bcb70:
    // 0x1bcb70: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_1bcb74:
    if (ctx->pc == 0x1BCB74u) {
        ctx->pc = 0x1BCB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB70u;
        // 0x1bcb74: 0x8e220310  lw          $v0, 0x310($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCB78u;
        goto label_1bcb78;
    }
    ctx->pc = 0x1BCB70u;
    {
        const bool branch_taken_0x1bcb70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bcb70) {
            ctx->pc = 0x1BCB74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BCB70u;
            // 0x1bcb74: 0x8e220310  lw          $v0, 0x310($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BCB94u;
            goto label_1bcb94;
        }
    }
    ctx->pc = 0x1BCB78u;
label_1bcb78:
    // 0x1bcb78: 0x8e230394  lw          $v1, 0x394($s1)
    ctx->pc = 0x1bcb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 916)));
label_1bcb7c:
    // 0x1bcb7c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1bcb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1bcb80:
    // 0x1bcb80: 0x40f809  jalr        $v0
label_1bcb84:
    if (ctx->pc == 0x1BCB84u) {
        ctx->pc = 0x1BCB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB80u;
        // 0x1bcb84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCB88u;
        goto label_1bcb88;
    }
    ctx->pc = 0x1BCB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BCB88u);
        ctx->pc = 0x1BCB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB80u;
        // 0x1bcb84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCB80u, 0x1BCB88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BCB88u;
label_1bcb88:
    // 0x1bcb88: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1bcb8c:
    if (ctx->pc == 0x1BCB8Cu) {
        ctx->pc = 0x1BCB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB88u;
        // 0x1bcb8c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCB90u;
        goto label_1bcb90;
    }
    ctx->pc = 0x1BCB88u;
    {
        const bool branch_taken_0x1bcb88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB88u;
        // 0x1bcb8c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcb88) {
            ctx->pc = 0x1BCBD8u;
            goto label_1bcbd8;
        }
    }
    ctx->pc = 0x1BCB90u;
label_1bcb90:
    // 0x1bcb90: 0x8e220310  lw          $v0, 0x310($s1)
    ctx->pc = 0x1bcb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
label_1bcb94:
    // 0x1bcb94: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1bcb94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1bcb98:
    // 0x1bcb98: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1bcb9c:
    if (ctx->pc == 0x1BCB9Cu) {
        ctx->pc = 0x1BCB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB98u;
        // 0x1bcb9c: 0x26300310  addiu       $s0, $s1, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCBA0u;
        goto label_1bcba0;
    }
    ctx->pc = 0x1BCB98u;
    {
        const bool branch_taken_0x1bcb98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB98u;
        // 0x1bcb9c: 0x26300310  addiu       $s0, $s1, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcb98) {
            ctx->pc = 0x1BCBC8u;
            goto label_1bcbc8;
        }
    }
    ctx->pc = 0x1BCBA0u;
label_1bcba0:
    // 0x1bcba0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1bcba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1bcba4:
    // 0x1bcba4: 0x26240130  addiu       $a0, $s1, 0x130
    ctx->pc = 0x1bcba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 304));
label_1bcba8:
    // 0x1bcba8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1bcba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1bcbac:
    // 0x1bcbac: 0xc06fb38  jal         func_1BECE0
label_1bcbb0:
    if (ctx->pc == 0x1BCBB0u) {
        ctx->pc = 0x1BCBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCBACu;
        // 0x1bcbb0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCBB4u;
        goto label_1bcbb4;
    }
    ctx->pc = 0x1BCBACu;
    SET_GPR_U32(ctx, 31, 0x1BCBB4u);
    ctx->pc = 0x1BCBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCBACu;
    // 0x1bcbb0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BECE0u, 0x1BCBACu, 0x1BCBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCBB4u;
label_1bcbb4:
    // 0x1bcbb4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1bcbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1bcbb8:
    // 0x1bcbb8: 0xc0f61e8  jal         func_3D87A0
label_1bcbbc:
    if (ctx->pc == 0x1BCBBCu) {
        ctx->pc = 0x1BCBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCBB8u;
        // 0x1bcbbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCBC0u;
        goto label_1bcbc0;
    }
    ctx->pc = 0x1BCBB8u;
    SET_GPR_U32(ctx, 31, 0x1BCBC0u);
    ctx->pc = 0x1BCBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCBB8u;
    // 0x1bcbbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x1BCBB8u, 0x1BCBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCBC0u;
label_1bcbc0:
    // 0x1bcbc0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1bcbc4:
    if (ctx->pc == 0x1BCBC4u) {
        ctx->pc = 0x1BCBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCBC0u;
        // 0x1bcbc4: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCBC8u;
        goto label_1bcbc8;
    }
    ctx->pc = 0x1BCBC0u;
    {
        const bool branch_taken_0x1bcbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCBC0u;
        // 0x1bcbc4: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcbc0) {
            ctx->pc = 0x1BCBD4u;
            goto label_1bcbd4;
        }
    }
    ctx->pc = 0x1BCBC8u;
label_1bcbc8:
    // 0x1bcbc8: 0x26240130  addiu       $a0, $s1, 0x130
    ctx->pc = 0x1bcbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 304));
label_1bcbcc:
    // 0x1bcbcc: 0xc06fb58  jal         func_1BED60
label_1bcbd0:
    if (ctx->pc == 0x1BCBD0u) {
        ctx->pc = 0x1BCBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCBCCu;
        // 0x1bcbd0: 0x262500f0  addiu       $a1, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCBD4u;
        goto label_1bcbd4;
    }
    ctx->pc = 0x1BCBCCu;
    SET_GPR_U32(ctx, 31, 0x1BCBD4u);
    ctx->pc = 0x1BCBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCBCCu;
    // 0x1bcbd0: 0x262500f0  addiu       $a1, $s1, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED60u, 0x1BCBCCu, 0x1BCBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCBD4u;
label_1bcbd4:
    // 0x1bcbd4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1bcbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_1bcbd8:
    // 0x1bcbd8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1bcbd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bcbdc:
    // 0x1bcbdc: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1bcbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_1bcbe0:
    // 0x1bcbe0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1bcbe4:
    if (ctx->pc == 0x1BCBE4u) {
        ctx->pc = 0x1BCBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCBE0u;
        // 0x1bcbe4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCBE8u;
        goto label_1bcbe8;
    }
    ctx->pc = 0x1BCBE0u;
    {
        const bool branch_taken_0x1bcbe0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BCBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCBE0u;
        // 0x1bcbe4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcbe0) {
            ctx->pc = 0x1BCBFCu;
            goto label_1bcbfc;
        }
    }
    ctx->pc = 0x1BCBE8u;
label_1bcbe8:
    // 0x1bcbe8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bcbe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1bcbec:
    // 0x1bcbec: 0x0  nop
    ctx->pc = 0x1bcbecu;
    // NOP
label_1bcbf0:
    // 0x1bcbf0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1bcbf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1bcbf4:
    // 0x1bcbf4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1bcbf8:
    if (ctx->pc == 0x1BCBF8u) {
        ctx->pc = 0x1BCBFCu;
        goto label_1bcbfc;
    }
    ctx->pc = 0x1BCBF4u;
    {
        const bool branch_taken_0x1bcbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcbf4) {
            ctx->pc = 0x1BCC14u;
            goto label_1bcc14;
        }
    }
    ctx->pc = 0x1BCBFCu;
label_1bcbfc:
    // 0x1bcbfc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bcbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1bcc00:
    // 0x1bcc00: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bcc00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1bcc04:
    // 0x1bcc04: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bcc04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1bcc08:
    // 0x1bcc08: 0x0  nop
    ctx->pc = 0x1bcc08u;
    // NOP
label_1bcc0c:
    // 0x1bcc0c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1bcc0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1bcc10:
    // 0x1bcc10: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1bcc10u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1bcc14:
    // 0x1bcc14: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1bcc14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1bcc18:
    // 0x1bcc18: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1bcc18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1bcc1c:
    // 0x1bcc1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bcc1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bcc20:
    // 0x1bcc20: 0xc6210364  lwc1        $f1, 0x364($s1)
    ctx->pc = 0x1bcc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bcc24:
    // 0x1bcc24: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bcc24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1bcc28:
    // 0x1bcc28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bcc28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bcc2c:
    // 0x1bcc2c: 0x0  nop
    ctx->pc = 0x1bcc2cu;
    // NOP
label_1bcc30:
    // 0x1bcc30: 0x45000029  bc1f        . + 4 + (0x29 << 2)
label_1bcc34:
    if (ctx->pc == 0x1BCC34u) {
        ctx->pc = 0x1BCC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC30u;
        // 0x1bcc34: 0x26300210  addiu       $s0, $s1, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCC38u;
        goto label_1bcc38;
    }
    ctx->pc = 0x1BCC30u;
    {
        const bool branch_taken_0x1bcc30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BCC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC30u;
        // 0x1bcc34: 0x26300210  addiu       $s0, $s1, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcc30) {
            ctx->pc = 0x1BCCD8u;
            goto label_1bccd8;
        }
    }
    ctx->pc = 0x1BCC38u;
label_1bcc38:
    // 0x1bcc38: 0xc06fc34  jal         func_1BF0D0
label_1bcc3c:
    if (ctx->pc == 0x1BCC3Cu) {
        ctx->pc = 0x1BCC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC38u;
        // 0x1bcc3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCC40u;
        goto label_1bcc40;
    }
    ctx->pc = 0x1BCC38u;
    SET_GPR_U32(ctx, 31, 0x1BCC40u);
    ctx->pc = 0x1BCC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCC38u;
    // 0x1bcc3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF0D0u, 0x1BCC38u, 0x1BCC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCC40u;
label_1bcc40:
    // 0x1bcc40: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1bcc40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_1bcc44:
    // 0x1bcc44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bcc44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bcc48:
    // 0x1bcc48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcc48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bcc4c:
    // 0x1bcc4c: 0xc06f688  jal         func_1BDA20
label_1bcc50:
    if (ctx->pc == 0x1BCC50u) {
        ctx->pc = 0x1BCC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC4Cu;
        // 0x1bcc50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCC54u;
        goto label_1bcc54;
    }
    ctx->pc = 0x1BCC4Cu;
    SET_GPR_U32(ctx, 31, 0x1BCC54u);
    ctx->pc = 0x1BCC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCC4Cu;
    // 0x1bcc50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA20u, 0x1BCC4Cu, 0x1BCC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCC54u;
label_1bcc54:
    // 0x1bcc54: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
label_1bcc58:
    if (ctx->pc == 0x1BCC58u) {
        ctx->pc = 0x1BCC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC54u;
        // 0x1bcc58: 0x4600a045  abs.s       $f1, $f20 (Delay Slot)
        ctx->f[1] = FPU_ABS_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCC5Cu;
        goto label_1bcc5c;
    }
    ctx->pc = 0x1BCC54u;
    {
        const bool branch_taken_0x1bcc54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bcc54) {
            ctx->pc = 0x1BCC58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BCC54u;
            // 0x1bcc58: 0x4600a045  abs.s       $f1, $f20 (Delay Slot)
            ctx->f[1] = FPU_ABS_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BCCDCu;
            goto label_1bccdc;
        }
    }
    ctx->pc = 0x1BCC5Cu;
label_1bcc5c:
    // 0x1bcc5c: 0xc06f298  jal         func_1BCA60
label_1bcc60:
    if (ctx->pc == 0x1BCC60u) {
        ctx->pc = 0x1BCC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC5Cu;
        // 0x1bcc60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCC64u;
        goto label_1bcc64;
    }
    ctx->pc = 0x1BCC5Cu;
    SET_GPR_U32(ctx, 31, 0x1BCC64u);
    ctx->pc = 0x1BCC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCC5Cu;
    // 0x1bcc60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCA60u, 0x1BCC5Cu, 0x1BCC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCC64u;
label_1bcc64:
    // 0x1bcc64: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1bcc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
label_1bcc68:
    // 0x1bcc68: 0xc06fb58  jal         func_1BED60
label_1bcc6c:
    if (ctx->pc == 0x1BCC6Cu) {
        ctx->pc = 0x1BCC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC68u;
        // 0x1bcc6c: 0x262500f0  addiu       $a1, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCC70u;
        goto label_1bcc70;
    }
    ctx->pc = 0x1BCC68u;
    SET_GPR_U32(ctx, 31, 0x1BCC70u);
    ctx->pc = 0x1BCC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCC68u;
    // 0x1bcc6c: 0x262500f0  addiu       $a1, $s1, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED60u, 0x1BCC68u, 0x1BCC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCC70u;
label_1bcc70:
    // 0x1bcc70: 0x8e230394  lw          $v1, 0x394($s1)
    ctx->pc = 0x1bcc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 916)));
label_1bcc74:
    // 0x1bcc74: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1bcc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_1bcc78:
    // 0x1bcc78: 0x40f809  jalr        $v0
label_1bcc7c:
    if (ctx->pc == 0x1BCC7Cu) {
        ctx->pc = 0x1BCC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC78u;
        // 0x1bcc7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCC80u;
        goto label_1bcc80;
    }
    ctx->pc = 0x1BCC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BCC80u);
        ctx->pc = 0x1BCC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC78u;
        // 0x1bcc7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCC78u, 0x1BCC80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BCC80u;
label_1bcc80:
    // 0x1bcc80: 0x8e422b00  lw          $v0, 0x2B00($s2)
    ctx->pc = 0x1bcc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11008)));
label_1bcc84:
    // 0x1bcc84: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1bcc88:
    if (ctx->pc == 0x1BCC88u) {
        ctx->pc = 0x1BCC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC84u;
        // 0x1bcc88: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCC8Cu;
        goto label_1bcc8c;
    }
    ctx->pc = 0x1BCC84u;
    {
        const bool branch_taken_0x1bcc84 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BCC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC84u;
        // 0x1bcc88: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcc84) {
            ctx->pc = 0x1BCCA0u;
            goto label_1bcca0;
        }
    }
    ctx->pc = 0x1BCC8Cu;
label_1bcc8c:
    // 0x1bcc8c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bcc8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1bcc90:
    // 0x1bcc90: 0x0  nop
    ctx->pc = 0x1bcc90u;
    // NOP
label_1bcc94:
    // 0x1bcc94: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1bcc94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1bcc98:
    // 0x1bcc98: 0x10000007  b           . + 4 + (0x7 << 2)
label_1bcc9c:
    if (ctx->pc == 0x1BCC9Cu) {
        ctx->pc = 0x1BCCA0u;
        goto label_1bcca0;
    }
    ctx->pc = 0x1BCC98u;
    {
        const bool branch_taken_0x1bcc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcc98) {
            ctx->pc = 0x1BCCB8u;
            goto label_1bccb8;
        }
    }
    ctx->pc = 0x1BCCA0u;
label_1bcca0:
    // 0x1bcca0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bcca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1bcca4:
    // 0x1bcca4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bcca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1bcca8:
    // 0x1bcca8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bcca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1bccac:
    // 0x1bccac: 0x0  nop
    ctx->pc = 0x1bccacu;
    // NOP
label_1bccb0:
    // 0x1bccb0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1bccb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1bccb4:
    // 0x1bccb4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1bccb4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1bccb8:
    // 0x1bccb8: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1bccb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1bccbc:
    // 0x1bccbc: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1bccbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1bccc0:
    // 0x1bccc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bccc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bccc4:
    // 0x1bccc4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1bccc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_1bccc8:
    // 0x1bccc8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bccc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bcccc:
    // 0x1bcccc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bccccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1bccd0:
    // 0x1bccd0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bccd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1bccd4:
    // 0x1bccd4: 0xe6200364  swc1        $f0, 0x364($s1)
    ctx->pc = 0x1bccd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 868), bits); }
label_1bccd8:
    // 0x1bccd8: 0x4600a045  abs.s       $f1, $f20
    ctx->pc = 0x1bccd8u;
    ctx->f[1] = FPU_ABS_S(ctx->f[20]);
label_1bccdc:
    // 0x1bccdc: 0x3c014282  lui         $at, 0x4282
    ctx->pc = 0x1bccdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17026 << 16));
label_1bcce0:
    // 0x1bcce0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bcce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bcce4:
    // 0x1bcce4: 0x0  nop
    ctx->pc = 0x1bcce4u;
    // NOP
label_1bcce8:
    // 0x1bcce8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1bcce8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bccec:
    // 0x1bccec: 0x0  nop
    ctx->pc = 0x1bccecu;
    // NOP
label_1bccf0:
    // 0x1bccf0: 0x45000032  bc1f        . + 4 + (0x32 << 2)
label_1bccf4:
    if (ctx->pc == 0x1BCCF4u) {
        ctx->pc = 0x1BCCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCCF0u;
        // 0x1bccf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCCF8u;
        goto label_1bccf8;
    }
    ctx->pc = 0x1BCCF0u;
    {
        const bool branch_taken_0x1bccf0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BCCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCCF0u;
        // 0x1bccf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bccf0) {
            ctx->pc = 0x1BCDBCu;
            goto label_1bcdbc;
        }
    }
    ctx->pc = 0x1BCCF8u;
label_1bccf8:
    // 0x1bccf8: 0x26250210  addiu       $a1, $s1, 0x210
    ctx->pc = 0x1bccf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
label_1bccfc:
    // 0x1bccfc: 0xc06f688  jal         func_1BDA20
label_1bcd00:
    if (ctx->pc == 0x1BCD00u) {
        ctx->pc = 0x1BCD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCCFCu;
        // 0x1bcd00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCD04u;
        goto label_1bcd04;
    }
    ctx->pc = 0x1BCCFCu;
    SET_GPR_U32(ctx, 31, 0x1BCD04u);
    ctx->pc = 0x1BCD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCCFCu;
    // 0x1bcd00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA20u, 0x1BCCFCu, 0x1BCD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCD04u;
label_1bcd04:
    // 0x1bcd04: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
label_1bcd08:
    if (ctx->pc == 0x1BCD08u) {
        ctx->pc = 0x1BCD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD04u;
        // 0x1bcd08: 0xc62001e4  lwc1        $f0, 0x1E4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCD0Cu;
        goto label_1bcd0c;
    }
    ctx->pc = 0x1BCD04u;
    {
        const bool branch_taken_0x1bcd04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bcd04) {
            ctx->pc = 0x1BCD08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BCD04u;
            // 0x1bcd08: 0xc62001e4  lwc1        $f0, 0x1E4($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BCD8Cu;
            goto label_1bcd8c;
        }
    }
    ctx->pc = 0x1BCD0Cu;
label_1bcd0c:
    // 0x1bcd0c: 0xc06f298  jal         func_1BCA60
label_1bcd10:
    if (ctx->pc == 0x1BCD10u) {
        ctx->pc = 0x1BCD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD0Cu;
        // 0x1bcd10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCD14u;
        goto label_1bcd14;
    }
    ctx->pc = 0x1BCD0Cu;
    SET_GPR_U32(ctx, 31, 0x1BCD14u);
    ctx->pc = 0x1BCD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCD0Cu;
    // 0x1bcd10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCA60u, 0x1BCD0Cu, 0x1BCD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCD14u;
label_1bcd14:
    // 0x1bcd14: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1bcd14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
label_1bcd18:
    // 0x1bcd18: 0xc06fb58  jal         func_1BED60
label_1bcd1c:
    if (ctx->pc == 0x1BCD1Cu) {
        ctx->pc = 0x1BCD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD18u;
        // 0x1bcd1c: 0x262500f0  addiu       $a1, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCD20u;
        goto label_1bcd20;
    }
    ctx->pc = 0x1BCD18u;
    SET_GPR_U32(ctx, 31, 0x1BCD20u);
    ctx->pc = 0x1BCD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCD18u;
    // 0x1bcd1c: 0x262500f0  addiu       $a1, $s1, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED60u, 0x1BCD18u, 0x1BCD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCD20u;
label_1bcd20:
    // 0x1bcd20: 0x8e230394  lw          $v1, 0x394($s1)
    ctx->pc = 0x1bcd20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 916)));
label_1bcd24:
    // 0x1bcd24: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1bcd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_1bcd28:
    // 0x1bcd28: 0x40f809  jalr        $v0
label_1bcd2c:
    if (ctx->pc == 0x1BCD2Cu) {
        ctx->pc = 0x1BCD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD28u;
        // 0x1bcd2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCD30u;
        goto label_1bcd30;
    }
    ctx->pc = 0x1BCD28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BCD30u);
        ctx->pc = 0x1BCD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD28u;
        // 0x1bcd2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCD28u, 0x1BCD30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BCD30u;
label_1bcd30:
    // 0x1bcd30: 0x8e422b00  lw          $v0, 0x2B00($s2)
    ctx->pc = 0x1bcd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11008)));
label_1bcd34:
    // 0x1bcd34: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1bcd38:
    if (ctx->pc == 0x1BCD38u) {
        ctx->pc = 0x1BCD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD34u;
        // 0x1bcd38: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCD3Cu;
        goto label_1bcd3c;
    }
    ctx->pc = 0x1BCD34u;
    {
        const bool branch_taken_0x1bcd34 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BCD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD34u;
        // 0x1bcd38: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcd34) {
            ctx->pc = 0x1BCD50u;
            goto label_1bcd50;
        }
    }
    ctx->pc = 0x1BCD3Cu;
label_1bcd3c:
    // 0x1bcd3c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bcd3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1bcd40:
    // 0x1bcd40: 0x0  nop
    ctx->pc = 0x1bcd40u;
    // NOP
label_1bcd44:
    // 0x1bcd44: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1bcd44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1bcd48:
    // 0x1bcd48: 0x10000007  b           . + 4 + (0x7 << 2)
label_1bcd4c:
    if (ctx->pc == 0x1BCD4Cu) {
        ctx->pc = 0x1BCD50u;
        goto label_1bcd50;
    }
    ctx->pc = 0x1BCD48u;
    {
        const bool branch_taken_0x1bcd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcd48) {
            ctx->pc = 0x1BCD68u;
            goto label_1bcd68;
        }
    }
    ctx->pc = 0x1BCD50u;
label_1bcd50:
    // 0x1bcd50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bcd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1bcd54:
    // 0x1bcd54: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bcd54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1bcd58:
    // 0x1bcd58: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bcd58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1bcd5c:
    // 0x1bcd5c: 0x0  nop
    ctx->pc = 0x1bcd5cu;
    // NOP
label_1bcd60:
    // 0x1bcd60: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1bcd60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1bcd64:
    // 0x1bcd64: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1bcd64u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1bcd68:
    // 0x1bcd68: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1bcd68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1bcd6c:
    // 0x1bcd6c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1bcd6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1bcd70:
    // 0x1bcd70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bcd70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bcd74:
    // 0x1bcd74: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1bcd74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_1bcd78:
    // 0x1bcd78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bcd78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bcd7c:
    // 0x1bcd7c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bcd7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1bcd80:
    // 0x1bcd80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bcd80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1bcd84:
    // 0x1bcd84: 0x1000000d  b           . + 4 + (0xD << 2)
label_1bcd88:
    if (ctx->pc == 0x1BCD88u) {
        ctx->pc = 0x1BCD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD84u;
        // 0x1bcd88: 0xe6200364  swc1        $f0, 0x364($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 868), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCD8Cu;
        goto label_1bcd8c;
    }
    ctx->pc = 0x1BCD84u;
    {
        const bool branch_taken_0x1bcd84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD84u;
        // 0x1bcd88: 0xe6200364  swc1        $f0, 0x364($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 868), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcd84) {
            ctx->pc = 0x1BCDBCu;
            goto label_1bcdbc;
        }
    }
    ctx->pc = 0x1BCD8Cu;
label_1bcd8c:
    // 0x1bcd8c: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1bcd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
label_1bcd90:
    // 0x1bcd90: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x1bcd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_1bcd94:
    // 0x1bcd94: 0xe6200114  swc1        $f0, 0x114($s1)
    ctx->pc = 0x1bcd94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 276), bits); }
label_1bcd98:
    // 0x1bcd98: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1bcd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1bcd9c:
    // 0x1bcd9c: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
label_1bcda0:
    if (ctx->pc == 0x1BCDA0u) {
        ctx->pc = 0x1BCDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD9Cu;
        // 0x1bcda0: 0xe62000f4  swc1        $f0, 0xF4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 244), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCDA4u;
        goto label_1bcda4;
    }
    ctx->pc = 0x1BCD9Cu;
    {
        const bool branch_taken_0x1bcd9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bcd9c) {
            ctx->pc = 0x1BCDA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BCD9Cu;
            // 0x1bcda0: 0xe62000f4  swc1        $f0, 0xF4($s1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 244), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BCDA4u;
            goto label_1bcda4;
        }
    }
    ctx->pc = 0x1BCDA4u;
label_1bcda4:
    // 0x1bcda4: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1bcda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1bcda8:
    // 0x1bcda8: 0x8e220144  lw          $v0, 0x144($s1)
    ctx->pc = 0x1bcda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
label_1bcdac:
    // 0x1bcdac: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_1bcdb0:
    if (ctx->pc == 0x1BCDB0u) {
        ctx->pc = 0x1BCDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCDACu;
        // 0x1bcdb0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCDB4u;
        goto label_1bcdb4;
    }
    ctx->pc = 0x1BCDACu;
    {
        const bool branch_taken_0x1bcdac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BCDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCDACu;
        // 0x1bcdb0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcdac) {
            ctx->pc = 0x1BCDC0u;
            goto label_1bcdc0;
        }
    }
    ctx->pc = 0x1BCDB4u;
label_1bcdb4:
    // 0x1bcdb4: 0xc6200114  lwc1        $f0, 0x114($s1)
    ctx->pc = 0x1bcdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bcdb8:
    // 0x1bcdb8: 0xe6200134  swc1        $f0, 0x134($s1)
    ctx->pc = 0x1bcdb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 308), bits); }
label_1bcdbc:
    // 0x1bcdbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bcdbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bcdc0:
    // 0x1bcdc0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bcdc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1bcdc4:
    // 0x1bcdc4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bcdc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1bcdc8:
    // 0x1bcdc8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1bcdc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1bcdcc:
    // 0x1bcdcc: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1bcdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1bcdd0:
    // 0x1bcdd0: 0x3e00008  jr          $ra
label_1bcdd4:
    if (ctx->pc == 0x1BCDD4u) {
        ctx->pc = 0x1BCDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCDD0u;
        // 0x1bcdd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCDD8u;
        goto label_fallthrough_0x1bcdd0;
    }
    ctx->pc = 0x1BCDD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCDD0u;
        // 0x1bcdd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCDD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1bcdd0:
    ctx->pc = 0x1BCDD8u;
}
