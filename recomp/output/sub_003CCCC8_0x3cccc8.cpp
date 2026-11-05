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

// Function: sub_003CCCC8
// Address: 0x3cccc8 - 0x3ccd98
void sub_003CCCC8_0x3cccc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CCCC8_0x3cccc8");
#endif

    switch (ctx->pc) {
        case 0x3cccc8u: goto label_3cccc8;
        case 0x3cccccu: goto label_3ccccc;
        case 0x3cccd0u: goto label_3cccd0;
        case 0x3cccd4u: goto label_3cccd4;
        case 0x3cccd8u: goto label_3cccd8;
        case 0x3cccdcu: goto label_3cccdc;
        case 0x3ccce0u: goto label_3ccce0;
        case 0x3ccce4u: goto label_3ccce4;
        case 0x3ccce8u: goto label_3ccce8;
        case 0x3cccecu: goto label_3cccec;
        case 0x3cccf0u: goto label_3cccf0;
        case 0x3cccf4u: goto label_3cccf4;
        case 0x3cccf8u: goto label_3cccf8;
        case 0x3cccfcu: goto label_3cccfc;
        case 0x3ccd00u: goto label_3ccd00;
        case 0x3ccd04u: goto label_3ccd04;
        case 0x3ccd08u: goto label_3ccd08;
        case 0x3ccd0cu: goto label_3ccd0c;
        case 0x3ccd10u: goto label_3ccd10;
        case 0x3ccd14u: goto label_3ccd14;
        case 0x3ccd18u: goto label_3ccd18;
        case 0x3ccd1cu: goto label_3ccd1c;
        case 0x3ccd20u: goto label_3ccd20;
        case 0x3ccd24u: goto label_3ccd24;
        case 0x3ccd28u: goto label_3ccd28;
        case 0x3ccd2cu: goto label_3ccd2c;
        case 0x3ccd30u: goto label_3ccd30;
        case 0x3ccd34u: goto label_3ccd34;
        case 0x3ccd38u: goto label_3ccd38;
        case 0x3ccd3cu: goto label_3ccd3c;
        case 0x3ccd40u: goto label_3ccd40;
        case 0x3ccd44u: goto label_3ccd44;
        case 0x3ccd48u: goto label_3ccd48;
        case 0x3ccd4cu: goto label_3ccd4c;
        case 0x3ccd50u: goto label_3ccd50;
        case 0x3ccd54u: goto label_3ccd54;
        case 0x3ccd58u: goto label_3ccd58;
        case 0x3ccd5cu: goto label_3ccd5c;
        case 0x3ccd60u: goto label_3ccd60;
        case 0x3ccd64u: goto label_3ccd64;
        case 0x3ccd68u: goto label_3ccd68;
        case 0x3ccd6cu: goto label_3ccd6c;
        case 0x3ccd70u: goto label_3ccd70;
        case 0x3ccd74u: goto label_3ccd74;
        case 0x3ccd78u: goto label_3ccd78;
        case 0x3ccd7cu: goto label_3ccd7c;
        case 0x3ccd80u: goto label_3ccd80;
        case 0x3ccd84u: goto label_3ccd84;
        case 0x3ccd88u: goto label_3ccd88;
        case 0x3ccd8cu: goto label_3ccd8c;
        case 0x3ccd90u: goto label_3ccd90;
        case 0x3ccd94u: goto label_3ccd94;
        default: break;
    }

    ctx->pc = 0x3cccc8u;

label_3cccc8:
    // 0x3cccc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3cccc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3ccccc:
    // 0x3ccccc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3cccccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3cccd0:
    // 0x3cccd0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3cccd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_3cccd4:
    // 0x3cccd4: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x3cccd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
