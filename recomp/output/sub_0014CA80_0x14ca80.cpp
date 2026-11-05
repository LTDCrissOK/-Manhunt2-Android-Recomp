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

// Function: sub_0014CA80
// Address: 0x14ca80 - 0x14cba8
void sub_0014CA80_0x14ca80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014CA80_0x14ca80");
#endif

    switch (ctx->pc) {
        case 0x14caa0u: goto label_14caa0;
        case 0x14cab4u: goto label_14cab4;
        case 0x14cb0cu: goto label_14cb0c;
        case 0x14cb1cu: goto label_14cb1c;
        case 0x14cb38u: goto label_14cb38;
        case 0x14cb44u: goto label_14cb44;
        case 0x14cb58u: goto label_14cb58;
        case 0x14cb68u: goto label_14cb68;
        case 0x14cb74u: goto label_14cb74;
        case 0x14cb7cu: goto label_14cb7c;
        case 0x14cb8cu: goto label_14cb8c;
        default: break;
    }

    ctx->pc = 0x14ca80u;

    // 0x14ca80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14ca80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14ca84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14ca84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14ca88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14ca88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14ca8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14ca8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ca90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14ca90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14ca94: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x14ca94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x14ca98: 0xc0530d8  jal         func_14C360
    ctx->pc = 0x14CA98u;
    SET_GPR_U32(ctx, 31, 0x14CAA0u);
    ctx->pc = 0x14CA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CA98u;
    // 0x14ca9c: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C360u, 0x14CA98u, 0x14CAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CAA0u;
label_14caa0:
    // 0x14caa0: 0x5440003b  bnel        $v0, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x14CAA0u;
    {
        const bool branch_taken_0x14caa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14caa0) {
            ctx->pc = 0x14CAA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14CAA0u;
            // 0x14caa4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CB90u;
            goto label_14cb90;
        }
    }
    ctx->pc = 0x14CAA8u;
    // 0x14caa8: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14caa8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14caac: 0xc053068  jal         func_14C1A0
    ctx->pc = 0x14CAACu;
    SET_GPR_U32(ctx, 31, 0x14CAB4u);
    ctx->pc = 0x14CAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CAACu;
    // 0x14cab0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C1A0u, 0x14CAACu, 0x14CAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CAB4u;
label_14cab4:
    // 0x14cab4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14cab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14cab8: 0x54430035  bnel        $v0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x14CAB8u;
    {
        const bool branch_taken_0x14cab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14cab8) {
            ctx->pc = 0x14CABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14CAB8u;
            // 0x14cabc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CB90u;
            goto label_14cb90;
        }
    }
    ctx->pc = 0x14CAC0u;
    // 0x14cac0: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14cac0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14cac4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x14cac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14cac8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x14cac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14cacc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14caccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14cad0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14cad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14cad4: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x14CAD4u;
    {
        const bool branch_taken_0x14cad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CAD4u;
        // 0x14cad8: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cad4) {
            ctx->pc = 0x14CB8Cu;
            goto label_14cb8c;
        }
    }
    ctx->pc = 0x14CADCu;
    // 0x14cadc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14cadcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14cae0: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x14cae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x14cae4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14cae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14cae8: 0x8c51020c  lw          $s1, 0x20C($v0)
    ctx->pc = 0x14cae8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x14caec: 0x8e230120  lw          $v1, 0x120($s1)
    ctx->pc = 0x14caecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x14caf0: 0x54600027  bnel        $v1, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x14CAF0u;
    {
        const bool branch_taken_0x14caf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14caf0) {
            ctx->pc = 0x14CAF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14CAF0u;
            // 0x14caf4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CB90u;
            goto label_14cb90;
        }
    }
    ctx->pc = 0x14CAF8u;
    // 0x14caf8: 0x8e2200e4  lw          $v0, 0xE4($s1)
    ctx->pc = 0x14caf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
    // 0x14cafc: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x14CAFCu;
    {
        const bool branch_taken_0x14cafc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14cafc) {
            ctx->pc = 0x14CB00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14CAFCu;
            // 0x14cb00: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CB90u;
            goto label_14cb90;
        }
    }
    ctx->pc = 0x14CB04u;
    // 0x14cb04: 0xc053132  jal         func_14C4C8
    ctx->pc = 0x14CB04u;
    SET_GPR_U32(ctx, 31, 0x14CB0Cu);
    ctx->pc = 0x14CB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CB04u;
    // 0x14cb08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C4C8u, 0x14CB04u, 0x14CB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CB0Cu;
