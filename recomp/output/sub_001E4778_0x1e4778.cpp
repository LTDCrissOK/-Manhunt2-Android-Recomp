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

// Function: sub_001E4778
// Address: 0x1e4778 - 0x1e47f8
void sub_001E4778_0x1e4778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4778_0x1e4778");
#endif

    switch (ctx->pc) {
        case 0x1e47a0u: goto label_1e47a0;
        case 0x1e47b4u: goto label_1e47b4;
        default: break;
    }

    ctx->pc = 0x1e4778u;

    // 0x1e4778: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e4778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e477c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1e477cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1e4780: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1e4780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1e4784: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e4784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4788: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1e4788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1e478c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e478cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4790: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e4790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4794: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1e4794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1e4798: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1E4798u;
    SET_GPR_U32(ctx, 31, 0x1E47A0u);
    ctx->pc = 0x1E479Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4798u;
    // 0x1e479c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1E4798u, 0x1E47A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E47A0u;
label_1e47a0:
    // 0x1e47a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e47a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e47a4: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1e47a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e47a8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1e47a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e47ac: 0xc079036  jal         func_1E40D8
    ctx->pc = 0x1E47ACu;
    SET_GPR_U32(ctx, 31, 0x1E47B4u);
    ctx->pc = 0x1E47B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E47ACu;
    // 0x1e47b0: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E40D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E40D8u, 0x1E47ACu, 0x1E47B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E47B4u;
label_1e47b4:
    // 0x1e47b4: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x1e47b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e47b8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1e47b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e47bc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e47bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e47c0: 0x0  nop
    ctx->pc = 0x1e47c0u;
    // NOP
    // 0x1e47c4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1E47C4u;
    {
        const bool branch_taken_0x1e47c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E47C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47C4u;
        // 0x1e47c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e47c4) {
            ctx->pc = 0x1E47D8u;
            goto label_1e47d8;
        }
    }
    ctx->pc = 0x1E47CCu;
    // 0x1e47cc: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e47ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e47d0: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1e47d0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e47d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e47d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e47d8:
    // 0x1e47d8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1e47d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e47dc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1e47dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e47e0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1e47e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e47e4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1e47e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e47e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E47E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E47ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47E8u;
        // 0x1e47ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E47E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E47F0u;
    // 0x1e47f0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1e47f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e47f4: 0x0  nop
    ctx->pc = 0x1e47f4u;
    // NOP
    ctx->pc = 0x1e47f8u;
}
