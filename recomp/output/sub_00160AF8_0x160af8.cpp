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

// Function: sub_00160AF8
// Address: 0x160af8 - 0x160d68
void sub_00160AF8_0x160af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160AF8_0x160af8");
#endif

    switch (ctx->pc) {
        case 0x160b48u: goto label_160b48;
        case 0x160b6cu: goto label_160b6c;
        case 0x160b7cu: goto label_160b7c;
        case 0x160bb0u: goto label_160bb0;
        case 0x160bc0u: goto label_160bc0;
        case 0x160bccu: goto label_160bcc;
        case 0x160be8u: goto label_160be8;
        case 0x160bf4u: goto label_160bf4;
        case 0x160c04u: goto label_160c04;
        case 0x160c18u: goto label_160c18;
        case 0x160c24u: goto label_160c24;
        case 0x160c34u: goto label_160c34;
        case 0x160c78u: goto label_160c78;
        case 0x160c88u: goto label_160c88;
        case 0x160c94u: goto label_160c94;
        case 0x160ca8u: goto label_160ca8;
        case 0x160cb4u: goto label_160cb4;
        case 0x160cc4u: goto label_160cc4;
        case 0x160cd0u: goto label_160cd0;
        case 0x160ce4u: goto label_160ce4;
        case 0x160d04u: goto label_160d04;
        case 0x160d18u: goto label_160d18;
        default: break;
    }

    ctx->pc = 0x160af8u;

    // 0x160af8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x160af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x160afc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x160afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x160b00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x160b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x160b04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x160b04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160b08: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x160b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x160b0c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x160b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x160b10: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x160b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x160b14: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x160b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x160b18: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x160b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x160b1c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x160b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x160b20: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x160b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x160b24: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x160b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x160b28: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x160b28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x160b2c: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x160B2Cu;
    {
        const bool branch_taken_0x160b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B2Cu;
        // 0x160b30: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160b2c) {
            ctx->pc = 0x160D38u;
            goto label_160d38;
        }
    }
    ctx->pc = 0x160B34u;
    // 0x160b34: 0x3c1e0049  lui         $fp, 0x49
    ctx->pc = 0x160b34u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)73 << 16));
    // 0x160b38: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x160b38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160b3c: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x160b3cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160b40: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x160b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x160b44: 0x0  nop
    ctx->pc = 0x160b44u;
    // NOP
label_160b48:
    // 0x160b48: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x160b48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x160b4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x160b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x160b50: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x160b50u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160b54: 0x12800070  beqz        $s4, . + 4 + (0x70 << 2)
    ctx->pc = 0x160B54u;
    {
        const bool branch_taken_0x160b54 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x160B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B54u;
        // 0x160b58: 0x26c20001  addiu       $v0, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160b54) {
            ctx->pc = 0x160D18u;
            goto label_160d18;
        }
    }
    ctx->pc = 0x160B5Cu;
    // 0x160b5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x160b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160b60: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x160b60u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x160b64: 0xc04f1ae  jal         func_13C6B8
    ctx->pc = 0x160B64u;
    SET_GPR_U32(ctx, 31, 0x160B6Cu);
    ctx->pc = 0x160B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160B64u;
    // 0x160b68: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C6B8u, 0x160B64u, 0x160B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160B6Cu;
label_160b6c:
    // 0x160b6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x160B6Cu;
    {
        const bool branch_taken_0x160b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B6Cu;
        // 0x160b70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160b6c) {
            ctx->pc = 0x160B7Cu;
            goto label_160b7c;
        }
    }
    ctx->pc = 0x160B74u;
    // 0x160b74: 0xc04f452  jal         func_13D148
    ctx->pc = 0x160B74u;
    SET_GPR_U32(ctx, 31, 0x160B7Cu);
    ctx->pc = 0x160B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160B74u;
    // 0x160b78: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D148u, 0x160B74u, 0x160B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160B7Cu;
