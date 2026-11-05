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

// Function: sub_00265970
// Address: 0x265970 - 0x2659e0
void sub_00265970_0x265970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265970_0x265970");
#endif

    ctx->pc = 0x265970u;

    // 0x265970: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x265970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x265974: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x265974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x265978: 0xa08202dc  sb          $v0, 0x2DC($a0)
    ctx->pc = 0x265978u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 732), (uint8_t)GPR_U32(ctx, 2));
    // 0x26597c: 0x8c622b00  lw          $v0, 0x2B00($v1)
    ctx->pc = 0x26597cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x265980: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x265980u;
    {
        const bool branch_taken_0x265980 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x265984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265980u;
        // 0x265984: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265980) {
            ctx->pc = 0x26599Cu;
            goto label_26599c;
        }
    }
    ctx->pc = 0x265988u;
    // 0x265988: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x265988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26598c: 0x0  nop
    ctx->pc = 0x26598cu;
    // NOP
    // 0x265990: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x265990u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x265994: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x265994u;
    {
        const bool branch_taken_0x265994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265994) {
            ctx->pc = 0x2659B4u;
            goto label_2659b4;
        }
    }
    ctx->pc = 0x26599Cu;
label_26599c:
    // 0x26599c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26599cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2659a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2659a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2659a4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2659a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2659a8: 0x0  nop
    ctx->pc = 0x2659a8u;
    // NOP
    // 0x2659ac: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2659acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2659b0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2659b0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2659b4:
    // 0x2659b4: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2659b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2659b8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2659b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2659bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2659bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2659c0: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2659c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x2659c4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2659c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2659c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2659c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2659cc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2659ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2659d0: 0xe48102e4  swc1        $f1, 0x2E4($a0)
    ctx->pc = 0x2659d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 740), bits); }
    // 0x2659d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2659D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2659D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2659D4u;
        // 0x2659d8: 0xe48002e0  swc1        $f0, 0x2E0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 736), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2659D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2659DCu;
    // 0x2659dc: 0x0  nop
    ctx->pc = 0x2659dcu;
    // NOP
    ctx->pc = 0x2659e0u;
}
