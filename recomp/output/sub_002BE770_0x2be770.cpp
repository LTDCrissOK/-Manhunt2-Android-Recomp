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

// Function: sub_002BE770
// Address: 0x2be770 - 0x2be838
void sub_002BE770_0x2be770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BE770_0x2be770");
#endif

    switch (ctx->pc) {
        case 0x2be770u: goto label_2be770;
        case 0x2be774u: goto label_2be774;
        case 0x2be778u: goto label_2be778;
        case 0x2be77cu: goto label_2be77c;
        case 0x2be780u: goto label_2be780;
        case 0x2be784u: goto label_2be784;
        case 0x2be788u: goto label_2be788;
        case 0x2be78cu: goto label_2be78c;
        case 0x2be790u: goto label_2be790;
        case 0x2be794u: goto label_2be794;
        case 0x2be798u: goto label_2be798;
        case 0x2be79cu: goto label_2be79c;
        case 0x2be7a0u: goto label_2be7a0;
        case 0x2be7a4u: goto label_2be7a4;
        case 0x2be7a8u: goto label_2be7a8;
        case 0x2be7acu: goto label_2be7ac;
        case 0x2be7b0u: goto label_2be7b0;
        case 0x2be7b4u: goto label_2be7b4;
        case 0x2be7b8u: goto label_2be7b8;
        case 0x2be7bcu: goto label_2be7bc;
        case 0x2be7c0u: goto label_2be7c0;
        case 0x2be7c4u: goto label_2be7c4;
        case 0x2be7c8u: goto label_2be7c8;
        case 0x2be7ccu: goto label_2be7cc;
        case 0x2be7d0u: goto label_2be7d0;
        case 0x2be7d4u: goto label_2be7d4;
        case 0x2be7d8u: goto label_2be7d8;
        case 0x2be7dcu: goto label_2be7dc;
        case 0x2be7e0u: goto label_2be7e0;
        case 0x2be7e4u: goto label_2be7e4;
        case 0x2be7e8u: goto label_2be7e8;
        case 0x2be7ecu: goto label_2be7ec;
        case 0x2be7f0u: goto label_2be7f0;
        case 0x2be7f4u: goto label_2be7f4;
        case 0x2be7f8u: goto label_2be7f8;
        case 0x2be7fcu: goto label_2be7fc;
        case 0x2be800u: goto label_2be800;
        case 0x2be804u: goto label_2be804;
        case 0x2be808u: goto label_2be808;
        case 0x2be80cu: goto label_2be80c;
        case 0x2be810u: goto label_2be810;
        case 0x2be814u: goto label_2be814;
        case 0x2be818u: goto label_2be818;
        case 0x2be81cu: goto label_2be81c;
        case 0x2be820u: goto label_2be820;
        case 0x2be824u: goto label_2be824;
        case 0x2be828u: goto label_2be828;
        case 0x2be82cu: goto label_2be82c;
        case 0x2be830u: goto label_2be830;
        case 0x2be834u: goto label_2be834;
        default: break;
    }

    ctx->pc = 0x2be770u;

label_2be770:
    // 0x2be770: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2be770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2be774:
    // 0x2be774: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2be774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2be778:
    // 0x2be778: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2be778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2be77c:
    // 0x2be77c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2be77cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2be780:
    // 0x2be780: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2be780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2be784:
    // 0x2be784: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2be784u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2be788:
    // 0x2be788: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x2be788u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2be78c:
    // 0x2be78c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2be78cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2be790:
    // 0x2be790: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x2be790u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2be794:
    // 0x2be794: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x2be794u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
label_2be798:
    // 0x2be798: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2be798u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2be79c:
    // 0x2be79c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2be79cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_2be7a0:
    // 0x2be7a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2be7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2be7a4:
    // 0x2be7a4: 0x46007506  mov.s       $f20, $f14
    ctx->pc = 0x2be7a4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
label_2be7a8:
    // 0x2be7a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2be7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2be7ac:
    // 0x2be7ac: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2be7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_2be7b0:
    // 0x2be7b0: 0x8e51000c  lw          $s1, 0xC($s2)
    ctx->pc = 0x2be7b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2be7b4:
    // 0x2be7b4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2be7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2be7b8:
    // 0x2be7b8: 0x12220015  beq         $s1, $v0, . + 4 + (0x15 << 2)
