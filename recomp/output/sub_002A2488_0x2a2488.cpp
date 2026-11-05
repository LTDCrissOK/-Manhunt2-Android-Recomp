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

// Function: sub_002A2488
// Address: 0x2a2488 - 0x2a2638
void sub_002A2488_0x2a2488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2488_0x2a2488");
#endif

    switch (ctx->pc) {
        case 0x2a24d0u: goto label_2a24d0;
        case 0x2a252cu: goto label_2a252c;
        case 0x2a259cu: goto label_2a259c;
        case 0x2a25b8u: goto label_2a25b8;
        case 0x2a25dcu: goto label_2a25dc;
        case 0x2a25fcu: goto label_2a25fc;
        case 0x2a2618u: goto label_2a2618;
        default: break;
    }

    ctx->pc = 0x2a2488u;

    // 0x2a2488: 0x27bdfbc0  addiu       $sp, $sp, -0x440
    ctx->pc = 0x2a2488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966208));
    // 0x2a248c: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2a248cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2a2490: 0xffb00410  sd          $s0, 0x410($sp)
    ctx->pc = 0x2a2490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 16));
    // 0x2a2494: 0x2446c9d0  addiu       $a2, $v0, -0x3630
    ctx->pc = 0x2a2494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953424));
    // 0x2a2498: 0xffb10418  sd          $s1, 0x418($sp)
    ctx->pc = 0x2a2498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1048), GPR_U64(ctx, 17));
    // 0x2a249c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a249cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a24a0: 0xffb20420  sd          $s2, 0x420($sp)
    ctx->pc = 0x2a24a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 18));
    // 0x2a24a4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2a24a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a24a8: 0xffb40430  sd          $s4, 0x430($sp)
    ctx->pc = 0x2a24a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 20));
    // 0x2a24ac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a24acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a24b0: 0xffb30428  sd          $s3, 0x428($sp)
    ctx->pc = 0x2a24b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1064), GPR_U64(ctx, 19));
    // 0x2a24b4: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2a24b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a24b8: 0xffbf0438  sd          $ra, 0x438($sp)
    ctx->pc = 0x2a24b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1080), GPR_U64(ctx, 31));
    // 0x2a24bc: 0x30c20007  andi        $v0, $a2, 0x7
    ctx->pc = 0x2a24bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x2a24c0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2A24C0u;
    {
        const bool branch_taken_0x2a24c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A24C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A24C0u;
        // 0x2a24c4: 0x27a30200  addiu       $v1, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a24c0) {
            ctx->pc = 0x2A2524u;
            goto label_2a2524;
        }
    }
    ctx->pc = 0x2A24C8u;
    // 0x2a24c8: 0x24c20040  addiu       $v0, $a2, 0x40
    ctx->pc = 0x2a24c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x2a24cc: 0x27b30100  addiu       $s3, $sp, 0x100
    ctx->pc = 0x2a24ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2a24d0:
    // 0x2a24d0: 0x68c40007  ldl         $a0, 0x7($a2)
    ctx->pc = 0x2a24d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2a24d4: 0x6cc40000  ldr         $a0, 0x0($a2)
    ctx->pc = 0x2a24d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2a24d8: 0x68c5000f  ldl         $a1, 0xF($a2)
    ctx->pc = 0x2a24d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2a24dc: 0x6cc50008  ldr         $a1, 0x8($a2)
    ctx->pc = 0x2a24dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2a24e0: 0x68c70017  ldl         $a3, 0x17($a2)
    ctx->pc = 0x2a24e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2a24e4: 0x6cc70010  ldr         $a3, 0x10($a2)
    ctx->pc = 0x2a24e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2a24e8: 0x68c8001f  ldl         $t0, 0x1F($a2)
    ctx->pc = 0x2a24e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2a24ec: 0x6cc80018  ldr         $t0, 0x18($a2)
    ctx->pc = 0x2a24ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2a24f0: 0xb0640007  sdl         $a0, 0x7($v1)
    ctx->pc = 0x2a24f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a24f4: 0xb4640000  sdr         $a0, 0x0($v1)
    ctx->pc = 0x2a24f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a24f8: 0xb065000f  sdl         $a1, 0xF($v1)
    ctx->pc = 0x2a24f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a24fc: 0xb4650008  sdr         $a1, 0x8($v1)
    ctx->pc = 0x2a24fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2500: 0xb0670017  sdl         $a3, 0x17($v1)
    ctx->pc = 0x2a2500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2504: 0xb4670010  sdr         $a3, 0x10($v1)
    ctx->pc = 0x2a2504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2508: 0xb068001f  sdl         $t0, 0x1F($v1)
    ctx->pc = 0x2a2508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a250c: 0xb4680018  sdr         $t0, 0x18($v1)
    ctx->pc = 0x2a250cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2510: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2a2510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2a2514: 0x14c2ffee  bne         $a2, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2A2514u;
    {
        const bool branch_taken_0x2a2514 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A2518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2514u;
        // 0x2a2518: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2514) {
            ctx->pc = 0x2A24D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a24d0;
        }
    }
    ctx->pc = 0x2A251Cu;
    // 0x2a251c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2A251Cu;
    {
        const bool branch_taken_0x2a251c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A251Cu;
        // 0x2a2520: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a251c) {
            ctx->pc = 0x2A255Cu;
            goto label_2a255c;
        }
    }
    ctx->pc = 0x2A2524u;