label_3cccd8:
    // 0x3cccd8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3cccd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3cccdc:
    // 0x3cccdc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3cccdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ccce0:
    // 0x3ccce0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3ccce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_3ccce4:
    // 0x3ccce4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ccce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3ccce8:
    // 0x3ccce8: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x3ccce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_3cccec:
    // 0x3cccec: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_3cccf0:
    if (ctx->pc == 0x3CCCF0u) {
        ctx->pc = 0x3CCCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCCECu;
        // 0x3cccf0: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCCF4u;
        goto label_3cccf4;
    }
    ctx->pc = 0x3CCCECu;
    {
        const bool branch_taken_0x3cccec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3CCCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCCECu;
        // 0x3cccf0: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cccec) {
            ctx->pc = 0x3CCD14u;
            goto label_3ccd14;
        }
    }
    ctx->pc = 0x3CCCF4u;
label_3cccf4:
    // 0x3cccf4: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_3cccf8:
    if (ctx->pc == 0x3CCCF8u) {
        ctx->pc = 0x3CCCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCCF4u;
        // 0x3cccf8: 0x8e51001c  lw          $s1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCCFCu;
        goto label_3cccfc;
    }
    ctx->pc = 0x3CCCF4u;
    {
        const bool branch_taken_0x3cccf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CCCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCCF4u;
        // 0x3cccf8: 0x8e51001c  lw          $s1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cccf4) {
            ctx->pc = 0x3CCD5Cu;
            goto label_3ccd5c;
        }
    }
    ctx->pc = 0x3CCCFCu;
label_3cccfc:
    // 0x3cccfc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3cccfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3ccd00:
    // 0x3ccd00: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x3ccd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
label_3ccd04:
    // 0x3ccd04: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_3ccd08:
    if (ctx->pc == 0x3CCD08u) {
        ctx->pc = 0x3CCD0Cu;
        goto label_3ccd0c;
    }
    ctx->pc = 0x3CCD04u;
    {
        const bool branch_taken_0x3ccd04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ccd04) {
            ctx->pc = 0x3CCD4Cu;
            goto label_3ccd4c;
        }
    }
    ctx->pc = 0x3CCD0Cu;
label_3ccd0c:
    // 0x3ccd0c: 0x10000014  b           . + 4 + (0x14 << 2)
label_3ccd10:
    if (ctx->pc == 0x3CCD10u) {
        ctx->pc = 0x3CCD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCD0Cu;
        // 0x3ccd10: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCD14u;
        goto label_3ccd14;
    }
    ctx->pc = 0x3CCD0Cu;
    {
        const bool branch_taken_0x3ccd0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCD0Cu;
        // 0x3ccd10: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccd0c) {
            ctx->pc = 0x3CCD60u;
            goto label_3ccd60;
        }
    }
    ctx->pc = 0x3CCD14u;
label_3ccd14:
    // 0x3ccd14: 0x8e51001c  lw          $s1, 0x1C($s2)
    ctx->pc = 0x3ccd14u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_3ccd18:
    // 0x3ccd18: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x3ccd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3ccd1c:
    // 0x3ccd1c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_3ccd20:
    if (ctx->pc == 0x3CCD20u) {
        ctx->pc = 0x3CCD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCD1Cu;
        // 0x3ccd20: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCD24u;
        goto label_3ccd24;
    }
    ctx->pc = 0x3CCD1Cu;
    {
        const bool branch_taken_0x3ccd1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ccd1c) {
            ctx->pc = 0x3CCD20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CCD1Cu;
            // 0x3ccd20: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CCD60u;
            goto label_3ccd60;
        }
    }
    ctx->pc = 0x3CCD24u;
label_3ccd24:
    // 0x3ccd24: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x3ccd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_3ccd28:
    // 0x3ccd28: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x3ccd28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_3ccd2c:
    // 0x3ccd2c: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x3ccd2cu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ccd30:
    // 0x3ccd30: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x3ccd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3ccd34:
    // 0x3ccd34: 0x40f809  jalr        $v0
label_3ccd38:
    if (ctx->pc == 0x3CCD38u) {
        ctx->pc = 0x3CCD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCD34u;
        // 0x3ccd38: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCD3Cu;
        goto label_3ccd3c;
    }
    ctx->pc = 0x3CCD34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CCD3Cu);
        ctx->pc = 0x3CCD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCD34u;
        // 0x3ccd38: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CCD34u, 0x3CCD3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CCD3Cu;
