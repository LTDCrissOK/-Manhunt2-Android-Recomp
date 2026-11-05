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

// Function: sub_003D66C0
// Address: 0x3d66c0 - 0x3d6800
void sub_003D66C0_0x3d66c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D66C0_0x3d66c0");
#endif

    switch (ctx->pc) {
        case 0x3d66f8u: goto label_3d66f8;
        case 0x3d6704u: goto label_3d6704;
        case 0x3d6720u: goto label_3d6720;
        case 0x3d6734u: goto label_3d6734;
        case 0x3d6740u: goto label_3d6740;
        case 0x3d6780u: goto label_3d6780;
        case 0x3d6790u: goto label_3d6790;
        case 0x3d67bcu: goto label_3d67bc;
        case 0x3d67c8u: goto label_3d67c8;
        default: break;
    }

    ctx->pc = 0x3d66c0u;

    // 0x3d66c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3d66c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3d66c4: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x3d66c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x3d66c8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3d66c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3d66cc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3d66ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d66d0: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x3d66d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x3d66d4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x3d66d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x3d66d8: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x3d66d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x3d66dc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3d66dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x3d66e0: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x3d66e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x3d66e4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3D66E4u;
    {
        const bool branch_taken_0x3d66e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D66E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D66E4u;
        // 0x3d66e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d66e4) {
            ctx->pc = 0x3D6718u;
            goto label_3d6718;
        }
    }
    ctx->pc = 0x3D66ECu;
    // 0x3d66ec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3d66ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3d66f0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3D66F0u;
    {
        const bool branch_taken_0x3d66f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D66F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D66F0u;
        // 0x3d66f4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d66f0) {
            ctx->pc = 0x3D6724u;
            goto label_3d6724;
        }
    }
    ctx->pc = 0x3D66F8u;
label_3d66f8:
    // 0x3d66f8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3d66f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3d66fc: 0xc0f597c  jal         func_3D65F0
    ctx->pc = 0x3D66FCu;
    SET_GPR_U32(ctx, 31, 0x3D6704u);
    ctx->pc = 0x3D6700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D66FCu;
    // 0x3d6700: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D65F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D65F0u, 0x3D66FCu, 0x3D6704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6704u;
label_3d6704:
    // 0x3d6704: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d6704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3d6708: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3D6708u;
    {
        const bool branch_taken_0x3d6708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D670Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6708u;
        // 0x3d670c: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6708) {
            ctx->pc = 0x3D66F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d66f8;
        }
    }
    ctx->pc = 0x3D6710u;
    // 0x3d6710: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3D6710u;
    {
        const bool branch_taken_0x3d6710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6710u;
        // 0x3d6714: 0x148080  sll         $s0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6710) {
            ctx->pc = 0x3D6728u;
            goto label_3d6728;
        }
    }
    ctx->pc = 0x3D6718u;
label_3d6718:
    // 0x3d6718: 0xc0f597c  jal         func_3D65F0
    ctx->pc = 0x3D6718u;
    SET_GPR_U32(ctx, 31, 0x3D6720u);
    ctx->pc = 0x3D671Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6718u;
    // 0x3d671c: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D65F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D65F0u, 0x3D6718u, 0x3D6720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6720u;
label_3d6720:
    // 0x3d6720: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3d6720u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d6724:
    // 0x3d6724: 0x148080  sll         $s0, $s4, 2
    ctx->pc = 0x3d6724u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_3d6728:
    // 0x3d6728: 0xae740010  sw          $s4, 0x10($s3)
    ctx->pc = 0x3d6728u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 20));
    // 0x3d672c: 0xc0b241a  jal         func_2C9068
    ctx->pc = 0x3D672Cu;
    SET_GPR_U32(ctx, 31, 0x3D6734u);
    ctx->pc = 0x3D6730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D672Cu;
    // 0x3d6730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9068u, 0x3D672Cu, 0x3D6734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6734u;
