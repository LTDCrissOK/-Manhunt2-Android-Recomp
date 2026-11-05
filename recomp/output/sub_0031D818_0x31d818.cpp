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

// Function: sub_0031D818
// Address: 0x31d818 - 0x31dce8
void sub_0031D818_0x31d818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D818_0x31d818");
#endif

    switch (ctx->pc) {
        case 0x31d84cu: goto label_31d84c;
        case 0x31d858u: goto label_31d858;
        case 0x31d890u: goto label_31d890;
        case 0x31d8e8u: goto label_31d8e8;
        case 0x31d99cu: goto label_31d99c;
        case 0x31d9c0u: goto label_31d9c0;
        case 0x31d9e4u: goto label_31d9e4;
        case 0x31da3cu: goto label_31da3c;
        case 0x31daccu: goto label_31dacc;
        case 0x31db24u: goto label_31db24;
        case 0x31db88u: goto label_31db88;
        case 0x31dba8u: goto label_31dba8;
        case 0x31dc00u: goto label_31dc00;
        case 0x31dc80u: goto label_31dc80;
        case 0x31dca8u: goto label_31dca8;
        default: break;
    }

    ctx->pc = 0x31d818u;

    // 0x31d818: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x31d818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x31d81c: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x31d81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x31d820: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x31d820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x31d824: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31d824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d828: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x31d828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x31d82c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x31d82cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d830: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x31d830u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d834: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x31d834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x31d838: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x31d838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x31d83c: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x31d83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x31d840: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x31d840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x31d844: 0xc082f64  jal         func_20BD90
    ctx->pc = 0x31D844u;
    SET_GPR_U32(ctx, 31, 0x31D84Cu);
    ctx->pc = 0x31D848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D844u;
    // 0x31d848: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BD90u, 0x31D844u, 0x31D84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D84Cu;
label_31d84c:
    // 0x31d84c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31d84cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d850: 0xc082f7e  jal         func_20BDF8
    ctx->pc = 0x31D850u;
    SET_GPR_U32(ctx, 31, 0x31D858u);
    ctx->pc = 0x31D854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D850u;
    // 0x31d854: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20BDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BDF8u, 0x31D850u, 0x31D858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D858u;
label_31d858:
    // 0x31d858: 0x10400119  beqz        $v0, . + 4 + (0x119 << 2)
    ctx->pc = 0x31D858u;
    {
        const bool branch_taken_0x31d858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D858u;
        // 0x31d85c: 0x121100  sll         $v0, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d858) {
            ctx->pc = 0x31DCC0u;
            goto label_31dcc0;
        }
    }
    ctx->pc = 0x31D860u;
    // 0x31d860: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x31d860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x31d864: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x31d864u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31d868: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x31d868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x31d86c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x31d86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x31d870: 0x10620036  beq         $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x31D870u;
    {
        const bool branch_taken_0x31d870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x31D874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D870u;
        // 0x31d874: 0x3a0982d  daddu       $s3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d870) {
            ctx->pc = 0x31D94Cu;
            goto label_31d94c;
        }
    }
    ctx->pc = 0x31D878u;
    // 0x31d878: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x31D878u;
    {
        const bool branch_taken_0x31d878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D878u;
        // 0x31d87c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d878) {
            ctx->pc = 0x31D93Cu;
            goto label_31d93c;
        }
    }
    ctx->pc = 0x31D880u;
    // 0x31d880: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x31d880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x31d884: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x31D884u;
    {
        const bool branch_taken_0x31d884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D884u;
        // 0x31d888: 0x3a0182d  daddu       $v1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d884) {
            ctx->pc = 0x31D8E4u;
            goto label_31d8e4;
        }
    }
    ctx->pc = 0x31D88Cu;
    // 0x31d88c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x31d88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_31d890:
    // 0x31d890: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x31d890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x31d894: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x31d894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x31d898: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x31d898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x31d89c: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x31d89cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x31d8a0: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x31d8a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x31d8a4: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x31d8a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x31d8a8: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x31d8a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x31d8ac: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x31d8acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x31d8b0: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x31d8b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31d8b4: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x31d8b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31d8b8: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x31d8b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31d8bc: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x31d8bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31d8c0: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x31d8c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31d8c4: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x31d8c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31d8c8: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x31d8c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31d8cc: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x31d8ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31d8d0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x31d8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x31d8d4: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x31D8D4u;
    {
        const bool branch_taken_0x31d8d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31D8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D8D4u;
        // 0x31d8d8: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d8d4) {
            ctx->pc = 0x31D890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d890;
        }
    }
    ctx->pc = 0x31D8DCu;
    // 0x31d8dc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x31D8DCu;
    {
        const bool branch_taken_0x31d8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d8dc) {
            ctx->pc = 0x31D914u;
            goto label_31d914;
        }
    }
    ctx->pc = 0x31D8E4u;
