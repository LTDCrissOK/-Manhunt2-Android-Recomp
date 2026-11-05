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

// Function: sub_0039DCF8
// Address: 0x39dcf8 - 0x39df00
void sub_0039DCF8_0x39dcf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039DCF8_0x39dcf8");
#endif

    switch (ctx->pc) {
        case 0x39dcf8u: goto label_39dcf8;
        case 0x39dcfcu: goto label_39dcfc;
        case 0x39dd00u: goto label_39dd00;
        case 0x39dd04u: goto label_39dd04;
        case 0x39dd08u: goto label_39dd08;
        case 0x39dd0cu: goto label_39dd0c;
        case 0x39dd10u: goto label_39dd10;
        case 0x39dd14u: goto label_39dd14;
        case 0x39dd18u: goto label_39dd18;
        case 0x39dd1cu: goto label_39dd1c;
        case 0x39dd20u: goto label_39dd20;
        case 0x39dd24u: goto label_39dd24;
        case 0x39dd28u: goto label_39dd28;
        case 0x39dd2cu: goto label_39dd2c;
        case 0x39dd30u: goto label_39dd30;
        case 0x39dd34u: goto label_39dd34;
        case 0x39dd38u: goto label_39dd38;
        case 0x39dd3cu: goto label_39dd3c;
        case 0x39dd40u: goto label_39dd40;
        case 0x39dd44u: goto label_39dd44;
        case 0x39dd48u: goto label_39dd48;
        case 0x39dd4cu: goto label_39dd4c;
        case 0x39dd50u: goto label_39dd50;
        case 0x39dd54u: goto label_39dd54;
        case 0x39dd58u: goto label_39dd58;
        case 0x39dd5cu: goto label_39dd5c;
        case 0x39dd60u: goto label_39dd60;
        case 0x39dd64u: goto label_39dd64;
        case 0x39dd68u: goto label_39dd68;
        case 0x39dd6cu: goto label_39dd6c;
        case 0x39dd70u: goto label_39dd70;
        case 0x39dd74u: goto label_39dd74;
        case 0x39dd78u: goto label_39dd78;
        case 0x39dd7cu: goto label_39dd7c;
        case 0x39dd80u: goto label_39dd80;
        case 0x39dd84u: goto label_39dd84;
        case 0x39dd88u: goto label_39dd88;
        case 0x39dd8cu: goto label_39dd8c;
        case 0x39dd90u: goto label_39dd90;
        case 0x39dd94u: goto label_39dd94;
        case 0x39dd98u: goto label_39dd98;
        case 0x39dd9cu: goto label_39dd9c;
        case 0x39dda0u: goto label_39dda0;
        case 0x39dda4u: goto label_39dda4;
        case 0x39dda8u: goto label_39dda8;
        case 0x39ddacu: goto label_39ddac;
        case 0x39ddb0u: goto label_39ddb0;
        case 0x39ddb4u: goto label_39ddb4;
        case 0x39ddb8u: goto label_39ddb8;
        case 0x39ddbcu: goto label_39ddbc;
        case 0x39ddc0u: goto label_39ddc0;
        case 0x39ddc4u: goto label_39ddc4;
        case 0x39ddc8u: goto label_39ddc8;
        case 0x39ddccu: goto label_39ddcc;
        case 0x39ddd0u: goto label_39ddd0;
        case 0x39ddd4u: goto label_39ddd4;
        case 0x39ddd8u: goto label_39ddd8;
        case 0x39dddcu: goto label_39dddc;
        case 0x39dde0u: goto label_39dde0;
        case 0x39dde4u: goto label_39dde4;
        case 0x39dde8u: goto label_39dde8;
        case 0x39ddecu: goto label_39ddec;
        case 0x39ddf0u: goto label_39ddf0;
        case 0x39ddf4u: goto label_39ddf4;
        case 0x39ddf8u: goto label_39ddf8;
        case 0x39ddfcu: goto label_39ddfc;
        case 0x39de00u: goto label_39de00;
        case 0x39de04u: goto label_39de04;
        case 0x39de08u: goto label_39de08;
        case 0x39de0cu: goto label_39de0c;
        case 0x39de10u: goto label_39de10;
        case 0x39de14u: goto label_39de14;
        case 0x39de18u: goto label_39de18;
        case 0x39de1cu: goto label_39de1c;
        case 0x39de20u: goto label_39de20;
        case 0x39de24u: goto label_39de24;
        case 0x39de28u: goto label_39de28;
        case 0x39de2cu: goto label_39de2c;
        case 0x39de30u: goto label_39de30;
        case 0x39de34u: goto label_39de34;
        case 0x39de38u: goto label_39de38;
        case 0x39de3cu: goto label_39de3c;
        case 0x39de40u: goto label_39de40;
        case 0x39de44u: goto label_39de44;
        case 0x39de48u: goto label_39de48;
        case 0x39de4cu: goto label_39de4c;
        case 0x39de50u: goto label_39de50;
        case 0x39de54u: goto label_39de54;
        case 0x39de58u: goto label_39de58;
        case 0x39de5cu: goto label_39de5c;
        case 0x39de60u: goto label_39de60;
        case 0x39de64u: goto label_39de64;
        case 0x39de68u: goto label_39de68;
        case 0x39de6cu: goto label_39de6c;
        case 0x39de70u: goto label_39de70;
        case 0x39de74u: goto label_39de74;
        case 0x39de78u: goto label_39de78;
        case 0x39de7cu: goto label_39de7c;
        case 0x39de80u: goto label_39de80;
        case 0x39de84u: goto label_39de84;
        case 0x39de88u: goto label_39de88;
        case 0x39de8cu: goto label_39de8c;
        case 0x39de90u: goto label_39de90;
        case 0x39de94u: goto label_39de94;
        case 0x39de98u: goto label_39de98;
        case 0x39de9cu: goto label_39de9c;
        case 0x39dea0u: goto label_39dea0;
        case 0x39dea4u: goto label_39dea4;
        case 0x39dea8u: goto label_39dea8;
        case 0x39deacu: goto label_39deac;
        case 0x39deb0u: goto label_39deb0;
        case 0x39deb4u: goto label_39deb4;
        case 0x39deb8u: goto label_39deb8;
        case 0x39debcu: goto label_39debc;
        case 0x39dec0u: goto label_39dec0;
        case 0x39dec4u: goto label_39dec4;
        case 0x39dec8u: goto label_39dec8;
        case 0x39deccu: goto label_39decc;
        case 0x39ded0u: goto label_39ded0;
        case 0x39ded4u: goto label_39ded4;
        case 0x39ded8u: goto label_39ded8;
        case 0x39dedcu: goto label_39dedc;
        case 0x39dee0u: goto label_39dee0;
        case 0x39dee4u: goto label_39dee4;
        case 0x39dee8u: goto label_39dee8;
        case 0x39deecu: goto label_39deec;
        case 0x39def0u: goto label_39def0;
        case 0x39def4u: goto label_39def4;
        case 0x39def8u: goto label_39def8;
        case 0x39defcu: goto label_39defc;
        default: break;
    }

    ctx->pc = 0x39dcf8u;

