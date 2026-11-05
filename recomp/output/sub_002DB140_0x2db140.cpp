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

// Function: sub_002DB140
// Address: 0x2db140 - 0x2db350
void sub_002DB140_0x2db140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB140_0x2db140");
#endif

    switch (ctx->pc) {
        case 0x2db168u: goto label_2db168;
        case 0x2db198u: goto label_2db198;
        case 0x2db1c8u: goto label_2db1c8;
        case 0x2db220u: goto label_2db220;
        case 0x2db290u: goto label_2db290;
        case 0x2db30cu: goto label_2db30c;
        default: break;
    }

    ctx->pc = 0x2db140u;

    // 0x2db140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2db140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2db144: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2db144u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db148: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2db148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2db14c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2db14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2db150: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2db150u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db154: 0x26322c90  addiu       $s2, $s1, 0x2C90
    ctx->pc = 0x2db154u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 11408));
    // 0x2db158: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2db158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2db15c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2db15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2db160: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x2db160u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db164: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2db164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2db168:
    // 0x2db168: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x2db168u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2db16c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2db16cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2db170: 0x2ce2000a  sltiu       $v0, $a3, 0xA
    ctx->pc = 0x2db170u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2db174: 0x0  nop
    ctx->pc = 0x2db174u;
    // NOP
    // 0x2db178: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2DB178u;
    {
        const bool branch_taken_0x2db178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB178u;
        // 0x2db17c: 0x24630400  addiu       $v1, $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db178) {
            ctx->pc = 0x2DB168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db168;
        }
    }
    ctx->pc = 0x2DB180u;
    // 0x2db180: 0x8e2263ac  lw          $v0, 0x63AC($s1)
    ctx->pc = 0x2db180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 25516)));
    // 0x2db184: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2db184u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db188: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2db188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2db18c: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2DB18Cu;
    {
        const bool branch_taken_0x2db18c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB18Cu;
        // 0x2db190: 0x26330490  addiu       $s3, $s1, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db18c) {
            ctx->pc = 0x2DB264u;
            goto label_2db264;
        }
    }
    ctx->pc = 0x2DB194u;
    // 0x2db194: 0x8e2363a8  lw          $v1, 0x63A8($s1)
    ctx->pc = 0x2db194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 25512)));
label_2db198:
    // 0x2db198: 0x71280  sll         $v0, $a3, 10
    ctx->pc = 0x2db198u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 10));
    // 0x2db19c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2db19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2db1a0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2db1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2db1a4: 0x24452c90  addiu       $a1, $v0, 0x2C90
    ctx->pc = 0x2db1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 11408));
    // 0x2db1a8: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x2db1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x2db1ac: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2db1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2db1b0: 0x24640490  addiu       $a0, $v1, 0x490
    ctx->pc = 0x2db1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1168));
    // 0x2db1b4: 0x851025  or          $v0, $a0, $a1
    ctx->pc = 0x2db1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2db1b8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2db1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2db1bc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2DB1BCu;
    {
        const bool branch_taken_0x2db1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB1BCu;
        // 0x2db1c0: 0x24f00001  addiu       $s0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db1bc) {
            ctx->pc = 0x2DB21Cu;
            goto label_2db21c;
        }
    }
    ctx->pc = 0x2DB1C4u;
    // 0x2db1c4: 0x24630890  addiu       $v1, $v1, 0x890
    ctx->pc = 0x2db1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2192));
