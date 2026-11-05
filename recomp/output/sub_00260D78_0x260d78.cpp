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

// Function: sub_00260D78
// Address: 0x260d78 - 0x260dd0
void sub_00260D78_0x260d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260D78_0x260d78");
#endif

    ctx->pc = 0x260d78u;

    // 0x260d78: 0x8c820104  lw          $v0, 0x104($a0)
    ctx->pc = 0x260d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x260d7c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x260d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x260d80: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x260D80u;
    {
        const bool branch_taken_0x260d80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x260d80) {
            ctx->pc = 0x260DC4u;
            goto label_260dc4;
        }
    }
    ctx->pc = 0x260D88u;
    // 0x260d88: 0x8c850254  lw          $a1, 0x254($a0)
    ctx->pc = 0x260d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 596)));
    // 0x260d8c: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x260D8Cu;
    {
        const bool branch_taken_0x260d8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x260d8c) {
            ctx->pc = 0x260DC4u;
            goto label_260dc4;
        }
    }
    ctx->pc = 0x260D94u;
    // 0x260d94: 0x8c820258  lw          $v0, 0x258($a0)
    ctx->pc = 0x260d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 600)));
    // 0x260d98: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x260d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x260d9c: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x260d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x260da0: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x260da0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x260da4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x260da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260da8: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x260da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x260dac: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x260dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x260db0: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x260db0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x260db4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x260db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260db8: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x260db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x260dbc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x260dbcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x260dc0: 0xf8a10010  sqc2        $vf1, 0x10($a1)
    ctx->pc = 0x260dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_260dc4:
    // 0x260dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x260DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260DCCu;
    // 0x260dcc: 0x0  nop
    ctx->pc = 0x260dccu;
    // NOP
    ctx->pc = 0x260dd0u;
}
