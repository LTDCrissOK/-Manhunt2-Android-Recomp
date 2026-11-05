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

// Function: sub_0035DA50
// Address: 0x35da50 - 0x35dd18
void sub_0035DA50_0x35da50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035DA50_0x35da50");
#endif

    switch (ctx->pc) {
        case 0x35da50u: goto label_35da50;
        case 0x35da54u: goto label_35da54;
        case 0x35da58u: goto label_35da58;
        case 0x35da5cu: goto label_35da5c;
        case 0x35da60u: goto label_35da60;
        case 0x35da64u: goto label_35da64;
        case 0x35da68u: goto label_35da68;
        case 0x35da6cu: goto label_35da6c;
        case 0x35da70u: goto label_35da70;
        case 0x35da74u: goto label_35da74;
        case 0x35da78u: goto label_35da78;
        case 0x35da7cu: goto label_35da7c;
        case 0x35da80u: goto label_35da80;
        case 0x35da84u: goto label_35da84;
        case 0x35da88u: goto label_35da88;
        case 0x35da8cu: goto label_35da8c;
        case 0x35da90u: goto label_35da90;
        case 0x35da94u: goto label_35da94;
        case 0x35da98u: goto label_35da98;
        case 0x35da9cu: goto label_35da9c;
        case 0x35daa0u: goto label_35daa0;
        case 0x35daa4u: goto label_35daa4;
        case 0x35daa8u: goto label_35daa8;
        case 0x35daacu: goto label_35daac;
        case 0x35dab0u: goto label_35dab0;
        case 0x35dab4u: goto label_35dab4;
        case 0x35dab8u: goto label_35dab8;
        case 0x35dabcu: goto label_35dabc;
        case 0x35dac0u: goto label_35dac0;
        case 0x35dac4u: goto label_35dac4;
        case 0x35dac8u: goto label_35dac8;
        case 0x35daccu: goto label_35dacc;
        case 0x35dad0u: goto label_35dad0;
        case 0x35dad4u: goto label_35dad4;
        case 0x35dad8u: goto label_35dad8;
        case 0x35dadcu: goto label_35dadc;
        case 0x35dae0u: goto label_35dae0;
        case 0x35dae4u: goto label_35dae4;
        case 0x35dae8u: goto label_35dae8;
        case 0x35daecu: goto label_35daec;
        case 0x35daf0u: goto label_35daf0;
        case 0x35daf4u: goto label_35daf4;
        case 0x35daf8u: goto label_35daf8;
        case 0x35dafcu: goto label_35dafc;
        case 0x35db00u: goto label_35db00;
        case 0x35db04u: goto label_35db04;
        case 0x35db08u: goto label_35db08;
        case 0x35db0cu: goto label_35db0c;
        case 0x35db10u: goto label_35db10;
        case 0x35db14u: goto label_35db14;
        case 0x35db18u: goto label_35db18;
        case 0x35db1cu: goto label_35db1c;
        case 0x35db20u: goto label_35db20;
        case 0x35db24u: goto label_35db24;
        case 0x35db28u: goto label_35db28;
        case 0x35db2cu: goto label_35db2c;
        case 0x35db30u: goto label_35db30;
        case 0x35db34u: goto label_35db34;
        case 0x35db38u: goto label_35db38;
        case 0x35db3cu: goto label_35db3c;
        case 0x35db40u: goto label_35db40;
        case 0x35db44u: goto label_35db44;
        case 0x35db48u: goto label_35db48;
        case 0x35db4cu: goto label_35db4c;
        case 0x35db50u: goto label_35db50;
        case 0x35db54u: goto label_35db54;
        case 0x35db58u: goto label_35db58;
        case 0x35db5cu: goto label_35db5c;
        case 0x35db60u: goto label_35db60;
        case 0x35db64u: goto label_35db64;
        case 0x35db68u: goto label_35db68;
        case 0x35db6cu: goto label_35db6c;
        case 0x35db70u: goto label_35db70;
        case 0x35db74u: goto label_35db74;
        case 0x35db78u: goto label_35db78;
        case 0x35db7cu: goto label_35db7c;
        case 0x35db80u: goto label_35db80;
        case 0x35db84u: goto label_35db84;
        case 0x35db88u: goto label_35db88;
        case 0x35db8cu: goto label_35db8c;
        case 0x35db90u: goto label_35db90;
        case 0x35db94u: goto label_35db94;
        case 0x35db98u: goto label_35db98;
        case 0x35db9cu: goto label_35db9c;
        case 0x35dba0u: goto label_35dba0;
        case 0x35dba4u: goto label_35dba4;
        case 0x35dba8u: goto label_35dba8;
        case 0x35dbacu: goto label_35dbac;
        case 0x35dbb0u: goto label_35dbb0;
        case 0x35dbb4u: goto label_35dbb4;
        case 0x35dbb8u: goto label_35dbb8;
        case 0x35dbbcu: goto label_35dbbc;
        case 0x35dbc0u: goto label_35dbc0;
        case 0x35dbc4u: goto label_35dbc4;
        case 0x35dbc8u: goto label_35dbc8;
        case 0x35dbccu: goto label_35dbcc;
        case 0x35dbd0u: goto label_35dbd0;
        case 0x35dbd4u: goto label_35dbd4;
        case 0x35dbd8u: goto label_35dbd8;
        case 0x35dbdcu: goto label_35dbdc;
        case 0x35dbe0u: goto label_35dbe0;
        case 0x35dbe4u: goto label_35dbe4;
        case 0x35dbe8u: goto label_35dbe8;
        case 0x35dbecu: goto label_35dbec;
        case 0x35dbf0u: goto label_35dbf0;
        case 0x35dbf4u: goto label_35dbf4;
        case 0x35dbf8u: goto label_35dbf8;
        case 0x35dbfcu: goto label_35dbfc;
        case 0x35dc00u: goto label_35dc00;
        case 0x35dc04u: goto label_35dc04;
        case 0x35dc08u: goto label_35dc08;
        case 0x35dc0cu: goto label_35dc0c;
        case 0x35dc10u: goto label_35dc10;
        case 0x35dc14u: goto label_35dc14;
        case 0x35dc18u: goto label_35dc18;
        case 0x35dc1cu: goto label_35dc1c;
        case 0x35dc20u: goto label_35dc20;
        case 0x35dc24u: goto label_35dc24;
        case 0x35dc28u: goto label_35dc28;
        case 0x35dc2cu: goto label_35dc2c;
        case 0x35dc30u: goto label_35dc30;
        case 0x35dc34u: goto label_35dc34;
        case 0x35dc38u: goto label_35dc38;
        case 0x35dc3cu: goto label_35dc3c;
        case 0x35dc40u: goto label_35dc40;
        case 0x35dc44u: goto label_35dc44;
        case 0x35dc48u: goto label_35dc48;
        case 0x35dc4cu: goto label_35dc4c;
        case 0x35dc50u: goto label_35dc50;
        case 0x35dc54u: goto label_35dc54;
        case 0x35dc58u: goto label_35dc58;
        case 0x35dc5cu: goto label_35dc5c;
        case 0x35dc60u: goto label_35dc60;
        case 0x35dc64u: goto label_35dc64;
        case 0x35dc68u: goto label_35dc68;
        case 0x35dc6cu: goto label_35dc6c;
        case 0x35dc70u: goto label_35dc70;
        case 0x35dc74u: goto label_35dc74;
        case 0x35dc78u: goto label_35dc78;
        case 0x35dc7cu: goto label_35dc7c;
        case 0x35dc80u: goto label_35dc80;
        case 0x35dc84u: goto label_35dc84;
        case 0x35dc88u: goto label_35dc88;
        case 0x35dc8cu: goto label_35dc8c;
        case 0x35dc90u: goto label_35dc90;
        case 0x35dc94u: goto label_35dc94;
        case 0x35dc98u: goto label_35dc98;
        case 0x35dc9cu: goto label_35dc9c;
        case 0x35dca0u: goto label_35dca0;
        case 0x35dca4u: goto label_35dca4;
        case 0x35dca8u: goto label_35dca8;
        case 0x35dcacu: goto label_35dcac;
        case 0x35dcb0u: goto label_35dcb0;
        case 0x35dcb4u: goto label_35dcb4;
        case 0x35dcb8u: goto label_35dcb8;
        case 0x35dcbcu: goto label_35dcbc;
        case 0x35dcc0u: goto label_35dcc0;
        case 0x35dcc4u: goto label_35dcc4;
        case 0x35dcc8u: goto label_35dcc8;
        case 0x35dcccu: goto label_35dccc;
        case 0x35dcd0u: goto label_35dcd0;
        case 0x35dcd4u: goto label_35dcd4;
        case 0x35dcd8u: goto label_35dcd8;
        case 0x35dcdcu: goto label_35dcdc;
        case 0x35dce0u: goto label_35dce0;
        case 0x35dce4u: goto label_35dce4;
        case 0x35dce8u: goto label_35dce8;
        case 0x35dcecu: goto label_35dcec;
        case 0x35dcf0u: goto label_35dcf0;
        case 0x35dcf4u: goto label_35dcf4;
        case 0x35dcf8u: goto label_35dcf8;
        case 0x35dcfcu: goto label_35dcfc;
        case 0x35dd00u: goto label_35dd00;
        case 0x35dd04u: goto label_35dd04;
        case 0x35dd08u: goto label_35dd08;
        case 0x35dd0cu: goto label_35dd0c;
        case 0x35dd10u: goto label_35dd10;
        case 0x35dd14u: goto label_35dd14;
        default: break;
    }

    ctx->pc = 0x35da50u;

