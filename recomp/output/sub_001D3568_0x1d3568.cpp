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

// Function: sub_001D3568
// Address: 0x1d3568 - 0x1d3628
void sub_001D3568_0x1d3568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3568_0x1d3568");
#endif

    ctx->pc = 0x1d3568u;

    // 0x1d3568: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1d3568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d356c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1d356cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3570: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x1d3570u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d3574: 0x24e40010  addiu       $a0, $a3, 0x10
    ctx->pc = 0x1d3574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x1d3578: 0x664021  addu        $t0, $v1, $a2
    ctx->pc = 0x1d3578u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1d357c: 0x85020002  lh          $v0, 0x2($t0)
    ctx->pc = 0x1d357cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x1d3580: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x1d3580u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x1d3584: 0xc4c1d568  lwc1        $f1, -0x2A98($a2)
    ctx->pc = 0x1d3584u;
    { uint32_t bits = FAST_READ32(0x45D568u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d3588: 0x25030002  addiu       $v1, $t0, 0x2
    ctx->pc = 0x1d3588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x1d358c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d358cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3590: 0x0  nop
    ctx->pc = 0x1d3590u;
    // NOP
    // 0x1d3594: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d3594u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d3598: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d3598u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d359c: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x1d359cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x1d35a0: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x1d35a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1d35a4: 0xc4c1d568  lwc1        $f1, -0x2A98($a2)
    ctx->pc = 0x1d35a4u;
    { uint32_t bits = FAST_READ32(0x45D568u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d35a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d35a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d35ac: 0x0  nop
    ctx->pc = 0x1d35acu;
    // NOP
    // 0x1d35b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d35b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d35b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d35b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d35b8: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1d35b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1d35bc: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x1d35bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d35c0: 0xc4c1d568  lwc1        $f1, -0x2A98($a2)
    ctx->pc = 0x1d35c0u;
    { uint32_t bits = FAST_READ32(0x45D568u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d35c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d35c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d35c8: 0x0  nop
    ctx->pc = 0x1d35c8u;
    // NOP
    // 0x1d35cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d35ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d35d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d35d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d35d4: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1d35d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1d35d8: 0x84620006  lh          $v0, 0x6($v1)
    ctx->pc = 0x1d35d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x1d35dc: 0xc4c1d568  lwc1        $f1, -0x2A98($a2)
    ctx->pc = 0x1d35dcu;
    { uint32_t bits = FAST_READ32(0x45D568u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d35e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d35e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d35e4: 0x0  nop
    ctx->pc = 0x1d35e4u;
    // NOP
    // 0x1d35e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d35e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d35ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d35ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d35f0: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D35F0u;
    {
        const bool branch_taken_0x1d35f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D35F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D35F0u;
        // 0x1d35f4: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d35f0) {
            ctx->pc = 0x1D3600u;
            goto label_1d3600;
        }
    }
    ctx->pc = 0x1D35F8u;
    // 0x1d35f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D35F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D35FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D35F8u;
        // 0x1d35fc: 0xace00020  sw          $zero, 0x20($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D35F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3600u;
label_1d3600:
    // 0x1d3600: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x1d3600u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d3604: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1d3604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1d3608: 0xc441d56c  lwc1        $f1, -0x2A94($v0)
    ctx->pc = 0x1d3608u;
    { uint32_t bits = FAST_READ32(0x45D56Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d360c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d360cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3610: 0x0  nop
    ctx->pc = 0x1d3610u;
    // NOP
    // 0x1d3614: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d3614u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d3618: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d3618u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d361c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D361Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D361Cu;
        // 0x1d3620: 0xe4e00020  swc1        $f0, 0x20($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D361Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3624u;
    // 0x1d3624: 0x0  nop
    ctx->pc = 0x1d3624u;
    // NOP
    ctx->pc = 0x1d3628u;
}