label_31d8e4:
    // 0x31d8e4: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x31d8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_31d8e8:
    // 0x31d8e8: 0xdc690000  ld          $t1, 0x0($v1)
    ctx->pc = 0x31d8e8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31d8ec: 0xdc6a0008  ld          $t2, 0x8($v1)
    ctx->pc = 0x31d8ecu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x31d8f0: 0xdc650010  ld          $a1, 0x10($v1)
    ctx->pc = 0x31d8f0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x31d8f4: 0xdc660018  ld          $a2, 0x18($v1)
    ctx->pc = 0x31d8f4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x31d8f8: 0xfc890000  sd          $t1, 0x0($a0)
    ctx->pc = 0x31d8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 9));
    // 0x31d8fc: 0xfc8a0008  sd          $t2, 0x8($a0)
    ctx->pc = 0x31d8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 10));
    // 0x31d900: 0xfc850010  sd          $a1, 0x10($a0)
    ctx->pc = 0x31d900u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 5));
    // 0x31d904: 0xfc860018  sd          $a2, 0x18($a0)
    ctx->pc = 0x31d904u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 6));
    // 0x31d908: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x31d908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x31d90c: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x31D90Cu;
    {
        const bool branch_taken_0x31d90c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31D910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D90Cu;
        // 0x31d910: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d90c) {
            ctx->pc = 0x31D8E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d8e8;
        }
    }
    ctx->pc = 0x31D914u;
label_31d914:
    // 0x31d914: 0x68670007  ldl         $a3, 0x7($v1)
    ctx->pc = 0x31d914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x31d918: 0x6c670000  ldr         $a3, 0x0($v1)
    ctx->pc = 0x31d918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x31d91c: 0x6868000f  ldl         $t0, 0xF($v1)
    ctx->pc = 0x31d91cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x31d920: 0x6c680008  ldr         $t0, 0x8($v1)
    ctx->pc = 0x31d920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x31d924: 0x8c690010  lw          $t1, 0x10($v1)
    ctx->pc = 0x31d924u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x31d928: 0xb0870007  sdl         $a3, 0x7($a0)
    ctx->pc = 0x31d928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31d92c: 0xb4870000  sdr         $a3, 0x0($a0)
    ctx->pc = 0x31d92cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31d930: 0xb088000f  sdl         $t0, 0xF($a0)
    ctx->pc = 0x31d930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31d934: 0xb4880008  sdr         $t0, 0x8($a0)
    ctx->pc = 0x31d934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31d938: 0xac890010  sw          $t1, 0x10($a0)
    ctx->pc = 0x31d938u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 9));
label_31d93c:
    // 0x31d93c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x31d93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x31d940: 0x24420054  addiu       $v0, $v0, 0x54
    ctx->pc = 0x31d940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x31d944: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x31D944u;
    {
        const bool branch_taken_0x31d944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D944u;
        // 0x31d948: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d944) {
            ctx->pc = 0x31DCC0u;
            goto label_31dcc0;
        }
    }
    ctx->pc = 0x31D94Cu;
