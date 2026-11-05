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

// Function: sub_002B20D0
// Address: 0x2b20d0 - 0x2b2188
void sub_002B20D0_0x2b20d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B20D0_0x2b20d0");
#endif

    switch (ctx->pc) {
        case 0x2b20f4u: goto label_2b20f4;
        case 0x2b2148u: goto label_2b2148;
        default: break;
    }

    ctx->pc = 0x2b20d0u;

    // 0x2b20d0: 0x240201a8  addiu       $v0, $zero, 0x1A8
    ctx->pc = 0x2b20d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
    // 0x2b20d4: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x2b20d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2b20d8: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x2b20d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b20dc: 0x24830594  addiu       $v1, $a0, 0x594
    ctx->pc = 0x2b20dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1428));
    // 0x2b20e0: 0x24a5073c  addiu       $a1, $a1, 0x73C
    ctx->pc = 0x2b20e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1852));
    // 0x2b20e4: 0x651025  or          $v0, $v1, $a1
    ctx->pc = 0x2b20e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2b20e8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2b20e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2b20ec: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2B20ECu;
    {
        const bool branch_taken_0x2b20ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B20F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B20ECu;
        // 0x2b20f0: 0x24840734  addiu       $a0, $a0, 0x734 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1844));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b20ec) {
            ctx->pc = 0x2B2148u;
            goto label_2b2148;
        }
    }
    ctx->pc = 0x2B20F4u;
label_2b20f4:
    // 0x2b20f4: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x2b20f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2b20f8: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x2b20f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2b20fc: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x2b20fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2b2100: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x2b2100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2b2104: 0x68680017  ldl         $t0, 0x17($v1)
    ctx->pc = 0x2b2104u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2b2108: 0x6c680010  ldr         $t0, 0x10($v1)
    ctx->pc = 0x2b2108u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2b210c: 0x6862001f  ldl         $v0, 0x1F($v1)
    ctx->pc = 0x2b210cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2b2110: 0x6c620018  ldr         $v0, 0x18($v1)
    ctx->pc = 0x2b2110u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2b2114: 0xb0a60007  sdl         $a2, 0x7($a1)
    ctx->pc = 0x2b2114u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b2118: 0xb4a60000  sdr         $a2, 0x0($a1)
    ctx->pc = 0x2b2118u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b211c: 0xb0a7000f  sdl         $a3, 0xF($a1)
    ctx->pc = 0x2b211cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b2120: 0xb4a70008  sdr         $a3, 0x8($a1)
    ctx->pc = 0x2b2120u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b2124: 0xb0a80017  sdl         $t0, 0x17($a1)
    ctx->pc = 0x2b2124u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b2128: 0xb4a80010  sdr         $t0, 0x10($a1)
    ctx->pc = 0x2b2128u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b212c: 0xb0a2001f  sdl         $v0, 0x1F($a1)
    ctx->pc = 0x2b212cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b2130: 0xb4a20018  sdr         $v0, 0x18($a1)
    ctx->pc = 0x2b2130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b2134: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2b2134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2b2138: 0x1464ffee  bne         $v1, $a0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2B2138u;
    {
        const bool branch_taken_0x2b2138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2B213Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2138u;
        // 0x2b213c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2138) {
            ctx->pc = 0x2B20F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b20f4;
        }
    }
    ctx->pc = 0x2B2140u;
    // 0x2b2140: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2B2140u;
    {
        const bool branch_taken_0x2b2140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2140) {
            ctx->pc = 0x2B2174u;
            goto label_2b2174;
        }
    }
    ctx->pc = 0x2B2148u;
label_2b2148:
    // 0x2b2148: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x2b2148u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b214c: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x2b214cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2b2150: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x2b2150u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2b2154: 0xdc620018  ld          $v0, 0x18($v1)
    ctx->pc = 0x2b2154u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2b2158: 0xfca60000  sd          $a2, 0x0($a1)
    ctx->pc = 0x2b2158u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 6));
    // 0x2b215c: 0xfca70008  sd          $a3, 0x8($a1)
    ctx->pc = 0x2b215cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 7));
    // 0x2b2160: 0xfca80010  sd          $t0, 0x10($a1)
    ctx->pc = 0x2b2160u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 8));
    // 0x2b2164: 0xfca20018  sd          $v0, 0x18($a1)
    ctx->pc = 0x2b2164u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 2));
    // 0x2b2168: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2b2168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2b216c: 0x1464fff6  bne         $v1, $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2B216Cu;
    {
        const bool branch_taken_0x2b216c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2B2170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B216Cu;
        // 0x2b2170: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b216c) {
            ctx->pc = 0x2B2148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b2148;
        }
    }
    ctx->pc = 0x2B2174u;
label_2b2174:
    // 0x2b2174: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x2b2174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2b2178: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x2b2178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2b217c: 0xb0a40007  sdl         $a0, 0x7($a1)
    ctx->pc = 0x2b217cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b2180: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2180u;
        // 0x2b2184: 0xb4a40000  sdr         $a0, 0x0($a1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2188u;
}