label_39dcf8:
    // 0x39dcf8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x39dcf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_39dcfc:
    // 0x39dcfc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x39dcfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_39dd00:
    // 0x39dd00: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x39dd00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39dd04:
    // 0x39dd04: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x39dd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_39dd08:
    // 0x39dd08: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x39dd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_39dd0c:
    // 0x39dd0c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x39dd0cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39dd10:
    // 0x39dd10: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x39dd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_39dd14:
    // 0x39dd14: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x39dd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_39dd18:
    // 0x39dd18: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x39dd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_39dd1c:
    // 0x39dd1c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x39dd1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_39dd20:
    // 0x39dd20: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x39dd20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_39dd24:
    // 0x39dd24: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x39dd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
label_39dd28:
    // 0x39dd28: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x39dd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_39dd2c:
    // 0x39dd2c: 0xc0e5f2e  jal         func_397CB8
label_39dd30:
    if (ctx->pc == 0x39DD30u) {
        ctx->pc = 0x39DD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DD2Cu;
        // 0x39dd30: 0x8ec4000c  lw          $a0, 0xC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DD34u;
        goto label_39dd34;
    }
    ctx->pc = 0x39DD2Cu;
    SET_GPR_U32(ctx, 31, 0x39DD34u);
    ctx->pc = 0x39DD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DD2Cu;
    // 0x39dd30: 0x8ec4000c  lw          $a0, 0xC($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397CB8u, 0x39DD2Cu, 0x39DD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DD34u;