label_31d94c:
    // 0x31d94c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31d94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31d950: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x31d950u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d954: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x31d954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x31d958: 0x3c043cf3  lui         $a0, 0x3CF3
    ctx->pc = 0x31d958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15603 << 16));
    // 0x31d95c: 0x3484cf3d  ori         $a0, $a0, 0xCF3D
    ctx->pc = 0x31d95cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53053);
    // 0x31d960: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x31d960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31d964: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31d964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31d968: 0x27a50064  addiu       $a1, $sp, 0x64
    ctx->pc = 0x31d968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x31d96c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x31d96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x31d970: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x31d970u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31d974: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x31d974u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x31d978: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x31d978u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x31d97c: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x31d97cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x31d980: 0xc2280b  movn        $a1, $a2, $v0
    ctx->pc = 0x31d980u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
    // 0x31d984: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x31d984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31d988: 0x43a821  addu        $s5, $v0, $v1
    ctx->pc = 0x31d988u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31d98c: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x31D98Cu;
    {
        const bool branch_taken_0x31d98c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D98Cu;
        // 0x31d990: 0x24040054  addiu       $a0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d98c) {
            ctx->pc = 0x31D9A4u;
            goto label_31d9a4;
        }
    }
    ctx->pc = 0x31D994u;
    // 0x31d994: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x31D994u;
    SET_GPR_U32(ctx, 31, 0x31D99Cu);
    ctx->pc = 0x31D998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D994u;
    // 0x31d998: 0x2a42018  mult        $a0, $s5, $a0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x31D994u, 0x31D99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D99Cu;
label_31d99c:
    // 0x31d99c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31D99Cu;
    {
        const bool branch_taken_0x31d99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D99Cu;
        // 0x31d9a0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d99c) {
            ctx->pc = 0x31D9ACu;
            goto label_31d9ac;
        }
    }
    ctx->pc = 0x31D9A4u;
label_31d9a4:
    // 0x31d9a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31d9a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d9a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31d9a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31d9ac:
    // 0x31d9ac: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x31d9acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31d9b0: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x31d9b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d9b4: 0x10b20039  beq         $a1, $s2, . + 4 + (0x39 << 2)
    ctx->pc = 0x31D9B4u;
    {
        const bool branch_taken_0x31d9b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 18));
        ctx->pc = 0x31D9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D9B4u;
        // 0x31d9b8: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d9b4) {
            ctx->pc = 0x31DA9Cu;
            goto label_31da9c;
        }
    }
    ctx->pc = 0x31D9BCu;
    // 0x31d9bc: 0x0  nop
    ctx->pc = 0x31d9bcu;
    // NOP
