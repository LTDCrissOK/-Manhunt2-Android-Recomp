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

// Function: sub_0028BAF0
// Address: 0x28baf0 - 0x28bbf0
void sub_0028BAF0_0x28baf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028BAF0_0x28baf0");
#endif

    ctx->pc = 0x28baf0u;

    // 0x28baf0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28baf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28baf4: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x28baf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x28baf8: 0x8c439160  lw          $v1, -0x6EA0($v0)
    ctx->pc = 0x28baf8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F9160u));
    // 0x28bafc: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x28bafcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x28bb00: 0x24a5fd28  addiu       $a1, $a1, -0x2D8
    ctx->pc = 0x28bb00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966568));
    // 0x28bb04: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x28bb04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
    // 0x28bb08: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x28bb08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x28bb0c: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x28bb0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x28bb10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28bb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28bb14: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x28bb14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bb18: 0xa35821  addu        $t3, $a1, $v1
    ctx->pc = 0x28bb18u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x28bb1c: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x28bb1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bb20: 0xc5620020  lwc1        $f2, 0x20($t3)
    ctx->pc = 0x28bb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28bb24: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x28bb24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bb28: 0xc4c70014  lwc1        $f7, 0x14($a2)
    ctx->pc = 0x28bb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x28bb2c: 0xc503001c  lwc1        $f3, 0x1C($t0)
    ctx->pc = 0x28bb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28bb30: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x28bb30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bb34: 0xc4e60018  lwc1        $f6, 0x18($a3)
    ctx->pc = 0x28bb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x28bb38: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x28bb38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bb3c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x28bb3cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bb40: 0x460718c1  sub.s       $f3, $f3, $f7
    ctx->pc = 0x28bb40u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x28bb44: 0xc5250004  lwc1        $f5, 0x4($t1)
    ctx->pc = 0x28bb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28bb48: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x28bb48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bb4c: 0xc5410008  lwc1        $f1, 0x8($t2)
    ctx->pc = 0x28bb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28bb50: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x28bb50u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x28bb54: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x28bb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28bb58: 0x46056301  sub.s       $f12, $f12, $f5
    ctx->pc = 0x28bb58u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[5]);
    // 0x28bb5c: 0xc4a40010  lwc1        $f4, 0x10($a1)
    ctx->pc = 0x28bb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28bb60: 0x46016b40  add.s       $f13, $f13, $f1
    ctx->pc = 0x28bb60u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
    // 0x28bb64: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x28bb64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x28bb68: 0x460018c5  abs.s       $f3, $f3
    ctx->pc = 0x28bb68u;
    ctx->f[3] = FPU_ABS_S(ctx->f[3]);
    // 0x28bb6c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x28bb6cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x28bb70: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x28bb70u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x28bb74: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x28bb74u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x28bb78: 0x46036302  mul.s       $f12, $f12, $f3
    ctx->pc = 0x28bb78u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x28bb7c: 0x46026b42  mul.s       $f13, $f13, $f2
    ctx->pc = 0x28bb7cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[2]);
    // 0x28bb80: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x28bb80u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x28bb84: 0x0  nop
    ctx->pc = 0x28bb84u;
    // NOP
    // 0x28bb88: 0x0  nop
    ctx->pc = 0x28bb88u;
    // NOP
    // 0x28bb8c: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x28bb8cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
    // 0x28bb90: 0x0  nop
    ctx->pc = 0x28bb90u;
    // NOP
    // 0x28bb94: 0x0  nop
    ctx->pc = 0x28bb94u;
    // NOP
    // 0x28bb98: 0x460839c3  div.s       $f7, $f7, $f8
    ctx->pc = 0x28bb98u;
    { if (ctx->f[8] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[7], ctx->f[8]); }
    // 0x28bb9c: 0x0  nop
    ctx->pc = 0x28bb9cu;
    // NOP
    // 0x28bba0: 0x0  nop
    ctx->pc = 0x28bba0u;
    // NOP
    // 0x28bba4: 0x46016b43  div.s       $f13, $f13, $f1
    ctx->pc = 0x28bba4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[13], ctx->f[1]); }
    // 0x28bba8: 0x0  nop
    ctx->pc = 0x28bba8u;
    // NOP
    // 0x28bbac: 0x0  nop
    ctx->pc = 0x28bbacu;
    // NOP
    // 0x28bbb0: 0x46083183  div.s       $f6, $f6, $f8
    ctx->pc = 0x28bbb0u;
    { if (ctx->f[8] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = FPU_DIV_S(ctx->f[6], ctx->f[8]); }
    // 0x28bbb4: 0x0  nop
    ctx->pc = 0x28bbb4u;
    // NOP
    // 0x28bbb8: 0x0  nop
    ctx->pc = 0x28bbb8u;
    // NOP
    // 0x28bbbc: 0x46086303  div.s       $f12, $f12, $f8
    ctx->pc = 0x28bbbcu;
    { if (ctx->f[8] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[8]); }
    // 0x28bbc0: 0x0  nop
    ctx->pc = 0x28bbc0u;
    // NOP
    // 0x28bbc4: 0x0  nop
    ctx->pc = 0x28bbc4u;
    // NOP
    // 0x28bbc8: 0x46086b43  div.s       $f13, $f13, $f8
    ctx->pc = 0x28bbc8u;
    { if (ctx->f[8] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[13], ctx->f[8]); }
    // 0x28bbcc: 0x46076300  add.s       $f12, $f12, $f7
    ctx->pc = 0x28bbccu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[7]);
    // 0x28bbd0: 0x46066b40  add.s       $f13, $f13, $f6
    ctx->pc = 0x28bbd0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[6]);
    // 0x28bbd4: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x28bbd4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28bbd8: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x28bbd8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x28bbdc: 0xe48d0004  swc1        $f13, 0x4($a0)
    ctx->pc = 0x28bbdcu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x28bbe0: 0xe7ad0004  swc1        $f13, 0x4($sp)
    ctx->pc = 0x28bbe0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x28bbe4: 0x3e00008  jr          $ra
    ctx->pc = 0x28BBE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BBE4u;
        // 0x28bbe8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28BBE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28BBECu;
    // 0x28bbec: 0x0  nop
    ctx->pc = 0x28bbecu;
    // NOP
    ctx->pc = 0x28bbf0u;
}