label_39dd34:
    // 0x39dd34: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x39dd34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
label_39dd38:
    // 0x39dd38: 0xac62ade8  sw          $v0, -0x5218($v1)
    ctx->pc = 0x39dd38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294946280), GPR_U32(ctx, 2));
label_39dd3c:
    // 0x39dd3c: 0xc0e6458  jal         func_399160
label_39dd40:
    if (ctx->pc == 0x39DD40u) {
        ctx->pc = 0x39DD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DD3Cu;
        // 0x39dd40: 0x8ec40004  lw          $a0, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DD44u;
        goto label_39dd44;
    }
    ctx->pc = 0x39DD3Cu;
    SET_GPR_U32(ctx, 31, 0x39DD44u);
    ctx->pc = 0x39DD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DD3Cu;
    // 0x39dd40: 0x8ec40004  lw          $a0, 0x4($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399160u, 0x39DD3Cu, 0x39DD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DD44u;
label_39dd44:
    // 0x39dd44: 0xc0ebe50  jal         func_3AF940
label_39dd48:
    if (ctx->pc == 0x39DD48u) {
        ctx->pc = 0x39DD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DD44u;
        // 0x39dd48: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DD4Cu;
        goto label_39dd4c;
    }
    ctx->pc = 0x39DD44u;
    SET_GPR_U32(ctx, 31, 0x39DD4Cu);
    ctx->pc = 0x39DD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DD44u;
    // 0x39dd48: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF940u, 0x39DD44u, 0x39DD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DD4Cu;
label_39dd4c:
    // 0x39dd4c: 0x1ae00014  blez        $s7, . + 4 + (0x14 << 2)
label_39dd50:
    if (ctx->pc == 0x39DD50u) {
        ctx->pc = 0x39DD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DD4Cu;
        // 0x39dd50: 0x8ed50048  lw          $s5, 0x48($s6) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DD54u;
        goto label_39dd54;
    }
    ctx->pc = 0x39DD4Cu;
    {
        const bool branch_taken_0x39dd4c = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x39DD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DD4Cu;
        // 0x39dd50: 0x8ed50048  lw          $s5, 0x48($s6) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dd4c) {
            ctx->pc = 0x39DDA0u;
            goto label_39dda0;
        }
    }
    ctx->pc = 0x39DD54u;
label_39dd54:
    // 0x39dd54: 0x26d10018  addiu       $s1, $s6, 0x18
    ctx->pc = 0x39dd54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
label_39dd58:
    // 0x39dd58: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x39dd58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39dd5c:
    // 0x39dd5c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x39dd5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_39dd60:
    // 0x39dd60: 0x1480c0  sll         $s0, $s4, 3
    ctx->pc = 0x39dd60u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
label_39dd64:
    // 0x39dd64: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x39dd64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_39dd68:
    // 0x39dd68: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x39dd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39dd6c:
    // 0x39dd6c: 0x153040  sll         $a2, $s5, 1
    ctx->pc = 0x39dd6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
