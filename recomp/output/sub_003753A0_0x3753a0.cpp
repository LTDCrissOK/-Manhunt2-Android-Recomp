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

// Function: sub_003753A0
// Address: 0x3753a0 - 0x375640
void sub_003753A0_0x3753a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003753A0_0x3753a0");
#endif

    switch (ctx->pc) {
        case 0x375440u: goto label_375440;
        case 0x3754c8u: goto label_3754c8;
        case 0x3754fcu: goto label_3754fc;
        case 0x375528u: goto label_375528;
        case 0x375578u: goto label_375578;
        default: break;
    }

    ctx->pc = 0x3753a0u;

    // 0x3753a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3753a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3753a4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3753a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3753a8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x3753a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x3753ac: 0x2442cd60  addiu       $v0, $v0, -0x32A0
    ctx->pc = 0x3753acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954336));
    // 0x3753b0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3753b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3753b4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3753b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3753b8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3753b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3753bc: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x3753bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x3753c0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x3753c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x3753c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3753c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3753c8: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x3753c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x3753cc: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3753ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3753d0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3753d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3753d4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3753d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3753d8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x3753d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x3753dc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3753dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3753e0: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x3753e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x3753e4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x3753e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3753e8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3753e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3753ec: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x3753ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3753f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3753f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3753f4: 0x248880a0  addiu       $t0, $a0, -0x7F60
    ctx->pc = 0x3753f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934688));
    // 0x3753f8: 0x69050007  ldl         $a1, 0x7($t0)
    ctx->pc = 0x3753f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3753fc: 0x6d050000  ldr         $a1, 0x0($t0)
    ctx->pc = 0x3753fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x375400: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x375400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x375404: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x375404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x375408: 0x52420083  beql        $s2, $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x375408u;
    {
        const bool branch_taken_0x375408 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x375408) {
            ctx->pc = 0x37540Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x375408u;
            // 0x37540c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x375618u;
            goto label_375618;
        }
    }
    ctx->pc = 0x375410u;
    // 0x375410: 0x12400080  beqz        $s2, . + 4 + (0x80 << 2)
    ctx->pc = 0x375410u;
    {
        const bool branch_taken_0x375410 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x375414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375410u;
        // 0x375414: 0xac720000  sw          $s2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375410) {
            ctx->pc = 0x375614u;
            goto label_375614;
        }
    }
    ctx->pc = 0x375418u;
    // 0x375418: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x375418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x37541c: 0x2445f910  addiu       $a1, $v0, -0x6F0
    ctx->pc = 0x37541cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965520));
    // 0x375420: 0x8c43f910  lw          $v1, -0x6F0($v0)
    ctx->pc = 0x375420u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5BF910u));
    // 0x375424: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x375424u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5BF914u));
    // 0x375428: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x375428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x37542c: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x37542cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x375430: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x375430u;
    {
        const bool branch_taken_0x375430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x375434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375430u;
        // 0x375434: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375430) {
            ctx->pc = 0x375440u;
            goto label_375440;
        }
    }
    ctx->pc = 0x375438u;
    // 0x375438: 0xc0dc442  jal         func_371108
    ctx->pc = 0x375438u;
    SET_GPR_U32(ctx, 31, 0x375440u);
    ctx->pc = 0x37543Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375438u;
    // 0x37543c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x375438u, 0x375440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375440u;
label_375440:
    // 0x375440: 0x8e84f910  lw          $a0, -0x6F0($s4)
    ctx->pc = 0x375440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294965520)));
    // 0x375444: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x375444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x375448: 0x24820080  addiu       $v0, $a0, 0x80
    ctx->pc = 0x375448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x37544c: 0x1263000e  beq         $s3, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x37544Cu;
    {
        const bool branch_taken_0x37544c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x375450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37544Cu;
        // 0x375450: 0xae82f910  sw          $v0, -0x6F0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294965520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37544c) {
            ctx->pc = 0x375488u;
            goto label_375488;
        }
    }
    ctx->pc = 0x375454u;
    // 0x375454: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x375454u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x375458: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x375458u;
    {
        const bool branch_taken_0x375458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375458u;
        // 0x37545c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375458) {
            ctx->pc = 0x375470u;
            goto label_375470;
        }
    }
    ctx->pc = 0x375460u;
    // 0x375460: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x375460u;
    {
        const bool branch_taken_0x375460 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x375464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375460u;
        // 0x375464: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375460) {
            ctx->pc = 0x375480u;
            goto label_375480;
        }
    }
    ctx->pc = 0x375468u;
    // 0x375468: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x375468u;
    {
        const bool branch_taken_0x375468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x375468) {
            ctx->pc = 0x375490u;
            goto label_375490;
        }
    }
    ctx->pc = 0x375470u;
