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

// Function: sub_003BF9D8
// Address: 0x3bf9d8 - 0x3bfb40
void sub_003BF9D8_0x3bf9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF9D8_0x3bf9d8");
#endif

    switch (ctx->pc) {
        case 0x3bf9d8u: goto label_3bf9d8;
        case 0x3bf9dcu: goto label_3bf9dc;
        case 0x3bf9e0u: goto label_3bf9e0;
        case 0x3bf9e4u: goto label_3bf9e4;
        case 0x3bf9e8u: goto label_3bf9e8;
        case 0x3bf9ecu: goto label_3bf9ec;
        case 0x3bf9f0u: goto label_3bf9f0;
        case 0x3bf9f4u: goto label_3bf9f4;
        case 0x3bf9f8u: goto label_3bf9f8;
        case 0x3bf9fcu: goto label_3bf9fc;
        case 0x3bfa00u: goto label_3bfa00;
        case 0x3bfa04u: goto label_3bfa04;
        case 0x3bfa08u: goto label_3bfa08;
        case 0x3bfa0cu: goto label_3bfa0c;
        case 0x3bfa10u: goto label_3bfa10;
        case 0x3bfa14u: goto label_3bfa14;
        case 0x3bfa18u: goto label_3bfa18;
        case 0x3bfa1cu: goto label_3bfa1c;
        case 0x3bfa20u: goto label_3bfa20;
        case 0x3bfa24u: goto label_3bfa24;
        case 0x3bfa28u: goto label_3bfa28;
        case 0x3bfa2cu: goto label_3bfa2c;
        case 0x3bfa30u: goto label_3bfa30;
        case 0x3bfa34u: goto label_3bfa34;
        case 0x3bfa38u: goto label_3bfa38;
        case 0x3bfa3cu: goto label_3bfa3c;
        case 0x3bfa40u: goto label_3bfa40;
        case 0x3bfa44u: goto label_3bfa44;
        case 0x3bfa48u: goto label_3bfa48;
        case 0x3bfa4cu: goto label_3bfa4c;
        case 0x3bfa50u: goto label_3bfa50;
        case 0x3bfa54u: goto label_3bfa54;
        case 0x3bfa58u: goto label_3bfa58;
        case 0x3bfa5cu: goto label_3bfa5c;
        case 0x3bfa60u: goto label_3bfa60;
        case 0x3bfa64u: goto label_3bfa64;
        case 0x3bfa68u: goto label_3bfa68;
        case 0x3bfa6cu: goto label_3bfa6c;
        case 0x3bfa70u: goto label_3bfa70;
        case 0x3bfa74u: goto label_3bfa74;
        case 0x3bfa78u: goto label_3bfa78;
        case 0x3bfa7cu: goto label_3bfa7c;
        case 0x3bfa80u: goto label_3bfa80;
        case 0x3bfa84u: goto label_3bfa84;
        case 0x3bfa88u: goto label_3bfa88;
        case 0x3bfa8cu: goto label_3bfa8c;
        case 0x3bfa90u: goto label_3bfa90;
        case 0x3bfa94u: goto label_3bfa94;
        case 0x3bfa98u: goto label_3bfa98;
        case 0x3bfa9cu: goto label_3bfa9c;
        case 0x3bfaa0u: goto label_3bfaa0;
        case 0x3bfaa4u: goto label_3bfaa4;
        case 0x3bfaa8u: goto label_3bfaa8;
        case 0x3bfaacu: goto label_3bfaac;
        case 0x3bfab0u: goto label_3bfab0;
        case 0x3bfab4u: goto label_3bfab4;
        case 0x3bfab8u: goto label_3bfab8;
        case 0x3bfabcu: goto label_3bfabc;
        case 0x3bfac0u: goto label_3bfac0;
        case 0x3bfac4u: goto label_3bfac4;
        case 0x3bfac8u: goto label_3bfac8;
        case 0x3bfaccu: goto label_3bfacc;
        case 0x3bfad0u: goto label_3bfad0;
        case 0x3bfad4u: goto label_3bfad4;
        case 0x3bfad8u: goto label_3bfad8;
        case 0x3bfadcu: goto label_3bfadc;
        case 0x3bfae0u: goto label_3bfae0;
        case 0x3bfae4u: goto label_3bfae4;
        case 0x3bfae8u: goto label_3bfae8;
        case 0x3bfaecu: goto label_3bfaec;
        case 0x3bfaf0u: goto label_3bfaf0;
        case 0x3bfaf4u: goto label_3bfaf4;
        case 0x3bfaf8u: goto label_3bfaf8;
        case 0x3bfafcu: goto label_3bfafc;
        case 0x3bfb00u: goto label_3bfb00;
        case 0x3bfb04u: goto label_3bfb04;
        case 0x3bfb08u: goto label_3bfb08;
        case 0x3bfb0cu: goto label_3bfb0c;
        case 0x3bfb10u: goto label_3bfb10;
        case 0x3bfb14u: goto label_3bfb14;
        case 0x3bfb18u: goto label_3bfb18;
        case 0x3bfb1cu: goto label_3bfb1c;
        case 0x3bfb20u: goto label_3bfb20;
        case 0x3bfb24u: goto label_3bfb24;
        case 0x3bfb28u: goto label_3bfb28;
        case 0x3bfb2cu: goto label_3bfb2c;
        case 0x3bfb30u: goto label_3bfb30;
        case 0x3bfb34u: goto label_3bfb34;
        case 0x3bfb38u: goto label_3bfb38;
        case 0x3bfb3cu: goto label_3bfb3c;
        default: break;
    }

    ctx->pc = 0x3bf9d8u;