label_31d9c0:
    // 0x31d9c0: 0x24a60054  addiu       $a2, $a1, 0x54
    ctx->pc = 0x31d9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 84));
    // 0x31d9c4: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x31D9C4u;
    {
        const bool branch_taken_0x31d9c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D9C4u;
        // 0x31d9c8: 0x24470054  addiu       $a3, $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d9c4) {
            ctx->pc = 0x31DA90u;
            goto label_31da90;
        }
    }
    ctx->pc = 0x31D9CCu;
    // 0x31d9cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31d9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d9d0: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x31d9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x31d9d4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x31d9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x31d9d8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x31D9D8u;
    {
        const bool branch_taken_0x31d9d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D9D8u;
        // 0x31d9dc: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d9d8) {
            ctx->pc = 0x31DA38u;
            goto label_31da38;
        }
    }
    ctx->pc = 0x31D9E0u;
    // 0x31d9e0: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x31d9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_31d9e4:
    // 0x31d9e4: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x31d9e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x31d9e8: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x31d9e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x31d9ec: 0x6868000f  ldl         $t0, 0xF($v1)
    ctx->pc = 0x31d9ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x31d9f0: 0x6c680008  ldr         $t0, 0x8($v1)
    ctx->pc = 0x31d9f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x31d9f4: 0x68690017  ldl         $t1, 0x17($v1)
    ctx->pc = 0x31d9f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x31d9f8: 0x6c690010  ldr         $t1, 0x10($v1)
    ctx->pc = 0x31d9f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x31d9fc: 0x686a001f  ldl         $t2, 0x1F($v1)
    ctx->pc = 0x31d9fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x31da00: 0x6c6a0018  ldr         $t2, 0x18($v1)
    ctx->pc = 0x31da00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x31da04: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x31da04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31da08: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x31da08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31da0c: 0xb088000f  sdl         $t0, 0xF($a0)
    ctx->pc = 0x31da0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31da10: 0xb4880008  sdr         $t0, 0x8($a0)
    ctx->pc = 0x31da10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31da14: 0xb0890017  sdl         $t1, 0x17($a0)
    ctx->pc = 0x31da14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31da18: 0xb4890010  sdr         $t1, 0x10($a0)
    ctx->pc = 0x31da18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31da1c: 0xb08a001f  sdl         $t2, 0x1F($a0)
    ctx->pc = 0x31da1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31da20: 0xb48a0018  sdr         $t2, 0x18($a0)
    ctx->pc = 0x31da20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31da24: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x31da24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x31da28: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x31DA28u;
    {
        const bool branch_taken_0x31da28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31DA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA28u;
        // 0x31da2c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31da28) {
            ctx->pc = 0x31D9E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d9e4;
        }
    }
    ctx->pc = 0x31DA30u;
    // 0x31da30: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x31DA30u;
    {
        const bool branch_taken_0x31da30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31da30) {
            ctx->pc = 0x31DA68u;
            goto label_31da68;
        }
    }
    ctx->pc = 0x31DA38u;
label_31da38:
    // 0x31da38: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x31da38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_31da3c:
    // 0x31da3c: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x31da3cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31da40: 0xdc680008  ld          $t0, 0x8($v1)
    ctx->pc = 0x31da40u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x31da44: 0xdc690010  ld          $t1, 0x10($v1)
    ctx->pc = 0x31da44u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x31da48: 0xdc6a0018  ld          $t2, 0x18($v1)
    ctx->pc = 0x31da48u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x31da4c: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x31da4cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x31da50: 0xfc880008  sd          $t0, 0x8($a0)
    ctx->pc = 0x31da50u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 8));
    // 0x31da54: 0xfc890010  sd          $t1, 0x10($a0)
    ctx->pc = 0x31da54u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 9));
    // 0x31da58: 0xfc8a0018  sd          $t2, 0x18($a0)
    ctx->pc = 0x31da58u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 10));
    // 0x31da5c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x31da5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x31da60: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x31DA60u;
    {
        const bool branch_taken_0x31da60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31DA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA60u;
        // 0x31da64: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31da60) {
            ctx->pc = 0x31DA3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31da3c;
        }
    }
    ctx->pc = 0x31DA68u;
label_31da68:
    // 0x31da68: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x31da68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x31da6c: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x31da6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x31da70: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x31da70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x31da74: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x31da74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x31da78: 0x8c680010  lw          $t0, 0x10($v1)
    ctx->pc = 0x31da78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x31da7c: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x31da7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31da80: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x31da80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31da84: 0xb085000f  sdl         $a1, 0xF($a0)
    ctx->pc = 0x31da84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31da88: 0xb4850008  sdr         $a1, 0x8($a0)
    ctx->pc = 0x31da88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31da8c: 0xac880010  sw          $t0, 0x10($a0)
    ctx->pc = 0x31da8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 8));
