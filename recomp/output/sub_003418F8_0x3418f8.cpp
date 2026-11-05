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

// Function: sub_003418F8
// Address: 0x3418f8 - 0x341b68
void sub_003418F8_0x3418f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003418F8_0x3418f8");
#endif

    switch (ctx->pc) {
        case 0x341928u: goto label_341928;
        case 0x341a00u: goto label_341a00;
        case 0x341a08u: goto label_341a08;
        case 0x341a6cu: goto label_341a6c;
        case 0x341b38u: goto label_341b38;
        default: break;
    }

    ctx->pc = 0x3418f8u;

    // 0x3418f8: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x3418f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x3418fc: 0xffb100e8  sd          $s1, 0xE8($sp)
    ctx->pc = 0x3418fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 17));
    // 0x341900: 0xffb200f0  sd          $s2, 0xF0($sp)
    ctx->pc = 0x341900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 18));
    // 0x341904: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x341904u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341908: 0xffb300f8  sd          $s3, 0xF8($sp)
    ctx->pc = 0x341908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 19));
    // 0x34190c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x34190cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341910: 0xffb40100  sd          $s4, 0x100($sp)
    ctx->pc = 0x341910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 20));
    // 0x341914: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x341914u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341918: 0xffb000e0  sd          $s0, 0xE0($sp)
    ctx->pc = 0x341918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 16));
    // 0x34191c: 0xffbf0108  sd          $ra, 0x108($sp)
    ctx->pc = 0x34191cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 31));
    // 0x341920: 0xc0d0602  jal         func_341808
    ctx->pc = 0x341920u;
    SET_GPR_U32(ctx, 31, 0x341928u);
    ctx->pc = 0x341924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341920u;
    // 0x341924: 0x30f4ffff  andi        $s4, $a3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x341808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341808u, 0x341920u, 0x341928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341928u;
label_341928:
    // 0x341928: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x341928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34192c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x34192cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x341930: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x341930u;
    {
        const bool branch_taken_0x341930 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x341934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341930u;
        // 0x341934: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341930) {
            ctx->pc = 0x341940u;
            goto label_341940;
        }
    }
    ctx->pc = 0x341938u;
    // 0x341938: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x341938u;
    {
        const bool branch_taken_0x341938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341938u;
        // 0x34193c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341938) {
            ctx->pc = 0x341B48u;
            goto label_341b48;
        }
    }
    ctx->pc = 0x341940u;
label_341940:
    // 0x341940: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x341940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x341944: 0x822818  mult        $a1, $a0, $v0
    ctx->pc = 0x341944u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x341948: 0x24638bf0  addiu       $v1, $v1, -0x7410
    ctx->pc = 0x341948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937584));
    // 0x34194c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34194cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x341950: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x341950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x341954: 0xa38021  addu        $s0, $a1, $v1
    ctx->pc = 0x341954u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x341958: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x341958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x34195c: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x34195cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
    // 0x341960: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x341960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x341964: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x341964u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x341968: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x341968u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34196c: 0xa6140028  sh          $s4, 0x28($s0)
    ctx->pc = 0x34196cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 20));
    // 0x341970: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x341970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x341974: 0xae120024  sw          $s2, 0x24($s0)
    ctx->pc = 0x341974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 18));
    // 0x341978: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x341978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x34197c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x34197Cu;
    {
        const bool branch_taken_0x34197c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x341980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34197Cu;
        // 0x341980: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34197c) {
            ctx->pc = 0x3419F4u;
            goto label_3419f4;
        }
    }
    ctx->pc = 0x341984u;
    // 0x341984: 0x24620034  addiu       $v0, $v1, 0x34
    ctx->pc = 0x341984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
    // 0x341988: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x341988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x34198c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x34198cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x341990: 0x2467e118  addiu       $a3, $v1, -0x1EE8
    ctx->pc = 0x341990u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959384));
    // 0x341994: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x341994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x341998: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x341998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x34199c: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x34199cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3419a0: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x3419a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3419a4: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x3419a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3419a8: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x3419a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3419ac: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x3419acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3419b0: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x3419b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3419b4: 0xb045000f  sdl         $a1, 0xF($v0)
    ctx->pc = 0x3419b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3419b8: 0xb4450008  sdr         $a1, 0x8($v0)
    ctx->pc = 0x3419b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3419bc: 0xb0460017  sdl         $a2, 0x17($v0)
    ctx->pc = 0x3419bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3419c0: 0xb4460010  sdr         $a2, 0x10($v0)
    ctx->pc = 0x3419c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3419c4: 0x68e4001f  ldl         $a0, 0x1F($a3)
    ctx->pc = 0x3419c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3419c8: 0x6ce40018  ldr         $a0, 0x18($a3)
    ctx->pc = 0x3419c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3419cc: 0x68e50027  ldl         $a1, 0x27($a3)
    ctx->pc = 0x3419ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3419d0: 0x6ce50020  ldr         $a1, 0x20($a3)
    ctx->pc = 0x3419d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3419d4: 0x68e6002f  ldl         $a2, 0x2F($a3)
    ctx->pc = 0x3419d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3419d8: 0x6ce60028  ldr         $a2, 0x28($a3)
    ctx->pc = 0x3419d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3419dc: 0xb044001f  sdl         $a0, 0x1F($v0)
    ctx->pc = 0x3419dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3419e0: 0xb4440018  sdr         $a0, 0x18($v0)
    ctx->pc = 0x3419e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3419e4: 0xb0450027  sdl         $a1, 0x27($v0)
    ctx->pc = 0x3419e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3419e8: 0xb4450020  sdr         $a1, 0x20($v0)
    ctx->pc = 0x3419e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3419ec: 0xb046002f  sdl         $a2, 0x2F($v0)
    ctx->pc = 0x3419ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3419f0: 0xb4460028  sdr         $a2, 0x28($v0)
    ctx->pc = 0x3419f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3419f4:
    // 0x3419f4: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x3419f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3419f8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3419F8u;
    SET_GPR_U32(ctx, 31, 0x341A00u);
    ctx->pc = 0x3419FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3419F8u;
    // 0x3419fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3419F8u, 0x341A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341A00u;