label_2db1c8:
    // 0x2db1c8: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x2db1c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2db1cc: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x2db1ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2db1d0: 0x6886000f  ldl         $a2, 0xF($a0)
    ctx->pc = 0x2db1d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2db1d4: 0x6c860008  ldr         $a2, 0x8($a0)
    ctx->pc = 0x2db1d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2db1d8: 0x68870017  ldl         $a3, 0x17($a0)
    ctx->pc = 0x2db1d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2db1dc: 0x6c870010  ldr         $a3, 0x10($a0)
    ctx->pc = 0x2db1dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2db1e0: 0x6888001f  ldl         $t0, 0x1F($a0)
    ctx->pc = 0x2db1e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2db1e4: 0x6c880018  ldr         $t0, 0x18($a0)
    ctx->pc = 0x2db1e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2db1e8: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x2db1e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2db1ec: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x2db1ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2db1f0: 0xb0a6000f  sdl         $a2, 0xF($a1)
    ctx->pc = 0x2db1f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2db1f4: 0xb4a60008  sdr         $a2, 0x8($a1)
    ctx->pc = 0x2db1f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2db1f8: 0xb0a70017  sdl         $a3, 0x17($a1)
    ctx->pc = 0x2db1f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2db1fc: 0xb4a70010  sdr         $a3, 0x10($a1)
    ctx->pc = 0x2db1fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2db200: 0xb0a8001f  sdl         $t0, 0x1F($a1)
    ctx->pc = 0x2db200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2db204: 0xb4a80018  sdr         $t0, 0x18($a1)
    ctx->pc = 0x2db204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2db208: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2db208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2db20c: 0x1483ffee  bne         $a0, $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2DB20Cu;
    {
        const bool branch_taken_0x2db20c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2DB210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB20Cu;
        // 0x2db210: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db20c) {
            ctx->pc = 0x2DB1C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db1c8;
        }
    }
    ctx->pc = 0x2DB214u;
    // 0x2db214: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2DB214u;
    {
        const bool branch_taken_0x2db214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB214u;
        // 0x2db218: 0x8e2263ac  lw          $v0, 0x63AC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 25516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db214) {
            ctx->pc = 0x2DB250u;
            goto label_2db250;
        }
    }
    ctx->pc = 0x2DB21Cu;
label_2db21c:
    // 0x2db21c: 0x24630890  addiu       $v1, $v1, 0x890
    ctx->pc = 0x2db21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2192));
label_2db220:
    // 0x2db220: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x2db220u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2db224: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x2db224u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2db228: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x2db228u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2db22c: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x2db22cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2db230: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x2db230u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x2db234: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x2db234u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x2db238: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x2db238u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
    // 0x2db23c: 0xfca80018  sd          $t0, 0x18($a1)
    ctx->pc = 0x2db23cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 8));
    // 0x2db240: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2db240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2db244: 0x1483fff6  bne         $a0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2DB244u;
    {
        const bool branch_taken_0x2db244 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2DB248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB244u;
        // 0x2db248: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db244) {
            ctx->pc = 0x2DB220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db220;
        }
    }
    ctx->pc = 0x2DB24Cu;
    // 0x2db24c: 0x8e2263ac  lw          $v0, 0x63AC($s1)
    ctx->pc = 0x2db24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 25516)));
label_2db250:
    // 0x2db250: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2db250u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db254: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2db254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2db258: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x2db258u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2db25c: 0x5440ffce  bnel        $v0, $zero, . + 4 + (-0x32 << 2)
    ctx->pc = 0x2DB25Cu;
    {
        const bool branch_taken_0x2db25c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db25c) {
            ctx->pc = 0x2DB260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB25Cu;
            // 0x2db260: 0x8e2363a8  lw          $v1, 0x63A8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 25512)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db198;
        }
    }
    ctx->pc = 0x2DB264u;
label_2db264:
    // 0x2db264: 0x8e2563a8  lw          $a1, 0x63A8($s1)
    ctx->pc = 0x2db264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 25512)));
    // 0x2db268: 0x78280  sll         $s0, $a3, 10
    ctx->pc = 0x2db268u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 7), 10));
    // 0x2db26c: 0x8e2663c0  lw          $a2, 0x63C0($s1)
    ctx->pc = 0x2db26cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 25536)));
    // 0x2db270: 0x2112021  addu        $a0, $s0, $s1
    ctx->pc = 0x2db270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2db274: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x2db274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2db278: 0x24842c90  addiu       $a0, $a0, 0x2C90
    ctx->pc = 0x2db278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11408));
    // 0x2db27c: 0x52a80  sll         $a1, $a1, 10
    ctx->pc = 0x2db27cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x2db280: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x2db280u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2db284: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x2db284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x2db288: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x2DB288u;
    SET_GPR_U32(ctx, 31, 0x2DB290u);
    ctx->pc = 0x2DB28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB288u;
    // 0x2db28c: 0x24a50490  addiu       $a1, $a1, 0x490 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x2DB288u, 0x2DB290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB290u;
