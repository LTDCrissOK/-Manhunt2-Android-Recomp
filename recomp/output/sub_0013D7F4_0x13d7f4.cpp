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

// Function: sub_0013D7F4
// Address: 0x13d7f4 - 0x13d83c
void sub_0013D7F4_0x13d7f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D7F4_0x13d7f4");
#endif

    switch (ctx->pc) {
        case 0x13d814u: goto label_13d814;
        default: break;
    }

    ctx->pc = 0x13d7f4u;

    // 0x13d7f4: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x13d7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x13d7f8: 0x2447e778  addiu       $a3, $v0, -0x1888
    ctx->pc = 0x13d7f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961016));
    // 0x13d7fc: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x13d7fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x13d800: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x13d800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x13d804: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x13d804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13d808: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x13d808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13d80c: 0x3e00008  jr          $ra
    ctx->pc = 0x13D80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D80Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D814u;
label_13d814:
    // 0x13d814: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x13d814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x13d818: 0x2447e780  addiu       $a3, $v0, -0x1880
    ctx->pc = 0x13d818u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961024));
    // 0x13d81c: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x13d81cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x13d820: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x13d820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x13d824: 0x80e40008  lb          $a0, 0x8($a3)
    ctx->pc = 0x13d824u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x43E788u));
    // 0x13d828: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x13d828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13d82c: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x13d82cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13d830: 0xa0c40008  sb          $a0, 0x8($a2)
    ctx->pc = 0x13d830u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 8), (uint8_t)GPR_U32(ctx, 4));
    // 0x13d834: 0x3e00008  jr          $ra
    ctx->pc = 0x13D834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D83Cu;
}
