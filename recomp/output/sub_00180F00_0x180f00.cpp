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

// Function: sub_00180F00
// Address: 0x180f00 - 0x180f48
void sub_00180F00_0x180f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180F00_0x180f00");
#endif

    ctx->pc = 0x180f00u;

    // 0x180f00: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x180f00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x180f04: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x180f04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180f08: 0x9083013b  lbu         $v1, 0x13B($a0)
    ctx->pc = 0x180f08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 315)));
    // 0x180f0c: 0x28c50004  slti        $a1, $a2, 0x4
    ctx->pc = 0x180f0cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x180f10: 0xc4810148  lwc1        $f1, 0x148($a0)
    ctx->pc = 0x180f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180f14: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x180f14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x180f18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x180f18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180f1c: 0x0  nop
    ctx->pc = 0x180f1cu;
    // NOP
    // 0x180f20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x180f20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x180f24: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x180F24u;
    {
        const bool branch_taken_0x180f24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x180F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180F24u;
        // 0x180f28: 0x46010042  mul.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x180f24) {
            ctx->pc = 0x180F40u;
            goto label_180f40;
        }
    }
    ctx->pc = 0x180F2Cu;
    // 0x180f2c: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x180F2Cu;
    {
        const bool branch_taken_0x180f2c = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x180f2c) {
            ctx->pc = 0x180F40u;
            goto label_180f40;
        }
    }
    ctx->pc = 0x180F34u;
    // 0x180f34: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x180f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180f38: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x180f38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x180f3c: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x180f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_180f40:
    // 0x180f40: 0x3e00008  jr          $ra
    ctx->pc = 0x180F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180F48u;
}