label_35da50:
    // 0x35da50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x35da50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_35da54:
    // 0x35da54: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x35da54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_35da58:
    // 0x35da58: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x35da58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_35da5c:
    // 0x35da5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35da5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35da60:
    // 0x35da60: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x35da60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_35da64:
    // 0x35da64: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x35da64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_35da68:
    // 0x35da68: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x35da68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_35da6c:
    // 0x35da6c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x35da6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_35da70:
    // 0x35da70: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x35da70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_35da74:
    // 0x35da74: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x35da74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_35da78:
    // 0x35da78: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x35da78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_35da7c:
    // 0x35da7c: 0x2462fffc  addiu       $v0, $v1, -0x4
    ctx->pc = 0x35da7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_35da80:
    // 0x35da80: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x35da80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_35da84:
    // 0x35da84: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_35da88:
    if (ctx->pc == 0x35DA88u) {
        ctx->pc = 0x35DA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DA84u;
        // 0x35da88: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DA8Cu;
        goto label_35da8c;
    }
    ctx->pc = 0x35DA84u;
    {
        const bool branch_taken_0x35da84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35DA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DA84u;
        // 0x35da88: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35da84) {
            ctx->pc = 0x35DAB8u;
            goto label_35dab8;
        }
    }
    ctx->pc = 0x35DA8Cu;