label_31da90:
    // 0x31da90: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x31da90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31da94: 0x14b2ffca  bne         $a1, $s2, . + 4 + (-0x36 << 2)
    ctx->pc = 0x31DA94u;
    {
        const bool branch_taken_0x31da94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 18));
        ctx->pc = 0x31DA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA94u;
        // 0x31da98: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31da94) {
            ctx->pc = 0x31D9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d9c0;
        }
    }
    ctx->pc = 0x31DA9Cu;
label_31da9c:
    // 0x31da9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31da9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31daa0: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x31daa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x31daa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31daa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31daa8: 0x14620035  bne         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x31DAA8u;
    {
        const bool branch_taken_0x31daa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x31daa8) {
            ctx->pc = 0x31DB80u;
            goto label_31db80;
        }
    }
    ctx->pc = 0x31DAB0u;
    // 0x31dab0: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
    ctx->pc = 0x31DAB0u;
    {
        const bool branch_taken_0x31dab0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DAB0u;
        // 0x31dab4: 0x26070054  addiu       $a3, $s0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dab0) {
            ctx->pc = 0x31DB78u;
            goto label_31db78;
        }
    }
    ctx->pc = 0x31DAB8u;
    // 0x31dab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31dab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dabc: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x31dabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x31dac0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x31DAC0u;
    {
        const bool branch_taken_0x31dac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DAC0u;
        // 0x31dac4: 0x260182d  daddu       $v1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dac0) {
            ctx->pc = 0x31DB20u;
            goto label_31db20;
        }
    }
    ctx->pc = 0x31DAC8u;
    // 0x31dac8: 0x26620040  addiu       $v0, $s3, 0x40
    ctx->pc = 0x31dac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_31dacc:
    // 0x31dacc: 0x686a0007  ldl         $t2, 0x7($v1)
    ctx->pc = 0x31daccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x31dad0: 0x6c6a0000  ldr         $t2, 0x0($v1)
    ctx->pc = 0x31dad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x31dad4: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x31dad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x31dad8: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x31dad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x31dadc: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x31dadcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x31dae0: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x31dae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x31dae4: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x31dae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x31dae8: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x31dae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x31daec: 0xb08a0007  sdl         $t2, 0x7($a0)
    ctx->pc = 0x31daecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31daf0: 0xb48a0000  sdr         $t2, 0x0($a0)
    ctx->pc = 0x31daf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31daf4: 0xb085000f  sdl         $a1, 0xF($a0)
    ctx->pc = 0x31daf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31daf8: 0xb4850008  sdr         $a1, 0x8($a0)
    ctx->pc = 0x31daf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31dafc: 0xb0860017  sdl         $a2, 0x17($a0)
    ctx->pc = 0x31dafcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31db00: 0xb4860010  sdr         $a2, 0x10($a0)
    ctx->pc = 0x31db00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31db04: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x31db04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31db08: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x31db08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31db0c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x31db0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x31db10: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x31DB10u;
    {
        const bool branch_taken_0x31db10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31DB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DB10u;
        // 0x31db14: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31db10) {
            ctx->pc = 0x31DACCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31dacc;
        }
    }
    ctx->pc = 0x31DB18u;
    // 0x31db18: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x31DB18u;
    {
        const bool branch_taken_0x31db18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31db18) {
            ctx->pc = 0x31DB50u;
            goto label_31db50;
        }
    }
    ctx->pc = 0x31DB20u;
