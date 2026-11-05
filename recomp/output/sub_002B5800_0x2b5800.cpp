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

// Function: sub_002B5800
// Address: 0x2b5800 - 0x2b5958
void sub_002B5800_0x2b5800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5800_0x2b5800");
#endif

    switch (ctx->pc) {
        case 0x2b582cu: goto label_2b582c;
        case 0x2b5860u: goto label_2b5860;
        case 0x2b58c8u: goto label_2b58c8;
        case 0x2b5924u: goto label_2b5924;
        case 0x2b5934u: goto label_2b5934;
        case 0x2b593cu: goto label_2b593c;
        default: break;
    }

    ctx->pc = 0x2b5800u;

    // 0x2b5800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b5800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b5804: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b5804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5808: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b5808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b580c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b580cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b5810: 0x3c10004c  lui         $s0, 0x4C
    ctx->pc = 0x2b5810u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    // 0x2b5814: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b5814u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5818: 0x26102508  addiu       $s0, $s0, 0x2508
    ctx->pc = 0x2b5818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9480));
    // 0x2b581c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b581cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b5820: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2b5820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2b5824: 0xc0acb76  jal         func_2B2DD8
    ctx->pc = 0x2B5824u;
    SET_GPR_U32(ctx, 31, 0x2B582Cu);
    ctx->pc = 0x2B5828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5824u;
    // 0x2b5828: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2DD8u, 0x2B5824u, 0x2B582Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B582Cu;
label_2b582c:
    // 0x2b582c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2b582cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2b5830: 0x26270004  addiu       $a3, $s1, 0x4
    ctx->pc = 0x2b5830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2b5834: 0x24428f10  addiu       $v0, $v0, -0x70F0
    ctx->pc = 0x2b5834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938384));
    // 0x2b5838: 0xf01825  or          $v1, $a3, $s0
    ctx->pc = 0x2b5838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 16));
    // 0x2b583c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2b583cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2b5840: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x2b5840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2b5844: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2B5844u;
    {
        const bool branch_taken_0x2b5844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5844u;
        // 0x2b5848: 0xae205908  sw          $zero, 0x5908($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 22792), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5844) {
            ctx->pc = 0x2B58B4u;
            goto label_2b58b4;
        }
    }
    ctx->pc = 0x2B584Cu;
    // 0x2b584c: 0x26325940  addiu       $s2, $s1, 0x5940
    ctx->pc = 0x2b584cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 22848));
    // 0x2b5850: 0x260258e0  addiu       $v0, $s0, 0x58E0
    ctx->pc = 0x2b5850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 22752));
    // 0x2b5854: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2b5854u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2b5858: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b5858u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b585c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2b585cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2b5860:
    // 0x2b5860: 0x6a030007  ldl         $v1, 0x7($s0)
    ctx->pc = 0x2b5860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2b5864: 0x6e030000  ldr         $v1, 0x0($s0)
    ctx->pc = 0x2b5864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2b5868: 0x6a06000f  ldl         $a2, 0xF($s0)
    ctx->pc = 0x2b5868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2b586c: 0x6e060008  ldr         $a2, 0x8($s0)
    ctx->pc = 0x2b586cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2b5870: 0x6a080017  ldl         $t0, 0x17($s0)
    ctx->pc = 0x2b5870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2b5874: 0x6e080010  ldr         $t0, 0x10($s0)
    ctx->pc = 0x2b5874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2b5878: 0x6a09001f  ldl         $t1, 0x1F($s0)
    ctx->pc = 0x2b5878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2b587c: 0x6e090018  ldr         $t1, 0x18($s0)
    ctx->pc = 0x2b587cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2b5880: 0xb0e30007  sdl         $v1, 0x7($a3)
    ctx->pc = 0x2b5880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5884: 0xb4e30000  sdr         $v1, 0x0($a3)
    ctx->pc = 0x2b5884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5888: 0xb0e6000f  sdl         $a2, 0xF($a3)
    ctx->pc = 0x2b5888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b588c: 0xb4e60008  sdr         $a2, 0x8($a3)
    ctx->pc = 0x2b588cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5890: 0xb0e80017  sdl         $t0, 0x17($a3)
    ctx->pc = 0x2b5890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5894: 0xb4e80010  sdr         $t0, 0x10($a3)
    ctx->pc = 0x2b5894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5898: 0xb0e9001f  sdl         $t1, 0x1F($a3)
    ctx->pc = 0x2b5898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b589c: 0xb4e90018  sdr         $t1, 0x18($a3)
    ctx->pc = 0x2b589cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b58a0: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x2b58a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2b58a4: 0x1602ffee  bne         $s0, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2B58A4u;
    {
        const bool branch_taken_0x2b58a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B58A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B58A4u;
        // 0x2b58a8: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b58a4) {
            ctx->pc = 0x2B5860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b5860;
        }
    }
    ctx->pc = 0x2B58ACu;
    // 0x2b58ac: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2B58ACu;
    {
        const bool branch_taken_0x2b58ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b58ac) {
            ctx->pc = 0x2B58F4u;
            goto label_2b58f4;
        }
    }
    ctx->pc = 0x2B58B4u;