label_35da8c:
    // 0x35da8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35da8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35da90:
    // 0x35da90: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_35da94:
    if (ctx->pc == 0x35DA94u) {
        ctx->pc = 0x35DA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DA90u;
        // 0x35da94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DA98u;
        goto label_35da98;
    }
    ctx->pc = 0x35DA90u;
    {
        const bool branch_taken_0x35da90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x35DA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DA90u;
        // 0x35da94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35da90) {
            ctx->pc = 0x35DAACu;
            goto label_35daac;
        }
    }
    ctx->pc = 0x35DA98u;
label_35da98:
    // 0x35da98: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x35da98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_35da9c:
    // 0x35da9c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_35daa0:
    if (ctx->pc == 0x35DAA0u) {
        ctx->pc = 0x35DAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DA9Cu;
        // 0x35daa0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DAA4u;
        goto label_35daa4;
    }
    ctx->pc = 0x35DA9Cu;
    {
        const bool branch_taken_0x35da9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x35DAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DA9Cu;
        // 0x35daa0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35da9c) {
            ctx->pc = 0x35DAACu;
            goto label_35daac;
        }
    }
    ctx->pc = 0x35DAA4u;
label_35daa4:
    // 0x35daa4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_35daa8:
    if (ctx->pc == 0x35DAA8u) {
        ctx->pc = 0x35DAACu;
        goto label_35daac;
    }
    ctx->pc = 0x35DAA4u;
    {
        const bool branch_taken_0x35daa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35daa4) {
            ctx->pc = 0x35DAB0u;
            goto label_35dab0;
        }
    }
    ctx->pc = 0x35DAACu;
label_35daac:
    // 0x35daac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35daacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35dab0:
    // 0x35dab0: 0x50800020  beql        $a0, $zero, . + 4 + (0x20 << 2)
label_35dab4:
    if (ctx->pc == 0x35DAB4u) {
        ctx->pc = 0x35DAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DAB0u;
        // 0x35dab4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DAB8u;
        goto label_35dab8;
    }
    ctx->pc = 0x35DAB0u;
    {
        const bool branch_taken_0x35dab0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35dab0) {
            ctx->pc = 0x35DAB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35DAB0u;
            // 0x35dab4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35DB34u;
            goto label_35db34;
        }
    }
    ctx->pc = 0x35DAB8u;
label_35dab8:
    // 0x35dab8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35dab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35dabc:
    // 0x35dabc: 0xc0d7658  jal         func_35D960
label_35dac0:
    if (ctx->pc == 0x35DAC0u) {
        ctx->pc = 0x35DAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DABCu;
        // 0x35dac0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DAC4u;
        goto label_35dac4;
    }
    ctx->pc = 0x35DABCu;
    SET_GPR_U32(ctx, 31, 0x35DAC4u);
    ctx->pc = 0x35DAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DABCu;
    // 0x35dac0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D960u, 0x35DABCu, 0x35DAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DAC4u;
label_35dac4:
    // 0x35dac4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x35dac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_35dac8:
    // 0x35dac8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x35dac8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_35dacc:
    // 0x35dacc: 0x24a56bc0  addiu       $a1, $a1, 0x6BC0
    ctx->pc = 0x35daccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27584));
label_35dad0:
    // 0x35dad0: 0xc0d73cc  jal         func_35CF30
