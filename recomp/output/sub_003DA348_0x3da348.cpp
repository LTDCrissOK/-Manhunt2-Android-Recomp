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

// Function: sub_003DA348
// Address: 0x3da348 - 0x3da440
void sub_003DA348_0x3da348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DA348_0x3da348");
#endif

    switch (ctx->pc) {
        case 0x3da3a8u: goto label_3da3a8;
        default: break;
    }

    ctx->pc = 0x3da348u;

    // 0x3da348: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x3da348u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da34c: 0x30abffff  andi        $t3, $a1, 0xFFFF
    ctx->pc = 0x3da34cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3da350: 0x95430010  lhu         $v1, 0x10($t2)
    ctx->pc = 0x3da350u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x3da354: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x3DA354u;
    {
        const bool branch_taken_0x3da354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA354u;
        // 0x3da358: 0x30c9ffff  andi        $t1, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da354) {
            ctx->pc = 0x3DA434u;
            goto label_3da434;
        }
    }
    ctx->pc = 0x3DA35Cu;
    // 0x3da35c: 0x163102b  sltu        $v0, $t3, $v1
    ctx->pc = 0x3da35cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3da360: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x3DA360u;
    {
        const bool branch_taken_0x3da360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA360u;
        // 0x3da364: 0x69102b  sltu        $v0, $v1, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da360) {
            ctx->pc = 0x3DA434u;
            goto label_3da434;
        }
    }
    ctx->pc = 0x3DA368u;
    // 0x3da368: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3DA368u;
    {
        const bool branch_taken_0x3da368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3da368) {
            ctx->pc = 0x3DA36Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DA368u;
            // 0x3da36c: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DA370u;
            goto label_3da370;
        }
    }
    ctx->pc = 0x3DA370u;
label_3da370:
    // 0x3da370: 0x95430008  lhu         $v1, 0x8($t2)
    ctx->pc = 0x3da370u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x3da374: 0x123102b  sltu        $v0, $t1, $v1
    ctx->pc = 0x3da374u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3da378: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DA378u;
    {
        const bool branch_taken_0x3da378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DA37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA378u;
        // 0x3da37c: 0x169102b  sltu        $v0, $t3, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da378) {
            ctx->pc = 0x3DA38Cu;
            goto label_3da38c;
        }
    }
    ctx->pc = 0x3DA380u;
    // 0x3da380: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x3da380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3da384: 0x3049ffff  andi        $t1, $v0, 0xFFFF
    ctx->pc = 0x3da384u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3da388: 0x169102b  sltu        $v0, $t3, $t1
    ctx->pc = 0x3da388u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_3da38c:
    // 0x3da38c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x3DA38Cu;
    {
        const bool branch_taken_0x3da38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA38Cu;
        // 0x3da390: 0x2523ffff  addiu       $v1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da38c) {
            ctx->pc = 0x3DA434u;
            goto label_3da434;
        }
    }
    ctx->pc = 0x3DA394u;
    // 0x3da394: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x3da394u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3da398: 0x167102b  sltu        $v0, $t3, $a3
    ctx->pc = 0x3da398u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3da39c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3DA39Cu;
    {
        const bool branch_taken_0x3da39c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA39Cu;
        // 0x3da3a0: 0x120402d  daddu       $t0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da39c) {
            ctx->pc = 0x3DA3E4u;
            goto label_3da3e4;
        }
    }
    ctx->pc = 0x3DA3A4u;
    // 0x3da3a4: 0x0  nop
    ctx->pc = 0x3da3a4u;
    // NOP
label_3da3a8:
    // 0x3da3a8: 0x8d43000c  lw          $v1, 0xC($t2)
    ctx->pc = 0x3da3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x3da3ac: 0x24e6ffff  addiu       $a2, $a3, -0x1
    ctx->pc = 0x3da3acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3da3b0: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x3da3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3da3b4: 0x828c0  sll         $a1, $t0, 3
    ctx->pc = 0x3da3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3da3b8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x3da3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3da3bc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x3da3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3da3c0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3da3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3da3c4: 0x30c7ffff  andi        $a3, $a2, 0xFFFF
    ctx->pc = 0x3da3c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x3da3c8: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x3da3c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3da3cc: 0x167182b  sltu        $v1, $t3, $a3
    ctx->pc = 0x3da3ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3da3d0: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x3da3d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3da3d4: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x3da3d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3da3d8: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x3da3d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3da3dc: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x3DA3DCu;
    {
        const bool branch_taken_0x3da3dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DA3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA3DCu;
        // 0x3da3e0: 0xb4a20000  sdr         $v0, 0x0($a1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da3dc) {
            ctx->pc = 0x3DA3A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3da3a8;
        }
    }
    ctx->pc = 0x3DA3E4u;
label_3da3e4:
    // 0x3da3e4: 0x8d44000c  lw          $a0, 0xC($t2)
    ctx->pc = 0x3da3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x3da3e8: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x3da3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3da3ec: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x3da3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3da3f0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3da3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3da3f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3da3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3da3f8: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x3da3f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3da3fc: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x3da3fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3da400: 0xb0640007  sdl         $a0, 0x7($v1)
    ctx->pc = 0x3da400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3da404: 0xb4640000  sdr         $a0, 0x0($v1)
    ctx->pc = 0x3da404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3da408: 0x95420008  lhu         $v0, 0x8($t2)
    ctx->pc = 0x3da408u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x3da40c: 0x95430012  lhu         $v1, 0x12($t2)
    ctx->pc = 0x3da40cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 18)));
    // 0x3da410: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3da410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3da414: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3DA414u;
    {
        const bool branch_taken_0x3da414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DA418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA414u;
        // 0x3da418: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da414) {
            ctx->pc = 0x3DA434u;
            goto label_3da434;
        }
    }
    ctx->pc = 0x3DA41Cu;
    // 0x3da41c: 0x8b102b  sltu        $v0, $a0, $t3
    ctx->pc = 0x3da41cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3da420: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DA420u;
    {
        const bool branch_taken_0x3da420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DA424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA420u;
        // 0x3da424: 0x89102b  sltu        $v0, $a0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da420) {
            ctx->pc = 0x3DA434u;
            goto label_3da434;
        }
    }
    ctx->pc = 0x3DA428u;
    // 0x3da428: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3DA428u;
    {
        const bool branch_taken_0x3da428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA428u;
        // 0x3da42c: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da428) {
            ctx->pc = 0x3DA434u;
            goto label_3da434;
        }
    }
    ctx->pc = 0x3DA430u;
    // 0x3da430: 0xa5420012  sh          $v0, 0x12($t2)
    ctx->pc = 0x3da430u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 18), (uint16_t)GPR_U32(ctx, 2));
label_3da434:
    // 0x3da434: 0x3e00008  jr          $ra
    ctx->pc = 0x3DA434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DA43Cu;
    // 0x3da43c: 0x0  nop
    ctx->pc = 0x3da43cu;
    // NOP
    ctx->pc = 0x3da440u;
}