label_2be7bc:
    if (ctx->pc == 0x2BE7BCu) {
        ctx->pc = 0x2BE7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE7B8u;
        // 0x2be7bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE7C0u;
        goto label_2be7c0;
    }
    ctx->pc = 0x2BE7B8u;
    {
        const bool branch_taken_0x2be7b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BE7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE7B8u;
        // 0x2be7bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be7b8) {
            ctx->pc = 0x2BE810u;
            goto label_2be810;
        }
    }
    ctx->pc = 0x2BE7C0u;
label_2be7c0:
    // 0x2be7c0: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2be7c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2be7c4:
    // 0x2be7c4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2be7c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2be7c8:
    // 0x2be7c8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2be7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2be7cc:
    // 0x2be7cc: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2be7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2be7d0:
    // 0x2be7d0: 0x40f809  jalr        $v0
label_2be7d4:
    if (ctx->pc == 0x2BE7D4u) {
        ctx->pc = 0x2BE7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE7D0u;
        // 0x2be7d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE7D8u;
        goto label_2be7d8;
    }
    ctx->pc = 0x2BE7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BE7D8u);
        ctx->pc = 0x2BE7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE7D0u;
        // 0x2be7d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE7D0u, 0x2BE7D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BE7D8u;
label_2be7d8:
    // 0x2be7d8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_2be7dc:
    if (ctx->pc == 0x2BE7DCu) {
        ctx->pc = 0x2BE7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE7D8u;
        // 0x2be7dc: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE7E0u;
        goto label_2be7e0;
    }
    ctx->pc = 0x2BE7D8u;
    {
        const bool branch_taken_0x2be7d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2be7d8) {
            ctx->pc = 0x2BE7DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE7D8u;
            // 0x2be7dc: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE7B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2be7b8;
        }
    }
    ctx->pc = 0x2BE7E0u;
label_2be7e0:
    // 0x2be7e0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2be7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2be7e4:
    // 0x2be7e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2be7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2be7e8:
    // 0x2be7e8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2be7e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_2be7ec:
    // 0x2be7ec: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2be7ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_2be7f0:
    // 0x2be7f0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2be7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2be7f4:
    // 0x2be7f4: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x2be7f4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_2be7f8:
    // 0x2be7f8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2be7f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2be7fc:
    // 0x2be7fc: 0x60f809  jalr        $v1
label_2be800:
    if (ctx->pc == 0x2BE800u) {
        ctx->pc = 0x2BE800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE7FCu;
        // 0x2be800: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE804u;
        goto label_2be804;
    }
    ctx->pc = 0x2BE7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2BE804u);
        ctx->pc = 0x2BE800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE7FCu;
        // 0x2be800: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE7FCu, 0x2BE804u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BE804u;
label_2be804:
    // 0x2be804: 0x1000ffec  b           . + 4 + (-0x14 << 2)
label_2be808:
    if (ctx->pc == 0x2BE808u) {
        ctx->pc = 0x2BE808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE804u;
        // 0x2be808: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE80Cu;
        goto label_2be80c;
    }
    ctx->pc = 0x2BE804u;
    {
        const bool branch_taken_0x2be804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE804u;
        // 0x2be808: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be804) {
            ctx->pc = 0x2BE7B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2be7b8;
        }
    }
    ctx->pc = 0x2BE80Cu;
label_2be80c:
    // 0x2be80c: 0x0  nop
    ctx->pc = 0x2be80cu;
    // NOP
label_2be810:
    // 0x2be810: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2be810u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2be814:
    // 0x2be814: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2be814u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2be818:
    // 0x2be818: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2be818u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2be81c:
    // 0x2be81c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2be81cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2be820:
    // 0x2be820: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2be820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2be824:
    // 0x2be824: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x2be824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2be828:
    // 0x2be828: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x2be828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2be82c:
    // 0x2be82c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2be82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2be830:
    // 0x2be830: 0x3e00008  jr          $ra
label_2be834:
    if (ctx->pc == 0x2BE834u) {
        ctx->pc = 0x2BE834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE830u;
        // 0x2be834: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE838u;
        goto label_fallthrough_0x2be830;
    }
    ctx->pc = 0x2BE830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE830u;
        // 0x2be834: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2be830:
    ctx->pc = 0x2BE838u;
}