label_31db20:
    // 0x31db20: 0x26620040  addiu       $v0, $s3, 0x40
    ctx->pc = 0x31db20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_31db24:
    // 0x31db24: 0xdc690000  ld          $t1, 0x0($v1)
    ctx->pc = 0x31db24u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31db28: 0xdc6a0008  ld          $t2, 0x8($v1)
    ctx->pc = 0x31db28u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x31db2c: 0xdc650010  ld          $a1, 0x10($v1)
    ctx->pc = 0x31db2cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x31db30: 0xdc660018  ld          $a2, 0x18($v1)
    ctx->pc = 0x31db30u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x31db34: 0xfc890000  sd          $t1, 0x0($a0)
    ctx->pc = 0x31db34u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 9));
    // 0x31db38: 0xfc8a0008  sd          $t2, 0x8($a0)
    ctx->pc = 0x31db38u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 10));
    // 0x31db3c: 0xfc850010  sd          $a1, 0x10($a0)
    ctx->pc = 0x31db3cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 5));
    // 0x31db40: 0xfc860018  sd          $a2, 0x18($a0)
    ctx->pc = 0x31db40u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 6));
    // 0x31db44: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x31db44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x31db48: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x31DB48u;
    {
        const bool branch_taken_0x31db48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31DB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DB48u;
        // 0x31db4c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31db48) {
            ctx->pc = 0x31DB24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31db24;
        }
    }
    ctx->pc = 0x31DB50u;
label_31db50:
    // 0x31db50: 0x68680007  ldl         $t0, 0x7($v1)
    ctx->pc = 0x31db50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x31db54: 0x6c680000  ldr         $t0, 0x0($v1)
    ctx->pc = 0x31db54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x31db58: 0x6869000f  ldl         $t1, 0xF($v1)
    ctx->pc = 0x31db58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x31db5c: 0x6c690008  ldr         $t1, 0x8($v1)
    ctx->pc = 0x31db5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x31db60: 0x8c6a0010  lw          $t2, 0x10($v1)
    ctx->pc = 0x31db60u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x31db64: 0xb0880007  sdl         $t0, 0x7($a0)
    ctx->pc = 0x31db64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31db68: 0xb4880000  sdr         $t0, 0x0($a0)
    ctx->pc = 0x31db68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31db6c: 0xb089000f  sdl         $t1, 0xF($a0)
    ctx->pc = 0x31db6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31db70: 0xb4890008  sdr         $t1, 0x8($a0)
    ctx->pc = 0x31db70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31db74: 0xac8a0010  sw          $t2, 0x10($a0)
    ctx->pc = 0x31db74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 10));
label_31db78:
    // 0x31db78: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x31DB78u;
    {
        const bool branch_taken_0x31db78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DB78u;
        // 0x31db7c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31db78) {
            ctx->pc = 0x31DC68u;
            goto label_31dc68;
        }
    }
    ctx->pc = 0x31DB80u;
label_31db80:
    // 0x31db80: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x31DB80u;
    {
        const bool branch_taken_0x31db80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DB80u;
        // 0x31db84: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31db80) {
            ctx->pc = 0x31DC60u;
            goto label_31dc60;
        }
    }
    ctx->pc = 0x31DB88u;