label_160b7c:
    // 0x160b7c: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x160b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x160b80: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x160b80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x160b84: 0x24759a08  addiu       $s5, $v1, -0x65F8
    ctx->pc = 0x160b84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x160b88: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x160b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x160b8c: 0x8c52020c  lw          $s2, 0x20C($v0)
    ctx->pc = 0x160b8cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x160b90: 0x12400046  beqz        $s2, . + 4 + (0x46 << 2)
    ctx->pc = 0x160B90u;
    {
        const bool branch_taken_0x160b90 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x160B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B90u;
        // 0x160b94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160b90) {
            ctx->pc = 0x160CACu;
            goto label_160cac;
        }
    }
    ctx->pc = 0x160B98u;
    // 0x160b98: 0x8e420238  lw          $v0, 0x238($s2)
    ctx->pc = 0x160b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 568)));
    // 0x160b9c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x160B9Cu;
    {
        const bool branch_taken_0x160b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B9Cu;
        // 0x160ba0: 0x27d0a080  addiu       $s0, $fp, -0x5F80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294942848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160b9c) {
            ctx->pc = 0x160BFCu;
            goto label_160bfc;
        }
    }
    ctx->pc = 0x160BA4u;
    // 0x160ba4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x160ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160ba8: 0xc0497f2  jal         func_125FC8
    ctx->pc = 0x160BA8u;
    SET_GPR_U32(ctx, 31, 0x160BB0u);
    ctx->pc = 0x160BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160BA8u;
    // 0x160bac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125FC8u, 0x160BA8u, 0x160BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160BB0u;
label_160bb0:
    // 0x160bb0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x160BB0u;
    {
        const bool branch_taken_0x160bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160BB0u;
        // 0x160bb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160bb0) {
            ctx->pc = 0x160BDCu;
            goto label_160bdc;
        }
    }
    ctx->pc = 0x160BB8u;
    // 0x160bb8: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x160BB8u;
    SET_GPR_U32(ctx, 31, 0x160BC0u);
    ctx->pc = 0x160BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160BB8u;
    // 0x160bbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x160BB8u, 0x160BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160BC0u;
label_160bc0:
    // 0x160bc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x160bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160bc4: 0xc0497e0  jal         func_125F80
    ctx->pc = 0x160BC4u;
    SET_GPR_U32(ctx, 31, 0x160BCCu);
    ctx->pc = 0x160BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160BC4u;
    // 0x160bc8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125F80u, 0x160BC4u, 0x160BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160BCCu;
label_160bcc:
    // 0x160bcc: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x160BCCu;
    {
        const bool branch_taken_0x160bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160BCCu;
        // 0x160bd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160bcc) {
            ctx->pc = 0x160CA8u;
            goto label_160ca8;
        }
    }
    ctx->pc = 0x160BD4u;
    // 0x160bd4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x160BD4u;
    {
        const bool branch_taken_0x160bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160bd4) {
            ctx->pc = 0x160C80u;
            goto label_160c80;
        }
    }
    ctx->pc = 0x160BDCu;
label_160bdc:
    // 0x160bdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x160bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160be0: 0xc04f452  jal         func_13D148
    ctx->pc = 0x160BE0u;
    SET_GPR_U32(ctx, 31, 0x160BE8u);
    ctx->pc = 0x160BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160BE0u;
    // 0x160be4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D148u, 0x160BE0u, 0x160BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160BE8u;
label_160be8:
    // 0x160be8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x160be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160bec: 0xc0584e8  jal         func_1613A0
    ctx->pc = 0x160BECu;
    SET_GPR_U32(ctx, 31, 0x160BF4u);
    ctx->pc = 0x160BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160BECu;
    // 0x160bf0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1613A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1613A0u, 0x160BECu, 0x160BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160BF4u;
label_160bf4:
    // 0x160bf4: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x160BF4u;
    {
        const bool branch_taken_0x160bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160BF4u;
        // 0x160bf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160bf4) {
            ctx->pc = 0x160CACu;
            goto label_160cac;
        }
    }
    ctx->pc = 0x160BFCu;
label_160bfc:
    // 0x160bfc: 0xc04f11e  jal         func_13C478
    ctx->pc = 0x160BFCu;
    SET_GPR_U32(ctx, 31, 0x160C04u);
    ctx->pc = 0x160C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160BFCu;
    // 0x160c00: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C478u, 0x160BFCu, 0x160C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160C04u;
label_160c04:
    // 0x160c04: 0x54570008  bnel        $v0, $s7, . + 4 + (0x8 << 2)
    ctx->pc = 0x160C04u;
    {
        const bool branch_taken_0x160c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x160c04) {
            ctx->pc = 0x160C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160C04u;
            // 0x160c08: 0x8e5000dc  lw          $s0, 0xDC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160C28u;
            goto label_160c28;
        }
    }
    ctx->pc = 0x160C0Cu;
    // 0x160c0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x160c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160c10: 0xc04f452  jal         func_13D148
    ctx->pc = 0x160C10u;
    SET_GPR_U32(ctx, 31, 0x160C18u);
    ctx->pc = 0x160C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160C10u;
    // 0x160c14: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D148u, 0x160C10u, 0x160C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160C18u;
label_160c18:
    // 0x160c18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x160c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160c1c: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x160C1Cu;
    SET_GPR_U32(ctx, 31, 0x160C24u);
    ctx->pc = 0x160C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160C1Cu;
    // 0x160c20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x160C1Cu, 0x160C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160C24u;
