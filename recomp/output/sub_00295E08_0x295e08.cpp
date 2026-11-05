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

// Function: sub_00295E08
// Address: 0x295e08 - 0x295e90
void sub_00295E08_0x295e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295E08_0x295e08");
#endif

    ctx->pc = 0x295e08u;

    // 0x295e08: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x295e08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x295e0c: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x295e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x295e10: 0x8ce2a8c0  lw          $v0, -0x5740($a3)
    ctx->pc = 0x295e10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FA8C0u));
    // 0x295e14: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x295e14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x295e18: 0x246311e0  addiu       $v1, $v1, 0x11E0
    ctx->pc = 0x295e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4576));
    // 0x295e1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x295e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x295e20: 0x2466ffdc  addiu       $a2, $v1, -0x24
    ctx->pc = 0x295e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967260));
    // 0x295e24: 0x452018  mult        $a0, $v0, $a1
    ctx->pc = 0x295e24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x295e28: 0xace2a8c0  sw          $v0, -0x5740($a3)
    ctx->pc = 0x295e28u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294944960), GPR_U32(ctx, 2));
    // 0x295e2c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x295e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295e30: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x295e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x295e34: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x295e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x295e38: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x295e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295e3c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x295e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x295e40: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x295e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295e44: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x295e44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x295e48: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x295e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x295e4c: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x295e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x295e50: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x295e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x295e54: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x295e54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x295e58: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x295e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x295e5c: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x295e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x295e60: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x295e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x295e64: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x295e64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x295e68: 0x8882001b  lwl         $v0, 0x1B($a0)
    ctx->pc = 0x295e68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x295e6c: 0x98820018  lwr         $v0, 0x18($a0)
    ctx->pc = 0x295e6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x295e70: 0xa8a2001b  swl         $v0, 0x1B($a1)
    ctx->pc = 0x295e70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x295e74: 0xb8a20018  swr         $v0, 0x18($a1)
    ctx->pc = 0x295e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x295e78: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x295e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295e7c: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x295e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x295e80: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x295e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295e84: 0x3e00008  jr          $ra
    ctx->pc = 0x295E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295E84u;
        // 0x295e88: 0xe4a10020  swc1        $f1, 0x20($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295E8Cu;
    // 0x295e8c: 0x0  nop
    ctx->pc = 0x295e8cu;
    // NOP
    ctx->pc = 0x295e90u;
}
