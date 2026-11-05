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

// Function: sub_002B2188
// Address: 0x2b2188 - 0x2b2258
void sub_002B2188_0x2b2188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2188_0x2b2188");
#endif

    switch (ctx->pc) {
        case 0x2b21acu: goto label_2b21ac;
        case 0x2b2200u: goto label_2b2200;
        default: break;
    }

    ctx->pc = 0x2b2188u;

    // 0x2b2188: 0x240201a8  addiu       $v0, $zero, 0x1A8
    ctx->pc = 0x2b2188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
    // 0x2b218c: 0x24860594  addiu       $a2, $a0, 0x594
    ctx->pc = 0x2b218cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1428));
    // 0x2b2190: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x2b2190u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2b2194: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2b2194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b2198: 0x2483073c  addiu       $v1, $a0, 0x73C
    ctx->pc = 0x2b2198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1852));
    // 0x2b219c: 0x661025  or          $v0, $v1, $a2
    ctx->pc = 0x2b219cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2b21a0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2b21a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2b21a4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2B21A4u;
    {
        const bool branch_taken_0x2b21a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B21A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B21A4u;
        // 0x2b21a8: 0x248208dc  addiu       $v0, $a0, 0x8DC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b21a4) {
            ctx->pc = 0x2B2200u;
            goto label_2b2200;
        }
    }
    ctx->pc = 0x2B21ACu;
label_2b21ac:
    // 0x2b21ac: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x2b21acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2b21b0: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x2b21b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2b21b4: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x2b21b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2b21b8: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x2b21b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2b21bc: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x2b21bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2b21c0: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x2b21c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2b21c4: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x2b21c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2b21c8: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x2b21c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2b21cc: 0xb0c40007  sdl         $a0, 0x7($a2)
    ctx->pc = 0x2b21ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b21d0: 0xb4c40000  sdr         $a0, 0x0($a2)
    ctx->pc = 0x2b21d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b21d4: 0xb0c5000f  sdl         $a1, 0xF($a2)
    ctx->pc = 0x2b21d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b21d8: 0xb4c50008  sdr         $a1, 0x8($a2)
    ctx->pc = 0x2b21d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b21dc: 0xb0c70017  sdl         $a3, 0x17($a2)
    ctx->pc = 0x2b21dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b21e0: 0xb4c70010  sdr         $a3, 0x10($a2)
    ctx->pc = 0x2b21e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b21e4: 0xb0c8001f  sdl         $t0, 0x1F($a2)
    ctx->pc = 0x2b21e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b21e8: 0xb4c80018  sdr         $t0, 0x18($a2)
    ctx->pc = 0x2b21e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b21ec: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2b21ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2b21f0: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2B21F0u;
    {
        const bool branch_taken_0x2b21f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B21F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B21F0u;
        // 0x2b21f4: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b21f0) {
            ctx->pc = 0x2B21ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b21ac;
        }
    }
    ctx->pc = 0x2B21F8u;
    // 0x2b21f8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2B21F8u;
    {
        const bool branch_taken_0x2b21f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b21f8) {
            ctx->pc = 0x2B222Cu;
            goto label_2b222c;
        }
    }
    ctx->pc = 0x2B2200u;
label_2b2200:
    // 0x2b2200: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x2b2200u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b2204: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x2b2204u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2b2208: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x2b2208u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2b220c: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x2b220cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2b2210: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x2b2210u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x2b2214: 0xfcc50008  sd          $a1, 0x8($a2)
    ctx->pc = 0x2b2214u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 5));
    // 0x2b2218: 0xfcc70010  sd          $a3, 0x10($a2)
    ctx->pc = 0x2b2218u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 7));
    // 0x2b221c: 0xfcc80018  sd          $t0, 0x18($a2)
    ctx->pc = 0x2b221cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 8));
    // 0x2b2220: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2b2220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2b2224: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2B2224u;
    {
        const bool branch_taken_0x2b2224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B2228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2224u;
        // 0x2b2228: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2224) {
            ctx->pc = 0x2B2200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b2200;
        }
    }
    ctx->pc = 0x2B222Cu;
label_2b222c:
    // 0x2b222c: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x2b222cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2b2230: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x2b2230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2b2234: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x2b2234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b2238: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2238u;
        // 0x2b223c: 0xb4c20000  sdr         $v0, 0x0($a2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2240u;
    // 0x2b2240: 0x27bd0800  addiu       $sp, $sp, 0x800
    ctx->pc = 0x2b2240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2048));
    // 0x2b2244: 0x0  nop
    ctx->pc = 0x2b2244u;
    // NOP
    // 0x2b2248: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b2248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b224c: 0x0  nop
    ctx->pc = 0x2b224cu;
    // NOP
    // 0x2b2250: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b2250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b2254: 0x0  nop
    ctx->pc = 0x2b2254u;
    // NOP
    ctx->pc = 0x2b2258u;
}