label_39dd70:
    // 0x39dd70: 0x3b03821  addu        $a3, $sp, $s0
    ctx->pc = 0x39dd70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
label_39dd74:
    // 0x39dd74: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x39dd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_39dd78:
    // 0x39dd78: 0x40f809  jalr        $v0
label_39dd7c:
    if (ctx->pc == 0x39DD7Cu) {
        ctx->pc = 0x39DD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DD78u;
        // 0x39dd7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DD80u;
        goto label_39dd80;
    }
    ctx->pc = 0x39DD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39DD80u);
        ctx->pc = 0x39DD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DD78u;
        // 0x39dd7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39DD78u, 0x39DD80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39DD80u;
label_39dd80:
    // 0x39dd80: 0x297202a  slt         $a0, $s4, $s7
    ctx->pc = 0x39dd80u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_39dd84:
    // 0x39dd84: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x39dd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_39dd88:
    // 0x39dd88: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x39dd88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_39dd8c:
    // 0x39dd8c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x39dd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39dd90:
    // 0x39dd90: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x39dd90u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_39dd94:
    // 0x39dd94: 0x75102b  sltu        $v0, $v1, $s5
    ctx->pc = 0x39dd94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_39dd98:
    // 0x39dd98: 0x1480ffef  bnez        $a0, . + 4 + (-0x11 << 2)
label_39dd9c:
    if (ctx->pc == 0x39DD9Cu) {
        ctx->pc = 0x39DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DD98u;
        // 0x39dd9c: 0x62a80b  movn        $s5, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DDA0u;
        goto label_39dda0;
    }
    ctx->pc = 0x39DD98u;
    {
        const bool branch_taken_0x39dd98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x39DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DD98u;
        // 0x39dd9c: 0x62a80b  movn        $s5, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dd98) {
            ctx->pc = 0x39DD58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39dd58;
        }
    }
    ctx->pc = 0x39DDA0u;
label_39dda0:
    // 0x39dda0: 0x1ae00024  blez        $s7, . + 4 + (0x24 << 2)
label_39dda4:
    if (ctx->pc == 0x39DDA4u) {
        ctx->pc = 0x39DDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DDA0u;
        // 0x39dda4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DDA8u;
        goto label_39dda8;
    }
    ctx->pc = 0x39DDA0u;
    {
        const bool branch_taken_0x39dda0 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x39DDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DDA0u;
        // 0x39dda4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dda0) {
            ctx->pc = 0x39DE34u;
            goto label_39de34;
        }
    }
    ctx->pc = 0x39DDA8u;
label_39dda8:
    // 0x39dda8: 0x15f040  sll         $fp, $s5, 1
    ctx->pc = 0x39dda8u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
label_39ddac:
    // 0x39ddac: 0x26d30018  addiu       $s3, $s6, 0x18
    ctx->pc = 0x39ddacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
label_39ddb0:
    // 0x39ddb0: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x39ddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_39ddb4:
    // 0x39ddb4: 0x0  nop
    ctx->pc = 0x39ddb4u;
    // NOP
label_39ddb8:
    // 0x39ddb8: 0x1480c0  sll         $s0, $s4, 3
    ctx->pc = 0x39ddb8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
label_39ddbc:
    // 0x39ddbc: 0x3b08821  addu        $s1, $sp, $s0
    ctx->pc = 0x39ddbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
label_39ddc0:
    // 0x39ddc0: 0x509021  addu        $s2, $v0, $s0
    ctx->pc = 0x39ddc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_39ddc4:
    // 0x39ddc4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x39ddc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39ddc8:
    // 0x39ddc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39ddc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39ddcc:
    // 0x39ddcc: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x39ddccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_39ddd0:
    // 0x39ddd0: 0xc0eb07e  jal         func_3AC1F8
