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

// Function: sub_00289810
// Address: 0x289810 - 0x289990
void sub_00289810_0x289810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289810_0x289810");
#endif

    switch (ctx->pc) {
        case 0x28986cu: goto label_28986c;
        case 0x289880u: goto label_289880;
        case 0x289898u: goto label_289898;
        case 0x2898c0u: goto label_2898c0;
        case 0x2898c8u: goto label_2898c8;
        case 0x289920u: goto label_289920;
        case 0x28993cu: goto label_28993c;
        case 0x289958u: goto label_289958;
        case 0x28996cu: goto label_28996c;
        default: break;
    }

    ctx->pc = 0x289810u;

    // 0x289810: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x289810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x289814: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x289814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x289818: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x289818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x28981c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28981cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289820: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x289820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x289824: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x289824u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x289828: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x289828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x28982c: 0x26104ec0  addiu       $s0, $s0, 0x4EC0
    ctx->pc = 0x28982cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20160));
    // 0x289830: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x289830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x289834: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x289834u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289838: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x289838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x28983c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x28983cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289840: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x289840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x289844: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x289844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289848: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x289848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x28984c: 0x2451ae30  addiu       $s1, $v0, -0x51D0
    ctx->pc = 0x28984cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946352));
    // 0x289850: 0x2449ae30  addiu       $t1, $v0, -0x51D0
    ctx->pc = 0x289850u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946352));
    // 0x289854: 0x69230007  ldl         $v1, 0x7($t1)
    ctx->pc = 0x289854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x289858: 0x6d230000  ldr         $v1, 0x0($t1)
    ctx->pc = 0x289858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x28985c: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x28985cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289860: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x289860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289864: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x289864u;
    SET_GPR_U32(ctx, 31, 0x28986Cu);
    ctx->pc = 0x289868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289864u;
    // 0x289868: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x289864u, 0x28986Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28986Cu;
label_28986c:
    // 0x28986c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x28986cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x289870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289874: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x289874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289878: 0xc0aebee  jal         func_2BAFB8
    ctx->pc = 0x289878u;
    SET_GPR_U32(ctx, 31, 0x289880u);
    ctx->pc = 0x28987Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289878u;
    // 0x28987c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAFB8u, 0x289878u, 0x289880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289880u;
label_289880:
    // 0x289880: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x289880u;
    {
        const bool branch_taken_0x289880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289880u;
        // 0x289884: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289880) {
            ctx->pc = 0x2898A8u;
            goto label_2898a8;
        }
    }
    ctx->pc = 0x289888u;
    // 0x289888: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x289888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28988c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x28988cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289890: 0xc0aec70  jal         func_2BB1C0
    ctx->pc = 0x289890u;
    SET_GPR_U32(ctx, 31, 0x289898u);
    ctx->pc = 0x289894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289890u;
    // 0x289894: 0x2646ffff  addiu       $a2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB1C0u, 0x289890u, 0x289898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289898u;
label_289898:
    // 0x289898: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x289898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x28989c: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x28989cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x2898a0: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2898A0u;
    {
        const bool branch_taken_0x2898a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2898A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2898A0u;
        // 0x2898a4: 0xa460fffe  sh          $zero, -0x2($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294967294), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2898a0) {
            ctx->pc = 0x28996Cu;
            goto label_28996c;
        }
    }
    ctx->pc = 0x2898A8u;
label_2898a8:
    // 0x2898a8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2898a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2898ac: 0x8c449160  lw          $a0, -0x6EA0($v0)
    ctx->pc = 0x2898acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938976)));
    // 0x2898b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2898b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2898b4: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x2898b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x2898b8: 0xc0a1a36  jal         func_2868D8
    ctx->pc = 0x2898B8u;
    SET_GPR_U32(ctx, 31, 0x2898C0u);
    ctx->pc = 0x2898BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2898B8u;
    // 0x2898bc: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2868D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2868D8u, 0x2898B8u, 0x2898C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2898C0u;
label_2898c0:
    // 0x2898c0: 0xc0aec0c  jal         func_2BB030
    ctx->pc = 0x2898C0u;
    SET_GPR_U32(ctx, 31, 0x2898C8u);
    ctx->pc = 0x2898C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2898C0u;
    // 0x2898c4: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB030u, 0x2898C0u, 0x2898C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2898C8u;