label_3ccd3c:
    // 0x3ccd3c: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x3ccd3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_3ccd40:
    // 0x3ccd40: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x3ccd40u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ccd44:
    // 0x3ccd44: 0x10000005  b           . + 4 + (0x5 << 2)
label_3ccd48:
    if (ctx->pc == 0x3CCD48u) {
        ctx->pc = 0x3CCD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCD44u;
        // 0x3ccd48: 0x8e51001c  lw          $s1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCD4Cu;
        goto label_3ccd4c;
    }
    ctx->pc = 0x3CCD44u;
    {
        const bool branch_taken_0x3ccd44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCD44u;
        // 0x3ccd48: 0x8e51001c  lw          $s1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccd44) {
            ctx->pc = 0x3CCD5Cu;
            goto label_3ccd5c;
        }
    }
    ctx->pc = 0x3CCD4Cu;
label_3ccd4c:
    // 0x3ccd4c: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x3ccd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_3ccd50:
    // 0x3ccd50: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x3ccd50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_3ccd54:
    // 0x3ccd54: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x3ccd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_3ccd58:
    // 0x3ccd58: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x3ccd58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_3ccd5c:
    // 0x3ccd5c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3ccd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3ccd60:
    // 0x3ccd60: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
label_3ccd64:
    if (ctx->pc == 0x3CCD64u) {
        ctx->pc = 0x3CCD68u;
        goto label_3ccd68;
    }
    ctx->pc = 0x3CCD60u;
    {
        const bool branch_taken_0x3ccd60 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x3ccd60) {
            ctx->pc = 0x3CCD70u;
            goto label_3ccd70;
        }
    }
    ctx->pc = 0x3CCD68u;
label_3ccd68:
    // 0x3ccd68: 0xc0f2674  jal         func_3C99D0
label_3ccd6c:
    if (ctx->pc == 0x3CCD6Cu) {
        ctx->pc = 0x3CCD70u;
        goto label_3ccd70;
    }
    ctx->pc = 0x3CCD68u;
    SET_GPR_U32(ctx, 31, 0x3CCD70u);
    ctx->pc = 0x3C99D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99D0u, 0x3CCD68u, 0x3CCD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCD70u;
label_3ccd70:
    // 0x3ccd70: 0xc0f330e  jal         func_3CCC38
label_3ccd74:
    if (ctx->pc == 0x3CCD74u) {
        ctx->pc = 0x3CCD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCD70u;
        // 0x3ccd74: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCD78u;
        goto label_3ccd78;
    }
    ctx->pc = 0x3CCD70u;
    SET_GPR_U32(ctx, 31, 0x3CCD78u);
    ctx->pc = 0x3CCD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCD70u;
    // 0x3ccd74: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CCC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CCC38u, 0x3CCD70u, 0x3CCD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCD78u;
label_3ccd78:
    // 0x3ccd78: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3ccd78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_3ccd7c:
    // 0x3ccd7c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3ccd7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3ccd80:
    // 0x3ccd80: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3ccd80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3ccd84:
    // 0x3ccd84: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3ccd84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3ccd88:
    // 0x3ccd88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ccd88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ccd8c:
    // 0x3ccd8c: 0x3e00008  jr          $ra
label_3ccd90:
    if (ctx->pc == 0x3CCD90u) {
        ctx->pc = 0x3CCD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCD8Cu;
        // 0x3ccd90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCD94u;
        goto label_3ccd94;
    }
    ctx->pc = 0x3CCD8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CCD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCD8Cu;
        // 0x3ccd90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CCD8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CCD94u;
label_3ccd94:
    // 0x3ccd94: 0x0  nop
    ctx->pc = 0x3ccd94u;
    // NOP
    ctx->pc = 0x3ccd98u;
}
