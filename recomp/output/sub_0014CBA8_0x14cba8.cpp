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

// Function: sub_0014CBA8
// Address: 0x14cba8 - 0x14ce58
void sub_0014CBA8_0x14cba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014CBA8_0x14cba8");
#endif

    switch (ctx->pc) {
        case 0x14cbdcu: goto label_14cbdc;
        case 0x14cc20u: goto label_14cc20;
        case 0x14cc34u: goto label_14cc34;
        case 0x14cc84u: goto label_14cc84;
        case 0x14cca4u: goto label_14cca4;
        case 0x14ccb4u: goto label_14ccb4;
        case 0x14ccc0u: goto label_14ccc0;
        case 0x14ccd4u: goto label_14ccd4;
        case 0x14cce8u: goto label_14cce8;
        case 0x14cd20u: goto label_14cd20;
        case 0x14cd40u: goto label_14cd40;
        case 0x14cd50u: goto label_14cd50;
        case 0x14cd74u: goto label_14cd74;
        case 0x14cd84u: goto label_14cd84;
        case 0x14cd90u: goto label_14cd90;
        case 0x14cd9cu: goto label_14cd9c;
        case 0x14cda8u: goto label_14cda8;
        case 0x14cdbcu: goto label_14cdbc;
        case 0x14ce0cu: goto label_14ce0c;
        case 0x14ce20u: goto label_14ce20;
        case 0x14ce30u: goto label_14ce30;
        default: break;
    }

    ctx->pc = 0x14cba8u;

    // 0x14cba8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14cba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14cbac: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x14cbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x14cbb0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x14cbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x14cbb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14cbb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cbb8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x14cbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x14cbbc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x14cbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x14cbc0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x14cbc0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cbc4: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x14cbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x14cbc8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x14cbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x14cbcc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x14cbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x14cbd0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x14cbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x14cbd4: 0xc0530d8  jal         func_14C360
    ctx->pc = 0x14CBD4u;
    SET_GPR_U32(ctx, 31, 0x14CBDCu);
    ctx->pc = 0x14CBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CBD4u;
    // 0x14cbd8: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C360u, 0x14CBD4u, 0x14CBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CBDCu;
label_14cbdc:
    // 0x14cbdc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x14cbdcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cbe0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x14cbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14cbe4: 0x9222046c  lbu         $v0, 0x46C($s1)
    ctx->pc = 0x14cbe4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x14cbe8: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x14cbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x14cbec: 0x8ed50004  lw          $s5, 0x4($s6)
    ctx->pc = 0x14cbecu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x14cbf0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14cbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14cbf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14cbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14cbf8: 0x16a40033  bne         $s5, $a0, . + 4 + (0x33 << 2)
    ctx->pc = 0x14CBF8u;
    {
        const bool branch_taken_0x14cbf8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 4));
        ctx->pc = 0x14CBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CBF8u;
        // 0x14cbfc: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cbf8) {
            ctx->pc = 0x14CCC8u;
            goto label_14ccc8;
        }
    }
    ctx->pc = 0x14CC00u;
    // 0x14cc00: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x14cc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x14cc04: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x14cc04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x14cc08: 0x24509e60  addiu       $s0, $v0, -0x61A0
    ctx->pc = 0x14cc08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942304));
    // 0x14cc0c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x14cc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x14cc10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14cc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cc14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14cc14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cc18: 0xc047f94  jal         func_11FE50
    ctx->pc = 0x14CC18u;
    SET_GPR_U32(ctx, 31, 0x14CC20u);
    ctx->pc = 0x14CC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CC18u;
    // 0x14cc1c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE50u, 0x14CC18u, 0x14CC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CC20u;
label_14cc20:
    // 0x14cc20: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14CC20u;
    {
        const bool branch_taken_0x14cc20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14CC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CC20u;
        // 0x14cc24: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cc20) {
            ctx->pc = 0x14CC3Cu;
            goto label_14cc3c;
        }
    }
    ctx->pc = 0x14CC28u;
    // 0x14cc28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14cc28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cc2c: 0xc0530d2  jal         func_14C348
    ctx->pc = 0x14CC2Cu;
    SET_GPR_U32(ctx, 31, 0x14CC34u);
    ctx->pc = 0x14CC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CC2Cu;
    // 0x14cc30: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C348u, 0x14CC2Cu, 0x14CC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CC34u;
label_14cc34:
    // 0x14cc34: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x14CC34u;
    {
        const bool branch_taken_0x14cc34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CC34u;
        // 0x14cc38: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cc34) {
            ctx->pc = 0x14CE34u;
            goto label_14ce34;
        }
    }
    ctx->pc = 0x14CC3Cu;