label_35dad4:
    if (ctx->pc == 0x35DAD4u) {
        ctx->pc = 0x35DAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DAD0u;
        // 0x35dad4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DAD8u;
        goto label_35dad8;
    }
    ctx->pc = 0x35DAD0u;
    SET_GPR_U32(ctx, 31, 0x35DAD8u);
    ctx->pc = 0x35DAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DAD0u;
    // 0x35dad4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x35DAD0u, 0x35DAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DAD8u;
label_35dad8:
    // 0x35dad8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35dad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_35dadc:
    // 0x35dadc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_35dae0:
    if (ctx->pc == 0x35DAE0u) {
        ctx->pc = 0x35DAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DADCu;
        // 0x35dae0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DAE4u;
        goto label_35dae4;
    }
    ctx->pc = 0x35DADCu;
    {
        const bool branch_taken_0x35dadc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DADCu;
        // 0x35dae0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35dadc) {
            ctx->pc = 0x35DB0Cu;
            goto label_35db0c;
        }
    }
    ctx->pc = 0x35DAE4u;
label_35dae4:
    // 0x35dae4: 0xc0d765e  jal         func_35D978
label_35dae8:
    if (ctx->pc == 0x35DAE8u) {
        ctx->pc = 0x35DAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DAE4u;
        // 0x35dae8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DAECu;
        goto label_35daec;
    }
    ctx->pc = 0x35DAE4u;
    SET_GPR_U32(ctx, 31, 0x35DAECu);
    ctx->pc = 0x35DAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DAE4u;
    // 0x35dae8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D978u, 0x35DAE4u, 0x35DAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DAECu;
label_35daec:
    // 0x35daec: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x35daecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_35daf0:
    // 0x35daf0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x35daf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_35daf4:
    // 0x35daf4: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x35daf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_35daf8:
    // 0x35daf8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x35daf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35dafc:
    // 0x35dafc: 0xc098f14  jal         func_263C50
label_35db00:
    if (ctx->pc == 0x35DB00u) {
        ctx->pc = 0x35DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DAFCu;
        // 0x35db00: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DB04u;
        goto label_35db04;
    }
    ctx->pc = 0x35DAFCu;
    SET_GPR_U32(ctx, 31, 0x35DB04u);
    ctx->pc = 0x35DB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DAFCu;
    // 0x35db00: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263C50u, 0x35DAFCu, 0x35DB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DB04u;
label_35db04:
    // 0x35db04: 0x10000014  b           . + 4 + (0x14 << 2)
label_35db08:
    if (ctx->pc == 0x35DB08u) {
        ctx->pc = 0x35DB0Cu;
        goto label_35db0c;
    }
    ctx->pc = 0x35DB04u;
    {
        const bool branch_taken_0x35db04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35db04) {
            ctx->pc = 0x35DB58u;
            goto label_35db58;
        }
    }
    ctx->pc = 0x35DB0Cu;
label_35db0c:
    // 0x35db0c: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x35db0cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_35db10:
    // 0x35db10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35db10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35db14:
    // 0x35db14: 0xae0291ac  sw          $v0, -0x6E54($s0)
    ctx->pc = 0x35db14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294939052), GPR_U32(ctx, 2));
label_35db18:
    // 0x35db18: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x35db18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_35db1c:
    // 0x35db1c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x35db1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_35db20:
    // 0x35db20: 0x40f809  jalr        $v0
label_35db24:
    if (ctx->pc == 0x35DB24u) {
        ctx->pc = 0x35DB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DB20u;
        // 0x35db24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DB28u;
        goto label_35db28;
    }
    ctx->pc = 0x35DB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35DB28u);
        ctx->pc = 0x35DB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DB20u;
        // 0x35db24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35DB20u, 0x35DB28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35DB28u;
label_35db28:
    // 0x35db28: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x35db28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35db2c:
    // 0x35db2c: 0x1000000a  b           . + 4 + (0xA << 2)
label_35db30:
    if (ctx->pc == 0x35DB30u) {
        ctx->pc = 0x35DB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DB2Cu;
        // 0x35db30: 0xae0091ac  sw          $zero, -0x6E54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294939052), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DB34u;
        goto label_35db34;
    }
    ctx->pc = 0x35DB2Cu;
    {
        const bool branch_taken_0x35db2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DB2Cu;
        // 0x35db30: 0xae0091ac  sw          $zero, -0x6E54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294939052), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35db2c) {
            ctx->pc = 0x35DB58u;
            goto label_35db58;
        }
    }
    ctx->pc = 0x35DB34u;
label_35db34:
    // 0x35db34: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x35db34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_35db38:
    // 0x35db38: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x35db38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35db3c:
    // 0x35db3c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_35db40:
    if (ctx->pc == 0x35DB40u) {
        ctx->pc = 0x35DB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DB3Cu;
        // 0x35db40: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DB44u;
        goto label_35db44;
    }
    ctx->pc = 0x35DB3Cu;
    {
        const bool branch_taken_0x35db3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35DB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DB3Cu;
        // 0x35db40: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35db3c) {
            ctx->pc = 0x35DB58u;
            goto label_35db58;
        }
    }
    ctx->pc = 0x35DB44u;