label_39ddd4:
    if (ctx->pc == 0x39DDD4u) {
        ctx->pc = 0x39DDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DDD0u;
        // 0x39ddd4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DDD8u;
        goto label_39ddd8;
    }
    ctx->pc = 0x39DDD0u;
    SET_GPR_U32(ctx, 31, 0x39DDD8u);
    ctx->pc = 0x39DDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DDD0u;
    // 0x39ddd4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC1F8u, 0x39DDD0u, 0x39DDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DDD8u;
label_39ddd8:
    // 0x39ddd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39ddd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39dddc:
    // 0x39dddc: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x39dddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_39dde0:
    // 0x39dde0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x39dde0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39dde4:
    // 0x39dde4: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x39dde4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_39dde8:
    // 0x39dde8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x39dde8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_39ddec:
    // 0x39ddec: 0xc0efab3  jal         func_3BEACC
label_39ddf0:
    if (ctx->pc == 0x39DDF0u) {
        ctx->pc = 0x39DDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DDECu;
        // 0x39ddf0: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DDF4u;
        goto label_39ddf4;
    }
    ctx->pc = 0x39DDECu;
    SET_GPR_U32(ctx, 31, 0x39DDF4u);
    ctx->pc = 0x39DDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DDECu;
    // 0x39ddf0: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x39DDECu, 0x39DDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DDF4u;
label_39ddf4:
    // 0x39ddf4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x39ddf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_39ddf8:
    // 0x39ddf8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x39ddf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39ddfc:
    // 0x39ddfc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x39ddfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39de00:
    // 0x39de00: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x39de00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_39de04:
    // 0x39de04: 0x40f809  jalr        $v0
label_39de08:
    if (ctx->pc == 0x39DE08u) {
        ctx->pc = 0x39DE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DE04u;
        // 0x39de08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DE0Cu;
        goto label_39de0c;
    }
    ctx->pc = 0x39DE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39DE0Cu);
        ctx->pc = 0x39DE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DE04u;
        // 0x39de08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39DE04u, 0x39DE0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39DE0Cu;
label_39de0c:
    // 0x39de0c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x39de0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_39de10:
    // 0x39de10: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x39de10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39de14:
    // 0x39de14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39de14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39de18:
    // 0x39de18: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x39de18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39de1c:
    // 0x39de1c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x39de1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_39de20:
    // 0x39de20: 0x40f809  jalr        $v0
label_39de24:
    if (ctx->pc == 0x39DE24u) {
        ctx->pc = 0x39DE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DE20u;
        // 0x39de24: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DE28u;
        goto label_39de28;
    }
    ctx->pc = 0x39DE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39DE28u);
        ctx->pc = 0x39DE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DE20u;
        // 0x39de24: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39DE20u, 0x39DE28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39DE28u;
label_39de28:
    // 0x39de28: 0x297182a  slt         $v1, $s4, $s7
    ctx->pc = 0x39de28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_39de2c:
    // 0x39de2c: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
label_39de30:
    if (ctx->pc == 0x39DE30u) {
        ctx->pc = 0x39DE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DE2Cu;
        // 0x39de30: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DE34u;
        goto label_39de34;
    }
    ctx->pc = 0x39DE2Cu;
    {
        const bool branch_taken_0x39de2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39DE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DE2Cu;
        // 0x39de30: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39de2c) {
            ctx->pc = 0x39DDB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39ddb8;
        }
    }
    ctx->pc = 0x39DE34u;
label_39de34:
    // 0x39de34: 0x8ec200a8  lw          $v0, 0xA8($s6)
    ctx->pc = 0x39de34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 168)));
label_39de38:
    // 0x39de38: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x39de38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39de3c:
    // 0x39de3c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x39de3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_39de40:
    // 0x39de40: 0xc0ebe56  jal         func_3AF958
label_39de44:
    if (ctx->pc == 0x39DE44u) {
        ctx->pc = 0x39DE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DE40u;
        // 0x39de44: 0xaec200a8  sw          $v0, 0xA8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DE48u;
        goto label_39de48;
    }
    ctx->pc = 0x39DE40u;
    SET_GPR_U32(ctx, 31, 0x39DE48u);
    ctx->pc = 0x39DE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DE40u;
    // 0x39de44: 0xaec200a8  sw          $v0, 0xA8($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 168), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF958u, 0x39DE40u, 0x39DE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DE48u;
