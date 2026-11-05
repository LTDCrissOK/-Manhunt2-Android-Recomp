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

// Function: sub_002EDB08
// Address: 0x2edb08 - 0x2edcd8
void sub_002EDB08_0x2edb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EDB08_0x2edb08");
#endif

    switch (ctx->pc) {
        case 0x2edb08u: goto label_2edb08;
        case 0x2edb0cu: goto label_2edb0c;
        case 0x2edb10u: goto label_2edb10;
        case 0x2edb14u: goto label_2edb14;
        case 0x2edb18u: goto label_2edb18;
        case 0x2edb1cu: goto label_2edb1c;
        case 0x2edb20u: goto label_2edb20;
        case 0x2edb24u: goto label_2edb24;
        case 0x2edb28u: goto label_2edb28;
        case 0x2edb2cu: goto label_2edb2c;
        case 0x2edb30u: goto label_2edb30;
        case 0x2edb34u: goto label_2edb34;
        case 0x2edb38u: goto label_2edb38;
        case 0x2edb3cu: goto label_2edb3c;
        case 0x2edb40u: goto label_2edb40;
        case 0x2edb44u: goto label_2edb44;
        case 0x2edb48u: goto label_2edb48;
        case 0x2edb4cu: goto label_2edb4c;
        case 0x2edb50u: goto label_2edb50;
        case 0x2edb54u: goto label_2edb54;
        case 0x2edb58u: goto label_2edb58;
        case 0x2edb5cu: goto label_2edb5c;
        case 0x2edb60u: goto label_2edb60;
        case 0x2edb64u: goto label_2edb64;
        case 0x2edb68u: goto label_2edb68;
        case 0x2edb6cu: goto label_2edb6c;
        case 0x2edb70u: goto label_2edb70;
        case 0x2edb74u: goto label_2edb74;
        case 0x2edb78u: goto label_2edb78;
        case 0x2edb7cu: goto label_2edb7c;
        case 0x2edb80u: goto label_2edb80;
        case 0x2edb84u: goto label_2edb84;
        case 0x2edb88u: goto label_2edb88;
        case 0x2edb8cu: goto label_2edb8c;
        case 0x2edb90u: goto label_2edb90;
        case 0x2edb94u: goto label_2edb94;
        case 0x2edb98u: goto label_2edb98;
        case 0x2edb9cu: goto label_2edb9c;
        case 0x2edba0u: goto label_2edba0;
        case 0x2edba4u: goto label_2edba4;
        case 0x2edba8u: goto label_2edba8;
        case 0x2edbacu: goto label_2edbac;
        case 0x2edbb0u: goto label_2edbb0;
        case 0x2edbb4u: goto label_2edbb4;
        case 0x2edbb8u: goto label_2edbb8;
        case 0x2edbbcu: goto label_2edbbc;
        case 0x2edbc0u: goto label_2edbc0;
        case 0x2edbc4u: goto label_2edbc4;
        case 0x2edbc8u: goto label_2edbc8;
        case 0x2edbccu: goto label_2edbcc;
        case 0x2edbd0u: goto label_2edbd0;
        case 0x2edbd4u: goto label_2edbd4;
        case 0x2edbd8u: goto label_2edbd8;
        case 0x2edbdcu: goto label_2edbdc;
        case 0x2edbe0u: goto label_2edbe0;
        case 0x2edbe4u: goto label_2edbe4;
        case 0x2edbe8u: goto label_2edbe8;
        case 0x2edbecu: goto label_2edbec;
        case 0x2edbf0u: goto label_2edbf0;
        case 0x2edbf4u: goto label_2edbf4;
        case 0x2edbf8u: goto label_2edbf8;
        case 0x2edbfcu: goto label_2edbfc;
        case 0x2edc00u: goto label_2edc00;
        case 0x2edc04u: goto label_2edc04;
        case 0x2edc08u: goto label_2edc08;
        case 0x2edc0cu: goto label_2edc0c;
        case 0x2edc10u: goto label_2edc10;
        case 0x2edc14u: goto label_2edc14;
        case 0x2edc18u: goto label_2edc18;
        case 0x2edc1cu: goto label_2edc1c;
        case 0x2edc20u: goto label_2edc20;
        case 0x2edc24u: goto label_2edc24;
        case 0x2edc28u: goto label_2edc28;
        case 0x2edc2cu: goto label_2edc2c;
        case 0x2edc30u: goto label_2edc30;
        case 0x2edc34u: goto label_2edc34;
        case 0x2edc38u: goto label_2edc38;
        case 0x2edc3cu: goto label_2edc3c;
        case 0x2edc40u: goto label_2edc40;
        case 0x2edc44u: goto label_2edc44;
        case 0x2edc48u: goto label_2edc48;
        case 0x2edc4cu: goto label_2edc4c;
        case 0x2edc50u: goto label_2edc50;
        case 0x2edc54u: goto label_2edc54;
        case 0x2edc58u: goto label_2edc58;
        case 0x2edc5cu: goto label_2edc5c;
        case 0x2edc60u: goto label_2edc60;
        case 0x2edc64u: goto label_2edc64;
        case 0x2edc68u: goto label_2edc68;
        case 0x2edc6cu: goto label_2edc6c;
        case 0x2edc70u: goto label_2edc70;
        case 0x2edc74u: goto label_2edc74;
        case 0x2edc78u: goto label_2edc78;
        case 0x2edc7cu: goto label_2edc7c;
        case 0x2edc80u: goto label_2edc80;
        case 0x2edc84u: goto label_2edc84;
        case 0x2edc88u: goto label_2edc88;
        case 0x2edc8cu: goto label_2edc8c;
        case 0x2edc90u: goto label_2edc90;
        case 0x2edc94u: goto label_2edc94;
        case 0x2edc98u: goto label_2edc98;
        case 0x2edc9cu: goto label_2edc9c;
        case 0x2edca0u: goto label_2edca0;
        case 0x2edca4u: goto label_2edca4;
        case 0x2edca8u: goto label_2edca8;
        case 0x2edcacu: goto label_2edcac;
        case 0x2edcb0u: goto label_2edcb0;
        case 0x2edcb4u: goto label_2edcb4;
        case 0x2edcb8u: goto label_2edcb8;
        case 0x2edcbcu: goto label_2edcbc;
        case 0x2edcc0u: goto label_2edcc0;
        case 0x2edcc4u: goto label_2edcc4;
        case 0x2edcc8u: goto label_2edcc8;
        case 0x2edcccu: goto label_2edccc;
        case 0x2edcd0u: goto label_2edcd0;
        case 0x2edcd4u: goto label_2edcd4;
        default: break;
    }

    ctx->pc = 0x2edb08u;

