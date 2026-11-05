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

// Function: sub_0014DE60
// Address: 0x14de60 - 0x14df28
void sub_0014DE60_0x14de60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014DE60_0x14de60");
#endif

    switch (ctx->pc) {
        case 0x14de84u: goto label_14de84;
        case 0x14df04u: goto label_14df04;
        case 0x14df14u: goto label_14df14;
        default: break;
    }

    ctx->pc = 0x14de60u;

    // 0x14de60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14de60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14de64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14de64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14de68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14de68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14de6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14de6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14de70: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14de70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14de74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14de74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14de78: 0xae060468  sw          $a2, 0x468($s0)
    ctx->pc = 0x14de78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1128), GPR_U32(ctx, 6));
    // 0x14de7c: 0xc04631a  jal         func_118C68
    ctx->pc = 0x14DE7Cu;
    SET_GPR_U32(ctx, 31, 0x14DE84u);
    ctx->pc = 0x14DE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DE7Cu;
    // 0x14de80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118C68u, 0x14DE7Cu, 0x14DE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DE84u;
label_14de84:
    // 0x14de84: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x14de84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x14de88: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x14de88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x14de8c: 0x6845000f  ldl         $a1, 0xF($v0)
    ctx->pc = 0x14de8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x14de90: 0x6c450008  ldr         $a1, 0x8($v0)
    ctx->pc = 0x14de90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x14de94: 0x68460017  ldl         $a2, 0x17($v0)
    ctx->pc = 0x14de94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x14de98: 0x6c460010  ldr         $a2, 0x10($v0)
    ctx->pc = 0x14de98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x14de9c: 0x6847001f  ldl         $a3, 0x1F($v0)
    ctx->pc = 0x14de9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x14dea0: 0x6c470018  ldr         $a3, 0x18($v0)
    ctx->pc = 0x14dea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x14dea4: 0xb20408a7  sdl         $a0, 0x8A7($s0)
    ctx->pc = 0x14dea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14dea8: 0xb60408a0  sdr         $a0, 0x8A0($s0)
    ctx->pc = 0x14dea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14deac: 0xb20508af  sdl         $a1, 0x8AF($s0)
    ctx->pc = 0x14deacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2223); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14deb0: 0xb60508a8  sdr         $a1, 0x8A8($s0)
    ctx->pc = 0x14deb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2216); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14deb4: 0xb20608b7  sdl         $a2, 0x8B7($s0)
    ctx->pc = 0x14deb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14deb8: 0xb60608b0  sdr         $a2, 0x8B0($s0)
    ctx->pc = 0x14deb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14debc: 0xb20708bf  sdl         $a3, 0x8BF($s0)
    ctx->pc = 0x14debcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2239); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14dec0: 0xb60708b8  sdr         $a3, 0x8B8($s0)
    ctx->pc = 0x14dec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2232); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14dec4: 0x68440027  ldl         $a0, 0x27($v0)
    ctx->pc = 0x14dec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x14dec8: 0x6c440020  ldr         $a0, 0x20($v0)
    ctx->pc = 0x14dec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x14decc: 0x6845002f  ldl         $a1, 0x2F($v0)
    ctx->pc = 0x14deccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x14ded0: 0x6c450028  ldr         $a1, 0x28($v0)
    ctx->pc = 0x14ded0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x14ded4: 0x68460037  ldl         $a2, 0x37($v0)
    ctx->pc = 0x14ded4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x14ded8: 0x6c460030  ldr         $a2, 0x30($v0)
    ctx->pc = 0x14ded8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x14dedc: 0xb20408c7  sdl         $a0, 0x8C7($s0)
    ctx->pc = 0x14dedcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14dee0: 0xb60408c0  sdr         $a0, 0x8C0($s0)
    ctx->pc = 0x14dee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14dee4: 0xb20508cf  sdl         $a1, 0x8CF($s0)
    ctx->pc = 0x14dee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2255); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14dee8: 0xb60508c8  sdr         $a1, 0x8C8($s0)
    ctx->pc = 0x14dee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2248); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14deec: 0xb20608d7  sdl         $a2, 0x8D7($s0)
    ctx->pc = 0x14deecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14def0: 0xb60608d0  sdr         $a2, 0x8D0($s0)
    ctx->pc = 0x14def0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14def4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14def4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14def8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14def8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14defc: 0xc045eee  jal         func_117BB8
    ctx->pc = 0x14DEFCu;
    SET_GPR_U32(ctx, 31, 0x14DF04u);
    ctx->pc = 0x14DF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DEFCu;
    // 0x14df00: 0xae0308d8  sw          $v1, 0x8D8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2264), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BB8u, 0x14DEFCu, 0x14DF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DF04u;
label_14df04:
    // 0x14df04: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x14df04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x14df08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14df08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14df0c: 0xc042136  jal         func_1084D8
    ctx->pc = 0x14DF0Cu;
    SET_GPR_U32(ctx, 31, 0x14DF14u);
    ctx->pc = 0x14DF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DF0Cu;
    // 0x14df10: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084D8u, 0x14DF0Cu, 0x14DF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DF14u;
label_14df14:
    // 0x14df14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14df14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14df18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14df18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14df1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14df1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14df20: 0x3e00008  jr          $ra
    ctx->pc = 0x14DF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DF20u;
        // 0x14df24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14DF20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14DF28u;
}