label_14cb0c:
    // 0x14cb0c: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14cb0cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14cb10: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14cb10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cb14: 0xc0530f4  jal         func_14C3D0
    ctx->pc = 0x14CB14u;
    SET_GPR_U32(ctx, 31, 0x14CB1Cu);
    ctx->pc = 0x14CB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CB14u;
    // 0x14cb18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C3D0u, 0x14CB14u, 0x14CB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CB1Cu;
label_14cb1c:
    // 0x14cb1c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14CB1Cu;
    {
        const bool branch_taken_0x14cb1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14cb1c) {
            ctx->pc = 0x14CB20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14CB1Cu;
            // 0x14cb20: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CB30u;
            goto label_14cb30;
        }
    }
    ctx->pc = 0x14CB24u;
    // 0x14cb24: 0x5240001a  beql        $s2, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x14CB24u;
    {
        const bool branch_taken_0x14cb24 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cb24) {
            ctx->pc = 0x14CB28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14CB24u;
            // 0x14cb28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CB90u;
            goto label_14cb90;
        }
    }
    ctx->pc = 0x14CB2Cu;
    // 0x14cb2c: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14cb2cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14cb30:
    // 0x14cb30: 0xc0530de  jal         func_14C378
    ctx->pc = 0x14CB30u;
    SET_GPR_U32(ctx, 31, 0x14CB38u);
    ctx->pc = 0x14CB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CB30u;
    // 0x14cb34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C378u, 0x14CB30u, 0x14CB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CB38u;
label_14cb38:
    // 0x14cb38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14cb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cb3c: 0xc04434c  jal         func_110D30
    ctx->pc = 0x14CB3Cu;
    SET_GPR_U32(ctx, 31, 0x14CB44u);
    ctx->pc = 0x14CB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CB3Cu;
    // 0x14cb40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x14CB3Cu, 0x14CB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CB44u;
label_14cb44:
    // 0x14cb44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14cb44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cb48: 0x52200011  beql        $s1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x14CB48u;
    {
        const bool branch_taken_0x14cb48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cb48) {
            ctx->pc = 0x14CB4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14CB48u;
            // 0x14cb4c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CB90u;
            goto label_14cb90;
        }
    }
    ctx->pc = 0x14CB50u;
    // 0x14cb50: 0xc04631a  jal         func_118C68
    ctx->pc = 0x14CB50u;
    SET_GPR_U32(ctx, 31, 0x14CB58u);
    ctx->pc = 0x14CB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CB50u;
    // 0x14cb54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118C68u, 0x14CB50u, 0x14CB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CB58u;
label_14cb58:
    // 0x14cb58: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14cb58u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14cb5c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14cb5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cb60: 0xc0530cc  jal         func_14C330
    ctx->pc = 0x14CB60u;
    SET_GPR_U32(ctx, 31, 0x14CB68u);
    ctx->pc = 0x14CB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CB60u;
    // 0x14cb64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C330u, 0x14CB60u, 0x14CB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CB68u;
label_14cb68:
    // 0x14cb68: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14cb68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cb6c: 0xc0532ea  jal         func_14CBA8
    ctx->pc = 0x14CB6Cu;
    SET_GPR_U32(ctx, 31, 0x14CB74u);
    ctx->pc = 0x14CB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CB6Cu;
    // 0x14cb70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CBA8u, 0x14CB6Cu, 0x14CB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CB74u;
label_14cb74:
    // 0x14cb74: 0xc045eee  jal         func_117BB8
    ctx->pc = 0x14CB74u;
    SET_GPR_U32(ctx, 31, 0x14CB7Cu);
    ctx->pc = 0x14CB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CB74u;
    // 0x14cb78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BB8u, 0x14CB74u, 0x14CB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CB7Cu;
label_14cb7c:
    // 0x14cb7c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x14cb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x14cb80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14cb80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cb84: 0xc042136  jal         func_1084D8
    ctx->pc = 0x14CB84u;
    SET_GPR_U32(ctx, 31, 0x14CB8Cu);
    ctx->pc = 0x14CB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CB84u;
    // 0x14cb88: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084D8u, 0x14CB84u, 0x14CB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CB8Cu;
label_14cb8c:
    // 0x14cb8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14cb8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14cb90:
    // 0x14cb90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14cb90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14cb94: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14cb94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14cb98: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x14cb98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14cb9c: 0x3e00008  jr          $ra
    ctx->pc = 0x14CB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CB9Cu;
        // 0x14cba0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14CBA4u;
    // 0x14cba4: 0x0  nop
    ctx->pc = 0x14cba4u;
    // NOP
    ctx->pc = 0x14cba8u;
}