label_2edb08:
    // 0x2edb08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2edb08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2edb0c:
    // 0x2edb0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2edb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2edb10:
    // 0x2edb10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2edb10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2edb14:
    // 0x2edb14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2edb14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2edb18:
    // 0x2edb18: 0x8e04038c  lw          $a0, 0x38C($s0)
    ctx->pc = 0x2edb18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 908)));
label_2edb1c:
    // 0x2edb1c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_2edb20:
    if (ctx->pc == 0x2EDB20u) {
        ctx->pc = 0x2EDB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB1Cu;
        // 0x2edb20: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDB24u;
        goto label_2edb24;
    }
    ctx->pc = 0x2EDB1Cu;
    {
        const bool branch_taken_0x2edb1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB1Cu;
        // 0x2edb20: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edb1c) {
            ctx->pc = 0x2EDB50u;
            goto label_2edb50;
        }
    }
    ctx->pc = 0x2EDB24u;
label_2edb24:
    // 0x2edb24: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x2edb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_2edb28:
    // 0x2edb28: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2edb28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2edb2c:
    // 0x2edb2c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_2edb30:
    if (ctx->pc == 0x2EDB30u) {
        ctx->pc = 0x2EDB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB2Cu;
        // 0x2edb30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDB34u;
        goto label_2edb34;
    }
    ctx->pc = 0x2EDB2Cu;
    {
        const bool branch_taken_0x2edb2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2EDB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB2Cu;
        // 0x2edb30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edb2c) {
            ctx->pc = 0x2EDB48u;
            goto label_2edb48;
        }
    }
    ctx->pc = 0x2EDB34u;
label_2edb34:
    // 0x2edb34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2edb34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2edb38:
    // 0x2edb38: 0xc08f5b4  jal         func_23D6D0
label_2edb3c:
    if (ctx->pc == 0x2EDB3Cu) {
        ctx->pc = 0x2EDB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB38u;
        // 0x2edb3c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDB40u;
        goto label_2edb40;
    }
    ctx->pc = 0x2EDB38u;
    SET_GPR_U32(ctx, 31, 0x2EDB40u);
    ctx->pc = 0x2EDB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDB38u;
    // 0x2edb3c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D6D0u, 0x2EDB38u, 0x2EDB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDB40u;
