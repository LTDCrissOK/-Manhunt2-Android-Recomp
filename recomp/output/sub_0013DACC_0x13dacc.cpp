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

// Function: sub_0013DACC
// Address: 0x13dacc - 0x13db3c
void sub_0013DACC_0x13dacc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013DACC_0x13dacc");
#endif

    switch (ctx->pc) {
        case 0x13daecu: goto label_13daec;
        case 0x13db14u: goto label_13db14;
        default: break;
    }

    ctx->pc = 0x13daccu;

    // 0x13dacc: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x13daccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x13dad0: 0x2447e818  addiu       $a3, $v0, -0x17E8
    ctx->pc = 0x13dad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961176));
    // 0x13dad4: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x13dad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x13dad8: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x13dad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x13dadc: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x13dadcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13dae0: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x13dae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13dae4: 0x3e00008  jr          $ra
    ctx->pc = 0x13DAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DAE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13DAECu;
label_13daec:
    // 0x13daec: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x13daecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x13daf0: 0x2447e820  addiu       $a3, $v0, -0x17E0
    ctx->pc = 0x13daf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961184));
    // 0x13daf4: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x13daf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x13daf8: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x13daf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x13dafc: 0x80e40008  lb          $a0, 0x8($a3)
    ctx->pc = 0x13dafcu;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x43E828u));
    // 0x13db00: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x13db00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13db04: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x13db04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13db08: 0xa0c40008  sb          $a0, 0x8($a2)
    ctx->pc = 0x13db08u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 8), (uint8_t)GPR_U32(ctx, 4));
    // 0x13db0c: 0x3e00008  jr          $ra
    ctx->pc = 0x13DB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DB0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13DB14u;
label_13db14:
    // 0x13db14: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x13db14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x13db18: 0x2447e830  addiu       $a3, $v0, -0x17D0
    ctx->pc = 0x13db18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961200));
    // 0x13db1c: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x13db1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x13db20: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x13db20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x13db24: 0x80e40008  lb          $a0, 0x8($a3)
    ctx->pc = 0x13db24u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x43E838u));
    // 0x13db28: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x13db28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13db2c: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x13db2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13db30: 0xa0c40008  sb          $a0, 0x8($a2)
    ctx->pc = 0x13db30u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 8), (uint8_t)GPR_U32(ctx, 4));
    // 0x13db34: 0x3e00008  jr          $ra
    ctx->pc = 0x13DB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DB34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13DB3Cu;
}