label_14cc3c:
    // 0x14cc3c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x14cc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x14cc40: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x14cc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x14cc44: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14cc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14cc48: 0x8c42020c  lw          $v0, 0x20C($v0)
    ctx->pc = 0x14cc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x14cc4c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x14CC4Cu;
    {
        const bool branch_taken_0x14cc4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CC4Cu;
        // 0x14cc50: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cc4c) {
            ctx->pc = 0x14CC88u;
            goto label_14cc88;
        }
    }
    ctx->pc = 0x14CC54u;
    // 0x14cc54: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x14cc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x14cc58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14cc58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14cc5c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14cc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14cc60: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x14cc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x14cc64: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x14CC64u;
    {
        const bool branch_taken_0x14cc64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14cc64) {
            ctx->pc = 0x14CC68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14CC64u;
            // 0x14cc68: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CC74u;
            goto label_14cc74;
        }
    }
    ctx->pc = 0x14CC6Cu;
    // 0x14cc6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14CC6Cu;
    {
        const bool branch_taken_0x14cc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CC6Cu;
        // 0x14cc70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cc6c) {
            ctx->pc = 0x14CC7Cu;
            goto label_14cc7c;
        }
    }
    ctx->pc = 0x14CC74u;
label_14cc74:
    // 0x14cc74: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14cc74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14cc78: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x14cc78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_14cc7c:
    // 0x14cc7c: 0xc048108  jal         func_120420
    ctx->pc = 0x14CC7Cu;
    SET_GPR_U32(ctx, 31, 0x14CC84u);
    ctx->pc = 0x14CC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CC7Cu;
    // 0x14cc80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120420u, 0x14CC7Cu, 0x14CC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CC84u;
label_14cc84:
    // 0x14cc84: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x14cc84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_14cc88:
    // 0x14cc88: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x14cc88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x14cc8c: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x14cc8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x14cc90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14cc90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cc94: 0x38e20037  xori        $v0, $a3, 0x37
    ctx->pc = 0x14cc94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)55);
    // 0x14cc98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14cc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cc9c: 0xc04dc0c  jal         func_137030
    ctx->pc = 0x14CC9Cu;
    SET_GPR_U32(ctx, 31, 0x14CCA4u);
    ctx->pc = 0x14CCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CC9Cu;
    // 0x14cca0: 0x62300b  movn        $a2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137030u, 0x14CC9Cu, 0x14CCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CCA4u;
label_14cca4:
    // 0x14cca4: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x14cca4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x14cca8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14cca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ccac: 0xc04d936  jal         func_1364D8
    ctx->pc = 0x14CCACu;
    SET_GPR_U32(ctx, 31, 0x14CCB4u);
    ctx->pc = 0x14CCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CCACu;
    // 0x14ccb0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1364D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1364D8u, 0x14CCACu, 0x14CCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CCB4u;
label_14ccb4:
    // 0x14ccb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14ccb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ccb8: 0xc053104  jal         func_14C410
    ctx->pc = 0x14CCB8u;
    SET_GPR_U32(ctx, 31, 0x14CCC0u);
    ctx->pc = 0x14CCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CCB8u;
    // 0x14ccbc: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C410u, 0x14CCB8u, 0x14CCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CCC0u;
label_14ccc0:
    // 0x14ccc0: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x14CCC0u;
    {
        const bool branch_taken_0x14ccc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CCC0u;
        // 0x14ccc4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ccc0) {
            ctx->pc = 0x14CE34u;
            goto label_14ce34;
        }
    }
    ctx->pc = 0x14CCC8u;
label_14ccc8:
    // 0x14ccc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14ccc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cccc: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x14CCCCu;
    SET_GPR_U32(ctx, 31, 0x14CCD4u);
    ctx->pc = 0x14CCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CCCCu;
    // 0x14ccd0: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x14CCCCu, 0x14CCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CCD4u;
label_14ccd4:
    // 0x14ccd4: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x14ccd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ccd8: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14CCD8u;
    {
        const bool branch_taken_0x14ccd8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x14CCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CCD8u;
        // 0x14ccdc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ccd8) {
            ctx->pc = 0x14CD00u;
            goto label_14cd00;
        }
    }
    ctx->pc = 0x14CCE0u;
    // 0x14cce0: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x14CCE0u;
    SET_GPR_U32(ctx, 31, 0x14CCE8u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x14CCE0u, 0x14CCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CCE8u;
label_14cce8:
    // 0x14cce8: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x14cce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x14ccec: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x14ccecu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x14ccf0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x14CCF0u;
    {
        const bool branch_taken_0x14ccf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ccf0) {
            ctx->pc = 0x14CCF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14CCF0u;
            // 0x14ccf4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CCF8u;
            goto label_14ccf8;
        }
    }
    ctx->pc = 0x14CCF8u;
