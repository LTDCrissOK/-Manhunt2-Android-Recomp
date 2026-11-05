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

// Function: sub_00165F88
// Address: 0x165f88 - 0x166048
void sub_00165F88_0x165f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165F88_0x165f88");
#endif

    switch (ctx->pc) {
        case 0x165f88u: goto label_165f88;
        case 0x165f8cu: goto label_165f8c;
        case 0x165f90u: goto label_165f90;
        case 0x165f94u: goto label_165f94;
        case 0x165f98u: goto label_165f98;
        case 0x165f9cu: goto label_165f9c;
        case 0x165fa0u: goto label_165fa0;
        case 0x165fa4u: goto label_165fa4;
        case 0x165fa8u: goto label_165fa8;
        case 0x165facu: goto label_165fac;
        case 0x165fb0u: goto label_165fb0;
        case 0x165fb4u: goto label_165fb4;
        case 0x165fb8u: goto label_165fb8;
        case 0x165fbcu: goto label_165fbc;
        case 0x165fc0u: goto label_165fc0;
        case 0x165fc4u: goto label_165fc4;
        case 0x165fc8u: goto label_165fc8;
        case 0x165fccu: goto label_165fcc;
        case 0x165fd0u: goto label_165fd0;
        case 0x165fd4u: goto label_165fd4;
        case 0x165fd8u: goto label_165fd8;
        case 0x165fdcu: goto label_165fdc;
        case 0x165fe0u: goto label_165fe0;
        case 0x165fe4u: goto label_165fe4;
        case 0x165fe8u: goto label_165fe8;
        case 0x165fecu: goto label_165fec;
        case 0x165ff0u: goto label_165ff0;
        case 0x165ff4u: goto label_165ff4;
        case 0x165ff8u: goto label_165ff8;
        case 0x165ffcu: goto label_165ffc;
        case 0x166000u: goto label_166000;
        case 0x166004u: goto label_166004;
        case 0x166008u: goto label_166008;
        case 0x16600cu: goto label_16600c;
        case 0x166010u: goto label_166010;
        case 0x166014u: goto label_166014;
        case 0x166018u: goto label_166018;
        case 0x16601cu: goto label_16601c;
        case 0x166020u: goto label_166020;
        case 0x166024u: goto label_166024;
        case 0x166028u: goto label_166028;
        case 0x16602cu: goto label_16602c;
        case 0x166030u: goto label_166030;
        case 0x166034u: goto label_166034;
        case 0x166038u: goto label_166038;
        case 0x16603cu: goto label_16603c;
        case 0x166040u: goto label_166040;
        case 0x166044u: goto label_166044;
        default: break;
    }

    ctx->pc = 0x165f88u;

label_165f88:
    // 0x165f88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x165f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_165f8c:
    // 0x165f8c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x165f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_165f90:
    // 0x165f90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x165f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_165f94:
    // 0x165f94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x165f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_165f98:
    // 0x165f98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x165f98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_165f9c:
    // 0x165f9c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x165f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_165fa0:
    // 0x165fa0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x165fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_165fa4:
    // 0x165fa4: 0x54430024  bnel        $v0, $v1, . + 4 + (0x24 << 2)
label_165fa8:
    if (ctx->pc == 0x165FA8u) {
        ctx->pc = 0x165FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165FA4u;
        // 0x165fa8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165FACu;
        goto label_165fac;
    }
    ctx->pc = 0x165FA4u;
    {
        const bool branch_taken_0x165fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x165fa4) {
            ctx->pc = 0x165FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165FA4u;
            // 0x165fa8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166038u;
            goto label_166038;
        }
    }
    ctx->pc = 0x165FACu;
label_165fac:
    // 0x165fac: 0xc04f0b6  jal         func_13C2D8
label_165fb0:
    if (ctx->pc == 0x165FB0u) {
        ctx->pc = 0x165FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165FACu;
        // 0x165fb0: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165FB4u;
        goto label_165fb4;
    }
    ctx->pc = 0x165FACu;
    SET_GPR_U32(ctx, 31, 0x165FB4u);
    ctx->pc = 0x165FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165FACu;
    // 0x165fb0: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x165FACu, 0x165FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165FB4u;
label_165fb4:
    // 0x165fb4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x165fb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_165fb8:
    // 0x165fb8: 0x8e0502e4  lw          $a1, 0x2E4($s0)
    ctx->pc = 0x165fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 740)));
label_165fbc:
    // 0x165fbc: 0xc045fea  jal         func_117FA8
label_165fc0:
    if (ctx->pc == 0x165FC0u) {
        ctx->pc = 0x165FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165FBCu;
        // 0x165fc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165FC4u;
        goto label_165fc4;
    }
    ctx->pc = 0x165FBCu;
    SET_GPR_U32(ctx, 31, 0x165FC4u);
    ctx->pc = 0x165FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165FBCu;
    // 0x165fc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x165FBCu, 0x165FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165FC4u;