label_2db290:
    // 0x2db290: 0x8e2363c0  lw          $v1, 0x63C0($s1)
    ctx->pc = 0x2db290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 25536)));
    // 0x2db294: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2db294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2db298: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2db298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2db29c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2db29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2db2a0: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x2db2a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2db2a4: 0x8e2363c0  lw          $v1, 0x63C0($s1)
    ctx->pc = 0x2db2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 25536)));
    // 0x2db2a8: 0x8e2563a8  lw          $a1, 0x63A8($s1)
    ctx->pc = 0x2db2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 25512)));
    // 0x2db2ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2db2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2db2b0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2db2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2db2b4: 0x52280  sll         $a0, $a1, 10
    ctx->pc = 0x2db2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x2db2b8: 0xae2363c0  sw          $v1, 0x63C0($s1)
    ctx->pc = 0x2db2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 25536), GPR_U32(ctx, 3));
    // 0x2db2bc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2db2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2db2c0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2db2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2db2c4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2db2c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2db2c8: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2DB2C8u;
    {
        const bool branch_taken_0x2db2c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB2C8u;
        // 0x2db2cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db2c8) {
            ctx->pc = 0x2DB330u;
            goto label_2db330;
        }
    }
    ctx->pc = 0x2DB2D0u;
    // 0x2db2d0: 0x8e2363ac  lw          $v1, 0x63AC($s1)
    ctx->pc = 0x2db2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 25516)));
    // 0x2db2d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2db2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db2d8: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x2db2d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2db2dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DB2DCu;
    {
        const bool branch_taken_0x2db2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB2DCu;
        // 0x2db2e0: 0xae2463c0  sw          $a0, 0x63C0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 25536), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db2dc) {
            ctx->pc = 0x2DB2F0u;
            goto label_2db2f0;
        }
    }
    ctx->pc = 0x2DB2E4u;
    // 0x2db2e4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2db2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2db2e8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2DB2E8u;
    {
        const bool branch_taken_0x2db2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB2E8u;
        // 0x2db2ec: 0xae2263ac  sw          $v0, 0x63AC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 25516), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db2e8) {
            ctx->pc = 0x2DB32Cu;
            goto label_2db32c;
        }
    }
    ctx->pc = 0x2DB2F0u;
label_2db2f0:
    // 0x2db2f0: 0x8e226398  lw          $v0, 0x6398($s1)
    ctx->pc = 0x2db2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 25496)));
    // 0x2db2f4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DB2F4u;
    {
        const bool branch_taken_0x2db2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB2F4u;
        // 0x2db2f8: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db2f4) {
            ctx->pc = 0x2DB314u;
            goto label_2db314;
        }
    }
    ctx->pc = 0x2DB2FCu;
    // 0x2db2fc: 0x8e2263a4  lw          $v0, 0x63A4($s1)
    ctx->pc = 0x2db2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 25508)));
    // 0x2db300: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2db300u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2db304: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DB304u;
    {
        const bool branch_taken_0x2db304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB304u;
        // 0x2db308: 0xae2363a8  sw          $v1, 0x63A8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 25512), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db304) {
            ctx->pc = 0x2DB32Cu;
            goto label_2db32c;
        }
    }
    ctx->pc = 0x2DB30Cu;
label_2db30c:
    // 0x2db30c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2DB30Cu;
    {
        const bool branch_taken_0x2db30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB30Cu;
        // 0x2db310: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db30c) {
            ctx->pc = 0x2DB330u;
            goto label_2db330;
        }
    }
    ctx->pc = 0x2DB314u;
label_2db314:
    // 0x2db314: 0x8e2263a4  lw          $v0, 0x63A4($s1)
    ctx->pc = 0x2db314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 25508)));
    // 0x2db318: 0x24a3000a  addiu       $v1, $a1, 0xA
    ctx->pc = 0x2db318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
    // 0x2db31c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2db31cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2db320: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DB320u;
    {
        const bool branch_taken_0x2db320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB320u;
        // 0x2db324: 0xae2363a8  sw          $v1, 0x63A8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 25512), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db320) {
            ctx->pc = 0x2DB30Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db30c;
        }
    }
    ctx->pc = 0x2DB328u;
    // 0x2db328: 0xae2463ac  sw          $a0, 0x63AC($s1)
    ctx->pc = 0x2db328u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 25516), GPR_U32(ctx, 4));
label_2db32c:
    // 0x2db32c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2db32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2db330:
    // 0x2db330: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2db330u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2db334: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2db334u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2db338: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2db338u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2db33c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2db33cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2db340: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2db340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2db344: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB344u;
        // 0x2db348: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB34Cu;
    // 0x2db34c: 0x0  nop
    ctx->pc = 0x2db34cu;
    // NOP
    ctx->pc = 0x2db350u;
}
