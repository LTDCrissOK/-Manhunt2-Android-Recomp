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

// Function: sub_003D8698
// Address: 0x3d8698 - 0x3d87a0
void sub_003D8698_0x3d8698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8698_0x3d8698");
#endif

    switch (ctx->pc) {
        case 0x3d86fcu: goto label_3d86fc;
        case 0x3d8720u: goto label_3d8720;
        case 0x3d8734u: goto label_3d8734;
        case 0x3d8750u: goto label_3d8750;
        default: break;
    }

    ctx->pc = 0x3d8698u;

    // 0x3d8698: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3d8698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3d869c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3d869cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3d86a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d86a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d86a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3d86a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d86a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3d86a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3d86ac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3d86acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3d86b0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3d86b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3d86b4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3d86b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3d86b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d86b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3d86bc: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x3d86bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3d86c0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x3d86c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x3d86c4: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x3d86c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3d86c8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x3d86c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x3d86cc: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x3d86ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3d86d0: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x3D86D0u;
    {
        const bool branch_taken_0x3d86d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D86D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D86D0u;
        // 0x3d86d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d86d0) {
            ctx->pc = 0x3D8780u;
            goto label_3d8780;
        }
    }
    ctx->pc = 0x3D86D8u;
    // 0x3d86d8: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x3d86d8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3d86dc: 0x2711023  subu        $v0, $s3, $s1
    ctx->pc = 0x3d86dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x3d86e0: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3D86E0u;
    {
        const bool branch_taken_0x3d86e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D86E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D86E0u;
        // 0x3d86e4: 0x2a883  sra         $s5, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d86e0) {
            ctx->pc = 0x3D873Cu;
            goto label_3d873c;
        }
    }
    ctx->pc = 0x3D86E8u;
    // 0x3d86e8: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D86E8u;
    {
        const bool branch_taken_0x3d86e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D86ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D86E8u;
        // 0x3d86ec: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d86e8) {
            ctx->pc = 0x3D8704u;
            goto label_3d8704;
        }
    }
    ctx->pc = 0x3D86F0u;
    // 0x3d86f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d86f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d86f4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3D86F4u;
    SET_GPR_U32(ctx, 31, 0x3D86FCu);
    ctx->pc = 0x3D86F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D86F4u;
    // 0x3d86f8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3D86F4u, 0x3D86FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D86FCu;
label_3d86fc:
    // 0x3d86fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D86FCu;
    {
        const bool branch_taken_0x3d86fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D86FCu;
        // 0x3d8700: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d86fc) {
            ctx->pc = 0x3D870Cu;
            goto label_3d870c;
        }
    }
    ctx->pc = 0x3D8704u;
label_3d8704:
    // 0x3d8704: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3d8704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8708: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3d8708u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d870c:
    // 0x3d870c: 0x12710004  beq         $s3, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D870Cu;
    {
        const bool branch_taken_0x3d870c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 17));
        ctx->pc = 0x3D8710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D870Cu;
        // 0x3d8710: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d870c) {
            ctx->pc = 0x3D8720u;
            goto label_3d8720;
        }
    }
    ctx->pc = 0x3D8714u;
    // 0x3d8714: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d8714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8718: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x3D8718u;
    SET_GPR_U32(ctx, 31, 0x3D8720u);
    ctx->pc = 0x3D871Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8718u;
    // 0x3d871c: 0x2653023  subu        $a2, $s3, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x3D8718u, 0x3D8720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8720u;
label_3d8720:
    // 0x3d8720: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3d8720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3d8724: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3D8724u;
    {
        const bool branch_taken_0x3d8724 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8724u;
        // 0x3d8728: 0x151080  sll         $v0, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8724) {
            ctx->pc = 0x3D8768u;
            goto label_3d8768;
        }
    }
    ctx->pc = 0x3D872Cu;
    // 0x3d872c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3D872Cu;
    SET_GPR_U32(ctx, 31, 0x3D8734u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3D872Cu, 0x3D8734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8734u;
label_3d8734:
    // 0x3d8734: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3D8734u;
    {
        const bool branch_taken_0x3d8734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8734u;
        // 0x3d8738: 0x151080  sll         $v0, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8734) {
            ctx->pc = 0x3D8768u;
            goto label_3d8768;
        }
    }
    ctx->pc = 0x3D873Cu;
label_3d873c:
    // 0x3d873c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D873Cu;
    {
        const bool branch_taken_0x3d873c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D873Cu;
        // 0x3d8740: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d873c) {
            ctx->pc = 0x3D8758u;
            goto label_3d8758;
        }
    }
    ctx->pc = 0x3D8744u;
    // 0x3d8744: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d8744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8748: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3D8748u;
    SET_GPR_U32(ctx, 31, 0x3D8750u);
    ctx->pc = 0x3D874Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8748u;
    // 0x3d874c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3D8748u, 0x3D8750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8750u;
label_3d8750:
    // 0x3d8750: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3D8750u;
    {
        const bool branch_taken_0x3d8750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8750u;
        // 0x3d8754: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8750) {
            ctx->pc = 0x3D8764u;
            goto label_3d8764;
        }
    }
    ctx->pc = 0x3D8758u;
label_3d8758:
    // 0x3d8758: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d8758u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d875c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3d875cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8760: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d8760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d8764:
    // 0x3d8764: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x3d8764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_3d8768:
    // 0x3d8768: 0x2901821  addu        $v1, $s4, $s0
    ctx->pc = 0x3d8768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x3d876c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3d876cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3d8770: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x3d8770u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x3d8774: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x3d8774u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x3d8778: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x3d8778u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x3d877c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d877cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d8780:
    // 0x3d8780: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3d8780u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3d8784: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3d8784u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d8788: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3d8788u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3d878c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3d878cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d8790: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3d8790u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3d8794: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d8794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d8798: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D879Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8798u;
        // 0x3d879c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D87A0u;
}