label_3d6734:
    // 0x3d6734: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3d6734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3d6738: 0xc0b241a  jal         func_2C9068
    ctx->pc = 0x3D6738u;
    SET_GPR_U32(ctx, 31, 0x3D6740u);
    ctx->pc = 0x3D673Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6738u;
    // 0x3d673c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9068u, 0x3D6738u, 0x3D6740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6740u;
label_3d6740:
    // 0x3d6740: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3d6740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3d6744: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x3d6744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x3d6748: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3d6748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3d674c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x3d674cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x3d6750: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x3d6750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x3d6754: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3d6754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x3d6758: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x3d6758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x3d675c: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3D675Cu;
    {
        const bool branch_taken_0x3d675c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D675Cu;
        // 0x3d6760: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d675c) {
            ctx->pc = 0x3D67A8u;
            goto label_3d67a8;
        }
    }
    ctx->pc = 0x3D6764u;
    // 0x3d6764: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d6764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6768: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3d6768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3d676c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3D676Cu;
    {
        const bool branch_taken_0x3d676c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D676Cu;
        // 0x3d6770: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d676c) {
            ctx->pc = 0x3D67BCu;
            goto label_3d67bc;
        }
    }
    ctx->pc = 0x3D6774u;
    // 0x3d6774: 0x27b10014  addiu       $s1, $sp, 0x14
    ctx->pc = 0x3d6774u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x3d6778: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3d6778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3d677c: 0x0  nop
    ctx->pc = 0x3d677cu;
    // NOP
label_3d6780:
    // 0x3d6780: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3d6780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6784: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3d6784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6788: 0xc0f598e  jal         func_3D6638
    ctx->pc = 0x3D6788u;
    SET_GPR_U32(ctx, 31, 0x3D6790u);
    ctx->pc = 0x3D678Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6788u;
    // 0x3d678c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D6638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D6638u, 0x3D6788u, 0x3D6790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6790u;
label_3d6790:
    // 0x3d6790: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3d6790u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x3d6794: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3d6794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3d6798: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3D6798u;
    {
        const bool branch_taken_0x3d6798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d6798) {
            ctx->pc = 0x3D679Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D6798u;
            // 0x3d679c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D6780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d6780;
        }
    }
    ctx->pc = 0x3D67A0u;
    // 0x3d67a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3D67A0u;
    {
        const bool branch_taken_0x3d67a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D67A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D67A0u;
        // 0x3d67a4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d67a0) {
            ctx->pc = 0x3D67C0u;
            goto label_3d67c0;
        }
    }
    ctx->pc = 0x3D67A8u;
label_3d67a8:
    // 0x3d67a8: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x3d67a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x3d67ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3d67acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d67b0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3d67b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3d67b4: 0xc0f598e  jal         func_3D6638
    ctx->pc = 0x3D67B4u;
    SET_GPR_U32(ctx, 31, 0x3D67BCu);
    ctx->pc = 0x3D67B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D67B4u;
    // 0x3d67b8: 0x27a70014  addiu       $a3, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D6638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D6638u, 0x3D67B4u, 0x3D67BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D67BCu;
label_3d67bc:
    // 0x3d67bc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3d67bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d67c0:
    // 0x3d67c0: 0xc0f58e2  jal         func_3D6388
    ctx->pc = 0x3D67C0u;
    SET_GPR_U32(ctx, 31, 0x3D67C8u);
    ctx->pc = 0x3D67C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D67C0u;
    // 0x3d67c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D6388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D6388u, 0x3D67C0u, 0x3D67C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D67C8u;
label_3d67c8:
    // 0x3d67c8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x3d67c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d67cc: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x3d67ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x3d67d0: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x3d67d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x3d67d4: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x3d67d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x3d67d8: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x3d67d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x3d67dc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3d67dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3d67e0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x3d67e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3d67e4: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x3d67e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3d67e8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x3d67e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d67ec: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x3d67ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d67f0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3d67f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d67f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3D67F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D67F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D67F4u;
        // 0x3d67f8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D67F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D67FCu;
    // 0x3d67fc: 0x0  nop
    ctx->pc = 0x3d67fcu;
    // NOP
    ctx->pc = 0x3d6800u;
}
