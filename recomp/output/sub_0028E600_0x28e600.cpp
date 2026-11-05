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

// Function: sub_0028E600
// Address: 0x28e600 - 0x28e750
void sub_0028E600_0x28e600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E600_0x28e600");
#endif

    switch (ctx->pc) {
        case 0x28e628u: goto label_28e628;
        case 0x28e634u: goto label_28e634;
        case 0x28e6a8u: goto label_28e6a8;
        case 0x28e6d0u: goto label_28e6d0;
        case 0x28e6f0u: goto label_28e6f0;
        case 0x28e71cu: goto label_28e71c;
        default: break;
    }

    ctx->pc = 0x28e600u;

    // 0x28e600: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28e600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28e604: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x28e604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x28e608: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28e608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e60c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x28e60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28e610: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x28e610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x28e614: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x28e614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x28e618: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x28e618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x28e61c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x28e61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x28e620: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x28E620u;
    SET_GPR_U32(ctx, 31, 0x28E628u);
    ctx->pc = 0x28E624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E620u;
    // 0x28e624: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x28E620u, 0x28E628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E628u;
label_28e628:
    // 0x28e628: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28e628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e62c: 0xc0a371c  jal         func_28DC70
    ctx->pc = 0x28E62Cu;
    SET_GPR_U32(ctx, 31, 0x28E634u);
    ctx->pc = 0x28E630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E62Cu;
    // 0x28e630: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DC70u, 0x28E62Cu, 0x28E634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E634u;
label_28e634:
    // 0x28e634: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x28e634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x28e638: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x28e638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x28e63c: 0x24921128  addiu       $s2, $a0, 0x1128
    ctx->pc = 0x28e63cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4392));
    // 0x28e640: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x28e640u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x4C112Cu));
    // 0x28e644: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x28e644u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4C1134u));
    // 0x28e648: 0x12030007  beq         $s0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x28E648u;
    {
        const bool branch_taken_0x28e648 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x28E64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E648u;
        // 0x28e64c: 0x3a0a02d  daddu       $s4, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e648) {
            ctx->pc = 0x28E668u;
            goto label_28e668;
        }
    }
    ctx->pc = 0x28E650u;
    // 0x28e650: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x28E650u;
    {
        const bool branch_taken_0x28e650 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e650) {
            ctx->pc = 0x28E654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28E650u;
            // 0x28e654: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28E658u;
            goto label_28e658;
        }
    }
    ctx->pc = 0x28E658u;
label_28e658:
    // 0x28e658: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x28e658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x28e65c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x28e65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x28e660: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x28E660u;
    {
        const bool branch_taken_0x28e660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E660u;
        // 0x28e664: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e660) {
            ctx->pc = 0x28E72Cu;
            goto label_28e72c;
        }
    }
    ctx->pc = 0x28E668u;
label_28e668:
    // 0x28e668: 0x8c831128  lw          $v1, 0x1128($a0)
    ctx->pc = 0x28e668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4392)));
    // 0x28e66c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28e66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e670: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x28e670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x28e674: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x28e674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x28e678: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x28e678u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x28e67c: 0x27a20008  addiu       $v0, $sp, 0x8
    ctx->pc = 0x28e67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x28e680: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x28e680u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x28e684: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x28e684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x28e688: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x28e688u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x28e68c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x28e68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28e690: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x28e690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28e694: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28E694u;
    {
        const bool branch_taken_0x28e694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E694u;
        // 0x28e698: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e694) {
            ctx->pc = 0x28E6B0u;
            goto label_28e6b0;
        }
    }
    ctx->pc = 0x28E69Cu;
    // 0x28e69c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28e69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e6a0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x28E6A0u;
    SET_GPR_U32(ctx, 31, 0x28E6A8u);
    ctx->pc = 0x28E6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E6A0u;
    // 0x28e6a4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x28E6A0u, 0x28E6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E6A8u;
label_28e6a8:
    // 0x28e6a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28E6A8u;
    {
        const bool branch_taken_0x28e6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E6A8u;
        // 0x28e6ac: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e6a8) {
            ctx->pc = 0x28E6B8u;
            goto label_28e6b8;
        }
    }
    ctx->pc = 0x28E6B0u;
label_28e6b0:
    // 0x28e6b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28e6b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e6b4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x28e6b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e6b8:
    // 0x28e6b8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x28e6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28e6bc: 0x12050006  beq         $s0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x28E6BCu;
    {
        const bool branch_taken_0x28e6bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x28E6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E6BCu;
        // 0x28e6c0: 0x2058023  subu        $s0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e6bc) {
            ctx->pc = 0x28E6D8u;
            goto label_28e6d8;
        }
    }
    ctx->pc = 0x28E6C4u;
    // 0x28e6c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28e6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e6c8: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x28E6C8u;
    SET_GPR_U32(ctx, 31, 0x28E6D0u);
    ctx->pc = 0x28E6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E6C8u;
    // 0x28e6cc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x28E6C8u, 0x28E6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E6D0u;
label_28e6d0:
    // 0x28e6d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28E6D0u;
    {
        const bool branch_taken_0x28e6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E6D0u;
        // 0x28e6d4: 0x501821  addu        $v1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e6d0) {
            ctx->pc = 0x28E6DCu;
            goto label_28e6dc;
        }
    }
    ctx->pc = 0x28E6D8u;
label_28e6d8:
    // 0x28e6d8: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x28e6d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28e6dc:
    // 0x28e6dc: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x28e6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28e6e0: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x28e6e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e6e4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28e6e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e6e8: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28E6E8u;
    {
        const bool branch_taken_0x28e6e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e6e8) {
            ctx->pc = 0x28E6ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28E6E8u;
            // 0x28e6ec: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28E70Cu;
            goto label_28e70c;
        }
    }
    ctx->pc = 0x28E6F0u;
label_28e6f0:
    // 0x28e6f0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x28e6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x28e6f4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x28e6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28e6f8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x28e6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x28e6fc: 0x0  nop
    ctx->pc = 0x28e6fcu;
    // NOP
    // 0x28e700: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x28E700u;
    {
        const bool branch_taken_0x28e700 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E700u;
        // 0x28e704: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e700) {
            ctx->pc = 0x28E6F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28e6f0;
        }
    }
    ctx->pc = 0x28E708u;
    // 0x28e708: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x28e708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28e70c:
    // 0x28e70c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E70Cu;
    {
        const bool branch_taken_0x28e70c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E70Cu;
        // 0x28e710: 0x2711021  addu        $v0, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e70c) {
            ctx->pc = 0x28E720u;
            goto label_28e720;
        }
    }
    ctx->pc = 0x28E714u;
    // 0x28e714: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x28E714u;
    SET_GPR_U32(ctx, 31, 0x28E71Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x28E714u, 0x28E71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E71Cu;
label_28e71c:
    // 0x28e71c: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x28e71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_28e720:
    // 0x28e720: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x28e720u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x28e724: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x28e724u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x28e728: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x28e728u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
label_28e72c:
    // 0x28e72c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x28e72cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28e730: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x28e730u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28e734: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28e734u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28e738: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x28e738u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x28e73c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x28e73cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28e740: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x28e740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x28e744: 0x3e00008  jr          $ra
    ctx->pc = 0x28E744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E744u;
        // 0x28e748: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E74Cu;
    // 0x28e74c: 0x0  nop
    ctx->pc = 0x28e74cu;
    // NOP
    ctx->pc = 0x28e750u;
}
