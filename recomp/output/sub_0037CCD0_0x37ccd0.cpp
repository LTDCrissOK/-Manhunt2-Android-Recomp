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

// Function: sub_0037CCD0
// Address: 0x37ccd0 - 0x37cd90
void sub_0037CCD0_0x37ccd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037CCD0_0x37ccd0");
#endif

    switch (ctx->pc) {
        case 0x37cd80u: goto label_37cd80;
        default: break;
    }

    ctx->pc = 0x37ccd0u;

    // 0x37ccd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37ccd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37ccd4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x37ccd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x37ccd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37ccd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37ccdc: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x37ccdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x37cce0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x37cce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x37cce4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x37cce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x37cce8: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37CCE8u;
    {
        const bool branch_taken_0x37cce8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CCE8u;
        // 0x37ccec: 0x30e700ff  andi        $a3, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cce8) {
            ctx->pc = 0x37CCF8u;
            goto label_37ccf8;
        }
    }
    ctx->pc = 0x37CCF0u;
    // 0x37ccf0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x37ccf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x37ccf4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x37ccf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_37ccf8:
    // 0x37ccf8: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x37ccf8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x37ccfc: 0x0  nop
    ctx->pc = 0x37ccfcu;
    // NOP
    // 0x37cd00: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x37cd00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x37cd04: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x37cd04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x37cd08: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x37cd08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x37cd0c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x37cd0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x37cd10: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x37cd10u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37cd14: 0x0  nop
    ctx->pc = 0x37cd14u;
    // NOP
    // 0x37cd18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37cd18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x37cd1c: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x37cd1cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37cd20: 0x0  nop
    ctx->pc = 0x37cd20u;
    // NOP
    // 0x37cd24: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x37cd24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x37cd28: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x37cd28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x37cd2c: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x37cd2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x37cd30: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x37cd30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x37cd34: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x37cd34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x37cd38: 0x46030102  mul.s       $f4, $f0, $f3
    ctx->pc = 0x37cd38u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x37cd3c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x37cd3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x37cd40: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x37cd40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x37cd44: 0xe4840004  swc1        $f4, 0x4($a0)
    ctx->pc = 0x37cd44u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x37cd48: 0x1100000b  beqz        $t0, . + 4 + (0xB << 2)
    ctx->pc = 0x37CD48u;
    {
        const bool branch_taken_0x37cd48 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CD48u;
        // 0x37cd4c: 0xe4810008  swc1        $f1, 0x8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cd48) {
            ctx->pc = 0x37CD78u;
            goto label_37cd78;
        }
    }
    ctx->pc = 0x37CD50u;
    // 0x37cd50: 0x3c013f83  lui         $at, 0x3F83
    ctx->pc = 0x37cd50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16259 << 16));
    // 0x37cd54: 0x34219ce7  ori         $at, $at, 0x9CE7
    ctx->pc = 0x37cd54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40167);
    // 0x37cd58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x37cd58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37cd5c: 0x0  nop
    ctx->pc = 0x37cd5cu;
    // NOP
    // 0x37cd60: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x37cd60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x37cd64: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x37cd64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x37cd68: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x37cd68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x37cd6c: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x37cd6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x37cd70: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x37cd70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x37cd74: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x37cd74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_37cd78:
    // 0x37cd78: 0xc0dd720  jal         func_375C80
    ctx->pc = 0x37CD78u;
    SET_GPR_U32(ctx, 31, 0x37CD80u);
    ctx->pc = 0x375C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375C80u, 0x37CD78u, 0x37CD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CD80u;
label_37cd80:
    // 0x37cd80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37cd80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37cd84: 0x3e00008  jr          $ra
    ctx->pc = 0x37CD84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37CD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CD84u;
        // 0x37cd88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CD84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37CD8Cu;
    // 0x37cd8c: 0x0  nop
    ctx->pc = 0x37cd8cu;
    // NOP
    ctx->pc = 0x37cd90u;
}
