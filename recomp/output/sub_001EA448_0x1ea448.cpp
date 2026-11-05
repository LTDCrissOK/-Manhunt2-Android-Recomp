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

// Function: sub_001EA448
// Address: 0x1ea448 - 0x1ea4c8
void sub_001EA448_0x1ea448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA448_0x1ea448");
#endif

    switch (ctx->pc) {
        case 0x1ea464u: goto label_1ea464;
        case 0x1ea470u: goto label_1ea470;
        case 0x1ea478u: goto label_1ea478;
        case 0x1ea480u: goto label_1ea480;
        default: break;
    }

    ctx->pc = 0x1ea448u;

    // 0x1ea448: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ea448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ea44c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ea44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ea450: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ea450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea454: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1ea454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1ea458: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ea458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ea45c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1EA45Cu;
    SET_GPR_U32(ctx, 31, 0x1EA464u);
    ctx->pc = 0x1EA460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA45Cu;
    // 0x1ea460: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1EA45Cu, 0x1EA464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA464u;
label_1ea464:
    // 0x1ea464: 0x26110050  addiu       $s1, $s0, 0x50
    ctx->pc = 0x1ea464u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1ea468: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1EA468u;
    SET_GPR_U32(ctx, 31, 0x1EA470u);
    ctx->pc = 0x1EA46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA468u;
    // 0x1ea46c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1EA468u, 0x1EA470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA470u;
label_1ea470:
    // 0x1ea470: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1EA470u;
    SET_GPR_U32(ctx, 31, 0x1EA478u);
    ctx->pc = 0x1EA474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA470u;
    // 0x1ea474: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1EA470u, 0x1EA478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA478u;
label_1ea478:
    // 0x1ea478: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1EA478u;
    SET_GPR_U32(ctx, 31, 0x1EA480u);
    ctx->pc = 0x1EA47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA478u;
    // 0x1ea47c: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1EA478u, 0x1EA480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA480u;
label_1ea480:
    // 0x1ea480: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x1ea480u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
    // 0x1ea484: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x1ea484u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x1ea488: 0x7e000060  sq          $zero, 0x60($s0)
    ctx->pc = 0x1ea488u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), GPR_VEC(ctx, 0));
    // 0x1ea48c: 0x7e000090  sq          $zero, 0x90($s0)
    ctx->pc = 0x1ea48cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 0));
    // 0x1ea490: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ea490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ea494: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ea494u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea498: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ea498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1ea49c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1ea49cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1ea4a0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1ea4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1ea4a4: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1ea4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x1ea4a8: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1ea4a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea4ac: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x1ea4acu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ea4b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ea4b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea4b4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1ea4b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ea4b8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ea4b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea4bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ea4bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ea4c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA4C0u;
        // 0x1ea4c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA4C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA4C8u;
}