label_3bf9d8:
    // 0x3bf9d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3bf9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3bf9dc:
    // 0x3bf9dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3bf9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3bf9e0:
    // 0x3bf9e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3bf9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3bf9e4:
    // 0x3bf9e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3bf9e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3bf9e8:
    // 0x3bf9e8: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3bf9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3bf9ec:
    // 0x3bf9ec: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_3bf9f0:
    if (ctx->pc == 0x3BF9F0u) {
        ctx->pc = 0x3BF9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF9ECu;
        // 0x3bf9f0: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF9F4u;
        goto label_3bf9f4;
    }
    ctx->pc = 0x3BF9ECu;
    {
        const bool branch_taken_0x3bf9ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bf9ec) {
            ctx->pc = 0x3BF9F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BF9ECu;
            // 0x3bf9f0: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BFA08u;
            goto label_3bfa08;
        }
    }
    ctx->pc = 0x3BF9F4u;
label_3bf9f4:
    // 0x3bf9f4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3bf9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_3bf9f8:
    // 0x3bf9f8: 0x8c43cddc  lw          $v1, -0x3224($v0)
    ctx->pc = 0x3bf9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954460)));
label_3bf9fc:
    // 0x3bf9fc: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3bf9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3bfa00:
    // 0x3bfa00: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x3bfa00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3bfa04:
    // 0x3bfa04: 0x0  nop
    ctx->pc = 0x3bfa04u;
    // NOP
label_3bfa08:
    // 0x3bfa08: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x3bfa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_3bfa0c:
    // 0x3bfa0c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_3bfa10:
    if (ctx->pc == 0x3BFA10u) {
        ctx->pc = 0x3BFA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFA0Cu;
        // 0x3bfa10: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFA14u;
        goto label_3bfa14;
    }
    ctx->pc = 0x3BFA0Cu;
    {
        const bool branch_taken_0x3bfa0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bfa0c) {
            ctx->pc = 0x3BFA10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BFA0Cu;
            // 0x3bfa10: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BFA20u;
            goto label_3bfa20;
        }
    }
    ctx->pc = 0x3BFA14u;
label_3bfa14:
    // 0x3bfa14: 0xc0f1a98  jal         func_3C6A60
