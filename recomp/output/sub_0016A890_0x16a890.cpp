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

// Function: sub_0016A890
// Address: 0x16a890 - 0x16a9b8
void sub_0016A890_0x16a890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A890_0x16a890");
#endif

    switch (ctx->pc) {
        case 0x16a8acu: goto label_16a8ac;
        case 0x16a8c0u: goto label_16a8c0;
        case 0x16a900u: goto label_16a900;
        case 0x16a930u: goto label_16a930;
        default: break;
    }

    ctx->pc = 0x16a890u;

    // 0x16a890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16a890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16a894: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16a894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16a898: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16a898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16a89c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16a89cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a8a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16a8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16a8a4: 0xc04393c  jal         func_10E4F0
    ctx->pc = 0x16A8A4u;
    SET_GPR_U32(ctx, 31, 0x16A8ACu);
    ctx->pc = 0x16A8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A8A4u;
    // 0x16a8a8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x16A8A4u, 0x16A8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A8ACu;
label_16a8ac:
    // 0x16a8ac: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x16a8acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x16a8b0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x16a8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x16a8b4: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x16a8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
    // 0x16a8b8: 0xc047866  jal         func_11E198
    ctx->pc = 0x16A8B8u;
    SET_GPR_U32(ctx, 31, 0x16A8C0u);
    ctx->pc = 0x16A8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A8B8u;
    // 0x16a8bc: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E198u, 0x16A8B8u, 0x16A8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A8C0u;
label_16a8c0:
    // 0x16a8c0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x16A8C0u;
    {
        const bool branch_taken_0x16a8c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a8c0) {
            ctx->pc = 0x16A8C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A8C0u;
            // 0x16a8c4: 0x8e230068  lw          $v1, 0x68($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A8E0u;
            goto label_16a8e0;
        }
    }
    ctx->pc = 0x16A8C8u;
    // 0x16a8c8: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x16a8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x16a8cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16a8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16a8d0: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x16a8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x16a8d4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x16a8d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16a8d8: 0xfa210070  sqc2        $vf1, 0x70($s1)
    ctx->pc = 0x16a8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16a8dc: 0x8e230068  lw          $v1, 0x68($s1)
    ctx->pc = 0x16a8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_16a8e0:
    // 0x16a8e0: 0x263000c0  addiu       $s0, $s1, 0xC0
    ctx->pc = 0x16a8e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x16a8e4: 0x26220070  addiu       $v0, $s1, 0x70
    ctx->pc = 0x16a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x16a8e8: 0xae2300b8  sw          $v1, 0xB8($s1)
    ctx->pc = 0x16a8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 3));
    // 0x16a8ec: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x16a8ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16a8f0: 0xfa2100c0  sqc2        $vf1, 0xC0($s1)
    ctx->pc = 0x16a8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16a8f4: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x16a8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x16a8f8: 0xc05aacc  jal         func_16AB30
    ctx->pc = 0x16A8F8u;
    SET_GPR_U32(ctx, 31, 0x16A900u);
    ctx->pc = 0x16A8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A8F8u;
    // 0x16a8fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AB30u, 0x16A8F8u, 0x16A900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A900u;
label_16a900:
    // 0x16a900: 0x8e2600b8  lw          $a2, 0xB8($s1)
    ctx->pc = 0x16a900u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x16a904: 0x2405012c  addiu       $a1, $zero, 0x12C
    ctx->pc = 0x16a904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x16a908: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16a908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16a90c: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x16a90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x16a910: 0xae3000a4  sw          $s0, 0xA4($s1)
    ctx->pc = 0x16a910u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 16));
    // 0x16a914: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16a914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a918: 0xa6250096  sh          $a1, 0x96($s1)
    ctx->pc = 0x16a918u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 150), (uint16_t)GPR_U32(ctx, 5));
    // 0x16a91c: 0xae230080  sw          $v1, 0x80($s1)
    ctx->pc = 0x16a91cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 3));
    // 0x16a920: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x16a920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x16a924: 0xa6220094  sh          $v0, 0x94($s1)
    ctx->pc = 0x16a924u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 148), (uint16_t)GPR_U32(ctx, 2));
    // 0x16a928: 0xc05aacc  jal         func_16AB30
    ctx->pc = 0x16A928u;
    SET_GPR_U32(ctx, 31, 0x16A930u);
    ctx->pc = 0x16A92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A928u;
    // 0x16a92c: 0xae2600a0  sw          $a2, 0xA0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AB30u, 0x16A928u, 0x16A930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A930u;