label_2898c8:
    // 0x2898c8: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x2898c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x2898cc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2898ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2898d0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2898d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2898d4: 0x2468ae38  addiu       $t0, $v1, -0x51C8
    ctx->pc = 0x2898d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946360));
    // 0x2898d8: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x2898d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2898dc: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x2898dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2898e0: 0x6906000f  ldl         $a2, 0xF($t0)
    ctx->pc = 0x2898e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2898e4: 0x6d060008  ldr         $a2, 0x8($t0)
    ctx->pc = 0x2898e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2898e8: 0x69070017  ldl         $a3, 0x17($t0)
    ctx->pc = 0x2898e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2898ec: 0x6d070010  ldr         $a3, 0x10($t0)
    ctx->pc = 0x2898ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2898f0: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x2898f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2898f4: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x2898f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2898f8: 0xb3a6001f  sdl         $a2, 0x1F($sp)
    ctx->pc = 0x2898f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2898fc: 0xb7a60018  sdr         $a2, 0x18($sp)
    ctx->pc = 0x2898fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289900: 0xb3a70027  sdl         $a3, 0x27($sp)
    ctx->pc = 0x289900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289904: 0xb7a70020  sdr         $a3, 0x20($sp)
    ctx->pc = 0x289904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289908: 0x8902001b  lwl         $v0, 0x1B($t0)
    ctx->pc = 0x289908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x28990c: 0x99020018  lwr         $v0, 0x18($t0)
    ctx->pc = 0x28990cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x289910: 0xaba2002b  swl         $v0, 0x2B($sp)
    ctx->pc = 0x289910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 43); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x289914: 0xbba20028  swr         $v0, 0x28($sp)
    ctx->pc = 0x289914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x289918: 0xc0aec2e  jal         func_2BB0B8
    ctx->pc = 0x289918u;
    SET_GPR_U32(ctx, 31, 0x289920u);
    ctx->pc = 0x28991Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289918u;
    // 0x28991c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB0B8u, 0x289918u, 0x289920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289920u;
label_289920:
    // 0x289920: 0x548023  subu        $s0, $v0, $s4
    ctx->pc = 0x289920u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x289924: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x289924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289928: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x289928u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x28992c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x28992cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289930: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x289930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289934: 0xc0aec70  jal         func_2BB1C0
    ctx->pc = 0x289934u;
    SET_GPR_U32(ctx, 31, 0x28993Cu);
    ctx->pc = 0x289938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289934u;
    // 0x289938: 0x108840  sll         $s1, $s0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB1C0u, 0x289934u, 0x28993Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28993Cu;
label_28993c:
    // 0x28993c: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x28993cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x289940: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x289940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x289944: 0x2351021  addu        $v0, $s1, $s5
    ctx->pc = 0x289944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x289948: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x289948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28994c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28994cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289950: 0xc0aec54  jal         func_2BB150
    ctx->pc = 0x289950u;
    SET_GPR_U32(ctx, 31, 0x289958u);
    ctx->pc = 0x289954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289950u;
    // 0x289954: 0xa4400000  sh          $zero, 0x0($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB150u, 0x289950u, 0x289958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289958u;
label_289958:
    // 0x289958: 0x2918821  addu        $s1, $s4, $s1
    ctx->pc = 0x289958u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x28995c: 0x2533023  subu        $a2, $s2, $s3
    ctx->pc = 0x28995cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x289960: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x289960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289964: 0xc0aec54  jal         func_2BB150
    ctx->pc = 0x289964u;
    SET_GPR_U32(ctx, 31, 0x28996Cu);
    ctx->pc = 0x289968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289964u;
    // 0x289968: 0x2625001a  addiu       $a1, $s1, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB150u, 0x289964u, 0x28996Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28996Cu;
label_28996c:
    // 0x28996c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x28996cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x289970: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x289970u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x289974: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x289974u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x289978: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x289978u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x28997c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x28997cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x289980: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x289980u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x289984: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x289984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x289988: 0x3e00008  jr          $ra
    ctx->pc = 0x289988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28998Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289988u;
        // 0x28998c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289990u;
}