label_39de48:
    // 0x39de48: 0x1ae0000e  blez        $s7, . + 4 + (0xE << 2)
label_39de4c:
    if (ctx->pc == 0x39DE4Cu) {
        ctx->pc = 0x39DE50u;
        goto label_39de50;
    }
    ctx->pc = 0x39DE48u;
    {
        const bool branch_taken_0x39de48 = (GPR_S32(ctx, 23) <= 0);
        if (branch_taken_0x39de48) {
            ctx->pc = 0x39DE84u;
            goto label_39de84;
        }
    }
    ctx->pc = 0x39DE50u;
label_39de50:
    // 0x39de50: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x39de50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_39de54:
    // 0x39de54: 0x26d00018  addiu       $s0, $s6, 0x18
    ctx->pc = 0x39de54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
label_39de58:
    // 0x39de58: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x39de58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39de5c:
    // 0x39de5c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x39de5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_39de60:
    // 0x39de60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x39de60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39de64:
    // 0x39de64: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x39de64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39de68:
    // 0x39de68: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x39de68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_39de6c:
    // 0x39de6c: 0x40f809  jalr        $v0
label_39de70:
    if (ctx->pc == 0x39DE70u) {
        ctx->pc = 0x39DE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DE6Cu;
        // 0x39de70: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DE74u;
        goto label_39de74;
    }
    ctx->pc = 0x39DE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39DE74u);
        ctx->pc = 0x39DE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DE6Cu;
        // 0x39de70: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39DE6Cu, 0x39DE74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39DE74u;
label_39de74:
    // 0x39de74: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x39de74u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_39de78:
    // 0x39de78: 0x51182a  slt         $v1, $v0, $s1
    ctx->pc = 0x39de78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_39de7c:
    // 0x39de7c: 0x1680fff6  bnez        $s4, . + 4 + (-0xA << 2)
label_39de80:
    if (ctx->pc == 0x39DE80u) {
        ctx->pc = 0x39DE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DE7Cu;
        // 0x39de80: 0x43880a  movz        $s1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DE84u;
        goto label_39de84;
    }
    ctx->pc = 0x39DE7Cu;
    {
        const bool branch_taken_0x39de7c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x39DE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DE7Cu;
        // 0x39de80: 0x43880a  movz        $s1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39de7c) {
            ctx->pc = 0x39DE58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39de58;
        }
    }
    ctx->pc = 0x39DE84u;
label_39de84:
    // 0x39de84: 0xc0e5f2e  jal         func_397CB8
label_39de88:
    if (ctx->pc == 0x39DE88u) {
        ctx->pc = 0x39DE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DE84u;
        // 0x39de88: 0x8ec4000c  lw          $a0, 0xC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DE8Cu;
        goto label_39de8c;
    }
    ctx->pc = 0x39DE84u;
    SET_GPR_U32(ctx, 31, 0x39DE8Cu);
    ctx->pc = 0x39DE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DE84u;
    // 0x39de88: 0x8ec4000c  lw          $a0, 0xC($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397CB8u, 0x39DE84u, 0x39DE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DE8Cu;
label_39de8c:
    // 0x39de8c: 0x8ec300a8  lw          $v1, 0xA8($s6)
    ctx->pc = 0x39de8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 168)));
label_39de90:
    // 0x39de90: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x39de90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_39de94:
    // 0x39de94: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x39de94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_39de98:
    // 0x39de98: 0x5c40000d  bgtzl       $v0, . + 4 + (0xD << 2)