label_165fc4:
    // 0x165fc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x165fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_165fc8:
    // 0x165fc8: 0xc046104  jal         func_118410
label_165fcc:
    if (ctx->pc == 0x165FCCu) {
        ctx->pc = 0x165FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165FC8u;
        // 0x165fcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165FD0u;
        goto label_165fd0;
    }
    ctx->pc = 0x165FC8u;
    SET_GPR_U32(ctx, 31, 0x165FD0u);
    ctx->pc = 0x165FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165FC8u;
    // 0x165fcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x165FC8u, 0x165FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165FD0u;
label_165fd0:
    // 0x165fd0: 0x26070228  addiu       $a3, $s0, 0x228
    ctx->pc = 0x165fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 552));
label_165fd4:
    // 0x165fd4: 0x2606022c  addiu       $a2, $s0, 0x22C
    ctx->pc = 0x165fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 556));
label_165fd8:
    // 0x165fd8: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x165fd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_165fdc:
    // 0x165fdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x165fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_165fe0:
    // 0x165fe0: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x165fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_165fe4:
    // 0x165fe4: 0x0  nop
    ctx->pc = 0x165fe4u;
    // NOP
label_165fe8:
    // 0x165fe8: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x165fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_165fec:
    // 0x165fec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x165fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_165ff0:
    // 0x165ff0: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_165ff4:
    if (ctx->pc == 0x165FF4u) {
        ctx->pc = 0x165FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165FF0u;
        // 0x165ff4: 0xc31021  addu        $v0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165FF8u;
        goto label_165ff8;
    }
    ctx->pc = 0x165FF0u;
    {
        const bool branch_taken_0x165ff0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x165FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165FF0u;
        // 0x165ff4: 0xc31021  addu        $v0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165ff0) {
            ctx->pc = 0x166020u;
            goto label_166020;
        }
    }
    ctx->pc = 0x165FF8u;
label_165ff8:
    // 0x165ff8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x165ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_165ffc:
    // 0x165ffc: 0x14680009  bne         $v1, $t0, . + 4 + (0x9 << 2)
label_166000:
    if (ctx->pc == 0x166000u) {
        ctx->pc = 0x166000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165FFCu;
        // 0x166000: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166004u;
        goto label_166004;
    }
    ctx->pc = 0x165FFCu;
    {
        const bool branch_taken_0x165ffc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        ctx->pc = 0x166000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165FFCu;
        // 0x166000: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165ffc) {
            ctx->pc = 0x166024u;
            goto label_166024;
        }
    }
    ctx->pc = 0x166004u;
label_166004:
    // 0x166004: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x166004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_166008:
    // 0x166008: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x166008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16600c:
    // 0x16600c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x16600cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_166010:
    // 0x166010: 0x40f809  jalr        $v0
label_166014:
    if (ctx->pc == 0x166014u) {
        ctx->pc = 0x166014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166010u;
        // 0x166014: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166018u;
        goto label_166018;
    }
    ctx->pc = 0x166010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x166018u);
        ctx->pc = 0x166014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166010u;
        // 0x166014: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166010u, 0x166018u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166018u;
label_166018:
    // 0x166018: 0x10000007  b           . + 4 + (0x7 << 2)
label_16601c:
    if (ctx->pc == 0x16601Cu) {
        ctx->pc = 0x16601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166018u;
        // 0x16601c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166020u;
        goto label_166020;
    }
    ctx->pc = 0x166018u;
    {
        const bool branch_taken_0x166018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166018u;
        // 0x16601c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166018) {
            ctx->pc = 0x166038u;
            goto label_166038;
        }
    }
    ctx->pc = 0x166020u;
label_166020:
    // 0x166020: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x166020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_166024:
    // 0x166024: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x166024u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_166028:
    // 0x166028: 0x2ca30010  sltiu       $v1, $a1, 0x10
    ctx->pc = 0x166028u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_16602c:
    // 0x16602c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
label_166030:
    if (ctx->pc == 0x166030u) {
        ctx->pc = 0x166030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16602Cu;
        // 0x166030: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166034u;
        goto label_166034;
    }
    ctx->pc = 0x16602Cu;
    {
        const bool branch_taken_0x16602c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x166030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16602Cu;
        // 0x166030: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16602c) {
            ctx->pc = 0x165FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165fe8;
        }
    }
    ctx->pc = 0x166034u;
label_166034:
    // 0x166034: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x166034u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_166038:
    // 0x166038: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x166038u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_16603c:
    // 0x16603c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16603cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_166040:
    // 0x166040: 0x3e00008  jr          $ra
label_166044:
    if (ctx->pc == 0x166044u) {
        ctx->pc = 0x166044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166040u;
        // 0x166044: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166048u;
        goto label_fallthrough_0x166040;
    }
    ctx->pc = 0x166040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166040u;
        // 0x166044: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x166040:
    ctx->pc = 0x166048u;
}