label_35db44:
    // 0x35db44: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x35db44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
label_35db48:
    // 0x35db48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35db48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35db4c:
    // 0x35db4c: 0xc0fbcea  jal         func_3EF3A8
label_35db50:
    if (ctx->pc == 0x35DB50u) {
        ctx->pc = 0x35DB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DB4Cu;
        // 0x35db50: 0x2484dc30  addiu       $a0, $a0, -0x23D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DB54u;
        goto label_35db54;
    }
    ctx->pc = 0x35DB4Cu;
    SET_GPR_U32(ctx, 31, 0x35DB54u);
    ctx->pc = 0x35DB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DB4Cu;
    // 0x35db50: 0x2484dc30  addiu       $a0, $a0, -0x23D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EF3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EF3A8u, 0x35DB4Cu, 0x35DB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DB54u;
label_35db54:
    // 0x35db54: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x35db54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_35db58:
    // 0x35db58: 0x12400067  beqz        $s2, . + 4 + (0x67 << 2)
label_35db5c:
    if (ctx->pc == 0x35DB5Cu) {
        ctx->pc = 0x35DB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DB58u;
        // 0x35db5c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DB60u;
        goto label_35db60;
    }
    ctx->pc = 0x35DB58u;
    {
        const bool branch_taken_0x35db58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DB58u;
        // 0x35db5c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35db58) {
            ctx->pc = 0x35DCF8u;
            goto label_35dcf8;
        }
    }
    ctx->pc = 0x35DB60u;
label_35db60:
    // 0x35db60: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x35db60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_35db64:
    // 0x35db64: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x35db64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
label_35db68:
    // 0x35db68: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
label_35db6c:
    if (ctx->pc == 0x35DB6Cu) {
        ctx->pc = 0x35DB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DB68u;
        // 0x35db6c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DB70u;
        goto label_35db70;
    }
    ctx->pc = 0x35DB68u;
    {
        const bool branch_taken_0x35db68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DB68u;
        // 0x35db6c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35db68) {
            ctx->pc = 0x35DCF8u;
            goto label_35dcf8;
        }
    }
    ctx->pc = 0x35DB70u;
label_35db70:
    // 0x35db70: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x35db70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_35db74:
    // 0x35db74: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x35db74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_35db78:
    // 0x35db78: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x35db78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_35db7c:
    // 0x35db7c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x35db7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_35db80:
    // 0x35db80: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x35db80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_35db84:
    // 0x35db84: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x35db84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_35db88:
    // 0x35db88: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_35db8c:
    if (ctx->pc == 0x35DB8Cu) {
        ctx->pc = 0x35DB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DB88u;
        // 0x35db8c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DB90u;
        goto label_35db90;
    }
    ctx->pc = 0x35DB88u;
    {
        const bool branch_taken_0x35db88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DB88u;
        // 0x35db8c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35db88) {
            ctx->pc = 0x35DCB8u;
            goto label_35dcb8;
        }
    }
    ctx->pc = 0x35DB90u;
label_35db90:
    // 0x35db90: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x35db90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
label_35db94:
    // 0x35db94: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x35db94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_35db98:
    // 0x35db98: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_35db9c:
    if (ctx->pc == 0x35DB9Cu) {
        ctx->pc = 0x35DB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DB98u;
        // 0x35db9c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DBA0u;
        goto label_35dba0;
    }
    ctx->pc = 0x35DB98u;
    {
        const bool branch_taken_0x35db98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35DB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DB98u;
        // 0x35db9c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35db98) {
            ctx->pc = 0x35DBACu;
            goto label_35dbac;
        }
    }
    ctx->pc = 0x35DBA0u;
label_35dba0:
    // 0x35dba0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x35dba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_35dba4:
    // 0x35dba4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_35dba8:
    if (ctx->pc == 0x35DBA8u) {
        ctx->pc = 0x35DBACu;
        goto label_35dbac;
    }
    ctx->pc = 0x35DBA4u;
    {
        const bool branch_taken_0x35dba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35dba4) {
            ctx->pc = 0x35DBB0u;
            goto label_35dbb0;
        }
    }
    ctx->pc = 0x35DBACu;
label_35dbac:
    // 0x35dbac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35dbacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35dbb0:
    // 0x35dbb0: 0x1080004c  beqz        $a0, . + 4 + (0x4C << 2)
label_35dbb4:
    if (ctx->pc == 0x35DBB4u) {
        ctx->pc = 0x35DBB8u;
        goto label_35dbb8;
    }
    ctx->pc = 0x35DBB0u;
    {
        const bool branch_taken_0x35dbb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35dbb0) {
            ctx->pc = 0x35DCE4u;
            goto label_35dce4;
        }
    }
    ctx->pc = 0x35DBB8u;
