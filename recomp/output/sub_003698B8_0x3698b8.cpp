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

// Function: sub_003698B8
// Address: 0x3698b8 - 0x369960
void sub_003698B8_0x3698b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003698B8_0x3698b8");
#endif

    ctx->pc = 0x3698b8u;

    // 0x3698b8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3698b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3698bc: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x3698bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3698c0: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x3698c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3698c4: 0x2442ca60  addiu       $v0, $v0, -0x35A0
    ctx->pc = 0x3698c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953568));
    // 0x3698c8: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x3698c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6BCA70u));
    // 0x3698cc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3698CCu;
    {
        const bool branch_taken_0x3698cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3698D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3698CCu;
        // 0x3698d0: 0x8c480018  lw          $t0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3698cc) {
            ctx->pc = 0x3698E0u;
            goto label_3698e0;
        }
    }
    ctx->pc = 0x3698D4u;
    // 0x3698d4: 0xe50c0000  swc1        $f12, 0x0($t0)
    ctx->pc = 0x3698d4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x3698d8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3698D8u;
    {
        const bool branch_taken_0x3698d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3698DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3698D8u;
        // 0x3698dc: 0xe50d0004  swc1        $f13, 0x4($t0) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3698d8) {
            ctx->pc = 0x369900u;
            goto label_369900;
        }
    }
    ctx->pc = 0x3698E0u;
label_3698e0:
    // 0x3698e0: 0x3c014420  lui         $at, 0x4420
    ctx->pc = 0x3698e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17440 << 16));
    // 0x3698e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3698e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3698e8: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x3698e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
    // 0x3698ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3698ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3698f0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x3698f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x3698f4: 0x46016842  mul.s       $f1, $f13, $f1
    ctx->pc = 0x3698f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    // 0x3698f8: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x3698f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x3698fc: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x3698fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
label_369900:
    // 0x369900: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x369900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x369904: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x369904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369908: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x369908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x36990c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x36990cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x369910: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x369910u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x369914: 0x46007882  mul.s       $f2, $f15, $f0
    ctx->pc = 0x369914u;
    ctx->f[2] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x369918: 0x71600  sll         $v0, $a3, 24
    ctx->pc = 0x369918u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x36991c: 0x2545ca60  addiu       $a1, $t2, -0x35A0
    ctx->pc = 0x36991cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 4294953568));
    // 0x369920: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x369920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x369924: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x369924u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x369928: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x369928u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x36992c: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x36992cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369930: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x369930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x369934: 0x312300ff  andi        $v1, $t1, 0xFF
    ctx->pc = 0x369934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x369938: 0xe5020010  swc1        $f2, 0x10($t0)
    ctx->pc = 0x369938u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x36993c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x36993cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x369940: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x369940u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x369944: 0xad020014  sw          $v0, 0x14($t0)
    ctx->pc = 0x369944u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 2));
    // 0x369948: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x369948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x36994c: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x36994cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x369950: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x369950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x369954: 0x3e00008  jr          $ra
    ctx->pc = 0x369954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369954u;
        // 0x369958: 0xaca20018  sw          $v0, 0x18($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36995Cu;
    // 0x36995c: 0x0  nop
    ctx->pc = 0x36995cu;
    // NOP
    ctx->pc = 0x369960u;
}