label_31db88:
    // 0x31db88: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x31db88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x31db8c: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x31DB8Cu;
    {
        const bool branch_taken_0x31db8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DB8Cu;
        // 0x31db90: 0x24460054  addiu       $a2, $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31db8c) {
            ctx->pc = 0x31DC54u;
            goto label_31dc54;
        }
    }
    ctx->pc = 0x31DB94u;
    // 0x31db94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31db94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31db98: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x31db98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x31db9c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x31DB9Cu;
    {
        const bool branch_taken_0x31db9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DB9Cu;
        // 0x31dba0: 0x260182d  daddu       $v1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31db9c) {
            ctx->pc = 0x31DBFCu;
            goto label_31dbfc;
        }
    }
    ctx->pc = 0x31DBA4u;
    // 0x31dba4: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x31dba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_31dba8:
    // 0x31dba8: 0x68670007  ldl         $a3, 0x7($v1)
    ctx->pc = 0x31dba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x31dbac: 0x6c670000  ldr         $a3, 0x0($v1)
    ctx->pc = 0x31dbacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x31dbb0: 0x6868000f  ldl         $t0, 0xF($v1)
    ctx->pc = 0x31dbb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x31dbb4: 0x6c680008  ldr         $t0, 0x8($v1)
    ctx->pc = 0x31dbb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x31dbb8: 0x68690017  ldl         $t1, 0x17($v1)
    ctx->pc = 0x31dbb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x31dbbc: 0x6c690010  ldr         $t1, 0x10($v1)
    ctx->pc = 0x31dbbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x31dbc0: 0x686a001f  ldl         $t2, 0x1F($v1)
    ctx->pc = 0x31dbc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x31dbc4: 0x6c6a0018  ldr         $t2, 0x18($v1)
    ctx->pc = 0x31dbc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x31dbc8: 0xb0870007  sdl         $a3, 0x7($a0)
    ctx->pc = 0x31dbc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31dbcc: 0xb4870000  sdr         $a3, 0x0($a0)
    ctx->pc = 0x31dbccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31dbd0: 0xb088000f  sdl         $t0, 0xF($a0)
    ctx->pc = 0x31dbd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31dbd4: 0xb4880008  sdr         $t0, 0x8($a0)
    ctx->pc = 0x31dbd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31dbd8: 0xb0890017  sdl         $t1, 0x17($a0)
    ctx->pc = 0x31dbd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31dbdc: 0xb4890010  sdr         $t1, 0x10($a0)
    ctx->pc = 0x31dbdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31dbe0: 0xb08a001f  sdl         $t2, 0x1F($a0)
    ctx->pc = 0x31dbe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31dbe4: 0xb48a0018  sdr         $t2, 0x18($a0)
    ctx->pc = 0x31dbe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31dbe8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x31dbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x31dbec: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x31DBECu;
    {
        const bool branch_taken_0x31dbec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31DBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DBECu;
        // 0x31dbf0: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dbec) {
            ctx->pc = 0x31DBA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31dba8;
        }
    }
    ctx->pc = 0x31DBF4u;
    // 0x31dbf4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x31DBF4u;
    {
        const bool branch_taken_0x31dbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31dbf4) {
            ctx->pc = 0x31DC2Cu;
            goto label_31dc2c;
        }
    }
    ctx->pc = 0x31DBFCu;
label_31dbfc:
    // 0x31dbfc: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x31dbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_31dc00:
    // 0x31dc00: 0xdc670000  ld          $a3, 0x0($v1)
    ctx->pc = 0x31dc00u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31dc04: 0xdc680008  ld          $t0, 0x8($v1)
    ctx->pc = 0x31dc04u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x31dc08: 0xdc690010  ld          $t1, 0x10($v1)
    ctx->pc = 0x31dc08u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x31dc0c: 0xdc6a0018  ld          $t2, 0x18($v1)
    ctx->pc = 0x31dc0cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x31dc10: 0xfc870000  sd          $a3, 0x0($a0)
    ctx->pc = 0x31dc10u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 7));
    // 0x31dc14: 0xfc880008  sd          $t0, 0x8($a0)
    ctx->pc = 0x31dc14u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 8));
    // 0x31dc18: 0xfc890010  sd          $t1, 0x10($a0)
    ctx->pc = 0x31dc18u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 9));
    // 0x31dc1c: 0xfc8a0018  sd          $t2, 0x18($a0)
    ctx->pc = 0x31dc1cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 10));
    // 0x31dc20: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x31dc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x31dc24: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x31DC24u;
    {
        const bool branch_taken_0x31dc24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31DC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DC24u;
        // 0x31dc28: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dc24) {
            ctx->pc = 0x31DC00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31dc00;
        }
    }
    ctx->pc = 0x31DC2Cu;