label_160c24:
    // 0x160c24: 0x8e5000dc  lw          $s0, 0xDC($s2)
    ctx->pc = 0x160c24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_160c28:
    // 0x160c28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x160c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160c2c: 0xc058514  jal         func_161450
    ctx->pc = 0x160C2Cu;
    SET_GPR_U32(ctx, 31, 0x160C34u);
    ctx->pc = 0x160C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160C2Cu;
    // 0x160c30: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161450u, 0x160C2Cu, 0x160C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160C34u;
label_160c34:
    // 0x160c34: 0x1600001a  bnez        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x160C34u;
    {
        const bool branch_taken_0x160c34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x160C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160C34u;
        // 0x160c38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160c34) {
            ctx->pc = 0x160CA0u;
            goto label_160ca0;
        }
    }
    ctx->pc = 0x160C3Cu;
    // 0x160c3c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x160C3Cu;
    {
        const bool branch_taken_0x160c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x160c3c) {
            ctx->pc = 0x160CA0u;
            goto label_160ca0;
        }
    }
    ctx->pc = 0x160C44u;
    // 0x160c44: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x160c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x160c48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x160c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x160c4c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x160c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x160c50: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x160c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x160c54: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x160C54u;
    {
        const bool branch_taken_0x160c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x160C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160C54u;
        // 0x160c58: 0x27c4a080  addiu       $a0, $fp, -0x5F80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294942848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160c54) {
            ctx->pc = 0x160C64u;
            goto label_160c64;
        }
    }
    ctx->pc = 0x160C5Cu;
    // 0x160c5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x160C5Cu;
    {
        const bool branch_taken_0x160c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160C5Cu;
        // 0x160c60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160c5c) {
            ctx->pc = 0x160C70u;
            goto label_160c70;
        }
    }
    ctx->pc = 0x160C64u;
label_160c64:
    // 0x160c64: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x160c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x160c68: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x160c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160c6c: 0x24660070  addiu       $a2, $v1, 0x70
    ctx->pc = 0x160c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_160c70:
    // 0x160c70: 0xc049754  jal         func_125D50
    ctx->pc = 0x160C70u;
    SET_GPR_U32(ctx, 31, 0x160C78u);
    ctx->pc = 0x160C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160C70u;
    // 0x160c74: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125D50u, 0x160C70u, 0x160C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160C78u;
label_160c78:
    // 0x160c78: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x160C78u;
    {
        const bool branch_taken_0x160c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160C78u;
        // 0x160c7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160c78) {
            ctx->pc = 0x160C9Cu;
            goto label_160c9c;
        }
    }
    ctx->pc = 0x160C80u;
label_160c80:
    // 0x160c80: 0xc04f452  jal         func_13D148
    ctx->pc = 0x160C80u;
    SET_GPR_U32(ctx, 31, 0x160C88u);
    ctx->pc = 0x160C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160C80u;
    // 0x160c84: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D148u, 0x160C80u, 0x160C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160C88u;
label_160c88:
    // 0x160c88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x160c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160c8c: 0xc0583d8  jal         func_160F60
    ctx->pc = 0x160C8Cu;
    SET_GPR_U32(ctx, 31, 0x160C94u);
    ctx->pc = 0x160C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160C8Cu;
    // 0x160c90: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160F60u, 0x160C8Cu, 0x160C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160C94u;
label_160c94:
    // 0x160c94: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x160C94u;
    {
        const bool branch_taken_0x160c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160C94u;
        // 0x160c98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160c94) {
            ctx->pc = 0x160CACu;
            goto label_160cac;
        }
    }
    ctx->pc = 0x160C9Cu;
label_160c9c:
    // 0x160c9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x160c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_160ca0:
    // 0x160ca0: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x160CA0u;
    SET_GPR_U32(ctx, 31, 0x160CA8u);
    ctx->pc = 0x160CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160CA0u;
    // 0x160ca4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x160CA0u, 0x160CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160CA8u;
label_160ca8:
    // 0x160ca8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x160ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_160cac:
    // 0x160cac: 0xc04f112  jal         func_13C448
    ctx->pc = 0x160CACu;
    SET_GPR_U32(ctx, 31, 0x160CB4u);
    ctx->pc = 0x160CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160CACu;
    // 0x160cb0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C448u, 0x160CACu, 0x160CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160CB4u;
