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

// Function: sub_00132F70
// Address: 0x132f70 - 0x133040
void sub_00132F70_0x132f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132F70_0x132f70");
#endif

    switch (ctx->pc) {
        case 0x132f70u: goto label_132f70;
        case 0x132f74u: goto label_132f74;
        case 0x132f78u: goto label_132f78;
        case 0x132f7cu: goto label_132f7c;
        case 0x132f80u: goto label_132f80;
        case 0x132f84u: goto label_132f84;
        case 0x132f88u: goto label_132f88;
        case 0x132f8cu: goto label_132f8c;
        case 0x132f90u: goto label_132f90;
        case 0x132f94u: goto label_132f94;
        case 0x132f98u: goto label_132f98;
        case 0x132f9cu: goto label_132f9c;
        case 0x132fa0u: goto label_132fa0;
        case 0x132fa4u: goto label_132fa4;
        case 0x132fa8u: goto label_132fa8;
        case 0x132facu: goto label_132fac;
        case 0x132fb0u: goto label_132fb0;
        case 0x132fb4u: goto label_132fb4;
        case 0x132fb8u: goto label_132fb8;
        case 0x132fbcu: goto label_132fbc;
        case 0x132fc0u: goto label_132fc0;
        case 0x132fc4u: goto label_132fc4;
        case 0x132fc8u: goto label_132fc8;
        case 0x132fccu: goto label_132fcc;
        case 0x132fd0u: goto label_132fd0;
        case 0x132fd4u: goto label_132fd4;
        case 0x132fd8u: goto label_132fd8;
        case 0x132fdcu: goto label_132fdc;
        case 0x132fe0u: goto label_132fe0;
        case 0x132fe4u: goto label_132fe4;
        case 0x132fe8u: goto label_132fe8;
        case 0x132fecu: goto label_132fec;
        case 0x132ff0u: goto label_132ff0;
        case 0x132ff4u: goto label_132ff4;
        case 0x132ff8u: goto label_132ff8;
        case 0x132ffcu: goto label_132ffc;
        case 0x133000u: goto label_133000;
        case 0x133004u: goto label_133004;
        case 0x133008u: goto label_133008;
        case 0x13300cu: goto label_13300c;
        case 0x133010u: goto label_133010;
        case 0x133014u: goto label_133014;
        case 0x133018u: goto label_133018;
        case 0x13301cu: goto label_13301c;
        case 0x133020u: goto label_133020;
        case 0x133024u: goto label_133024;
        case 0x133028u: goto label_133028;
        case 0x13302cu: goto label_13302c;
        case 0x133030u: goto label_133030;
        case 0x133034u: goto label_133034;
        case 0x133038u: goto label_133038;
        case 0x13303cu: goto label_13303c;
        default: break;
    }

    ctx->pc = 0x132f70u;

label_132f70:
    // 0x132f70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x132f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_132f74:
    // 0x132f74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x132f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_132f78:
    // 0x132f78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x132f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_132f7c:
    // 0x132f7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x132f7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_132f80:
    // 0x132f80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x132f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_132f84:
    // 0x132f84: 0xc04b460  jal         func_12D180
label_132f88:
    if (ctx->pc == 0x132F88u) {
        ctx->pc = 0x132F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132F84u;
        // 0x132f88: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132F8Cu;
        goto label_132f8c;
    }
    ctx->pc = 0x132F84u;
    SET_GPR_U32(ctx, 31, 0x132F8Cu);
    ctx->pc = 0x132F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132F84u;
    // 0x132f88: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D180u, 0x132F84u, 0x132F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132F8Cu;
label_132f8c:
    // 0x132f8c: 0x3c110049  lui         $s1, 0x49
    ctx->pc = 0x132f8cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)73 << 16));
label_132f90:
    // 0x132f90: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x132f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_132f94:
    // 0x132f94: 0x26318758  addiu       $s1, $s1, -0x78A8
    ctx->pc = 0x132f94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294936408));
label_132f98:
    // 0x132f98: 0xc041ed4  jal         func_107B50
label_132f9c:
    if (ctx->pc == 0x132F9Cu) {
        ctx->pc = 0x132F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132F98u;
        // 0x132f9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132FA0u;
        goto label_132fa0;
    }
    ctx->pc = 0x132F98u;
    SET_GPR_U32(ctx, 31, 0x132FA0u);
    ctx->pc = 0x132F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132F98u;
    // 0x132f9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107B50u, 0x132F98u, 0x132FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132FA0u;
label_132fa0:
    // 0x132fa0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x132fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_132fa4:
    // 0x132fa4: 0xc04b460  jal         func_12D180
label_132fa8:
    if (ctx->pc == 0x132FA8u) {
        ctx->pc = 0x132FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132FA4u;
        // 0x132fa8: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132FACu;
        goto label_132fac;
    }
    ctx->pc = 0x132FA4u;
    SET_GPR_U32(ctx, 31, 0x132FACu);
    ctx->pc = 0x132FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132FA4u;
    // 0x132fa8: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D180u, 0x132FA4u, 0x132FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132FACu;