label_3bfa18:
    if (ctx->pc == 0x3BFA18u) {
        ctx->pc = 0x3BFA1Cu;
        goto label_3bfa1c;
    }
    ctx->pc = 0x3BFA14u;
    SET_GPR_U32(ctx, 31, 0x3BFA1Cu);
    ctx->pc = 0x3C6A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6A60u, 0x3BFA14u, 0x3BFA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFA1Cu;
label_3bfa1c:
    // 0x3bfa1c: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x3bfa1cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_3bfa20:
    // 0x3bfa20: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x3bfa20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_3bfa24:
    // 0x3bfa24: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_3bfa28:
    if (ctx->pc == 0x3BFA28u) {
        ctx->pc = 0x3BFA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFA24u;
        // 0x3bfa28: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFA2Cu;
        goto label_3bfa2c;
    }
    ctx->pc = 0x3BFA24u;
    {
        const bool branch_taken_0x3bfa24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BFA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFA24u;
        // 0x3bfa28: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfa24) {
            ctx->pc = 0x3BFA44u;
            goto label_3bfa44;
        }
    }
    ctx->pc = 0x3BFA2Cu;
label_3bfa2c:
    // 0x3bfa2c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x3bfa2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_3bfa30:
    // 0x3bfa30: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_3bfa34:
    if (ctx->pc == 0x3BFA34u) {
        ctx->pc = 0x3BFA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFA30u;
        // 0x3bfa34: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFA38u;
        goto label_3bfa38;
    }
    ctx->pc = 0x3BFA30u;
    {
        const bool branch_taken_0x3bfa30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bfa30) {
            ctx->pc = 0x3BFA34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BFA30u;
            // 0x3bfa34: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BFA88u;
            goto label_3bfa88;
        }
    }
    ctx->pc = 0x3BFA38u;
label_3bfa38:
    // 0x3bfa38: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x3bfa38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_3bfa3c:
    // 0x3bfa3c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3bfa40:
    if (ctx->pc == 0x3BFA40u) {
        ctx->pc = 0x3BFA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFA3Cu;
        // 0x3bfa40: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFA44u;
        goto label_3bfa44;
    }
    ctx->pc = 0x3BFA3Cu;
    {
        const bool branch_taken_0x3bfa3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BFA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFA3Cu;
        // 0x3bfa40: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfa3c) {
            ctx->pc = 0x3BFA4Cu;
            goto label_3bfa4c;
        }
    }
    ctx->pc = 0x3BFA44u;
label_3bfa44:
    // 0x3bfa44: 0x1000003a  b           . + 4 + (0x3A << 2)
label_3bfa48:
    if (ctx->pc == 0x3BFA48u) {
        ctx->pc = 0x3BFA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFA44u;
        // 0x3bfa48: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFA4Cu;
        goto label_3bfa4c;
    }
    ctx->pc = 0x3BFA44u;
    {
        const bool branch_taken_0x3bfa44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFA44u;
        // 0x3bfa48: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfa44) {
            ctx->pc = 0x3BFB30u;
            goto label_3bfb30;
        }
    }
    ctx->pc = 0x3BFA4Cu;
label_3bfa4c:
    // 0x3bfa4c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_3bfa50:
    if (ctx->pc == 0x3BFA50u) {
        ctx->pc = 0x3BFA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFA4Cu;
        // 0x3bfa50: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFA54u;
        goto label_3bfa54;
    }
    ctx->pc = 0x3BFA4Cu;
    {
        const bool branch_taken_0x3bfa4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bfa4c) {
            ctx->pc = 0x3BFA50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BFA4Cu;
            // 0x3bfa50: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BFA7Cu;
            goto label_3bfa7c;
        }
    }
    ctx->pc = 0x3BFA54u;
label_3bfa54:
    // 0x3bfa54: 0xc0f1a3a  jal         func_3C68E8
