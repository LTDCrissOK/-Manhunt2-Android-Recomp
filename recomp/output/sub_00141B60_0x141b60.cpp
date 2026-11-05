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

// Function: sub_00141B60
// Address: 0x141b60 - 0x141c2c
void sub_00141B60_0x141b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141B60_0x141b60");
#endif

    switch (ctx->pc) {
        case 0x141b78u: goto label_141b78;
        case 0x141b88u: goto label_141b88;
        case 0x141b98u: goto label_141b98;
        case 0x141ba8u: goto label_141ba8;
        case 0x141bb8u: goto label_141bb8;
        case 0x141bc8u: goto label_141bc8;
        case 0x141bd4u: goto label_141bd4;
        case 0x141c04u: goto label_141c04;
        case 0x141c14u: goto label_141c14;
        case 0x141c24u: goto label_141c24;
        default: break;
    }

    ctx->pc = 0x141b60u;

    // 0x141b60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x141b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x141b64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x141b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x141b68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x141b68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141b6c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x141b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x141b70: 0xc050714  jal         func_141C50
    ctx->pc = 0x141B70u;
    SET_GPR_U32(ctx, 31, 0x141B78u);
    ctx->pc = 0x141B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141B70u;
    // 0x141b74: 0xae000bf4  sw          $zero, 0xBF4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 3060), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141C50u, 0x141B70u, 0x141B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141B78u;
label_141b78:
    // 0x141b78: 0x54400031  bnel        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x141B78u;
    {
        const bool branch_taken_0x141b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141b78) {
            ctx->pc = 0x141B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141B78u;
            // 0x141b7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141C40u;
            return;
        }
    }
    ctx->pc = 0x141B80u;
    // 0x141b80: 0xc050776  jal         func_141DD8
    ctx->pc = 0x141B80u;
    SET_GPR_U32(ctx, 31, 0x141B88u);
    ctx->pc = 0x141B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141B80u;
    // 0x141b84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141DD8u, 0x141B80u, 0x141B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141B88u;
label_141b88:
    // 0x141b88: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x141B88u;
    {
        const bool branch_taken_0x141b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141b88) {
            ctx->pc = 0x141B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141B88u;
            // 0x141b8c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141C40u;
            return;
        }
    }
    ctx->pc = 0x141B90u;
    // 0x141b90: 0xc050788  jal         func_141E20
    ctx->pc = 0x141B90u;
    SET_GPR_U32(ctx, 31, 0x141B98u);
    ctx->pc = 0x141B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141B90u;
    // 0x141b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141E20u, 0x141B90u, 0x141B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141B98u;
label_141b98:
    // 0x141b98: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x141B98u;
    {
        const bool branch_taken_0x141b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141b98) {
            ctx->pc = 0x141B9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141B98u;
            // 0x141b9c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141C40u;
            return;
        }
    }
    ctx->pc = 0x141BA0u;
    // 0x141ba0: 0xc050790  jal         func_141E40
    ctx->pc = 0x141BA0u;
    SET_GPR_U32(ctx, 31, 0x141BA8u);
    ctx->pc = 0x141BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141BA0u;
    // 0x141ba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141E40u, 0x141BA0u, 0x141BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141BA8u;
label_141ba8:
    // 0x141ba8: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x141BA8u;
    {
        const bool branch_taken_0x141ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141ba8) {
            ctx->pc = 0x141BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141BA8u;
            // 0x141bac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141C40u;
            return;
        }
    }
    ctx->pc = 0x141BB0u;
    // 0x141bb0: 0xc0507ce  jal         func_141F38
    ctx->pc = 0x141BB0u;
    SET_GPR_U32(ctx, 31, 0x141BB8u);
    ctx->pc = 0x141BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141BB0u;
    // 0x141bb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141F38u, 0x141BB0u, 0x141BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141BB8u;
label_141bb8:
    // 0x141bb8: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x141BB8u;
    {
        const bool branch_taken_0x141bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141bb8) {
            ctx->pc = 0x141BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141BB8u;
            // 0x141bbc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141C40u;
            return;
        }
    }
    ctx->pc = 0x141BC0u;
    // 0x141bc0: 0xc0507b2  jal         func_141EC8
    ctx->pc = 0x141BC0u;
    SET_GPR_U32(ctx, 31, 0x141BC8u);
    ctx->pc = 0x141BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141BC0u;
    // 0x141bc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141EC8u, 0x141BC0u, 0x141BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141BC8u;
label_141bc8:
    // 0x141bc8: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x141bc8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x141bcc: 0xc0508b8  jal         func_1422E0
    ctx->pc = 0x141BCCu;
    SET_GPR_U32(ctx, 31, 0x141BD4u);
    ctx->pc = 0x141BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141BCCu;
    // 0x141bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1422E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1422E0u, 0x141BCCu, 0x141BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141BD4u;
label_141bd4:
    // 0x141bd4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x141bd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141bd8: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x141bd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x141bdc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x141BDCu;
    {
        const bool branch_taken_0x141bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x141BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141BDCu;
        // 0x141be0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141bdc) {
            ctx->pc = 0x141C34u;
            return;
        }
    }
    ctx->pc = 0x141BE4u;
    // 0x141be4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x141be4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x141be8: 0x2442e920  addiu       $v0, $v0, -0x16E0
    ctx->pc = 0x141be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961440));
    // 0x141bec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x141becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x141bf0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x141bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x141bf4: 0x800008  jr          $a0
    ctx->pc = 0x141BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x141BFCu: goto label_141bfc;
            case 0x141C0Cu: goto label_141c0c;
            case 0x141C1Cu: goto label_141c1c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141BF4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x141BFCu;
label_141bfc:
    // 0x141bfc: 0xc05071c  jal         func_141C70
    ctx->pc = 0x141BFCu;
    SET_GPR_U32(ctx, 31, 0x141C04u);
    ctx->pc = 0x141C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141BFCu;
    // 0x141c00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141C70u, 0x141BFCu, 0x141C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141C04u;
label_141c04:
    // 0x141c04: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x141C04u;
    {
        const bool branch_taken_0x141c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x141c04) {
            ctx->pc = 0x141C34u;
            return;
        }
    }
    ctx->pc = 0x141C0Cu;
label_141c0c:
    // 0x141c0c: 0xc05073c  jal         func_141CF0
    ctx->pc = 0x141C0Cu;
    SET_GPR_U32(ctx, 31, 0x141C14u);
    ctx->pc = 0x141C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141C0Cu;
    // 0x141c10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141CF0u, 0x141C0Cu, 0x141C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141C14u;
label_141c14:
    // 0x141c14: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x141C14u;
    {
        const bool branch_taken_0x141c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x141c14) {
            ctx->pc = 0x141C34u;
            return;
        }
    }
    ctx->pc = 0x141C1Cu;
label_141c1c:
    // 0x141c1c: 0xc050752  jal         func_141D48
    ctx->pc = 0x141C1Cu;
    SET_GPR_U32(ctx, 31, 0x141C24u);
    ctx->pc = 0x141C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141C1Cu;
    // 0x141c20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141D48u, 0x141C1Cu, 0x141C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141C24u;
label_141c24:
    // 0x141c24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x141C24u;
    {
        const bool branch_taken_0x141c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x141c24) {
            ctx->pc = 0x141C34u;
            return;
        }
    }
    ctx->pc = 0x141C2Cu;
}