label_2a2524:
    // 0x2a2524: 0x24c20040  addiu       $v0, $a2, 0x40
    ctx->pc = 0x2a2524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x2a2528: 0x27b30100  addiu       $s3, $sp, 0x100
    ctx->pc = 0x2a2528u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2a252c:
    // 0x2a252c: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x2a252cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a2530: 0xdcc40008  ld          $a0, 0x8($a2)
    ctx->pc = 0x2a2530u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2a2534: 0xdcc50010  ld          $a1, 0x10($a2)
    ctx->pc = 0x2a2534u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2a2538: 0xdcc70018  ld          $a3, 0x18($a2)
    ctx->pc = 0x2a2538u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2a253c: 0xfc690000  sd          $t1, 0x0($v1)
    ctx->pc = 0x2a253cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 9));
    // 0x2a2540: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x2a2540u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x2a2544: 0xfc650010  sd          $a1, 0x10($v1)
    ctx->pc = 0x2a2544u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 5));
    // 0x2a2548: 0xfc670018  sd          $a3, 0x18($v1)
    ctx->pc = 0x2a2548u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 7));
    // 0x2a254c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2a254cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2a2550: 0x14c2fff6  bne         $a2, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2A2550u;
    {
        const bool branch_taken_0x2a2550 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A2554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2550u;
        // 0x2a2554: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2550) {
            ctx->pc = 0x2A252Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a252c;
        }
    }
    ctx->pc = 0x2A2558u;
    // 0x2a2558: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2a2558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a255c:
    // 0x2a255c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a255cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2560: 0x68c80007  ldl         $t0, 0x7($a2)
    ctx->pc = 0x2a2560u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2a2564: 0x6cc80000  ldr         $t0, 0x0($a2)
    ctx->pc = 0x2a2564u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2a2568: 0x88c9000b  lwl         $t1, 0xB($a2)
    ctx->pc = 0x2a2568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
    // 0x2a256c: 0x98c90008  lwr         $t1, 0x8($a2)
    ctx->pc = 0x2a256cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 9) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 9) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 9, merged64); }
    // 0x2a2570: 0x80c2000c  lb          $v0, 0xC($a2)
    ctx->pc = 0x2a2570u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2a2574: 0x80c7000d  lb          $a3, 0xD($a2)
    ctx->pc = 0x2a2574u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 13)));
    // 0x2a2578: 0xb0680007  sdl         $t0, 0x7($v1)
    ctx->pc = 0x2a2578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a257c: 0xb4680000  sdr         $t0, 0x0($v1)
    ctx->pc = 0x2a257cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2580: 0xa869000b  swl         $t1, 0xB($v1)
    ctx->pc = 0x2a2580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2a2584: 0xb8690008  swr         $t1, 0x8($v1)
    ctx->pc = 0x2a2584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2a2588: 0xa062000c  sb          $v0, 0xC($v1)
    ctx->pc = 0x2a2588u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a258c: 0xa067000d  sb          $a3, 0xD($v1)
    ctx->pc = 0x2a258cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 13), (uint8_t)GPR_U32(ctx, 7));
    // 0x2a2590: 0x80c8000e  lb          $t0, 0xE($a2)
    ctx->pc = 0x2a2590u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x2a2594: 0xc0c7a76  jal         func_31E9D8
    ctx->pc = 0x2A2594u;
    SET_GPR_U32(ctx, 31, 0x2A259Cu);
    ctx->pc = 0x2A2598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2594u;
    // 0x2a2598: 0xa068000e  sb          $t0, 0xE($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 14), (uint8_t)GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E9D8u, 0x2A2594u, 0x2A259Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A259Cu;