label_2edb40:
    // 0x2edb40: 0x10000004  b           . + 4 + (0x4 << 2)
label_2edb44:
    if (ctx->pc == 0x2EDB44u) {
        ctx->pc = 0x2EDB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB40u;
        // 0x2edb44: 0x8e0511e4  lw          $a1, 0x11E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4580)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDB48u;
        goto label_2edb48;
    }
    ctx->pc = 0x2EDB40u;
    {
        const bool branch_taken_0x2edb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB40u;
        // 0x2edb44: 0x8e0511e4  lw          $a1, 0x11E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edb40) {
            ctx->pc = 0x2EDB54u;
            goto label_2edb54;
        }
    }
    ctx->pc = 0x2EDB48u;
label_2edb48:
    // 0x2edb48: 0xc08f5b4  jal         func_23D6D0
label_2edb4c:
    if (ctx->pc == 0x2EDB4Cu) {
        ctx->pc = 0x2EDB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB48u;
        // 0x2edb4c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDB50u;
        goto label_2edb50;
    }
    ctx->pc = 0x2EDB48u;
    SET_GPR_U32(ctx, 31, 0x2EDB50u);
    ctx->pc = 0x2EDB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDB48u;
    // 0x2edb4c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D6D0u, 0x2EDB48u, 0x2EDB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDB50u;
label_2edb50:
    // 0x2edb50: 0x8e0511e4  lw          $a1, 0x11E4($s0)
    ctx->pc = 0x2edb50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4580)));
label_2edb54:
    // 0x2edb54: 0x10a00032  beqz        $a1, . + 4 + (0x32 << 2)
label_2edb58:
    if (ctx->pc == 0x2EDB58u) {
        ctx->pc = 0x2EDB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB54u;
        // 0x2edb58: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDB5Cu;
        goto label_2edb5c;
    }
    ctx->pc = 0x2EDB54u;
    {
        const bool branch_taken_0x2edb54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB54u;
        // 0x2edb58: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edb54) {
            ctx->pc = 0x2EDC20u;
            goto label_2edc20;
        }
    }
    ctx->pc = 0x2EDB5Cu;
label_2edb5c:
    // 0x2edb5c: 0x8e060334  lw          $a2, 0x334($s0)
    ctx->pc = 0x2edb5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_2edb60:
    // 0x2edb60: 0x8cc20150  lw          $v0, 0x150($a2)
    ctx->pc = 0x2edb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 336)));
label_2edb64:
    // 0x2edb64: 0x5443002f  bnel        $v0, $v1, . + 4 + (0x2F << 2)
label_2edb68:
    if (ctx->pc == 0x2EDB68u) {
        ctx->pc = 0x2EDB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB64u;
        // 0x2edb68: 0x8e0312bc  lw          $v1, 0x12BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDB6Cu;
        goto label_2edb6c;
    }
    ctx->pc = 0x2EDB64u;
    {
        const bool branch_taken_0x2edb64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2edb64) {
            ctx->pc = 0x2EDB68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDB64u;
            // 0x2edb68: 0x8e0312bc  lw          $v1, 0x12BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDC24u;
            goto label_2edc24;
        }
    }
    ctx->pc = 0x2EDB6Cu;
label_2edb6c:
    // 0x2edb6c: 0x8cc300c0  lw          $v1, 0xC0($a2)
    ctx->pc = 0x2edb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 192)));
label_2edb70:
    // 0x2edb70: 0x2862078b  slti        $v0, $v1, 0x78B
    ctx->pc = 0x2edb70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1931) ? 1 : 0);
label_2edb74:
    // 0x2edb74: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2edb78:
    if (ctx->pc == 0x2EDB78u) {
        ctx->pc = 0x2EDB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB74u;
        // 0x2edb78: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDB7Cu;
        goto label_2edb7c;
    }
    ctx->pc = 0x2EDB74u;
    {
        const bool branch_taken_0x2edb74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EDB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB74u;
        // 0x2edb78: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edb74) {
            ctx->pc = 0x2EDB80u;
            goto label_2edb80;
        }
    }
    ctx->pc = 0x2EDB7Cu;
label_2edb7c:
    // 0x2edb7c: 0x28640790  slti        $a0, $v1, 0x790
    ctx->pc = 0x2edb7cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1936) ? 1 : 0);
