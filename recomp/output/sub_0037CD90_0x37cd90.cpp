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

// Function: sub_0037CD90
// Address: 0x37cd90 - 0x37ce00
void sub_0037CD90_0x37cd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037CD90_0x37cd90");
#endif

    switch (ctx->pc) {
        case 0x37cdc8u: goto label_37cdc8;
        case 0x37cdf0u: goto label_37cdf0;
        default: break;
    }

    ctx->pc = 0x37cd90u;

    // 0x37cd90: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x37cd90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x37cd94: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x37cd94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x37cd98: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x37cd98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x37cd9c: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x37cd9cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x37cda0: 0x0  nop
    ctx->pc = 0x37cda0u;
    // NOP
    // 0x37cda4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x37cda4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x37cda8: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x37cda8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x37cdac: 0x0  nop
    ctx->pc = 0x37cdacu;
    // NOP
    // 0x37cdb0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x37cdb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x37cdb4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x37cdb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x37cdb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x37cdb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37cdbc: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x37cdbcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37cdc0: 0x0  nop
    ctx->pc = 0x37cdc0u;
    // NOP
    // 0x37cdc4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x37cdc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_37cdc8:
    // 0x37cdc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37cdc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37cdcc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x37cdccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x37cdd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37cdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37cdd4: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x37cdd4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x37cdd8: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x37cdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x37cddc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x37cddcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x37cde0: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x37cde0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x37cde4: 0xe4830014  swc1        $f3, 0x14($a0)
    ctx->pc = 0x37cde4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x37cde8: 0xc0dd720  jal         func_375C80
    ctx->pc = 0x37CDE8u;
    SET_GPR_U32(ctx, 31, 0x37CDF0u);
    ctx->pc = 0x37CDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CDE8u;
    // 0x37cdec: 0xe4810018  swc1        $f1, 0x18($a0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x375C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375C80u, 0x37CDE8u, 0x37CDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CDF0u;
label_37cdf0:
    // 0x37cdf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37cdf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37cdf4: 0x3e00008  jr          $ra
    ctx->pc = 0x37CDF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37CDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CDF4u;
        // 0x37cdf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CDF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37CDFCu;
    // 0x37cdfc: 0x0  nop
    ctx->pc = 0x37cdfcu;
    // NOP
    ctx->pc = 0x37ce00u;
}