label_35dbb8:
    // 0x35dbb8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x35dbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_35dbbc:
    // 0x35dbbc: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x35dbbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_35dbc0:
    // 0x35dbc0: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x35dbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_35dbc4:
    // 0x35dbc4: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x35dbc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_35dbc8:
    // 0x35dbc8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_35dbcc:
    if (ctx->pc == 0x35DBCCu) {
        ctx->pc = 0x35DBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DBC8u;
        // 0x35dbcc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DBD0u;
        goto label_35dbd0;
    }
    ctx->pc = 0x35DBC8u;
    {
        const bool branch_taken_0x35dbc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35DBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DBC8u;
        // 0x35dbcc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35dbc8) {
            ctx->pc = 0x35DC00u;
            goto label_35dc00;
        }
    }
    ctx->pc = 0x35DBD0u;
label_35dbd0:
    // 0x35dbd0: 0xc0b93e0  jal         func_2E4F80
label_35dbd4:
    if (ctx->pc == 0x35DBD4u) {
        ctx->pc = 0x35DBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DBD0u;
        // 0x35dbd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DBD8u;
        goto label_35dbd8;
    }
    ctx->pc = 0x35DBD0u;
    SET_GPR_U32(ctx, 31, 0x35DBD8u);
    ctx->pc = 0x35DBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DBD0u;
    // 0x35dbd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4F80u, 0x35DBD0u, 0x35DBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DBD8u;
label_35dbd8:
    // 0x35dbd8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_35dbdc:
    if (ctx->pc == 0x35DBDCu) {
        ctx->pc = 0x35DBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DBD8u;
        // 0x35dbdc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DBE0u;
        goto label_35dbe0;
    }
    ctx->pc = 0x35DBD8u;
    {
        const bool branch_taken_0x35dbd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35dbd8) {
            ctx->pc = 0x35DBDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35DBD8u;
            // 0x35dbdc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35DC00u;
            goto label_35dc00;
        }
    }
    ctx->pc = 0x35DBE0u;
label_35dbe0:
    // 0x35dbe0: 0x8e030418  lw          $v1, 0x418($s0)
    ctx->pc = 0x35dbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
label_35dbe4:
    // 0x35dbe4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x35dbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_35dbe8:
    // 0x35dbe8: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_35dbec:
    if (ctx->pc == 0x35DBECu) {
        ctx->pc = 0x35DBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DBE8u;
        // 0x35dbec: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DBF0u;
        goto label_35dbf0;
    }
    ctx->pc = 0x35DBE8u;
    {
        const bool branch_taken_0x35dbe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x35dbe8) {
            ctx->pc = 0x35DBECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35DBE8u;
            // 0x35dbec: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35DC00u;
            goto label_35dc00;
        }
    }
    ctx->pc = 0x35DBF0u;
label_35dbf0:
    // 0x35dbf0: 0xc092432  jal         func_2490C8
label_35dbf4:
    if (ctx->pc == 0x35DBF4u) {
        ctx->pc = 0x35DBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DBF0u;
        // 0x35dbf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DBF8u;
        goto label_35dbf8;
    }
    ctx->pc = 0x35DBF0u;
    SET_GPR_U32(ctx, 31, 0x35DBF8u);
    ctx->pc = 0x35DBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DBF0u;
    // 0x35dbf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2490C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2490C8u, 0x35DBF0u, 0x35DBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DBF8u;
label_35dbf8:
    // 0x35dbf8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_35dbfc:
    if (ctx->pc == 0x35DBFCu) {
        ctx->pc = 0x35DBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DBF8u;
        // 0x35dbfc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DC00u;
        goto label_35dc00;
    }
    ctx->pc = 0x35DBF8u;
    {
        const bool branch_taken_0x35dbf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35dbf8) {
            ctx->pc = 0x35DBFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35DBF8u;
            // 0x35dbfc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35DC00u;
            goto label_35dc00;
        }
    }
    ctx->pc = 0x35DC00u;
label_35dc00:
    // 0x35dc00: 0x12600038  beqz        $s3, . + 4 + (0x38 << 2)
label_35dc04:
    if (ctx->pc == 0x35DC04u) {
        ctx->pc = 0x35DC08u;
        goto label_35dc08;
    }
    ctx->pc = 0x35DC00u;
    {
        const bool branch_taken_0x35dc00 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x35dc00) {
            ctx->pc = 0x35DCE4u;
            goto label_35dce4;
        }
    }
    ctx->pc = 0x35DC08u;
label_35dc08:
    // 0x35dc08: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x35dc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_35dc0c:
    // 0x35dc0c: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x35dc0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_35dc10:
    // 0x35dc10: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x35dc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_35dc14:
    // 0x35dc14: 0xc44105f0  lwc1        $f1, 0x5F0($v0)
    ctx->pc = 0x35dc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35dc18:
    // 0x35dc18: 0x244205f0  addiu       $v0, $v0, 0x5F0
    ctx->pc = 0x35dc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1520));