label_2a259c:
    // 0x2a259c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A259Cu;
    {
        const bool branch_taken_0x2a259c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A25A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A259Cu;
        // 0x2a25a0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a259c) {
            ctx->pc = 0x2A25E0u;
            goto label_2a25e0;
        }
    }
    ctx->pc = 0x2A25A4u;
    // 0x2a25a4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2a25a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2a25a8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A25A8u;
    {
        const bool branch_taken_0x2a25a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a25a8) {
            ctx->pc = 0x2A25ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A25A8u;
            // 0x2a25ac: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A25C0u;
            goto label_2a25c0;
        }
    }
    ctx->pc = 0x2A25B0u;
    // 0x2a25b0: 0xc0c7a76  jal         func_31E9D8
    ctx->pc = 0x2A25B0u;
    SET_GPR_U32(ctx, 31, 0x2A25B8u);
    ctx->pc = 0x2A25B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A25B0u;
    // 0x2a25b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E9D8u, 0x2A25B0u, 0x2A25B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A25B8u;
label_2a25b8:
    // 0x2a25b8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2a25b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2a25bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2a25bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a25c0:
    // 0x2a25c0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A25C0u;
    {
        const bool branch_taken_0x2a25c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a25c0) {
            ctx->pc = 0x2A25E0u;
            goto label_2a25e0;
        }
    }
    ctx->pc = 0x2A25C8u;
    // 0x2a25c8: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x2a25c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2a25cc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A25CCu;
    {
        const bool branch_taken_0x2a25cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a25cc) {
            ctx->pc = 0x2A25E0u;
            goto label_2a25e0;
        }
    }
    ctx->pc = 0x2A25D4u;
    // 0x2a25d4: 0xc0c7a76  jal         func_31E9D8
    ctx->pc = 0x2A25D4u;
    SET_GPR_U32(ctx, 31, 0x2A25DCu);
    ctx->pc = 0x2A25D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A25D4u;
    // 0x2a25d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E9D8u, 0x2A25D4u, 0x2A25DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A25DCu;
label_2a25dc:
    // 0x2a25dc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2a25dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2a25e0:
    // 0x2a25e0: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A25E0u;
    {
        const bool branch_taken_0x2a25e0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A25E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A25E0u;
        // 0x2a25e4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a25e0) {
            ctx->pc = 0x2A2604u;
            goto label_2a2604;
        }
    }
    ctx->pc = 0x2A25E8u;
    // 0x2a25e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a25e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a25ec: 0x24a5ca28  addiu       $a1, $a1, -0x35D8
    ctx->pc = 0x2a25ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953512));
    // 0x2a25f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a25f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a25f4: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x2A25F4u;
    SET_GPR_U32(ctx, 31, 0x2A25FCu);
    ctx->pc = 0x2A25F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A25F4u;
    // 0x2a25f8: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x2A25F4u, 0x2A25FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A25FCu;
label_2a25fc:
    // 0x2a25fc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A25FCu;
    {
        const bool branch_taken_0x2a25fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A25FCu;
        // 0x2a2600: 0xdfb00410  ld          $s0, 0x410($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a25fc) {
            ctx->pc = 0x2A261Cu;
            goto label_2a261c;
        }
    }
    ctx->pc = 0x2A2604u;
label_2a2604:
    // 0x2a2604: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a2604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a2608: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a2608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a260c: 0x24a5ca48  addiu       $a1, $a1, -0x35B8
    ctx->pc = 0x2a260cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953544));
    // 0x2a2610: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x2A2610u;
    SET_GPR_U32(ctx, 31, 0x2A2618u);
    ctx->pc = 0x2A2614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2610u;
    // 0x2a2614: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x2A2610u, 0x2A2618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2618u;
label_2a2618:
    // 0x2a2618: 0xdfb00410  ld          $s0, 0x410($sp)
    ctx->pc = 0x2a2618u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
label_2a261c:
    // 0x2a261c: 0xdfb10418  ld          $s1, 0x418($sp)
    ctx->pc = 0x2a261cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1048)));
    // 0x2a2620: 0xdfb20420  ld          $s2, 0x420($sp)
    ctx->pc = 0x2a2620u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x2a2624: 0xdfb30428  ld          $s3, 0x428($sp)
    ctx->pc = 0x2a2624u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1064)));
    // 0x2a2628: 0xdfb40430  ld          $s4, 0x430($sp)
    ctx->pc = 0x2a2628u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x2a262c: 0xdfbf0438  ld          $ra, 0x438($sp)
    ctx->pc = 0x2a262cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1080)));
    // 0x2a2630: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2630u;
        // 0x2a2634: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2638u;
}