label_2b58b4:
    // 0x2b58b4: 0x26325940  addiu       $s2, $s1, 0x5940
    ctx->pc = 0x2b58b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 22848));
    // 0x2b58b8: 0x260258e0  addiu       $v0, $s0, 0x58E0
    ctx->pc = 0x2b58b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 22752));
    // 0x2b58bc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2b58bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2b58c0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b58c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b58c4: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2b58c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2b58c8:
    // 0x2b58c8: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x2b58c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b58cc: 0xde060008  ld          $a2, 0x8($s0)
    ctx->pc = 0x2b58ccu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2b58d0: 0xde080010  ld          $t0, 0x10($s0)
    ctx->pc = 0x2b58d0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b58d4: 0xde090018  ld          $t1, 0x18($s0)
    ctx->pc = 0x2b58d4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2b58d8: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x2b58d8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x2b58dc: 0xfce60008  sd          $a2, 0x8($a3)
    ctx->pc = 0x2b58dcu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 6));
    // 0x2b58e0: 0xfce80010  sd          $t0, 0x10($a3)
    ctx->pc = 0x2b58e0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 8));
    // 0x2b58e4: 0xfce90018  sd          $t1, 0x18($a3)
    ctx->pc = 0x2b58e4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 9));
    // 0x2b58e8: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x2b58e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2b58ec: 0x1602fff6  bne         $s0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2B58ECu;
    {
        const bool branch_taken_0x2b58ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B58F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B58ECu;
        // 0x2b58f0: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b58ec) {
            ctx->pc = 0x2B58C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b58c8;
        }
    }
    ctx->pc = 0x2B58F4u;
label_2b58f4:
    // 0x2b58f4: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x2b58f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2b58f8: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x2b58f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2b58fc: 0x6a03000f  ldl         $v1, 0xF($s0)
    ctx->pc = 0x2b58fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2b5900: 0x6e030008  ldr         $v1, 0x8($s0)
    ctx->pc = 0x2b5900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2b5904: 0xb0e20007  sdl         $v0, 0x7($a3)
    ctx->pc = 0x2b5904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5908: 0xb4e20000  sdr         $v0, 0x0($a3)
    ctx->pc = 0x2b5908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b590c: 0xb0e3000f  sdl         $v1, 0xF($a3)
    ctx->pc = 0x2b590cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5910: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x2b5910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x2b5914: 0xb4e30008  sdr         $v1, 0x8($a3)
    ctx->pc = 0x2b5914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5918: 0x24a5fb40  addiu       $a1, $a1, -0x4C0
    ctx->pc = 0x2b5918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966080));
    // 0x2b591c: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x2B591Cu;
    SET_GPR_U32(ctx, 31, 0x2B5924u);
    ctx->pc = 0x2B5920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B591Cu;
    // 0x2b5920: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x2B591Cu, 0x2B5924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5924u;
label_2b5924:
    // 0x2b5924: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b5924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5928: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b5928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b592c: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x2B592Cu;
    SET_GPR_U32(ctx, 31, 0x2B5934u);
    ctx->pc = 0x2B5930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B592Cu;
    // 0x2b5930: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x2B592Cu, 0x2B5934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5934u;
label_2b5934:
    // 0x2b5934: 0xc0ace06  jal         func_2B3818
    ctx->pc = 0x2B5934u;
    SET_GPR_U32(ctx, 31, 0x2B593Cu);
    ctx->pc = 0x2B5938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5934u;
    // 0x2b5938: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3818u, 0x2B5934u, 0x2B593Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B593Cu;
label_2b593c:
    // 0x2b593c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b593cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5940: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b5940u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5944: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b5944u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5948: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2b5948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b594c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B594Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B594Cu;
        // 0x2b5950: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B594Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5954u;
    // 0x2b5954: 0x0  nop
    ctx->pc = 0x2b5954u;
    // NOP
    ctx->pc = 0x2b5958u;
}
