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

// Function: sub_0026C740
// Address: 0x26c740 - 0x26c830
void sub_0026C740_0x26c740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C740_0x26c740");
#endif

    switch (ctx->pc) {
        case 0x26c764u: goto label_26c764;
        case 0x26c778u: goto label_26c778;
        case 0x26c7a4u: goto label_26c7a4;
        case 0x26c7b0u: goto label_26c7b0;
        case 0x26c814u: goto label_26c814;
        default: break;
    }

    ctx->pc = 0x26c740u;

    // 0x26c740: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26c740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26c744: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x26c744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x26c748: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x26c748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x26c74c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26c74cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c750: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x26c750u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c754: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x26c754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x26c758: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x26c758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x26c75c: 0xc084536  jal         func_2114D8
    ctx->pc = 0x26C75Cu;
    SET_GPR_U32(ctx, 31, 0x26C764u);
    ctx->pc = 0x26C760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C75Cu;
    // 0x26c760: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2114D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2114D8u, 0x26C75Cu, 0x26C764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C764u;
label_26c764:
    // 0x26c764: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x26c764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x26c768: 0x26240240  addiu       $a0, $s1, 0x240
    ctx->pc = 0x26c768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 576));
    // 0x26c76c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x26c76cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26c770: 0xc0b189c  jal         func_2C6270
    ctx->pc = 0x26C770u;
    SET_GPR_U32(ctx, 31, 0x26C778u);
    ctx->pc = 0x26C774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C770u;
    // 0x26c774: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6270u, 0x26C770u, 0x26C778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C778u;
label_26c778:
    // 0x26c778: 0x8e230254  lw          $v1, 0x254($s1)
    ctx->pc = 0x26c778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x26c77c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26c77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c780: 0x14620025  bne         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x26C780u;
    {
        const bool branch_taken_0x26c780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26C784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C780u;
        // 0x26c784: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c780) {
            ctx->pc = 0x26C818u;
            goto label_26c818;
        }
    }
    ctx->pc = 0x26C788u;
    // 0x26c788: 0x8e230258  lw          $v1, 0x258($s1)
    ctx->pc = 0x26c788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
    // 0x26c78c: 0x54600019  bnel        $v1, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x26C78Cu;
    {
        const bool branch_taken_0x26c78c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c78c) {
            ctx->pc = 0x26C790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C78Cu;
            // 0x26c790: 0x7a420000  lq          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C7F4u;
            goto label_26c7f4;
        }
    }
    ctx->pc = 0x26C794u;
    // 0x26c794: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26c794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26c798: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x26c798u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x26c79c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x26C79Cu;
    SET_GPR_U32(ctx, 31, 0x26C7A4u);
    ctx->pc = 0x26C7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C79Cu;
    // 0x26c7a0: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x26C79Cu, 0x26C7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C7A4u;
label_26c7a4:
    // 0x26c7a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26c7a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c7a8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x26C7A8u;
    SET_GPR_U32(ctx, 31, 0x26C7B0u);
    ctx->pc = 0x26C7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C7A8u;
    // 0x26c7ac: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x26C7A8u, 0x26C7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C7B0u;
label_26c7b0:
    // 0x26c7b0: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x26c7b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26c7b4: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x26c7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x26c7b8: 0xe6140030  swc1        $f20, 0x30($s0)
    ctx->pc = 0x26c7b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x26c7bc: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x26c7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x26c7c0: 0xe6140020  swc1        $f20, 0x20($s0)
    ctx->pc = 0x26c7c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x26c7c4: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x26c7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26c7c8: 0xc463000c  lwc1        $f3, 0xC($v1)
    ctx->pc = 0x26c7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26c7cc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x26c7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c7d0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x26c7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c7d4: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x26c7d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26c7d8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x26c7d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26c7dc: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x26c7dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26c7e0: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x26c7e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x26c7e4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x26c7e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c7e8: 0xfa010040  sqc2        $vf1, 0x40($s0)
    ctx->pc = 0x26c7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26c7ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26C7ECu;
    {
        const bool branch_taken_0x26c7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C7ECu;
        // 0x26c7f0: 0xae300258  sw          $s0, 0x258($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c7ec) {
            ctx->pc = 0x26C808u;
            goto label_26c808;
        }
    }
    ctx->pc = 0x26C7F4u;
label_26c7f4:
    // 0x26c7f4: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x26c7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x26c7f8: 0x8e230258  lw          $v1, 0x258($s1)
    ctx->pc = 0x26c7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
    // 0x26c7fc: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x26c7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c800: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x26c800u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x26c804: 0xe4610030  swc1        $f1, 0x30($v1)
    ctx->pc = 0x26c804u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
label_26c808:
    // 0x26c808: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26c808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c80c: 0xc09b19e  jal         func_26C678
    ctx->pc = 0x26C80Cu;
    SET_GPR_U32(ctx, 31, 0x26C814u);
    ctx->pc = 0x26C810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C80Cu;
    // 0x26c810: 0xc48c0274  lwc1        $f12, 0x274($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C678u, 0x26C80Cu, 0x26C814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C814u;
label_26c814:
    // 0x26c814: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x26c814u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26c818:
    // 0x26c818: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x26c818u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x26c81c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x26c81cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26c820: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x26c820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26c824: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x26c824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26c828: 0x3e00008  jr          $ra
    ctx->pc = 0x26C828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C828u;
        // 0x26c82c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C830u;
}
