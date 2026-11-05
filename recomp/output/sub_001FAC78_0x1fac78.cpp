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

// Function: sub_001FAC78
// Address: 0x1fac78 - 0x1face8
void sub_001FAC78_0x1fac78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FAC78_0x1fac78");
#endif

    switch (ctx->pc) {
        case 0x1facacu: goto label_1facac;
        default: break;
    }

    ctx->pc = 0x1fac78u;

    // 0x1fac78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fac78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fac7c: 0x34028de0  ori         $v0, $zero, 0x8DE0
    ctx->pc = 0x1fac7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36320);
    // 0x1fac80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fac80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fac84: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x1fac84u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fac88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fac88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fac8c: 0x118980  sll         $s1, $s1, 6
    ctx->pc = 0x1fac8cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x1fac90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fac90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fac94: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1fac94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1fac98: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x1fac98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x1fac9c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1fac9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1faca0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1faca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1faca4: 0xc07dd9a  jal         func_1F7668
    ctx->pc = 0x1FACA4u;
    SET_GPR_U32(ctx, 31, 0x1FACACu);
    ctx->pc = 0x1FACA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FACA4u;
    // 0x1faca8: 0x2118821  addu        $s1, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7668u, 0x1FACA4u, 0x1FACACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FACACu;
label_1facac:
    // 0x1facac: 0xc6010108  lwc1        $f1, 0x108($s0)
    ctx->pc = 0x1facacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1facb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1facb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1facb4: 0xae020124  sw          $v0, 0x124($s0)
    ctx->pc = 0x1facb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
    // 0x1facb8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1facb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1facbc: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x1facbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x1facc0: 0xae000158  sw          $zero, 0x158($s0)
    ctx->pc = 0x1facc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 0));
    // 0x1facc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1facc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1facc8: 0xe6010108  swc1        $f1, 0x108($s0)
    ctx->pc = 0x1facc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x1faccc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1facccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1facd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1facd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1facd4: 0xae020144  sw          $v0, 0x144($s0)
    ctx->pc = 0x1facd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 2));
    // 0x1facd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1facd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1facdc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FACDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FACDCu;
        // 0x1face0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FACDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FACE4u;
    // 0x1face4: 0x0  nop
    ctx->pc = 0x1face4u;
    // NOP
    ctx->pc = 0x1face8u;
}