label_132fac:
    // 0x132fac: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x132facu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_132fb0:
    // 0x132fb0: 0xc041ed4  jal         func_107B50
label_132fb4:
    if (ctx->pc == 0x132FB4u) {
        ctx->pc = 0x132FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132FB0u;
        // 0x132fb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132FB8u;
        goto label_132fb8;
    }
    ctx->pc = 0x132FB0u;
    SET_GPR_U32(ctx, 31, 0x132FB8u);
    ctx->pc = 0x132FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132FB0u;
    // 0x132fb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107B50u, 0x132FB0u, 0x132FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132FB8u;
label_132fb8:
    // 0x132fb8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x132fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_132fbc:
    // 0x132fbc: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x132fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_132fc0:
    // 0x132fc0: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x132fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_132fc4:
    // 0x132fc4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x132fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_132fc8:
    // 0x132fc8: 0x40f809  jalr        $v0
label_132fcc:
    if (ctx->pc == 0x132FCCu) {
        ctx->pc = 0x132FD0u;
        goto label_132fd0;
    }
    ctx->pc = 0x132FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x132FD0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132FC8u, 0x132FD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x132FD0u;
label_132fd0:
    // 0x132fd0: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x132fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_132fd4:
    // 0x132fd4: 0xc0420de  jal         func_108378
label_132fd8:
    if (ctx->pc == 0x132FD8u) {
        ctx->pc = 0x132FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132FD4u;
        // 0x132fd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132FDCu;
        goto label_132fdc;
    }
    ctx->pc = 0x132FD4u;
    SET_GPR_U32(ctx, 31, 0x132FDCu);
    ctx->pc = 0x132FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132FD4u;
    // 0x132fd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108378u, 0x132FD4u, 0x132FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132FDCu;
label_132fdc:
    // 0x132fdc: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x132fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_132fe0:
    // 0x132fe0: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x132fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_132fe4:
    // 0x132fe4: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x132fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_132fe8:
    // 0x132fe8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x132fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_132fec:
    // 0x132fec: 0x40f809  jalr        $v0
label_132ff0:
    if (ctx->pc == 0x132FF0u) {
        ctx->pc = 0x132FF4u;
        goto label_132ff4;
    }
    ctx->pc = 0x132FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x132FF4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132FECu, 0x132FF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x132FF4u;
label_132ff4:
    // 0x132ff4: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x132ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_132ff8:
    // 0x132ff8: 0xc0420d2  jal         func_108348
label_132ffc:
    if (ctx->pc == 0x132FFCu) {
        ctx->pc = 0x132FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132FF8u;
        // 0x132ffc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133000u;
        goto label_133000;
    }
    ctx->pc = 0x132FF8u;
    SET_GPR_U32(ctx, 31, 0x133000u);
    ctx->pc = 0x132FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132FF8u;
    // 0x132ffc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108348u, 0x132FF8u, 0x133000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133000u;
label_133000:
    // 0x133000: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x133000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_133004:
    // 0x133004: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x133004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_133008:
    // 0x133008: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x133008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_13300c:
    // 0x13300c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x13300cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_133010:
    // 0x133010: 0x40f809  jalr        $v0
label_133014:
    if (ctx->pc == 0x133014u) {
        ctx->pc = 0x133018u;
        goto label_133018;
    }
    ctx->pc = 0x133010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x133018u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133010u, 0x133018u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x133018u;
label_133018:
    // 0x133018: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x133018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_13301c:
    // 0x13301c: 0xc0420c6  jal         func_108318
label_133020:
    if (ctx->pc == 0x133020u) {
        ctx->pc = 0x133020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13301Cu;
        // 0x133020: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133024u;
        goto label_133024;
    }
    ctx->pc = 0x13301Cu;
    SET_GPR_U32(ctx, 31, 0x133024u);
    ctx->pc = 0x133020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13301Cu;
    // 0x133020: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108318u, 0x13301Cu, 0x133024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133024u;
label_133024:
    // 0x133024: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x133024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_133028:
    // 0x133028: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x133028u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13302c:
    // 0x13302c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13302cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_133030:
    // 0x133030: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x133030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_133034:
    // 0x133034: 0x3e00008  jr          $ra
label_133038:
    if (ctx->pc == 0x133038u) {
        ctx->pc = 0x133038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133034u;
        // 0x133038: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13303Cu;
        goto label_13303c;
    }
    ctx->pc = 0x133034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133034u;
        // 0x133038: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13303Cu;
label_13303c:
    // 0x13303c: 0x0  nop
    ctx->pc = 0x13303cu;
    // NOP
    ctx->pc = 0x133040u;
}