label_2edb80:
    // 0x2edb80: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
label_2edb84:
    if (ctx->pc == 0x2EDB84u) {
        ctx->pc = 0x2EDB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB80u;
        // 0x2edb84: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDB88u;
        goto label_2edb88;
    }
    ctx->pc = 0x2EDB80u;
    {
        const bool branch_taken_0x2edb80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB80u;
        // 0x2edb84: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edb80) {
            ctx->pc = 0x2EDC00u;
            goto label_2edc00;
        }
    }
    ctx->pc = 0x2EDB88u;
label_2edb88:
    // 0x2edb88: 0x8e030418  lw          $v1, 0x418($s0)
    ctx->pc = 0x2edb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
label_2edb8c:
    // 0x2edb8c: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
label_2edb90:
    if (ctx->pc == 0x2EDB90u) {
        ctx->pc = 0x2EDB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB8Cu;
        // 0x2edb90: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDB94u;
        goto label_2edb94;
    }
    ctx->pc = 0x2EDB8Cu;
    {
        const bool branch_taken_0x2edb8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EDB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB8Cu;
        // 0x2edb90: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edb8c) {
            ctx->pc = 0x2EDBECu;
            goto label_2edbec;
        }
    }
    ctx->pc = 0x2EDB94u;
label_2edb94:
    // 0x2edb94: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
label_2edb98:
    if (ctx->pc == 0x2EDB98u) {
        ctx->pc = 0x2EDB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB94u;
        // 0x2edb98: 0x2404feff  addiu       $a0, $zero, -0x101 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDB9Cu;
        goto label_2edb9c;
    }
    ctx->pc = 0x2EDB94u;
    {
        const bool branch_taken_0x2edb94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EDB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB94u;
        // 0x2edb98: 0x2404feff  addiu       $a0, $zero, -0x101 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edb94) {
            ctx->pc = 0x2EDBECu;
            goto label_2edbec;
        }
    }
    ctx->pc = 0x2EDB9Cu;
label_2edb9c:
    // 0x2edb9c: 0x8e0500c0  lw          $a1, 0xC0($s0)
    ctx->pc = 0x2edb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_2edba0:
    // 0x2edba0: 0x8e0311c0  lw          $v1, 0x11C0($s0)
    ctx->pc = 0x2edba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
label_2edba4:
    // 0x2edba4: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x2edba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
label_2edba8:
    // 0x2edba8: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x2edba8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_2edbac:
    // 0x2edbac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2edbacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2edbb0:
    // 0x2edbb0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2edbb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2edbb4:
    // 0x2edbb4: 0xae0500c0  sw          $a1, 0xC0($s0)
    ctx->pc = 0x2edbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 5));
label_2edbb8:
    // 0x2edbb8: 0xae0011e4  sw          $zero, 0x11E4($s0)
    ctx->pc = 0x2edbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4580), GPR_U32(ctx, 0));
label_2edbbc:
    // 0x2edbbc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2edbbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2edbc0:
    // 0x2edbc0: 0xae0311c0  sw          $v1, 0x11C0($s0)
    ctx->pc = 0x2edbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 3));
label_2edbc4:
    // 0x2edbc4: 0xc06974a  jal         func_1A5D28
label_2edbc8:
    if (ctx->pc == 0x2EDBC8u) {
        ctx->pc = 0x2EDBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDBC4u;
        // 0x2edbc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDBCCu;
        goto label_2edbcc;
    }
    ctx->pc = 0x2EDBC4u;
    SET_GPR_U32(ctx, 31, 0x2EDBCCu);
    ctx->pc = 0x2EDBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDBC4u;
    // 0x2edbc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D28u, 0x2EDBC4u, 0x2EDBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDBCCu;
label_2edbcc:
    // 0x2edbcc: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x2edbccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_2edbd0:
    // 0x2edbd0: 0xc06a05e  jal         func_1A8178
label_2edbd4:
    if (ctx->pc == 0x2EDBD4u) {
        ctx->pc = 0x2EDBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDBD0u;
        // 0x2edbd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDBD8u;
        goto label_2edbd8;
    }
    ctx->pc = 0x2EDBD0u;
    SET_GPR_U32(ctx, 31, 0x2EDBD8u);
    ctx->pc = 0x2EDBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDBD0u;
    // 0x2edbd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x2EDBD0u, 0x2EDBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDBD8u;
