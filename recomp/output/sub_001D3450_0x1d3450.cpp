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

// Function: sub_001D3450
// Address: 0x1d3450 - 0x1d3568
void sub_001D3450_0x1d3450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3450_0x1d3450");
#endif

    ctx->pc = 0x1d3450u;

    // 0x1d3450: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1d3450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1d3454: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x1d3454u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x1d3458: 0xc25021  addu        $t2, $a2, $v0
    ctx->pc = 0x1d3458u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1d345c: 0xc4e1d568  lwc1        $f1, -0x2A98($a3)
    ctx->pc = 0x1d345cu;
    { uint32_t bits = FAST_READ32(0x45D568u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d3460: 0x85420002  lh          $v0, 0x2($t2)
    ctx->pc = 0x1d3460u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x1d3464: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1d3464u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3468: 0x25430002  addiu       $v1, $t2, 0x2
    ctx->pc = 0x1d3468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x1d346c: 0x25240010  addiu       $a0, $t1, 0x10
    ctx->pc = 0x1d346cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x1d3470: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d3470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3474: 0x0  nop
    ctx->pc = 0x1d3474u;
    // NOP
    // 0x1d3478: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d3478u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d347c: 0x3c060049  lui         $a2, 0x49
    ctx->pc = 0x1d347cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)73 << 16));
    // 0x1d3480: 0x2548000a  addiu       $t0, $t2, 0xA
    ctx->pc = 0x1d3480u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 10));
    // 0x1d3484: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d3484u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d3488: 0xe5200010  swc1        $f0, 0x10($t1)
    ctx->pc = 0x1d3488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 16), bits); }
    // 0x1d348c: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x1d348cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1d3490: 0xc4e1d568  lwc1        $f1, -0x2A98($a3)
    ctx->pc = 0x1d3490u;
    { uint32_t bits = FAST_READ32(0x45D568u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d3494: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d3494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3498: 0x0  nop
    ctx->pc = 0x1d3498u;
    // NOP
    // 0x1d349c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d349cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d34a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d34a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d34a4: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1d34a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1d34a8: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x1d34a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d34ac: 0xc4e1d568  lwc1        $f1, -0x2A98($a3)
    ctx->pc = 0x1d34acu;
    { uint32_t bits = FAST_READ32(0x45D568u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d34b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d34b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d34b4: 0x0  nop
    ctx->pc = 0x1d34b4u;
    // NOP
    // 0x1d34b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d34b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d34bc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d34bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d34c0: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1d34c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1d34c4: 0x84620006  lh          $v0, 0x6($v1)
    ctx->pc = 0x1d34c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x1d34c8: 0xc4e1d568  lwc1        $f1, -0x2A98($a3)
    ctx->pc = 0x1d34c8u;
    { uint32_t bits = FAST_READ32(0x45D568u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d34cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d34ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d34d0: 0x0  nop
    ctx->pc = 0x1d34d0u;
    // NOP
    // 0x1d34d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d34d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d34d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d34d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d34dc: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1d34dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1d34e0: 0x8542000a  lh          $v0, 0xA($t2)
    ctx->pc = 0x1d34e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 10)));
    // 0x1d34e4: 0xc4c1f2f0  lwc1        $f1, -0xD10($a2)
    ctx->pc = 0x1d34e4u;
    { uint32_t bits = FAST_READ32(0x48F2F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d34e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d34e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d34ec: 0x0  nop
    ctx->pc = 0x1d34ecu;
    // NOP
    // 0x1d34f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d34f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d34f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d34f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d34f8: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x1d34f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x1d34fc: 0x85020002  lh          $v0, 0x2($t0)
    ctx->pc = 0x1d34fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x1d3500: 0xc4c1f2f0  lwc1        $f1, -0xD10($a2)
    ctx->pc = 0x1d3500u;
    { uint32_t bits = FAST_READ32(0x48F2F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d3504: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d3504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3508: 0x0  nop
    ctx->pc = 0x1d3508u;
    // NOP
    // 0x1d350c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d350cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d3510: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d3510u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d3514: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x1d3514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x1d3518: 0x85020004  lh          $v0, 0x4($t0)
    ctx->pc = 0x1d3518u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1d351c: 0xc4c1f2f0  lwc1        $f1, -0xD10($a2)
    ctx->pc = 0x1d351cu;
    { uint32_t bits = FAST_READ32(0x48F2F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d3520: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d3520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3524: 0x0  nop
    ctx->pc = 0x1d3524u;
    // NOP
    // 0x1d3528: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d3528u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d352c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d352cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d3530: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D3530u;
    {
        const bool branch_taken_0x1d3530 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3530u;
        // 0x1d3534: 0xe5200008  swc1        $f0, 0x8($t1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3530) {
            ctx->pc = 0x1D3540u;
            goto label_1d3540;
        }
    }
    ctx->pc = 0x1D3538u;
    // 0x1d3538: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3538u;
        // 0x1d353c: 0xad200020  sw          $zero, 0x20($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3540u;
label_1d3540:
    // 0x1d3540: 0x85430000  lh          $v1, 0x0($t2)
    ctx->pc = 0x1d3540u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1d3544: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1d3544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1d3548: 0xc441d56c  lwc1        $f1, -0x2A94($v0)
    ctx->pc = 0x1d3548u;
    { uint32_t bits = FAST_READ32(0x45D56Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d354c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d354cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3550: 0x0  nop
    ctx->pc = 0x1d3550u;
    // NOP
    // 0x1d3554: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d3554u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d3558: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d3558u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d355c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D355Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D355Cu;
        // 0x1d3560: 0xe5200020  swc1        $f0, 0x20($t1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D355Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3564u;
    // 0x1d3564: 0x0  nop
    ctx->pc = 0x1d3564u;
    // NOP
    ctx->pc = 0x1d3568u;
}
