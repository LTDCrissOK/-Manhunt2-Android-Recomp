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

// Function: sub_001E6418
// Address: 0x1e6418 - 0x1e6598
void sub_001E6418_0x1e6418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6418_0x1e6418");
#endif

    switch (ctx->pc) {
        case 0x1e646cu: goto label_1e646c;
        case 0x1e6490u: goto label_1e6490;
        case 0x1e64f4u: goto label_1e64f4;
        case 0x1e6504u: goto label_1e6504;
        case 0x1e6518u: goto label_1e6518;
        case 0x1e6528u: goto label_1e6528;
        case 0x1e656cu: goto label_1e656c;
        default: break;
    }

    ctx->pc = 0x1e6418u;

    // 0x1e6418: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e6418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e641c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1e641cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1e6420: 0x27a20008  addiu       $v0, $sp, 0x8
    ctx->pc = 0x1e6420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1e6424: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1e6424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1e6428: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1e6428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e642c: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x1e642cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x1e6430: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e6430u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6434: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1e6434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1e6438: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1e6438u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e643c: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1e643cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1e6440: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e6440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6444: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1e6444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1e6448: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1e6448u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e644c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1e644cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1e6450: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1e6450u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6454: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1e6454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1e6458: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e6458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e645c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1e645cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1e6460: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e6460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6464: 0xc0854d4  jal         func_215350
    ctx->pc = 0x1E6464u;
    SET_GPR_U32(ctx, 31, 0x1E646Cu);
    ctx->pc = 0x1E6468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6464u;
    // 0x1e6468: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215350u, 0x1E6464u, 0x1E646Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E646Cu;
label_1e646c:
    // 0x1e646c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1e646cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6470: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1e6470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1e6474: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E6474u;
    {
        const bool branch_taken_0x1e6474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E6478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6474u;
        // 0x1e6478: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6474) {
            ctx->pc = 0x1E6480u;
            goto label_1e6480;
        }
    }
    ctx->pc = 0x1E647Cu;
    // 0x1e647c: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1e647cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e6480:
    // 0x1e6480: 0x12000034  beqz        $s0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1E6480u;
    {
        const bool branch_taken_0x1e6480 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6480u;
        // 0x1e6484: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6480) {
            ctx->pc = 0x1E6554u;
            goto label_1e6554;
        }
    }
    ctx->pc = 0x1E6488u;
    // 0x1e6488: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x1e6488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x1e648c: 0x0  nop
    ctx->pc = 0x1e648cu;
    // NOP
label_1e6490:
    // 0x1e6490: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1e6490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e6494: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x1e6494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x1e6498: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1E6498u;
    {
        const bool branch_taken_0x1e6498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E649Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6498u;
        // 0x1e649c: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6498) {
            ctx->pc = 0x1E652Cu;
            goto label_1e652c;
        }
    }
    ctx->pc = 0x1E64A0u;
    // 0x1e64a0: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x1e64a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1e64a4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1e64a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1e64a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E64A8u;
    {
        const bool branch_taken_0x1e64a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e64a8) {
            ctx->pc = 0x1E64C0u;
            goto label_1e64c0;
        }
    }
    ctx->pc = 0x1E64B0u;
    // 0x1e64b0: 0x1280001f  beqz        $s4, . + 4 + (0x1F << 2)
    ctx->pc = 0x1E64B0u;
    {
        const bool branch_taken_0x1e64b0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E64B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E64B0u;
        // 0x1e64b4: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e64b0) {
            ctx->pc = 0x1E6530u;
            goto label_1e6530;
        }
    }
    ctx->pc = 0x1E64B8u;
    // 0x1e64b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E64B8u;
    {
        const bool branch_taken_0x1e64b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E64BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E64B8u;
        // 0x1e64bc: 0x8e0300c4  lw          $v1, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e64b8) {
            ctx->pc = 0x1E64CCu;
            goto label_1e64cc;
        }
    }
    ctx->pc = 0x1E64C0u;
label_1e64c0:
    // 0x1e64c0: 0x1260001a  beqz        $s3, . + 4 + (0x1A << 2)
    ctx->pc = 0x1E64C0u;
    {
        const bool branch_taken_0x1e64c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E64C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E64C0u;
        // 0x1e64c4: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e64c0) {
            ctx->pc = 0x1E652Cu;
            goto label_1e652c;
        }
    }
    ctx->pc = 0x1E64C8u;
    // 0x1e64c8: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x1e64c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_1e64cc:
    // 0x1e64cc: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x1e64ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1e64d0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1e64d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1e64d4: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1E64D4u;
    {
        const bool branch_taken_0x1e64d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e64d4) {
            ctx->pc = 0x1E64D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E64D4u;
            // 0x1e64d8: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E650Cu;
            goto label_1e650c;
        }
    }
    ctx->pc = 0x1E64DCu;
    // 0x1e64dc: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x1e64dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1e64e0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1E64E0u;
    {
        const bool branch_taken_0x1e64e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e64e0) {
            ctx->pc = 0x1E64E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E64E0u;
            // 0x1e64e4: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E650Cu;
            goto label_1e650c;
        }
    }
    ctx->pc = 0x1E64E8u;
    // 0x1e64e8: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x1e64e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e64ec: 0xc078932  jal         func_1E24C8
    ctx->pc = 0x1E64ECu;
    SET_GPR_U32(ctx, 31, 0x1E64F4u);
    ctx->pc = 0x1E64F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E64ECu;
    // 0x1e64f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E24C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E24C8u, 0x1E64ECu, 0x1E64F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E64F4u;