label_3bfa58:
    if (ctx->pc == 0x3BFA58u) {
        ctx->pc = 0x3BFA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFA54u;
        // 0x3bfa58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFA5Cu;
        goto label_3bfa5c;
    }
    ctx->pc = 0x3BFA54u;
    SET_GPR_U32(ctx, 31, 0x3BFA5Cu);
    ctx->pc = 0x3BFA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFA54u;
    // 0x3bfa58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C68E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C68E8u, 0x3BFA54u, 0x3BFA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFA5Cu;
label_3bfa5c:
    // 0x3bfa5c: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
label_3bfa60:
    if (ctx->pc == 0x3BFA60u) {
        ctx->pc = 0x3BFA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFA5Cu;
        // 0x3bfa60: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFA64u;
        goto label_3bfa64;
    }
    ctx->pc = 0x3BFA5Cu;
    {
        const bool branch_taken_0x3bfa5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BFA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFA5Cu;
        // 0x3bfa60: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfa5c) {
            ctx->pc = 0x3BFB30u;
            goto label_3bfb30;
        }
    }
    ctx->pc = 0x3BFA64u;
label_3bfa64:
    // 0x3bfa64: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x3bfa64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_3bfa68:
    // 0x3bfa68: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3bfa68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_3bfa6c:
    // 0x3bfa6c: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x3bfa6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
label_3bfa70:
    // 0x3bfa70: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x3bfa70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_3bfa74:
    // 0x3bfa74: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x3bfa74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_3bfa78:
    // 0x3bfa78: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x3bfa78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_3bfa7c:
    // 0x3bfa7c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3bfa7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3bfa80:
    // 0x3bfa80: 0x1000000a  b           . + 4 + (0xA << 2)
label_3bfa84:
    if (ctx->pc == 0x3BFA84u) {
        ctx->pc = 0x3BFA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFA80u;
        // 0x3bfa84: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFA88u;
        goto label_3bfa88;
    }
    ctx->pc = 0x3BFA80u;
    {
        const bool branch_taken_0x3bfa80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFA80u;
        // 0x3bfa84: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfa80) {
            ctx->pc = 0x3BFAACu;
            goto label_3bfaac;
        }
    }
    ctx->pc = 0x3BFA88u;
label_3bfa88:
    // 0x3bfa88: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_3bfa8c:
    if (ctx->pc == 0x3BFA8Cu) {
        ctx->pc = 0x3BFA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFA88u;
        // 0x3bfa8c: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFA90u;
        goto label_3bfa90;
    }
    ctx->pc = 0x3BFA88u;
    {
        const bool branch_taken_0x3bfa88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bfa88) {
            ctx->pc = 0x3BFA8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BFA88u;
            // 0x3bfa8c: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BFAB0u;
            goto label_3bfab0;
        }
    }
    ctx->pc = 0x3BFA90u;
label_3bfa90:
    // 0x3bfa90: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x3bfa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_3bfa94:
    // 0x3bfa94: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3bfa98:
    if (ctx->pc == 0x3BFA98u) {
        ctx->pc = 0x3BFA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFA94u;
        // 0x3bfa98: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFA9Cu;
        goto label_3bfa9c;
    }
    ctx->pc = 0x3BFA94u;
    {
        const bool branch_taken_0x3bfa94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFA94u;
        // 0x3bfa98: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfa94) {
            ctx->pc = 0x3BFAACu;
            goto label_3bfaac;
        }
    }
    ctx->pc = 0x3BFA9Cu;
label_3bfa9c:
    // 0x3bfa9c: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x3bfa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_3bfaa0:
    // 0x3bfaa0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3bfaa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bfaa4:
    // 0x3bfaa4: 0x10000022  b           . + 4 + (0x22 << 2)
