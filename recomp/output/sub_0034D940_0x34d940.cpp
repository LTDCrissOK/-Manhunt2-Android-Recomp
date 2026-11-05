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

// Function: sub_0034D940
// Address: 0x34d940 - 0x34d9e0
void sub_0034D940_0x34d940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034D940_0x34d940");
#endif

    switch (ctx->pc) {
        case 0x34d95cu: goto label_34d95c;
        case 0x34d984u: goto label_34d984;
        default: break;
    }

    ctx->pc = 0x34d940u;

    // 0x34d940: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34d940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34d944: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x34d944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x34d948: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x34d948u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x34d94c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x34d94cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x34d950: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x34d950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x34d954: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x34D954u;
    SET_GPR_U32(ctx, 31, 0x34D95Cu);
    ctx->pc = 0x34D958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D954u;
    // 0x34d958: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x34D954u, 0x34D95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D95Cu;
label_34d95c:
    // 0x34d95c: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x34d95cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x34d960: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x34d960u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x34d964: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x34d964u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x34d968: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34d968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34d96c: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x34d96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x34d970: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x34d970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x34d974: 0x0  nop
    ctx->pc = 0x34d974u;
    // NOP
    // 0x34d978: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x34d978u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x34d97c: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x34D97Cu;
    SET_GPR_U32(ctx, 31, 0x34D984u);
    ctx->pc = 0x34D980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D97Cu;
    // 0x34d980: 0x4615a502  mul.s       $f20, $f20, $f21 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x34D97Cu, 0x34D984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D984u;
label_34d984:
    // 0x34d984: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34d984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34d988: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34d988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34d98c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x34d98cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34d990: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x34d990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x34d994: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x34d994u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x34d998: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34d998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d99c: 0x0  nop
    ctx->pc = 0x34d99cu;
    // NOP
    // 0x34d9a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34d9a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34d9a4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x34d9a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x34d9a8: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x34d9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x34d9ac: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x34d9acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x34d9b0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x34d9b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x34d9b4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x34d9b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d9b8: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x34d9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34d9bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x34d9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34d9c0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x34d9c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34d9c4: 0xa2020044  sb          $v0, 0x44($s0)
    ctx->pc = 0x34d9c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 68), (uint8_t)GPR_U32(ctx, 2));
    // 0x34d9c8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34d9c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34d9cc: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x34d9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x34d9d0: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x34d9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x34d9d4: 0x3e00008  jr          $ra
    ctx->pc = 0x34D9D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D9D4u;
        // 0x34d9d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D9D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D9DCu;
    // 0x34d9dc: 0x0  nop
    ctx->pc = 0x34d9dcu;
    // NOP
    ctx->pc = 0x34d9e0u;
}