label_341a00:
    // 0x341a00: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x341A00u;
    SET_GPR_U32(ctx, 31, 0x341A08u);
    ctx->pc = 0x341A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341A00u;
    // 0x341a04: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x341A00u, 0x341A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341A08u;
label_341a08:
    // 0x341a08: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x341a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x341a0c: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x341a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x341a10: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x341a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x341a14: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x341a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x341a18: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x341a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x341a1c: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x341a1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x341a20: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x341a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x341a24: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x341a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x341a28: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x341a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x341a2c: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x341a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x341a30: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x341a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x341a34: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x341a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x341a38: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x341a38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x341a3c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x341a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x341a40: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x341a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x341a44: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x341a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x341a48: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x341a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x341a4c: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x341a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x341a50: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x341a50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x341a54: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x341a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x341a58: 0x27b30070  addiu       $s3, $sp, 0x70
    ctx->pc = 0x341a58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x341a5c: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x341a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x341a60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x341a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341a64: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x341A64u;
    SET_GPR_U32(ctx, 31, 0x341A6Cu);
    ctx->pc = 0x341A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341A64u;
    // 0x341a68: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x341A64u, 0x341A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341A6Cu;
label_341a6c:
    // 0x341a6c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x341a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341a70: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x341a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x341a74: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x341a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x341a78: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x341a78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x341a7c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x341a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x341a80: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x341a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x341a84: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x341a84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x341a88: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x341a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341a8c: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x341a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x341a90: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x341a90u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x341a94: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x341a94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x341a98: 0xe7a2006c  swc1        $f2, 0x6C($sp)
    ctx->pc = 0x341a98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x341a9c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x341a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x341aa0: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x341aa0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x341aa4: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x341aa4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x341aa8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x341aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x341aac: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x341aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x341ab0: 0xe7a400d0  swc1        $f4, 0xD0($sp)
    ctx->pc = 0x341ab0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x341ab4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x341ab4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x341ab8: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x341ab8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x341abc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x341abcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x341ac0: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x341ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x341ac4: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x341ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x341ac8: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x341ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x341acc: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x341accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x341ad0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x341ad0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x341ad4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x341ad4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x341ad8: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x341ad8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x341adc: 0x0  nop
    ctx->pc = 0x341adcu;
    // NOP
    // 0x341ae0: 0x0  nop
    ctx->pc = 0x341ae0u;
    // NOP
    // 0x341ae4: 0x46010084  c1          0x10084
    ctx->pc = 0x341ae4u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x341ae8: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x341ae8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x341aec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x341aecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341af0: 0x0  nop
    ctx->pc = 0x341af0u;
    // NOP
    // 0x341af4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x341af4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x341af8: 0x0  nop
    ctx->pc = 0x341af8u;
    // NOP
    // 0x341afc: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x341AFCu;
    {
        const bool branch_taken_0x341afc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x341B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341AFCu;
        // 0x341b00: 0xe7a20050  swc1        $f2, 0x50($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x341afc) {
            ctx->pc = 0x341B28u;
            goto label_341b28;
        }
    }
    ctx->pc = 0x341B04u;
    // 0x341b04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x341b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x341b08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x341b08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341b0c: 0x0  nop
    ctx->pc = 0x341b0cu;
    // NOP
    // 0x341b10: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x341b10u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x341b14: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x341b14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x341b18: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x341b18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x341b1c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x341b1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x341b20: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x341b20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x341b24: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x341b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_341b28:
    // 0x341b28: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x341b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341b2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x341b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341b30: 0xc077824  jal         func_1DE090
    ctx->pc = 0x341B30u;
    SET_GPR_U32(ctx, 31, 0x341B38u);
    ctx->pc = 0x341B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341B30u;
    // 0x341b34: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE090u, 0x341B30u, 0x341B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341B38u;
label_341b38:
    // 0x341b38: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x341B38u;
    {
        const bool branch_taken_0x341b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x341B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341B38u;
        // 0x341b3c: 0xc7a00074  lwc1        $f0, 0x74($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x341b38) {
            ctx->pc = 0x341B44u;
            goto label_341b44;
        }
    }
    ctx->pc = 0x341B40u;
    // 0x341b40: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x341b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_341b44:
    // 0x341b44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x341b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_341b48:
    // 0x341b48: 0xdfb000e0  ld          $s0, 0xE0($sp)
    ctx->pc = 0x341b48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x341b4c: 0xdfb100e8  ld          $s1, 0xE8($sp)
    ctx->pc = 0x341b4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x341b50: 0xdfb200f0  ld          $s2, 0xF0($sp)
    ctx->pc = 0x341b50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x341b54: 0xdfb300f8  ld          $s3, 0xF8($sp)
    ctx->pc = 0x341b54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x341b58: 0xdfb40100  ld          $s4, 0x100($sp)
    ctx->pc = 0x341b58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x341b5c: 0xdfbf0108  ld          $ra, 0x108($sp)
    ctx->pc = 0x341b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x341b60: 0x3e00008  jr          $ra
    ctx->pc = 0x341B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341B60u;
        // 0x341b64: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341B68u;
}