label_3bfaa8:
    if (ctx->pc == 0x3BFAA8u) {
        ctx->pc = 0x3BFAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFAA4u;
        // 0x3bfaa8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFAACu;
        goto label_3bfaac;
    }
    ctx->pc = 0x3BFAA4u;
    {
        const bool branch_taken_0x3bfaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFAA4u;
        // 0x3bfaa8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfaa4) {
            ctx->pc = 0x3BFB30u;
            goto label_3bfb30;
        }
    }
    ctx->pc = 0x3BFAACu;
label_3bfaac:
    // 0x3bfaac: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3bfaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3bfab0:
    // 0x3bfab0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_3bfab4:
    if (ctx->pc == 0x3BFAB4u) {
        ctx->pc = 0x3BFAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFAB0u;
        // 0x3bfab4: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFAB8u;
        goto label_3bfab8;
    }
    ctx->pc = 0x3BFAB0u;
    {
        const bool branch_taken_0x3bfab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bfab0) {
            ctx->pc = 0x3BFAB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BFAB0u;
            // 0x3bfab4: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BFAC4u;
            goto label_3bfac4;
        }
    }
    ctx->pc = 0x3BFAB8u;
label_3bfab8:
    // 0x3bfab8: 0xc0f1be4  jal         func_3C6F90
label_3bfabc:
    if (ctx->pc == 0x3BFABCu) {
        ctx->pc = 0x3BFABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFAB8u;
        // 0x3bfabc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFAC0u;
        goto label_3bfac0;
    }
    ctx->pc = 0x3BFAB8u;
    SET_GPR_U32(ctx, 31, 0x3BFAC0u);
    ctx->pc = 0x3BFABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFAB8u;
    // 0x3bfabc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C6F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6F90u, 0x3BFAB8u, 0x3BFAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFAC0u;
label_3bfac0:
    // 0x3bfac0: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x3bfac0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_3bfac4:
    // 0x3bfac4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3bfac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_3bfac8:
    // 0x3bfac8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3bfacc:
    if (ctx->pc == 0x3BFACCu) {
        ctx->pc = 0x3BFACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFAC8u;
        // 0x3bfacc: 0x3c05003c  lui         $a1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFAD0u;
        goto label_3bfad0;
    }
    ctx->pc = 0x3BFAC8u;
    {
        const bool branch_taken_0x3bfac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFAC8u;
        // 0x3bfacc: 0x3c05003c  lui         $a1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfac8) {
            ctx->pc = 0x3BFADCu;
            goto label_3bfadc;
        }
    }
    ctx->pc = 0x3BFAD0u;
label_3bfad0:
    // 0x3bfad0: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x3bfad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3bfad4:
    // 0x3bfad4: 0xc0f1bbe  jal         func_3C6EF8
label_3bfad8:
    if (ctx->pc == 0x3BFAD8u) {
        ctx->pc = 0x3BFAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFAD4u;
        // 0x3bfad8: 0x24a5f9b8  addiu       $a1, $a1, -0x648 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFADCu;
        goto label_3bfadc;
    }
    ctx->pc = 0x3BFAD4u;
    SET_GPR_U32(ctx, 31, 0x3BFADCu);
    ctx->pc = 0x3BFAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFAD4u;
    // 0x3bfad8: 0x24a5f9b8  addiu       $a1, $a1, -0x648 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C6EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6EF8u, 0x3BFAD4u, 0x3BFADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFADCu;
label_3bfadc:
    // 0x3bfadc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3bfadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3bfae0:
    // 0x3bfae0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x3bfae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3bfae4:
    // 0x3bfae4: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x3bfae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3bfae8:
    // 0x3bfae8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3bfae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3bfaec:
    // 0x3bfaec: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x3bfaecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3bfaf0:
    // 0x3bfaf0: 0x40f809  jalr        $v0
label_3bfaf4:
    if (ctx->pc == 0x3BFAF4u) {
        ctx->pc = 0x3BFAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFAF0u;
        // 0x3bfaf4: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFAF8u;
        goto label_3bfaf8;
    }
    ctx->pc = 0x3BFAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BFAF8u);
        ctx->pc = 0x3BFAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFAF0u;
        // 0x3bfaf4: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BFAF0u, 0x3BFAF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BFAF8u;