label_2edbd8:
    // 0x2edbd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2edbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2edbdc:
    // 0x2edbdc: 0xc08e3b2  jal         func_238EC8
label_2edbe0:
    if (ctx->pc == 0x2EDBE0u) {
        ctx->pc = 0x2EDBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDBDCu;
        // 0x2edbe0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDBE4u;
        goto label_2edbe4;
    }
    ctx->pc = 0x2EDBDCu;
    SET_GPR_U32(ctx, 31, 0x2EDBE4u);
    ctx->pc = 0x2EDBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDBDCu;
    // 0x2edbe0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238EC8u, 0x2EDBDCu, 0x2EDBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDBE4u;
label_2edbe4:
    // 0x2edbe4: 0x1000000f  b           . + 4 + (0xF << 2)
label_2edbe8:
    if (ctx->pc == 0x2EDBE8u) {
        ctx->pc = 0x2EDBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDBE4u;
        // 0x2edbe8: 0x8e0312bc  lw          $v1, 0x12BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDBECu;
        goto label_2edbec;
    }
    ctx->pc = 0x2EDBE4u;
    {
        const bool branch_taken_0x2edbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDBE4u;
        // 0x2edbe8: 0x8e0312bc  lw          $v1, 0x12BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edbe4) {
            ctx->pc = 0x2EDC24u;
            goto label_2edc24;
        }
    }
    ctx->pc = 0x2EDBECu;
label_2edbec:
    // 0x2edbec: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2edbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
label_2edbf0:
    // 0x2edbf0: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x2edbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_2edbf4:
    // 0x2edbf4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2edbf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2edbf8:
    // 0x2edbf8: 0x10000009  b           . + 4 + (0x9 << 2)
label_2edbfc:
    if (ctx->pc == 0x2EDBFCu) {
        ctx->pc = 0x2EDBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDBF8u;
        // 0x2edbfc: 0xae0211c0  sw          $v0, 0x11C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDC00u;
        goto label_2edc00;
    }
    ctx->pc = 0x2EDBF8u;
    {
        const bool branch_taken_0x2edbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDBF8u;
        // 0x2edbfc: 0xae0211c0  sw          $v0, 0x11C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edbf8) {
            ctx->pc = 0x2EDC20u;
            goto label_2edc20;
        }
    }
    ctx->pc = 0x2EDC00u;
label_2edc00:
    // 0x2edc00: 0x8ca200b8  lw          $v0, 0xB8($a1)
    ctx->pc = 0x2edc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 184)));
label_2edc04:
    // 0x2edc04: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2edc04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_2edc08:
    // 0x2edc08: 0x8c4300b0  lw          $v1, 0xB0($v0)
    ctx->pc = 0x2edc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_2edc0c:
    // 0x2edc0c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2edc0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_2edc10:
    // 0x2edc10: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
label_2edc14:
    if (ctx->pc == 0x2EDC14u) {
        ctx->pc = 0x2EDC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC10u;
        // 0x2edc14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDC18u;
        goto label_2edc18;
    }
    ctx->pc = 0x2EDC10u;
    {
        const bool branch_taken_0x2edc10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2EDC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC10u;
        // 0x2edc14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edc10) {
            ctx->pc = 0x2EDC20u;
            goto label_2edc20;
        }
    }
    ctx->pc = 0x2EDC18u;
label_2edc18:
    // 0x2edc18: 0xc0bc5e2  jal         func_2F1788
label_2edc1c:
    if (ctx->pc == 0x2EDC1Cu) {
        ctx->pc = 0x2EDC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC18u;
        // 0x2edc1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDC20u;
        goto label_2edc20;
    }
    ctx->pc = 0x2EDC18u;
    SET_GPR_U32(ctx, 31, 0x2EDC20u);
    ctx->pc = 0x2EDC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDC18u;
    // 0x2edc1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1788u, 0x2EDC18u, 0x2EDC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDC20u;
label_2edc20:
    // 0x2edc20: 0x8e0312bc  lw          $v1, 0x12BC($s0)
    ctx->pc = 0x2edc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