label_375470:
    // 0x375470: 0x12620005  beq         $s3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x375470u;
    {
        const bool branch_taken_0x375470 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x375474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375470u;
        // 0x375474: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375470) {
            ctx->pc = 0x375488u;
            goto label_375488;
        }
    }
    ctx->pc = 0x375478u;
    // 0x375478: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x375478u;
    {
        const bool branch_taken_0x375478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x375478) {
            ctx->pc = 0x375490u;
            goto label_375490;
        }
    }
    ctx->pc = 0x375480u;
label_375480:
    // 0x375480: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x375480u;
    {
        const bool branch_taken_0x375480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x375484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375480u;
        // 0x375484: 0x24160020  addiu       $s6, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375480) {
            ctx->pc = 0x37548Cu;
            goto label_37548c;
        }
    }
    ctx->pc = 0x375488u;
label_375488:
    // 0x375488: 0x24160010  addiu       $s6, $zero, 0x10
    ctx->pc = 0x375488u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_37548c:
    // 0x37548c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x37548cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_375490:
    // 0x375490: 0x1602000f  bne         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x375490u;
    {
        const bool branch_taken_0x375490 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x375494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375490u;
        // 0x375494: 0x3c10006c  lui         $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375490) {
            ctx->pc = 0x3754D0u;
            goto label_3754d0;
        }
    }
    ctx->pc = 0x375498u;
    // 0x375498: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x375498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x37549c: 0x1580c0  sll         $s0, $s5, 3
    ctx->pc = 0x37549cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x3754a0: 0x244360b0  addiu       $v1, $v0, 0x60B0
    ctx->pc = 0x3754a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 24752));
    // 0x3754a4: 0x164140  sll         $t0, $s6, 5
    ctx->pc = 0x3754a4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 22), 5));
    // 0x3754a8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x3754a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3754ac: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3754acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3754b0: 0x8c6a0000  lw          $t2, 0x0($v1)
    ctx->pc = 0x3754b0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3754b4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3754b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3754b8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3754b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3754bc: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3754bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3754c0: 0xc0df46e  jal         func_37D1B8
    ctx->pc = 0x3754C0u;
    SET_GPR_U32(ctx, 31, 0x3754C8u);
    ctx->pc = 0x3754C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3754C0u;
    // 0x3754c4: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D1B8u, 0x3754C0u, 0x3754C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3754C8u;
label_3754c8:
    // 0x3754c8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3754C8u;
    {
        const bool branch_taken_0x3754c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3754c8) {
            ctx->pc = 0x375500u;
            goto label_375500;
        }
    }
    ctx->pc = 0x3754D0u;
label_3754d0:
    // 0x3754d0: 0x1588c0  sll         $s1, $s5, 3
    ctx->pc = 0x3754d0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x3754d4: 0x260260b0  addiu       $v0, $s0, 0x60B0
    ctx->pc = 0x3754d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24752));
    // 0x3754d8: 0x164040  sll         $t0, $s6, 1
    ctx->pc = 0x3754d8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    // 0x3754dc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3754dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3754e0: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3754e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3754e4: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x3754e4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3754e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3754e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3754ec: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x3754ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3754f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3754f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3754f4: 0xc0df46e  jal         func_37D1B8
    ctx->pc = 0x3754F4u;
    SET_GPR_U32(ctx, 31, 0x3754FCu);
    ctx->pc = 0x3754F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3754F4u;
    // 0x3754f8: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D1B8u, 0x3754F4u, 0x3754FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3754FCu;
label_3754fc:
    // 0x3754fc: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x3754fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_375500:
    // 0x375500: 0x12e0002a  beqz        $s7, . + 4 + (0x2A << 2)
    ctx->pc = 0x375500u;
    {
        const bool branch_taken_0x375500 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x375504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375500u;
        // 0x375504: 0x2692f910  addiu       $s2, $s4, -0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294965520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375500) {
            ctx->pc = 0x3755ACu;
            goto label_3755ac;
        }
    }
    ctx->pc = 0x375508u;
    // 0x375508: 0x8e82f910  lw          $v0, -0x6F0($s4)
    ctx->pc = 0x375508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294965520)));
    // 0x37550c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x37550cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x375510: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x375510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x375514: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x375514u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x375518: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x375518u;
    {
        const bool branch_taken_0x375518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37551Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375518u;
        // 0x37551c: 0x8e82f910  lw          $v0, -0x6F0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294965520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375518) {
            ctx->pc = 0x37552Cu;
            goto label_37552c;
        }
    }
    ctx->pc = 0x375520u;
    // 0x375520: 0xc0dc442  jal         func_371108
    ctx->pc = 0x375520u;
    SET_GPR_U32(ctx, 31, 0x375528u);
    ctx->pc = 0x375524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375520u;
    // 0x375524: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x375520u, 0x375528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375528u;
label_375528:
    // 0x375528: 0x8e82f910  lw          $v0, -0x6F0($s4)
    ctx->pc = 0x375528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294965520)));
