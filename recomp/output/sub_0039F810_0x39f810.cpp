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

// Function: sub_0039F810
// Address: 0x39f810 - 0x39f8b0
void sub_0039F810_0x39f810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039F810_0x39f810");
#endif

    switch (ctx->pc) {
        case 0x39f83cu: goto label_39f83c;
        default: break;
    }

    ctx->pc = 0x39f810u;

    // 0x39f810: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39f810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39f814: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x39f814u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x39f818: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39f818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39f81c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39f81cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f820: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x39f820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x39f824: 0xc60001e4  lwc1        $f0, 0x1E4($s0)
    ctx->pc = 0x39f824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x39f828: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x39f828u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39f82c: 0x45030010  bc1tl       . + 4 + (0x10 << 2)
    ctx->pc = 0x39F82Cu;
    {
        const bool branch_taken_0x39f82c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x39f82c) {
            ctx->pc = 0x39F830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39F82Cu;
            // 0x39f830: 0x8e050118  lw          $a1, 0x118($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39F870u;
            goto label_39f870;
        }
    }
    ctx->pc = 0x39F834u;
    // 0x39f834: 0xc0e7e8e  jal         func_39FA38
    ctx->pc = 0x39F834u;
    SET_GPR_U32(ctx, 31, 0x39F83Cu);
    ctx->pc = 0x39FA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FA38u, 0x39F834u, 0x39F83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F83Cu;
label_39f83c:
    // 0x39f83c: 0xc60101e4  lwc1        $f1, 0x1E4($s0)
    ctx->pc = 0x39f83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x39f840: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39f840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39f844: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x39f844u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x39f848: 0x8e060118  lw          $a2, 0x118($s0)
    ctx->pc = 0x39f848u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x39f84c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x39f84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x39f850: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x39f850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39f854: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39f854u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39f858: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x39f858u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x39f85c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39f85cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39f860: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x39f860u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x39f864: 0x80e69c2  j           func_39A708
    ctx->pc = 0x39F864u;
    ctx->pc = 0x39F868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F864u;
    // 0x39f868: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A708u;
    sub_0039A708_0x39a708(rdram, ctx, runtime); return;
    ctx->pc = 0x39F86Cu;
    // 0x39f86c: 0x0  nop
    ctx->pc = 0x39f86cu;
    // NOP
label_39f870:
    // 0x39f870: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x39f870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x39f874: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x39f874u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x39f878: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x39f878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f87c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39f87cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39f880: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x39f880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x39f884: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x39f884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39f888: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x39f888u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x39f88c: 0x80e69c2  j           func_39A708
    ctx->pc = 0x39F88Cu;
    ctx->pc = 0x39F890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F88Cu;
    // 0x39f890: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A708u;
    sub_0039A708_0x39a708(rdram, ctx, runtime); return;
    ctx->pc = 0x39F894u;
    // 0x39f894: 0x0  nop
    ctx->pc = 0x39f894u;
    // NOP
    // 0x39f898: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x39f898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x39f89c: 0x0  nop
    ctx->pc = 0x39f89cu;
    // NOP
    // 0x39f8a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39f8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39f8a4: 0x0  nop
    ctx->pc = 0x39f8a4u;
    // NOP
    // 0x39f8a8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x39f8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x39f8ac: 0x0  nop
    ctx->pc = 0x39f8acu;
    // NOP
    ctx->pc = 0x39f8b0u;
}
