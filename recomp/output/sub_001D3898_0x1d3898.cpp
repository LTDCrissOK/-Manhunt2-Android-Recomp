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

// Function: sub_001D3898
// Address: 0x1d3898 - 0x1d3970
void sub_001D3898_0x1d3898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3898_0x1d3898");
#endif

    switch (ctx->pc) {
        case 0x1d38b4u: goto label_1d38b4;
        default: break;
    }

    ctx->pc = 0x1d3898u;

    // 0x1d3898: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d3898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d389c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1d389cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d38a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d38a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d38a4: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D38A4u;
    {
        const bool branch_taken_0x1d38a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D38A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D38A4u;
        // 0x1d38a8: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d38a4) {
            ctx->pc = 0x1D38BCu;
            goto label_1d38bc;
        }
    }
    ctx->pc = 0x1D38ACu;
    // 0x1d38ac: 0xc074d5a  jal         func_1D3568
    ctx->pc = 0x1D38ACu;
    SET_GPR_U32(ctx, 31, 0x1D38B4u);
    ctx->pc = 0x1D38B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D38ACu;
    // 0x1d38b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3568u, 0x1D38ACu, 0x1D38B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D38B4u;
label_1d38b4:
    // 0x1d38b4: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1D38B4u;
    {
        const bool branch_taken_0x1d38b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D38B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D38B4u;
        // 0x1d38b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d38b4) {
            ctx->pc = 0x1D3964u;
            goto label_1d3964;
        }
    }
    ctx->pc = 0x1D38BCu;
label_1d38bc:
    // 0x1d38bc: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1d38bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d38c0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1d38c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1d38c4: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1d38c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1d38c8: 0xc481d568  lwc1        $f1, -0x2A98($a0)
    ctx->pc = 0x1d38c8u;
    { uint32_t bits = FAST_READ32(0x45D568u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d38cc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1d38ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1d38d0: 0x24e50010  addiu       $a1, $a3, 0x10
    ctx->pc = 0x1d38d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x1d38d4: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x1d38d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d38d8: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x1d38d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x1d38dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d38dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d38e0: 0x0  nop
    ctx->pc = 0x1d38e0u;
    // NOP
    // 0x1d38e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d38e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d38e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d38e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d38ec: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x1d38ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x1d38f0: 0x84430002  lh          $v1, 0x2($v0)
    ctx->pc = 0x1d38f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1d38f4: 0xc481d568  lwc1        $f1, -0x2A98($a0)
    ctx->pc = 0x1d38f4u;
    { uint32_t bits = FAST_READ32(0x45D568u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d38f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d38f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d38fc: 0x0  nop
    ctx->pc = 0x1d38fcu;
    // NOP
    // 0x1d3900: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d3900u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d3904: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d3904u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d3908: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1d3908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1d390c: 0x84430004  lh          $v1, 0x4($v0)
    ctx->pc = 0x1d390cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d3910: 0xc481d568  lwc1        $f1, -0x2A98($a0)
    ctx->pc = 0x1d3910u;
    { uint32_t bits = FAST_READ32(0x45D568u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d3914: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d3914u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3918: 0x0  nop
    ctx->pc = 0x1d3918u;
    // NOP
    // 0x1d391c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d391cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d3920: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d3920u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d3924: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x1d3924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x1d3928: 0x84430006  lh          $v1, 0x6($v0)
    ctx->pc = 0x1d3928u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1d392c: 0xc481d568  lwc1        $f1, -0x2A98($a0)
    ctx->pc = 0x1d392cu;
    { uint32_t bits = FAST_READ32(0x45D568u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d3930: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d3930u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3934: 0x0  nop
    ctx->pc = 0x1d3934u;
    // NOP
    // 0x1d3938: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d3938u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d393c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d393cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d3940: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x1d3940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x1d3944: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x1d3944u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d3948: 0xc4c1d56c  lwc1        $f1, -0x2A94($a2)
    ctx->pc = 0x1d3948u;
    { uint32_t bits = FAST_READ32(0x45D56Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d394c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d394cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3950: 0x0  nop
    ctx->pc = 0x1d3950u;
    // NOP
    // 0x1d3954: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d3954u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d3958: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d3958u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d395c: 0xe4e00020  swc1        $f0, 0x20($a3)
    ctx->pc = 0x1d395cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x1d3960: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d3960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d3964:
    // 0x1d3964: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3964u;
        // 0x1d3968: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D396Cu;
    // 0x1d396c: 0x0  nop
    ctx->pc = 0x1d396cu;
    // NOP
    ctx->pc = 0x1d3970u;
}