label_160cb4:
    // 0x160cb4: 0x14570004  bne         $v0, $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x160CB4u;
    {
        const bool branch_taken_0x160cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x160CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160CB4u;
        // 0x160cb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160cb4) {
            ctx->pc = 0x160CC8u;
            goto label_160cc8;
        }
    }
    ctx->pc = 0x160CBCu;
    // 0x160cbc: 0xc058374  jal         func_160DD0
    ctx->pc = 0x160CBCu;
    SET_GPR_U32(ctx, 31, 0x160CC4u);
    ctx->pc = 0x160CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160CBCu;
    // 0x160cc0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160DD0u, 0x160CBCu, 0x160CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160CC4u;
label_160cc4:
    // 0x160cc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x160cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_160cc8:
    // 0x160cc8: 0xc04f112  jal         func_13C448
    ctx->pc = 0x160CC8u;
    SET_GPR_U32(ctx, 31, 0x160CD0u);
    ctx->pc = 0x160CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160CC8u;
    // 0x160ccc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C448u, 0x160CC8u, 0x160CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160CD0u;
label_160cd0:
    // 0x160cd0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x160CD0u;
    {
        const bool branch_taken_0x160cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x160CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160CD0u;
        // 0x160cd4: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160cd0) {
            ctx->pc = 0x160D1Cu;
            goto label_160d1c;
        }
    }
    ctx->pc = 0x160CD8u;
    // 0x160cd8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x160cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160cdc: 0xc04f576  jal         func_13D5D8
    ctx->pc = 0x160CDCu;
    SET_GPR_U32(ctx, 31, 0x160CE4u);
    ctx->pc = 0x160CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160CDCu;
    // 0x160ce0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D5D8u, 0x160CDCu, 0x160CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160CE4u;
label_160ce4:
    // 0x160ce4: 0x8e4200e4  lw          $v0, 0xE4($s2)
    ctx->pc = 0x160ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
    // 0x160ce8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x160CE8u;
    {
        const bool branch_taken_0x160ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x160CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160CE8u;
        // 0x160cec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160ce8) {
            ctx->pc = 0x160CFCu;
            goto label_160cfc;
        }
    }
    ctx->pc = 0x160CF0u;
    // 0x160cf0: 0x8e420284  lw          $v0, 0x284($s2)
    ctx->pc = 0x160cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 644)));
    // 0x160cf4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x160CF4u;
    {
        const bool branch_taken_0x160cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160CF4u;
        // 0x160cf8: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160cf4) {
            ctx->pc = 0x160D1Cu;
            goto label_160d1c;
        }
    }
    ctx->pc = 0x160CFCu;
label_160cfc:
    // 0x160cfc: 0xc058506  jal         func_161418
    ctx->pc = 0x160CFCu;
    SET_GPR_U32(ctx, 31, 0x160D04u);
    ctx->pc = 0x160D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160CFCu;
    // 0x160d00: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161418u, 0x160CFCu, 0x160D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160D04u;
label_160d04:
    // 0x160d04: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x160D04u;
    {
        const bool branch_taken_0x160d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x160D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160D04u;
        // 0x160d08: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160d04) {
            ctx->pc = 0x160D1Cu;
            goto label_160d1c;
        }
    }
    ctx->pc = 0x160D0Cu;
    // 0x160d0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x160d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160d10: 0xc04f452  jal         func_13D148
    ctx->pc = 0x160D10u;
    SET_GPR_U32(ctx, 31, 0x160D18u);
    ctx->pc = 0x160D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160D10u;
    // 0x160d14: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D148u, 0x160D10u, 0x160D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160D18u;
label_160d18:
    // 0x160d18: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x160d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_160d1c:
    // 0x160d1c: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x160d1cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x160d20: 0x2e630010  sltiu       $v1, $s3, 0x10
    ctx->pc = 0x160d20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x160d24: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x160D24u;
    {
        const bool branch_taken_0x160d24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x160D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160D24u;
        // 0x160d28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160d24) {
            ctx->pc = 0x160D3Cu;
            goto label_160d3c;
        }
    }
    ctx->pc = 0x160D2Cu;
    // 0x160d2c: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x160d2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x160d30: 0x56c2ff85  bnel        $s6, $v0, . + 4 + (-0x7B << 2)
    ctx->pc = 0x160D30u;
    {
        const bool branch_taken_0x160d30 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x160d30) {
            ctx->pc = 0x160D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160D30u;
            // 0x160d34: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160b48;
        }
    }
    ctx->pc = 0x160D38u;
label_160d38:
    // 0x160d38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x160d38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_160d3c:
    // 0x160d3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x160d3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x160d40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x160d40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160d44: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x160d44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x160d48: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x160d48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x160d4c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x160d4cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x160d50: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x160d50u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x160d54: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x160d54u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x160d58: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x160d58u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x160d5c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x160d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x160d60: 0x3e00008  jr          $ra
    ctx->pc = 0x160D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160D60u;
        // 0x160d64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160D68u;
}
