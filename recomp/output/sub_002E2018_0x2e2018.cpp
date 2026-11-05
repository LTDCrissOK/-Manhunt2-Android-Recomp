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

// Function: sub_002E2018
// Address: 0x2e2018 - 0x2e2040
void sub_002E2018_0x2e2018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2018_0x2e2018");
#endif

    ctx->pc = 0x2e2018u;

    // 0x2e2018: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2e2018u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e201c: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2e201cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e2020: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x2e2020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2024: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2e2024u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2028: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x2e2028u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2e202c: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x2e202cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2030: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x2e2030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2e2034: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x2e2034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2038: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E203Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2038u;
        // 0x2e203c: 0xe4810018  swc1        $f1, 0x18($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2040u;
}
