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

// Function: sub_002A82E8
// Address: 0x2a82e8 - 0x2a8338
void sub_002A82E8_0x2a82e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A82E8_0x2a82e8");
#endif

    ctx->pc = 0x2a82e8u;

    // 0x2a82e8: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A82E8u;
    {
        const bool branch_taken_0x2a82e8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2A82ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A82E8u;
        // 0x2a82ec: 0xac850014  sw          $a1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a82e8) {
            ctx->pc = 0x2A8304u;
            goto label_2a8304;
        }
    }
    ctx->pc = 0x2A82F0u;
    // 0x2a82f0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2a82f0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a82f4: 0x0  nop
    ctx->pc = 0x2a82f4u;
    // NOP
    // 0x2a82f8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a82f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a82fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A82FCu;
    {
        const bool branch_taken_0x2a82fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a82fc) {
            ctx->pc = 0x2A8320u;
            goto label_2a8320;
        }
    }
    ctx->pc = 0x2A8304u;
label_2a8304:
    // 0x2a8304: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x2a8304u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x2a8308: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x2a8308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2a830c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a830cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a8310: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a8310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a8314: 0x0  nop
    ctx->pc = 0x2a8314u;
    // NOP
    // 0x2a8318: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a8318u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a831c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a831cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a8320:
    // 0x2a8320: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a8320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a8324: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a8324u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8328: 0x0  nop
    ctx->pc = 0x2a8328u;
    // NOP
    // 0x2a832c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2a832cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2a8330: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8330u;
        // 0x2a8334: 0xe4800020  swc1        $f0, 0x20($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8338u;
}