label_35dc1c:
    // 0x35dc1c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x35dc1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_35dc20:
    // 0x35dc20: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x35dc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35dc24:
    // 0x35dc24: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x35dc24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_35dc28:
    // 0x35dc28: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x35dc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35dc2c:
    // 0x35dc2c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x35dc2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_35dc30:
    // 0x35dc30: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x35dc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35dc34:
    // 0x35dc34: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x35dc34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_35dc38:
    // 0x35dc38: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35dc38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_35dc3c:
    // 0x35dc3c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x35dc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_35dc40:
    // 0x35dc40: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x35dc40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_35dc44:
    // 0x35dc44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35dc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35dc48:
    // 0x35dc48: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x35dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_35dc4c:
    // 0x35dc4c: 0x40f809  jalr        $v0
label_35dc50:
    if (ctx->pc == 0x35DC50u) {
        ctx->pc = 0x35DC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DC4Cu;
        // 0x35dc50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DC54u;
        goto label_35dc54;
    }
    ctx->pc = 0x35DC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35DC54u);
        ctx->pc = 0x35DC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DC4Cu;
        // 0x35dc50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35DC4Cu, 0x35DC54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35DC54u;
label_35dc54:
    // 0x35dc54: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x35dc54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_35dc58:
    // 0x35dc58: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x35dc58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_35dc5c:
    // 0x35dc5c: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x35dc5cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_35dc60:
    // 0x35dc60: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x35dc60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_35dc64:
    // 0x35dc64: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x35dc64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_35dc68:
    // 0x35dc68: 0x24534f20  addiu       $s3, $v0, 0x4F20
    ctx->pc = 0x35dc68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 20256));
label_35dc6c:
    // 0x35dc6c: 0xc0f70ce  jal         func_3DC338
label_35dc70:
    if (ctx->pc == 0x35DC70u) {
        ctx->pc = 0x35DC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DC6Cu;
        // 0x35dc70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DC74u;
        goto label_35dc74;
    }
    ctx->pc = 0x35DC6Cu;
    SET_GPR_U32(ctx, 31, 0x35DC74u);
    ctx->pc = 0x35DC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DC6Cu;
    // 0x35dc70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x35DC6Cu, 0x35DC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DC74u;
label_35dc74:
    // 0x35dc74: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_35dc78:
    if (ctx->pc == 0x35DC78u) {
        ctx->pc = 0x35DC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DC74u;
        // 0x35dc78: 0x8e2500a4  lw          $a1, 0xA4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DC7Cu;
        goto label_35dc7c;
    }
    ctx->pc = 0x35DC74u;
    {
        const bool branch_taken_0x35dc74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35dc74) {
            ctx->pc = 0x35DC78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35DC74u;
            // 0x35dc78: 0x8e2500a4  lw          $a1, 0xA4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35DC88u;
            goto label_35dc88;
        }
    }
    ctx->pc = 0x35DC7Cu;
label_35dc7c:
    // 0x35dc7c: 0xc0c4900  jal         func_312400
label_35dc80:
    if (ctx->pc == 0x35DC80u) {
        ctx->pc = 0x35DC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DC7Cu;
        // 0x35dc80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DC84u;
        goto label_35dc84;
    }
    ctx->pc = 0x35DC7Cu;
    SET_GPR_U32(ctx, 31, 0x35DC84u);
    ctx->pc = 0x35DC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DC7Cu;
    // 0x35dc80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x35DC7Cu, 0x35DC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DC84u;
label_35dc84:
    // 0x35dc84: 0x8e2500a4  lw          $a1, 0xA4($s1)
    ctx->pc = 0x35dc84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_35dc88:
    // 0x35dc88: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x35dc88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_35dc8c:
    // 0x35dc8c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x35dc8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_35dc90:
    // 0x35dc90: 0x26070080  addiu       $a3, $s0, 0x80
    ctx->pc = 0x35dc90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_35dc94:
    // 0x35dc94: 0xc0b0a7a  jal         func_2C29E8
label_35dc98:
    if (ctx->pc == 0x35DC98u) {
        ctx->pc = 0x35DC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DC94u;
        // 0x35dc98: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DC9Cu;
        goto label_35dc9c;
    }
    ctx->pc = 0x35DC94u;
    SET_GPR_U32(ctx, 31, 0x35DC9Cu);
    ctx->pc = 0x35DC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DC94u;
    // 0x35dc98: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29E8u, 0x35DC94u, 0x35DC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DC9Cu;
label_35dc9c:
    // 0x35dc9c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35dc9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35dca0:
    // 0x35dca0: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