label_1e64f4:
    // 0x1e64f4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E64F4u;
    {
        const bool branch_taken_0x1e64f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E64F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E64F4u;
        // 0x1e64f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e64f4) {
            ctx->pc = 0x1E6528u;
            goto label_1e6528;
        }
    }
    ctx->pc = 0x1E64FCu;
    // 0x1e64fc: 0xc079966  jal         func_1E6598
    ctx->pc = 0x1E64FCu;
    SET_GPR_U32(ctx, 31, 0x1E6504u);
    ctx->pc = 0x1E6500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E64FCu;
    // 0x1e6500: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6598u, 0x1E64FCu, 0x1E6504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6504u;
label_1e6504:
    // 0x1e6504: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1E6504u;
    {
        const bool branch_taken_0x1e6504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6504u;
        // 0x1e6508: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6504) {
            ctx->pc = 0x1E652Cu;
            goto label_1e652c;
        }
    }
    ctx->pc = 0x1E650Cu;
label_1e650c:
    // 0x1e650c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e650cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6510: 0xc0788a0  jal         func_1E2280
    ctx->pc = 0x1E6510u;
    SET_GPR_U32(ctx, 31, 0x1E6518u);
    ctx->pc = 0x1E6514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6510u;
    // 0x1e6514: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2280u, 0x1E6510u, 0x1E6518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6518u;
label_1e6518:
    // 0x1e6518: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6518u;
    {
        const bool branch_taken_0x1e6518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E651Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6518u;
        // 0x1e651c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6518) {
            ctx->pc = 0x1E6528u;
            goto label_1e6528;
        }
    }
    ctx->pc = 0x1E6520u;
    // 0x1e6520: 0xc079966  jal         func_1E6598
    ctx->pc = 0x1E6520u;
    SET_GPR_U32(ctx, 31, 0x1E6528u);
    ctx->pc = 0x1E6524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6520u;
    // 0x1e6524: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6598u, 0x1E6520u, 0x1E6528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6528u;
label_1e6528:
    // 0x1e6528: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1e6528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1e652c:
    // 0x1e652c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e652cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1e6530:
    // 0x1e6530: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E6530u;
    {
        const bool branch_taken_0x1e6530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1E6534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6530u;
        // 0x1e6534: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6530) {
            ctx->pc = 0x1E6548u;
            goto label_1e6548;
        }
    }
    ctx->pc = 0x1E6538u;
    // 0x1e6538: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x1e6538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1e653c: 0x10440002  beq         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E653Cu;
    {
        const bool branch_taken_0x1e653c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1E6540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E653Cu;
        // 0x1e6540: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e653c) {
            ctx->pc = 0x1E6548u;
            goto label_1e6548;
        }
    }
    ctx->pc = 0x1E6544u;
    // 0x1e6544: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x1e6544u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1e6548:
    // 0x1e6548: 0x5600ffd1  bnel        $s0, $zero, . + 4 + (-0x2F << 2)
    ctx->pc = 0x1E6548u;
    {
        const bool branch_taken_0x1e6548 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6548) {
            ctx->pc = 0x1E654Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E6548u;
            // 0x1e654c: 0x8e0300b8  lw          $v1, 0xB8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E6490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e6490;
        }
    }
    ctx->pc = 0x1E6550u;
    // 0x1e6550: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1e6550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_1e6554:
    // 0x1e6554: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1e6554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6558: 0x8c4391e0  lw          $v1, -0x6E20($v0)
    ctx->pc = 0x1e6558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939104)));
    // 0x1e655c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E655Cu;
    {
        const bool branch_taken_0x1e655c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E655Cu;
        // 0x1e6560: 0x3802b  sltu        $s0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e655c) {
            ctx->pc = 0x1E656Cu;
            goto label_1e656c;
        }
    }
    ctx->pc = 0x1E6564u;
    // 0x1e6564: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1E6564u;
    SET_GPR_U32(ctx, 31, 0x1E656Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1E6564u, 0x1E656Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E656Cu;
label_1e656c:
    // 0x1e656c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e656cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6570: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1e6570u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e6574: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1e6574u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e6578: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1e6578u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e657c: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1e657cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1e6580: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1e6580u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e6584: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x1e6584u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e6588: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1e6588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e658c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E658Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E658Cu;
        // 0x1e6590: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E658Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6594u;
    // 0x1e6594: 0x0  nop
    ctx->pc = 0x1e6594u;
    // NOP
    ctx->pc = 0x1e6598u;
}
