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

// Function: sub_00295F88
// Address: 0x295f88 - 0x296020
void sub_00295F88_0x295f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295F88_0x295f88");
#endif

    ctx->pc = 0x295f88u;

    // 0x295f88: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x295f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x295f8c: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x295f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x295f90: 0x8c44a8c0  lw          $a0, -0x5740($v0)
    ctx->pc = 0x295f90u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FA8C0u));
    // 0x295f94: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x295f94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x295f98: 0x24a511f8  addiu       $a1, $a1, 0x11F8
    ctx->pc = 0x295f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4600));
    // 0x295f9c: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x295f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x295fa0: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x295fa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x295fa4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x295fa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x295fa8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x295fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x295fac: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x295facu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x295fb0: 0x34c600ff  ori         $a2, $a2, 0xFF
    ctx->pc = 0x295fb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)255);
    // 0x295fb4: 0x3c07ff00  lui         $a3, 0xFF00
    ctx->pc = 0x295fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65280 << 16));
    // 0x295fb8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x295fb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x295fbc: 0x3c08807f  lui         $t0, 0x807F
    ctx->pc = 0x295fbcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32895 << 16));
    // 0x295fc0: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x295fc0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x295fc4: 0x84078  dsll        $t0, $t0, 1
    ctx->pc = 0x295fc4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 1);
    // 0x295fc8: 0x35080001  ori         $t0, $t0, 0x1
    ctx->pc = 0x295fc8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
    // 0x295fcc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x295fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x295fd0: 0x88830003  lwl         $v1, 0x3($a0)
    ctx->pc = 0x295fd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x295fd4: 0x98830000  lwr         $v1, 0x0($a0)
    ctx->pc = 0x295fd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x295fd8: 0xaba30003  swl         $v1, 0x3($sp)
    ctx->pc = 0x295fd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x295fdc: 0xbba30000  swr         $v1, 0x0($sp)
    ctx->pc = 0x295fdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x295fe0: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x295fe0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295fe4: 0x93a30001  lbu         $v1, 0x1($sp)
    ctx->pc = 0x295fe4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x295fe8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x295fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x295fec: 0x93a40002  lbu         $a0, 0x2($sp)
    ctx->pc = 0x295fecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x295ff0: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x295ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x295ff4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x295ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x295ff8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x295ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x295ffc: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x295ffcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x296000: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x296000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x296004: 0x93a30003  lbu         $v1, 0x3($sp)
    ctx->pc = 0x296004u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x296008: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x296008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x29600c: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x29600cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x296010: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x296010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x296014: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x296014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x296018: 0x3e00008  jr          $ra
    ctx->pc = 0x296018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296018u;
        // 0x29601c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296020u;
}