label_35dca4:
    if (ctx->pc == 0x35DCA4u) {
        ctx->pc = 0x35DCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DCA0u;
        // 0x35dca4: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DCA8u;
        goto label_35dca8;
    }
    ctx->pc = 0x35DCA0u;
    {
        const bool branch_taken_0x35dca0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DCA0u;
        // 0x35dca4: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35dca0) {
            ctx->pc = 0x35DCF8u;
            goto label_35dcf8;
        }
    }
    ctx->pc = 0x35DCA8u;
label_35dca8:
    // 0x35dca8: 0xc0b1080  jal         func_2C4200
label_35dcac:
    if (ctx->pc == 0x35DCACu) {
        ctx->pc = 0x35DCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DCA8u;
        // 0x35dcac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DCB0u;
        goto label_35dcb0;
    }
    ctx->pc = 0x35DCA8u;
    SET_GPR_U32(ctx, 31, 0x35DCB0u);
    ctx->pc = 0x35DCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DCA8u;
    // 0x35dcac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4200u, 0x35DCA8u, 0x35DCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DCB0u;
label_35dcb0:
    // 0x35dcb0: 0x1000000c  b           . + 4 + (0xC << 2)
label_35dcb4:
    if (ctx->pc == 0x35DCB4u) {
        ctx->pc = 0x35DCB8u;
        goto label_35dcb8;
    }
    ctx->pc = 0x35DCB0u;
    {
        const bool branch_taken_0x35dcb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35dcb0) {
            ctx->pc = 0x35DCE4u;
            goto label_35dce4;
        }
    }
    ctx->pc = 0x35DCB8u;
label_35dcb8:
    // 0x35dcb8: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x35dcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_35dcbc:
    // 0x35dcbc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35dcbcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_35dcc0:
    // 0x35dcc0: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x35dcc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_35dcc4:
    // 0x35dcc4: 0x8c8500a4  lw          $a1, 0xA4($a0)
    ctx->pc = 0x35dcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
label_35dcc8:
    // 0x35dcc8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x35dcc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_35dccc:
    // 0x35dccc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x35dcccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_35dcd0:
    // 0x35dcd0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x35dcd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35dcd4:
    // 0x35dcd4: 0x24844f20  addiu       $a0, $a0, 0x4F20
    ctx->pc = 0x35dcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20256));
label_35dcd8:
    // 0x35dcd8: 0xc0b0a7a  jal         func_2C29E8
label_35dcdc:
    if (ctx->pc == 0x35DCDCu) {
        ctx->pc = 0x35DCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DCD8u;
        // 0x35dcdc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DCE0u;
        goto label_35dce0;
    }
    ctx->pc = 0x35DCD8u;
    SET_GPR_U32(ctx, 31, 0x35DCE0u);
    ctx->pc = 0x35DCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DCD8u;
    // 0x35dcdc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29E8u, 0x35DCD8u, 0x35DCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DCE0u;
label_35dce0:
    // 0x35dce0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35dce0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35dce4:
    // 0x35dce4: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_35dce8:
    if (ctx->pc == 0x35DCE8u) {
        ctx->pc = 0x35DCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DCE4u;
        // 0x35dce8: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DCECu;
        goto label_35dcec;
    }
    ctx->pc = 0x35DCE4u;
    {
        const bool branch_taken_0x35dce4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DCE4u;
        // 0x35dce8: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35dce4) {
            ctx->pc = 0x35DCF8u;
            goto label_35dcf8;
        }
    }
    ctx->pc = 0x35DCECu;
label_35dcec:
    // 0x35dcec: 0xc0b0ef2  jal         func_2C3BC8
label_35dcf0:
    if (ctx->pc == 0x35DCF0u) {
        ctx->pc = 0x35DCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DCECu;
        // 0x35dcf0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DCF4u;
        goto label_35dcf4;
    }
    ctx->pc = 0x35DCECu;
    SET_GPR_U32(ctx, 31, 0x35DCF4u);
    ctx->pc = 0x35DCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DCECu;
    // 0x35dcf0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3BC8u, 0x35DCECu, 0x35DCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DCF4u;
label_35dcf4:
    // 0x35dcf4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x35dcf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_35dcf8:
    // 0x35dcf8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x35dcf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_35dcfc:
    // 0x35dcfc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x35dcfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_35dd00:
    // 0x35dd00: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x35dd00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_35dd04:
    // 0x35dd04: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x35dd04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_35dd08:
    // 0x35dd08: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x35dd08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_35dd0c:
    // 0x35dd0c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x35dd0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_35dd10:
    // 0x35dd10: 0x3e00008  jr          $ra
label_35dd14:
    if (ctx->pc == 0x35DD14u) {
        ctx->pc = 0x35DD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DD10u;
        // 0x35dd14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DD18u;
        goto label_fallthrough_0x35dd10;
    }
    ctx->pc = 0x35DD10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35DD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DD10u;
        // 0x35dd14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35DD10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35dd10:
    ctx->pc = 0x35DD18u;
}