label_14ccf8:
    // 0x14ccf8: 0x2010  mfhi        $a0
    ctx->pc = 0x14ccf8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x14ccfc: 0x2c900032  sltiu       $s0, $a0, 0x32
    ctx->pc = 0x14ccfcu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
label_14cd00:
    // 0x14cd00: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x14cd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x14cd04: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x14CD04u;
    {
        const bool branch_taken_0x14cd04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CD04u;
        // 0x14cd08: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cd04) {
            ctx->pc = 0x14CD78u;
            goto label_14cd78;
        }
    }
    ctx->pc = 0x14CD0Cu;
    // 0x14cd0c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x14cd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x14cd10: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14cd10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cd14: 0x24849e60  addiu       $a0, $a0, -0x61A0
    ctx->pc = 0x14cd14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942304));
    // 0x14cd18: 0xc047f94  jal         func_11FE50
    ctx->pc = 0x14CD18u;
    SET_GPR_U32(ctx, 31, 0x14CD20u);
    ctx->pc = 0x14CD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CD18u;
    // 0x14cd1c: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE50u, 0x14CD18u, 0x14CD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CD20u;
label_14cd20:
    // 0x14cd20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14cd20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cd24: 0x56000008  bnel        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x14CD24u;
    {
        const bool branch_taken_0x14cd24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x14cd24) {
            ctx->pc = 0x14CD28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14CD24u;
            // 0x14cd28: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CD48u;
            goto label_14cd48;
        }
    }
    ctx->pc = 0x14CD2Cu;
    // 0x14cd2c: 0x52800013  beql        $s4, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x14CD2Cu;
    {
        const bool branch_taken_0x14cd2c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cd2c) {
            ctx->pc = 0x14CD30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14CD2Cu;
            // 0x14cd30: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CD7Cu;
            goto label_14cd7c;
        }
    }
    ctx->pc = 0x14CD34u;
    // 0x14cd34: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x14cd34u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x14cd38: 0xc05311c  jal         func_14C470
    ctx->pc = 0x14CD38u;
    SET_GPR_U32(ctx, 31, 0x14CD40u);
    ctx->pc = 0x14CD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CD38u;
    // 0x14cd3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C470u, 0x14CD38u, 0x14CD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CD40u;
label_14cd40:
    // 0x14cd40: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x14CD40u;
    {
        const bool branch_taken_0x14cd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CD40u;
        // 0x14cd44: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cd40) {
            ctx->pc = 0x14CD7Cu;
            goto label_14cd7c;
        }
    }
    ctx->pc = 0x14CD48u;
label_14cd48:
    // 0x14cd48: 0xc053104  jal         func_14C410
    ctx->pc = 0x14CD48u;
    SET_GPR_U32(ctx, 31, 0x14CD50u);
    ctx->pc = 0x14CD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CD48u;
    // 0x14cd4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C410u, 0x14CD48u, 0x14CD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CD50u;
label_14cd50:
    // 0x14cd50: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x14cd50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x14cd54: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x14cd54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x14cd58: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x14cd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x14cd5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14cd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14cd60: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x14cd60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x14cd64: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14CD64u;
    {
        const bool branch_taken_0x14cd64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cd64) {
            ctx->pc = 0x14CD68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14CD64u;
            // 0x14cd68: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CD7Cu;
            goto label_14cd7c;
        }
    }
    ctx->pc = 0x14CD6Cu;
    // 0x14cd6c: 0xc0443cc  jal         func_110F30
    ctx->pc = 0x14CD6Cu;
    SET_GPR_U32(ctx, 31, 0x14CD74u);
    ctx->pc = 0x110F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F30u, 0x14CD6Cu, 0x14CD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CD74u;
label_14cd74:
    // 0x14cd74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14cd74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14cd78:
    // 0x14cd78: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x14cd78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_14cd7c:
    // 0x14cd7c: 0xc046138  jal         func_1184E0
    ctx->pc = 0x14CD7Cu;
    SET_GPR_U32(ctx, 31, 0x14CD84u);
    ctx->pc = 0x14CD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CD7Cu;
    // 0x14cd80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1184E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1184E0u, 0x14CD7Cu, 0x14CD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CD84u;
label_14cd84:
    // 0x14cd84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14cd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cd88: 0xc046154  jal         func_118550
    ctx->pc = 0x14CD88u;
    SET_GPR_U32(ctx, 31, 0x14CD90u);
    ctx->pc = 0x14CD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CD88u;
    // 0x14cd8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118550u, 0x14CD88u, 0x14CD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CD90u;