label_31dc2c:
    // 0x31dc2c: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x31dc2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x31dc30: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x31dc30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x31dc34: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x31dc34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x31dc38: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x31dc38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x31dc3c: 0x8c680010  lw          $t0, 0x10($v1)
    ctx->pc = 0x31dc3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x31dc40: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x31dc40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31dc44: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x31dc44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31dc48: 0xb087000f  sdl         $a3, 0xF($a0)
    ctx->pc = 0x31dc48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31dc4c: 0xb4870008  sdr         $a3, 0x8($a0)
    ctx->pc = 0x31dc4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31dc50: 0xac880010  sw          $t0, 0x10($a0)
    ctx->pc = 0x31dc50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 8));
label_31dc54:
    // 0x31dc54: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x31dc54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dc58: 0x1460ffcb  bnez        $v1, . + 4 + (-0x35 << 2)
    ctx->pc = 0x31DC58u;
    {
        const bool branch_taken_0x31dc58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31DC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DC58u;
        // 0x31dc5c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dc58) {
            ctx->pc = 0x31DB88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31db88;
        }
    }
    ctx->pc = 0x31DC60u;
label_31dc60:
    // 0x31dc60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31dc60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dc64: 0x0  nop
    ctx->pc = 0x31dc64u;
    // NOP
label_31dc68:
    // 0x31dc68: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31dc68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31dc6c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x31dc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x31dc70: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x31DC70u;
    {
        const bool branch_taken_0x31dc70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x31DC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DC70u;
        // 0x31dc74: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dc70) {
            ctx->pc = 0x31DC98u;
            goto label_31dc98;
        }
    }
    ctx->pc = 0x31DC78u;
    // 0x31dc78: 0x24420054  addiu       $v0, $v0, 0x54
    ctx->pc = 0x31dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x31dc7c: 0x0  nop
    ctx->pc = 0x31dc7cu;
    // NOP
label_31dc80:
    // 0x31dc80: 0x0  nop
    ctx->pc = 0x31dc80u;
    // NOP
    // 0x31dc84: 0x0  nop
    ctx->pc = 0x31dc84u;
    // NOP
    // 0x31dc88: 0x0  nop
    ctx->pc = 0x31dc88u;
    // NOP
    // 0x31dc8c: 0x0  nop
    ctx->pc = 0x31dc8cu;
    // NOP
    // 0x31dc90: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x31DC90u;
    {
        const bool branch_taken_0x31dc90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x31DC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DC90u;
        // 0x31dc94: 0x24420054  addiu       $v0, $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dc90) {
            ctx->pc = 0x31DC80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31dc80;
        }
    }
    ctx->pc = 0x31DC98u;
label_31dc98:
    // 0x31dc98: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31DC98u;
    {
        const bool branch_taken_0x31dc98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DC98u;
        // 0x31dc9c: 0x24020054  addiu       $v0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dc98) {
            ctx->pc = 0x31DCACu;
            goto label_31dcac;
        }
    }
    ctx->pc = 0x31DCA0u;
    // 0x31dca0: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x31DCA0u;
    SET_GPR_U32(ctx, 31, 0x31DCA8u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x31DCA0u, 0x31DCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DCA8u;
label_31dca8:
    // 0x31dca8: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x31dca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_31dcac:
    // 0x31dcac: 0xae340000  sw          $s4, 0x0($s1)
    ctx->pc = 0x31dcacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
    // 0x31dcb0: 0x2a21818  mult        $v1, $s5, $v0
    ctx->pc = 0x31dcb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x31dcb4: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x31dcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x31dcb8: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x31dcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x31dcbc: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x31dcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_31dcc0:
    // 0x31dcc0: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x31dcc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31dcc4: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x31dcc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x31dcc8: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x31dcc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31dccc: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x31dcccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31dcd0: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x31dcd0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31dcd4: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x31dcd4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x31dcd8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x31dcd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x31dcdc: 0x3e00008  jr          $ra
    ctx->pc = 0x31DCDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31DCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DCDCu;
        // 0x31dce0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DCDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31DCE4u;
    // 0x31dce4: 0x0  nop
    ctx->pc = 0x31dce4u;
    // NOP
    ctx->pc = 0x31dce8u;
}