label_37552c:
    // 0x37552c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x37552cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x375530: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x375530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x375534: 0x3405a200  ori         $a1, $zero, 0xA200
    ctx->pc = 0x375534u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41472);
    // 0x375538: 0x52f78  dsll        $a1, $a1, 29
    ctx->pc = 0x375538u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 29);
    // 0x37553c: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x37553cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x375540: 0x52cb8  dsll        $a1, $a1, 18
    ctx->pc = 0x375540u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 18);
    // 0x375544: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x375544u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x375548: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x375548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x37554c: 0xae82f910  sw          $v0, -0x6F0($s4)
    ctx->pc = 0x37554cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294965520), GPR_U32(ctx, 2));
    // 0x375550: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x375550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x375554: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x375554u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x375558: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x375558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x37555c: 0xae82f910  sw          $v0, -0x6F0($s4)
    ctx->pc = 0x37555cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294965520), GPR_U32(ctx, 2));
    // 0x375560: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x375560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x375564: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x375564u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x375568: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x375568u;
    {
        const bool branch_taken_0x375568 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x37556Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375568u;
        // 0x37556c: 0x8e82f910  lw          $v0, -0x6F0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294965520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375568) {
            ctx->pc = 0x37557Cu;
            goto label_37557c;
        }
    }
    ctx->pc = 0x375570u;
    // 0x375570: 0xc0dc442  jal         func_371108
    ctx->pc = 0x375570u;
    SET_GPR_U32(ctx, 31, 0x375578u);
    ctx->pc = 0x375574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375570u;
    // 0x375574: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x375570u, 0x375578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375578u;
label_375578:
    // 0x375578: 0x8e82f910  lw          $v0, -0x6F0($s4)
    ctx->pc = 0x375578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294965520)));
label_37557c:
    // 0x37557c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x37557cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x375580: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x375580u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x375584: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x375584u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
    // 0x375588: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x375588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x37558c: 0x2407003f  addiu       $a3, $zero, 0x3F
    ctx->pc = 0x37558cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x375590: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x375590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x375594: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x375594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x375598: 0xae83f910  sw          $v1, -0x6F0($s4)
    ctx->pc = 0x375598u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294965520), GPR_U32(ctx, 3));
    // 0x37559c: 0xfc440010  sd          $a0, 0x10($v0)
    ctx->pc = 0x37559cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 4));
    // 0x3755a0: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x3755a0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x3755a4: 0xfc460008  sd          $a2, 0x8($v0)
    ctx->pc = 0x3755a4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
    // 0x3755a8: 0xfc470018  sd          $a3, 0x18($v0)
    ctx->pc = 0x3755a8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 7));
label_3755ac:
    // 0x3755ac: 0x26c260b0  addiu       $v0, $s6, 0x60B0
    ctx->pc = 0x3755acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 24752));
    // 0x3755b0: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x3755b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x3755b4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3755b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3755b8: 0x24c6cd40  addiu       $a2, $a2, -0x32C0
    ctx->pc = 0x3755b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954304));
    // 0x3755bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3755bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3755c0: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x3755c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x3755c4: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x3755c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x3755c8: 0x133cfc  dsll32      $a3, $s3, 19
    ctx->pc = 0x3755c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) << (32 + 19));
    // 0x3755cc: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x3755ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x3755d0: 0x3a22821  addu        $a1, $sp, $v0
    ctx->pc = 0x3755d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3755d4: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x3755d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x3755d8: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x3755d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3755dc: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x3755dcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3755e0: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x3755e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x3755e4: 0x3c090040  lui         $t1, 0x40
    ctx->pc = 0x3755e4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
    // 0x3755e8: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x3755e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3755ec: 0x73bbc  dsll32      $a3, $a3, 14
    ctx->pc = 0x3755ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 14));
    // 0x3755f0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3755f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3755f4: 0x52efa  dsrl        $a1, $a1, 27
    ctx->pc = 0x3755f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 27);
    // 0x3755f8: 0x8d22cd00  lw          $v0, -0x3300($t1)
    ctx->pc = 0x3755f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294954240)));
    // 0x3755fc: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x3755fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x375600: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x375600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x375604: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x375604u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x375608: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x375608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x37560c: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x37560cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x375610: 0xad22cd00  sw          $v0, -0x3300($t1)
    ctx->pc = 0x375610u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294954240), GPR_U32(ctx, 2));
label_375614:
    // 0x375614: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x375614u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_375618:
    // 0x375618: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x375618u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37561c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x37561cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x375620: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x375620u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x375624: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x375624u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x375628: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x375628u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37562c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x37562cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x375630: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x375630u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x375634: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x375634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x375638: 0x3e00008  jr          $ra
    ctx->pc = 0x375638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37563Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375638u;
        // 0x37563c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375640u;
}