label_14cd90:
    // 0x14cd90: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x14cd90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cd94: 0xc04db8e  jal         func_136E38
    ctx->pc = 0x14CD94u;
    SET_GPR_U32(ctx, 31, 0x14CD9Cu);
    ctx->pc = 0x14CD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CD94u;
    // 0x14cd98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136E38u, 0x14CD94u, 0x14CD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CD9Cu;
label_14cd9c:
    // 0x14cd9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14cd9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cda0: 0xc046256  jal         func_118958
    ctx->pc = 0x14CDA0u;
    SET_GPR_U32(ctx, 31, 0x14CDA8u);
    ctx->pc = 0x14CDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CDA0u;
    // 0x14cda4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118958u, 0x14CDA0u, 0x14CDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CDA8u;
label_14cda8:
    // 0x14cda8: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x14CDA8u;
    {
        const bool branch_taken_0x14cda8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CDA8u;
        // 0x14cdac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cda8) {
            ctx->pc = 0x14CE10u;
            goto label_14ce10;
        }
    }
    ctx->pc = 0x14CDB0u;
    // 0x14cdb0: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x14cdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14cdb4: 0xc046164  jal         func_118590
    ctx->pc = 0x14CDB4u;
    SET_GPR_U32(ctx, 31, 0x14CDBCu);
    ctx->pc = 0x14CDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CDB4u;
    // 0x14cdb8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118590u, 0x14CDB4u, 0x14CDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CDBCu;
label_14cdbc:
    // 0x14cdbc: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x14cdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x14cdc0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x14cdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x14cdc4: 0x24659a08  addiu       $a1, $v1, -0x65F8
    ctx->pc = 0x14cdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x14cdc8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x14cdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x14cdcc: 0x8c42020c  lw          $v0, 0x20C($v0)
    ctx->pc = 0x14cdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x14cdd0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x14CDD0u;
    {
        const bool branch_taken_0x14cdd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CDD0u;
        // 0x14cdd4: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cdd0) {
            ctx->pc = 0x14CE0Cu;
            goto label_14ce0c;
        }
    }
    ctx->pc = 0x14CDD8u;
    // 0x14cdd8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x14cdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x14cddc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14cddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14cde0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x14cde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x14cde4: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x14cde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x14cde8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14CDE8u;
    {
        const bool branch_taken_0x14cde8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14CDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CDE8u;
        // 0x14cdec: 0x24649e60  addiu       $a0, $v1, -0x61A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cde8) {
            ctx->pc = 0x14CDF8u;
            goto label_14cdf8;
        }
    }
    ctx->pc = 0x14CDF0u;
    // 0x14cdf0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14CDF0u;
    {
        const bool branch_taken_0x14cdf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CDF0u;
        // 0x14cdf4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cdf0) {
            ctx->pc = 0x14CE04u;
            goto label_14ce04;
        }
    }
    ctx->pc = 0x14CDF8u;
label_14cdf8:
    // 0x14cdf8: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x14cdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x14cdfc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14cdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14ce00: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x14ce00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_14ce04:
    // 0x14ce04: 0xc048108  jal         func_120420
    ctx->pc = 0x14CE04u;
    SET_GPR_U32(ctx, 31, 0x14CE0Cu);
    ctx->pc = 0x120420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120420u, 0x14CE04u, 0x14CE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CE0Cu;
label_14ce0c:
    // 0x14ce0c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14ce0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14ce10:
    // 0x14ce10: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x14ce10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ce14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14ce14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ce18: 0xc04db5a  jal         func_136D68
    ctx->pc = 0x14CE18u;
    SET_GPR_U32(ctx, 31, 0x14CE20u);
    ctx->pc = 0x14CE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CE18u;
    // 0x14ce1c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136D68u, 0x14CE18u, 0x14CE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CE20u;
label_14ce20:
    // 0x14ce20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14ce20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ce24: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14ce24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ce28: 0xc04d936  jal         func_1364D8
    ctx->pc = 0x14CE28u;
    SET_GPR_U32(ctx, 31, 0x14CE30u);
    ctx->pc = 0x14CE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CE28u;
    // 0x14ce2c: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1364D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1364D8u, 0x14CE28u, 0x14CE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CE30u;
label_14ce30:
    // 0x14ce30: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14ce30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_14ce34:
    // 0x14ce34: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x14ce34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14ce38: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x14ce38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ce3c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x14ce3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ce40: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x14ce40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14ce44: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x14ce44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14ce48: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x14ce48u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14ce4c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x14ce4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14ce50: 0x3e00008  jr          $ra
    ctx->pc = 0x14CE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CE50u;
        // 0x14ce54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14CE58u;
}