label_16a930:
    // 0x16a930: 0x6a220087  ldl         $v0, 0x87($s1)
    ctx->pc = 0x16a930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x16a934: 0x6e220080  ldr         $v0, 0x80($s1)
    ctx->pc = 0x16a934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x16a938: 0x6a23008f  ldl         $v1, 0x8F($s1)
    ctx->pc = 0x16a938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x16a93c: 0x6e230088  ldr         $v1, 0x88($s1)
    ctx->pc = 0x16a93cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x16a940: 0x6a240097  ldl         $a0, 0x97($s1)
    ctx->pc = 0x16a940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x16a944: 0x6e240090  ldr         $a0, 0x90($s1)
    ctx->pc = 0x16a944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x16a948: 0x6a25009f  ldl         $a1, 0x9F($s1)
    ctx->pc = 0x16a948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x16a94c: 0x6e250098  ldr         $a1, 0x98($s1)
    ctx->pc = 0x16a94cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x16a950: 0xb2220037  sdl         $v0, 0x37($s1)
    ctx->pc = 0x16a950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16a954: 0xb6220030  sdr         $v0, 0x30($s1)
    ctx->pc = 0x16a954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16a958: 0xb223003f  sdl         $v1, 0x3F($s1)
    ctx->pc = 0x16a958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16a95c: 0xb6230038  sdr         $v1, 0x38($s1)
    ctx->pc = 0x16a95cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16a960: 0xb2240047  sdl         $a0, 0x47($s1)
    ctx->pc = 0x16a960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16a964: 0xb6240040  sdr         $a0, 0x40($s1)
    ctx->pc = 0x16a964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16a968: 0xb225004f  sdl         $a1, 0x4F($s1)
    ctx->pc = 0x16a968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16a96c: 0xb6250048  sdr         $a1, 0x48($s1)
    ctx->pc = 0x16a96cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16a970: 0x6a2200a7  ldl         $v0, 0xA7($s1)
    ctx->pc = 0x16a970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x16a974: 0x6e2200a0  ldr         $v0, 0xA0($s1)
    ctx->pc = 0x16a974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x16a978: 0x6a2300af  ldl         $v1, 0xAF($s1)
    ctx->pc = 0x16a978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x16a97c: 0x6e2300a8  ldr         $v1, 0xA8($s1)
    ctx->pc = 0x16a97cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x16a980: 0x6a2400b7  ldl         $a0, 0xB7($s1)
    ctx->pc = 0x16a980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x16a984: 0x6e2400b0  ldr         $a0, 0xB0($s1)
    ctx->pc = 0x16a984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x16a988: 0xb2220057  sdl         $v0, 0x57($s1)
    ctx->pc = 0x16a988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16a98c: 0xb6220050  sdr         $v0, 0x50($s1)
    ctx->pc = 0x16a98cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16a990: 0xb223005f  sdl         $v1, 0x5F($s1)
    ctx->pc = 0x16a990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16a994: 0xb6230058  sdr         $v1, 0x58($s1)
    ctx->pc = 0x16a994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16a998: 0xb2240067  sdl         $a0, 0x67($s1)
    ctx->pc = 0x16a998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16a99c: 0xb6240060  sdr         $a0, 0x60($s1)
    ctx->pc = 0x16a99cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16a9a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16a9a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a9a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16a9a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16a9a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16a9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a9ac: 0x3e00008  jr          $ra
    ctx->pc = 0x16A9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A9ACu;
        // 0x16a9b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A9ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A9B4u;
    // 0x16a9b4: 0x0  nop
    ctx->pc = 0x16a9b4u;
    // NOP
    ctx->pc = 0x16a9b8u;
}