label_2edc24:
    // 0x2edc24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2edc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2edc28:
    // 0x2edc28: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_2edc2c:
    if (ctx->pc == 0x2EDC2Cu) {
        ctx->pc = 0x2EDC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC28u;
        // 0x2edc2c: 0x8e020424  lw          $v0, 0x424($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1060)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDC30u;
        goto label_2edc30;
    }
    ctx->pc = 0x2EDC28u;
    {
        const bool branch_taken_0x2edc28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2edc28) {
            ctx->pc = 0x2EDC2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDC28u;
            // 0x2edc2c: 0x8e020424  lw          $v0, 0x424($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1060)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDC3Cu;
            goto label_2edc3c;
        }
    }
    ctx->pc = 0x2EDC30u;
label_2edc30:
    // 0x2edc30: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2edc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2edc34:
    // 0x2edc34: 0xae0212bc  sw          $v0, 0x12BC($s0)
    ctx->pc = 0x2edc34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4796), GPR_U32(ctx, 2));
label_2edc38:
    // 0x2edc38: 0x8e020424  lw          $v0, 0x424($s0)
    ctx->pc = 0x2edc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1060)));
label_2edc3c:
    // 0x2edc3c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2edc40:
    if (ctx->pc == 0x2EDC40u) {
        ctx->pc = 0x2EDC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC3Cu;
        // 0x2edc40: 0x26030534  addiu       $v1, $s0, 0x534 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1332));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDC44u;
        goto label_2edc44;
    }
    ctx->pc = 0x2EDC3Cu;
    {
        const bool branch_taken_0x2edc3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edc3c) {
            ctx->pc = 0x2EDC40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDC3Cu;
            // 0x2edc40: 0x26030534  addiu       $v1, $s0, 0x534 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1332));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDC58u;
            goto label_2edc58;
        }
    }
    ctx->pc = 0x2EDC44u;
label_2edc44:
    // 0x2edc44: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x2edc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_2edc48:
    // 0x2edc48: 0x8c6201cc  lw          $v0, 0x1CC($v1)
    ctx->pc = 0x2edc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 460)));
label_2edc4c:
    // 0x2edc4c: 0x40f809  jalr        $v0
label_2edc50:
    if (ctx->pc == 0x2EDC50u) {
        ctx->pc = 0x2EDC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC4Cu;
        // 0x2edc50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDC54u;
        goto label_2edc54;
    }
    ctx->pc = 0x2EDC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EDC54u);
        ctx->pc = 0x2EDC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC4Cu;
        // 0x2edc50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDC4Cu, 0x2EDC54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EDC54u;
label_2edc54:
    // 0x2edc54: 0x26030534  addiu       $v1, $s0, 0x534
    ctx->pc = 0x2edc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1332));
label_2edc58:
    // 0x2edc58: 0x26020608  addiu       $v0, $s0, 0x608
    ctx->pc = 0x2edc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1544));
label_2edc5c:
    // 0x2edc5c: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x2edc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_2edc60:
    // 0x2edc60: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2edc60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2edc64:
    // 0x2edc64: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2edc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2edc68:
    // 0x2edc68: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2edc68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2edc6c:
    // 0x2edc6c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2edc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2edc70:
    // 0x2edc70: 0x481fffb  bgez        $a0, . + 4 + (-0x5 << 2)
label_2edc74:
    if (ctx->pc == 0x2EDC74u) {
        ctx->pc = 0x2EDC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC70u;
        // 0x2edc74: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDC78u;
        goto label_2edc78;
    }
    ctx->pc = 0x2EDC70u;
    {
        const bool branch_taken_0x2edc70 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2EDC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC70u;
        // 0x2edc74: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edc70) {
            ctx->pc = 0x2EDC60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2edc60;
        }
    }
    ctx->pc = 0x2EDC78u;
label_2edc78:
    // 0x2edc78: 0xc08f956  jal         func_23E558
label_2edc7c:
    if (ctx->pc == 0x2EDC7Cu) {
        ctx->pc = 0x2EDC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC78u;
        // 0x2edc7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDC80u;
        goto label_2edc80;
    }
    ctx->pc = 0x2EDC78u;
    SET_GPR_U32(ctx, 31, 0x2EDC80u);
    ctx->pc = 0x2EDC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDC78u;
    // 0x2edc7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E558u, 0x2EDC78u, 0x2EDC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDC80u;
label_2edc80:
    // 0x2edc80: 0xc0a0870  jal         func_2821C0
label_2edc84:
    if (ctx->pc == 0x2EDC84u) {
        ctx->pc = 0x2EDC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC80u;
        // 0x2edc84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDC88u;
        goto label_2edc88;
    }
    ctx->pc = 0x2EDC80u;
    SET_GPR_U32(ctx, 31, 0x2EDC88u);
    ctx->pc = 0x2EDC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDC80u;
    // 0x2edc84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2821C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2821C0u, 0x2EDC80u, 0x2EDC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDC88u;