label_39de9c:
    if (ctx->pc == 0x39DE9Cu) {
        ctx->pc = 0x39DE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DE98u;
        // 0x39de9c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DEA0u;
        goto label_39dea0;
    }
    ctx->pc = 0x39DE98u;
    {
        const bool branch_taken_0x39de98 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x39de98) {
            ctx->pc = 0x39DE9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39DE98u;
            // 0x39de9c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39DED0u;
            goto label_39ded0;
        }
    }
    ctx->pc = 0x39DEA0u;
label_39dea0:
    // 0x39dea0: 0x8ec4000c  lw          $a0, 0xC($s6)
    ctx->pc = 0x39dea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_39dea4:
    // 0x39dea4: 0xc0e5f20  jal         func_397C80
label_39dea8:
    if (ctx->pc == 0x39DEA8u) {
        ctx->pc = 0x39DEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DEA4u;
        // 0x39dea8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DEACu;
        goto label_39deac;
    }
    ctx->pc = 0x39DEA4u;
    SET_GPR_U32(ctx, 31, 0x39DEACu);
    ctx->pc = 0x39DEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DEA4u;
    // 0x39dea8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397C80u, 0x39DEA4u, 0x39DEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DEACu;
label_39deac:
    // 0x39deac: 0x8ec4000c  lw          $a0, 0xC($s6)
    ctx->pc = 0x39deacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_39deb0:
    // 0x39deb0: 0xc0e5f26  jal         func_397C98
label_39deb4:
    if (ctx->pc == 0x39DEB4u) {
        ctx->pc = 0x39DEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DEB0u;
        // 0x39deb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DEB8u;
        goto label_39deb8;
    }
    ctx->pc = 0x39DEB0u;
    SET_GPR_U32(ctx, 31, 0x39DEB8u);
    ctx->pc = 0x39DEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DEB0u;
    // 0x39deb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397C98u, 0x39DEB0u, 0x39DEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DEB8u;
label_39deb8:
    // 0x39deb8: 0x8ec4000c  lw          $a0, 0xC($s6)
    ctx->pc = 0x39deb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_39debc:
    // 0x39debc: 0xc0ea648  jal         func_3A9920
label_39dec0:
    if (ctx->pc == 0x39DEC0u) {
        ctx->pc = 0x39DEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DEBCu;
        // 0x39dec0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DEC4u;
        goto label_39dec4;
    }
    ctx->pc = 0x39DEBCu;
    SET_GPR_U32(ctx, 31, 0x39DEC4u);
    ctx->pc = 0x39DEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DEBCu;
    // 0x39dec0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9920u, 0x39DEBCu, 0x39DEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DEC4u;
label_39dec4:
    // 0x39dec4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x39dec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_39dec8:
    // 0x39dec8: 0xa2c20001  sb          $v0, 0x1($s6)
    ctx->pc = 0x39dec8u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1), (uint8_t)GPR_U32(ctx, 2));
label_39decc:
    // 0x39decc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x39deccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39ded0:
    // 0x39ded0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x39ded0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_39ded4:
    // 0x39ded4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x39ded4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_39ded8:
    // 0x39ded8: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x39ded8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_39dedc:
    // 0x39dedc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x39dedcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_39dee0:
    // 0x39dee0: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x39dee0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_39dee4:
    // 0x39dee4: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x39dee4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_39dee8:
    // 0x39dee8: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x39dee8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_39deec:
    // 0x39deec: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x39deecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_39def0:
    // 0x39def0: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x39def0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_39def4:
    // 0x39def4: 0x3e00008  jr          $ra
label_39def8:
    if (ctx->pc == 0x39DEF8u) {
        ctx->pc = 0x39DEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DEF4u;
        // 0x39def8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DEFCu;
        goto label_39defc;
    }
    ctx->pc = 0x39DEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39DEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DEF4u;
        // 0x39def8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39DEF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39DEFCu;
label_39defc:
    // 0x39defc: 0x0  nop
    ctx->pc = 0x39defcu;
    // NOP
    ctx->pc = 0x39df00u;
}
