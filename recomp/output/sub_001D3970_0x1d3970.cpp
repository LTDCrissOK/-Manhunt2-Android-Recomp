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

// Function: sub_001D3970
// Address: 0x1d3970 - 0x1d3aa8
void sub_001D3970_0x1d3970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3970_0x1d3970");
#endif

    switch (ctx->pc) {
        case 0x1d398cu: goto label_1d398c;
        default: break;
    }

    ctx->pc = 0x1d3970u;

    // 0x1d3970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d3970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d3974: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x1d3974u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3978: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d397c: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D397Cu;
    {
        const bool branch_taken_0x1d397c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D397Cu;
        // 0x1d3980: 0xc0582d  daddu       $t3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d397c) {
            ctx->pc = 0x1D3994u;
            goto label_1d3994;
        }
    }
    ctx->pc = 0x1D3984u;
    // 0x1d3984: 0xc074d14  jal         func_1D3450
    ctx->pc = 0x1D3984u;
    SET_GPR_U32(ctx, 31, 0x1D398Cu);
    ctx->pc = 0x1D3988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3984u;
    // 0x1d3988: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3450u, 0x1D3984u, 0x1D398Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D398Cu;
label_1d398c:
    // 0x1d398c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1D398Cu;
    {
        const bool branch_taken_0x1d398c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D398Cu;
        // 0x1d3990: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d398c) {
            ctx->pc = 0x1D3A9Cu;
            goto label_1d3a9c;
        }
    }
    ctx->pc = 0x1D3994u;
label_1d3994:
    // 0x1d3994: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1d3994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d3998: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1d3998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1d399c: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x1d399cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1d39a0: 0xc481f2f0  lwc1        $f1, -0xD10($a0)
    ctx->pc = 0x1d39a0u;
    { uint32_t bits = FAST_READ32(0x48F2F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d39a4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1d39a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1d39a8: 0x3c090046  lui         $t1, 0x46
    ctx->pc = 0x1d39a8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)70 << 16));
    // 0x1d39ac: 0x84430002  lh          $v1, 0x2($v0)
    ctx->pc = 0x1d39acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1d39b0: 0x24460002  addiu       $a2, $v0, 0x2
    ctx->pc = 0x1d39b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1d39b4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1d39b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1d39b8: 0x25670002  addiu       $a3, $t3, 0x2
    ctx->pc = 0x1d39b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x1d39bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d39bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d39c0: 0x0  nop
    ctx->pc = 0x1d39c0u;
    // NOP
    // 0x1d39c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d39c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d39c8: 0x25480010  addiu       $t0, $t2, 0x10
    ctx->pc = 0x1d39c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x1d39cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d39ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d39d0: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x1d39d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x1d39d4: 0x84c30002  lh          $v1, 0x2($a2)
    ctx->pc = 0x1d39d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x1d39d8: 0xc481f2f0  lwc1        $f1, -0xD10($a0)
    ctx->pc = 0x1d39d8u;
    { uint32_t bits = FAST_READ32(0x48F2F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d39dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d39dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d39e0: 0x0  nop
    ctx->pc = 0x1d39e0u;
    // NOP
    // 0x1d39e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d39e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d39e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d39e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d39ec: 0xe5400004  swc1        $f0, 0x4($t2)
    ctx->pc = 0x1d39ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x1d39f0: 0x84c30004  lh          $v1, 0x4($a2)
    ctx->pc = 0x1d39f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1d39f4: 0xc481f2f0  lwc1        $f1, -0xD10($a0)
    ctx->pc = 0x1d39f4u;
    { uint32_t bits = FAST_READ32(0x48F2F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d39f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d39f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d39fc: 0x0  nop
    ctx->pc = 0x1d39fcu;
    // NOP
    // 0x1d3a00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d3a00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d3a04: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d3a04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d3a08: 0xe5400008  swc1        $f0, 0x8($t2)
    ctx->pc = 0x1d3a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x1d3a0c: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x1d3a0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d3a10: 0xc521d56c  lwc1        $f1, -0x2A94($t1)
    ctx->pc = 0x1d3a10u;
    { uint32_t bits = FAST_READ32(0x45D56Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d3a14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d3a14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3a18: 0x0  nop
    ctx->pc = 0x1d3a18u;
    // NOP
    // 0x1d3a1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d3a1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d3a20: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d3a20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d3a24: 0xe5400020  swc1        $f0, 0x20($t2)
    ctx->pc = 0x1d3a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 32), bits); }
    // 0x1d3a28: 0x85620002  lh          $v0, 0x2($t3)
    ctx->pc = 0x1d3a28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x1d3a2c: 0xc4a1d568  lwc1        $f1, -0x2A98($a1)
    ctx->pc = 0x1d3a2cu;
    { uint32_t bits = FAST_READ32(0x45D568u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d3a30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d3a30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3a34: 0x0  nop
    ctx->pc = 0x1d3a34u;
    // NOP
    // 0x1d3a38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d3a38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d3a3c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d3a3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d3a40: 0xe5400010  swc1        $f0, 0x10($t2)
    ctx->pc = 0x1d3a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 16), bits); }
    // 0x1d3a44: 0x84e20002  lh          $v0, 0x2($a3)
    ctx->pc = 0x1d3a44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1d3a48: 0xc4a1d568  lwc1        $f1, -0x2A98($a1)
    ctx->pc = 0x1d3a48u;
    { uint32_t bits = FAST_READ32(0x45D568u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d3a4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d3a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3a50: 0x0  nop
    ctx->pc = 0x1d3a50u;
    // NOP
    // 0x1d3a54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d3a54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d3a58: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d3a58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d3a5c: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x1d3a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x1d3a60: 0x84e20004  lh          $v0, 0x4($a3)
    ctx->pc = 0x1d3a60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1d3a64: 0xc4a1d568  lwc1        $f1, -0x2A98($a1)
    ctx->pc = 0x1d3a64u;
    { uint32_t bits = FAST_READ32(0x45D568u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d3a68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d3a68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3a6c: 0x0  nop
    ctx->pc = 0x1d3a6cu;
    // NOP
    // 0x1d3a70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d3a70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d3a74: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d3a74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d3a78: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x1d3a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x1d3a7c: 0x84e20006  lh          $v0, 0x6($a3)
    ctx->pc = 0x1d3a7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x1d3a80: 0xc4a1d568  lwc1        $f1, -0x2A98($a1)
    ctx->pc = 0x1d3a80u;
    { uint32_t bits = FAST_READ32(0x45D568u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d3a84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d3a84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3a88: 0x0  nop
    ctx->pc = 0x1d3a88u;
    // NOP
    // 0x1d3a8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d3a8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d3a90: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d3a90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d3a94: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x1d3a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x1d3a98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d3a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d3a9c:
    // 0x1d3a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A9Cu;
        // 0x1d3aa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3AA4u;
    // 0x1d3aa4: 0x0  nop
    ctx->pc = 0x1d3aa4u;
    // NOP
    ctx->pc = 0x1d3aa8u;
}