label_2edc88:
    // 0x2edc88: 0xc0b93c6  jal         func_2E4F18
label_2edc8c:
    if (ctx->pc == 0x2EDC8Cu) {
        ctx->pc = 0x2EDC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC88u;
        // 0x2edc8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDC90u;
        goto label_2edc90;
    }
    ctx->pc = 0x2EDC88u;
    SET_GPR_U32(ctx, 31, 0x2EDC90u);
    ctx->pc = 0x2EDC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDC88u;
    // 0x2edc8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4F18u, 0x2EDC88u, 0x2EDC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDC90u;
label_2edc90:
    // 0x2edc90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2edc90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2edc94:
    // 0x2edc94: 0xc08a15a  jal         func_228568
label_2edc98:
    if (ctx->pc == 0x2EDC98u) {
        ctx->pc = 0x2EDC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC94u;
        // 0x2edc98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDC9Cu;
        goto label_2edc9c;
    }
    ctx->pc = 0x2EDC94u;
    SET_GPR_U32(ctx, 31, 0x2EDC9Cu);
    ctx->pc = 0x2EDC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDC94u;
    // 0x2edc98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228568u, 0x2EDC94u, 0x2EDC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDC9Cu;
label_2edc9c:
    // 0x2edc9c: 0xc08dada  jal         func_236B68
label_2edca0:
    if (ctx->pc == 0x2EDCA0u) {
        ctx->pc = 0x2EDCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC9Cu;
        // 0x2edca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDCA4u;
        goto label_2edca4;
    }
    ctx->pc = 0x2EDC9Cu;
    SET_GPR_U32(ctx, 31, 0x2EDCA4u);
    ctx->pc = 0x2EDCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDC9Cu;
    // 0x2edca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B68u, 0x2EDC9Cu, 0x2EDCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDCA4u;
label_2edca4:
    // 0x2edca4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_2edca8:
    if (ctx->pc == 0x2EDCA8u) {
        ctx->pc = 0x2EDCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDCA4u;
        // 0x2edca8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDCACu;
        goto label_2edcac;
    }
    ctx->pc = 0x2EDCA4u;
    {
        const bool branch_taken_0x2edca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edca4) {
            ctx->pc = 0x2EDCA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDCA4u;
            // 0x2edca8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDCCCu;
            goto label_2edccc;
        }
    }
    ctx->pc = 0x2EDCACu;
label_2edcac:
    // 0x2edcac: 0xc0899bc  jal         func_2266F0
label_2edcb0:
    if (ctx->pc == 0x2EDCB0u) {
        ctx->pc = 0x2EDCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDCACu;
        // 0x2edcb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDCB4u;
        goto label_2edcb4;
    }
    ctx->pc = 0x2EDCACu;
    SET_GPR_U32(ctx, 31, 0x2EDCB4u);
    ctx->pc = 0x2EDCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDCACu;
    // 0x2edcb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2EDCACu, 0x2EDCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDCB4u;
label_2edcb4:
    // 0x2edcb4: 0x8c4402e4  lw          $a0, 0x2E4($v0)
    ctx->pc = 0x2edcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 740)));
label_2edcb8:
    // 0x2edcb8: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x2edcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_2edcbc:
    // 0x2edcbc: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x2edcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_2edcc0:
    // 0x2edcc0: 0x40f809  jalr        $v0
label_2edcc4:
    if (ctx->pc == 0x2EDCC4u) {
        ctx->pc = 0x2EDCC8u;
        goto label_2edcc8;
    }
    ctx->pc = 0x2EDCC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EDCC8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDCC0u, 0x2EDCC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EDCC8u;
label_2edcc8:
    // 0x2edcc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2edcc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2edccc:
    // 0x2edccc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2edcccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2edcd0:
    // 0x2edcd0: 0x3e00008  jr          $ra
label_2edcd4:
    if (ctx->pc == 0x2EDCD4u) {
        ctx->pc = 0x2EDCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDCD0u;
        // 0x2edcd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDCD8u;
        goto label_fallthrough_0x2edcd0;
    }
    ctx->pc = 0x2EDCD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDCD0u;
        // 0x2edcd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDCD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2edcd0:
    ctx->pc = 0x2EDCD8u;
}