label_3bfaf8:
    // 0x3bfaf8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3bfaf8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bfafc:
    // 0x3bfafc: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x3bfafcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_3bfb00:
    // 0x3bfb00: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3bfb00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_3bfb04:
    // 0x3bfb04: 0x3042dfff  andi        $v0, $v0, 0xDFFF
    ctx->pc = 0x3bfb04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57343);
label_3bfb08:
    // 0x3bfb08: 0x1c600008  bgtz        $v1, . + 4 + (0x8 << 2)
label_3bfb0c:
    if (ctx->pc == 0x3BFB0Cu) {
        ctx->pc = 0x3BFB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFB08u;
        // 0x3bfb0c: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFB10u;
        goto label_3bfb10;
    }
    ctx->pc = 0x3BFB08u;
    {
        const bool branch_taken_0x3bfb08 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x3BFB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFB08u;
        // 0x3bfb0c: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfb08) {
            ctx->pc = 0x3BFB2Cu;
            goto label_3bfb2c;
        }
    }
    ctx->pc = 0x3BFB10u;
label_3bfb10:
    // 0x3bfb10: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
label_3bfb14:
    if (ctx->pc == 0x3BFB14u) {
        ctx->pc = 0x3BFB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFB10u;
        // 0x3bfb14: 0x34420040  ori         $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFB18u;
        goto label_3bfb18;
    }
    ctx->pc = 0x3BFB10u;
    {
        const bool branch_taken_0x3bfb10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bfb10) {
            ctx->pc = 0x3BFB14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BFB10u;
            // 0x3bfb14: 0x34420040  ori         $v0, $v0, 0x40 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BFB20u;
            goto label_3bfb20;
        }
    }
    ctx->pc = 0x3BFB18u;
label_3bfb18:
    // 0x3bfb18: 0x10000002  b           . + 4 + (0x2 << 2)
label_3bfb1c:
    if (ctx->pc == 0x3BFB1Cu) {
        ctx->pc = 0x3BFB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFB18u;
        // 0x3bfb1c: 0x34420020  ori         $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFB20u;
        goto label_3bfb20;
    }
    ctx->pc = 0x3BFB18u;
    {
        const bool branch_taken_0x3bfb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFB18u;
        // 0x3bfb1c: 0x34420020  ori         $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfb18) {
            ctx->pc = 0x3BFB24u;
            goto label_3bfb24;
        }
    }
    ctx->pc = 0x3BFB20u;
label_3bfb20:
    // 0x3bfb20: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3bfb20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3bfb24:
    // 0x3bfb24: 0x1000ffc7  b           . + 4 + (-0x39 << 2)
label_3bfb28:
    if (ctx->pc == 0x3BFB28u) {
        ctx->pc = 0x3BFB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFB24u;
        // 0x3bfb28: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFB2Cu;
        goto label_3bfb2c;
    }
    ctx->pc = 0x3BFB24u;
    {
        const bool branch_taken_0x3bfb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFB24u;
        // 0x3bfb28: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfb24) {
            ctx->pc = 0x3BFA44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bfa44;
        }
    }
    ctx->pc = 0x3BFB2Cu;
label_3bfb2c:
    // 0x3bfb2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3bfb2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bfb30:
    // 0x3bfb30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3bfb30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3bfb34:
    // 0x3bfb34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3bfb34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3bfb38:
    // 0x3bfb38: 0x3e00008  jr          $ra
label_3bfb3c:
    if (ctx->pc == 0x3BFB3Cu) {
        ctx->pc = 0x3BFB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFB38u;
        // 0x3bfb3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFB40u;
        goto label_fallthrough_0x3bfb38;
    }
    ctx->pc = 0x3BFB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BFB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFB38u;
        // 0x3bfb3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BFB38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3bfb38:
    ctx->pc = 0x3BFB40u;
}
