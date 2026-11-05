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

// Function: sub_003D93C8
// Address: 0x3d93c8 - 0x3d94c0
void sub_003D93C8_0x3d93c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D93C8_0x3d93c8");
#endif

    switch (ctx->pc) {
        case 0x3d9428u: goto label_3d9428;
        default: break;
    }

    ctx->pc = 0x3d93c8u;

    // 0x3d93c8: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x3d93c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d93cc: 0x30abffff  andi        $t3, $a1, 0xFFFF
    ctx->pc = 0x3d93ccu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3d93d0: 0x95430010  lhu         $v1, 0x10($t2)
    ctx->pc = 0x3d93d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x3d93d4: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x3D93D4u;
    {
        const bool branch_taken_0x3d93d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D93D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D93D4u;
        // 0x3d93d8: 0x30c9ffff  andi        $t1, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d93d4) {
            ctx->pc = 0x3D94B4u;
            goto label_3d94b4;
        }
    }
    ctx->pc = 0x3D93DCu;
    // 0x3d93dc: 0x163102b  sltu        $v0, $t3, $v1
    ctx->pc = 0x3d93dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3d93e0: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x3D93E0u;
    {
        const bool branch_taken_0x3d93e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D93E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D93E0u;
        // 0x3d93e4: 0x69102b  sltu        $v0, $v1, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d93e0) {
            ctx->pc = 0x3D94B4u;
            goto label_3d94b4;
        }
    }
    ctx->pc = 0x3D93E8u;
    // 0x3d93e8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3D93E8u;
    {
        const bool branch_taken_0x3d93e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d93e8) {
            ctx->pc = 0x3D93ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D93E8u;
            // 0x3d93ec: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D93F0u;
            goto label_3d93f0;
        }
    }
    ctx->pc = 0x3D93F0u;
label_3d93f0:
    // 0x3d93f0: 0x95430008  lhu         $v1, 0x8($t2)
    ctx->pc = 0x3d93f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x3d93f4: 0x123102b  sltu        $v0, $t1, $v1
    ctx->pc = 0x3d93f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3d93f8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D93F8u;
    {
        const bool branch_taken_0x3d93f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D93FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D93F8u;
        // 0x3d93fc: 0x169102b  sltu        $v0, $t3, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d93f8) {
            ctx->pc = 0x3D940Cu;
            goto label_3d940c;
        }
    }
    ctx->pc = 0x3D9400u;
    // 0x3d9400: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x3d9400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3d9404: 0x3049ffff  andi        $t1, $v0, 0xFFFF
    ctx->pc = 0x3d9404u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3d9408: 0x169102b  sltu        $v0, $t3, $t1
    ctx->pc = 0x3d9408u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_3d940c:
    // 0x3d940c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x3D940Cu;
    {
        const bool branch_taken_0x3d940c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D940Cu;
        // 0x3d9410: 0x2523ffff  addiu       $v1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d940c) {
            ctx->pc = 0x3D94B4u;
            goto label_3d94b4;
        }
    }
    ctx->pc = 0x3D9414u;
    // 0x3d9414: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x3d9414u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3d9418: 0x167102b  sltu        $v0, $t3, $a3
    ctx->pc = 0x3d9418u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3d941c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3D941Cu;
    {
        const bool branch_taken_0x3d941c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D941Cu;
        // 0x3d9420: 0x120402d  daddu       $t0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d941c) {
            ctx->pc = 0x3D9464u;
            goto label_3d9464;
        }
    }
    ctx->pc = 0x3D9424u;
    // 0x3d9424: 0x0  nop
    ctx->pc = 0x3d9424u;
    // NOP
label_3d9428:
    // 0x3d9428: 0x8d43000c  lw          $v1, 0xC($t2)
    ctx->pc = 0x3d9428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x3d942c: 0x24e6ffff  addiu       $a2, $a3, -0x1
    ctx->pc = 0x3d942cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3d9430: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x3d9430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3d9434: 0x828c0  sll         $a1, $t0, 3
    ctx->pc = 0x3d9434u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3d9438: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x3d9438u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3d943c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x3d943cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3d9440: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3d9440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3d9444: 0x30c7ffff  andi        $a3, $a2, 0xFFFF
    ctx->pc = 0x3d9444u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x3d9448: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x3d9448u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3d944c: 0x167182b  sltu        $v1, $t3, $a3
    ctx->pc = 0x3d944cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3d9450: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x3d9450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3d9454: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x3d9454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3d9458: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x3d9458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d945c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x3D945Cu;
    {
        const bool branch_taken_0x3d945c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D9460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D945Cu;
        // 0x3d9460: 0xb4a20000  sdr         $v0, 0x0($a1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d945c) {
            ctx->pc = 0x3D9428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d9428;
        }
    }
    ctx->pc = 0x3D9464u;
label_3d9464:
    // 0x3d9464: 0x8d44000c  lw          $a0, 0xC($t2)
    ctx->pc = 0x3d9464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x3d9468: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x3d9468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3d946c: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x3d946cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3d9470: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3d9470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3d9474: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d9474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3d9478: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x3d9478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3d947c: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x3d947cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3d9480: 0xb0640007  sdl         $a0, 0x7($v1)
    ctx->pc = 0x3d9480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d9484: 0xb4640000  sdr         $a0, 0x0($v1)
    ctx->pc = 0x3d9484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d9488: 0x95420008  lhu         $v0, 0x8($t2)
    ctx->pc = 0x3d9488u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x3d948c: 0x95430012  lhu         $v1, 0x12($t2)
    ctx->pc = 0x3d948cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 18)));
    // 0x3d9490: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3d9490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3d9494: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D9494u;
    {
        const bool branch_taken_0x3d9494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D9498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9494u;
        // 0x3d9498: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9494) {
            ctx->pc = 0x3D94B4u;
            goto label_3d94b4;
        }
    }
    ctx->pc = 0x3D949Cu;
    // 0x3d949c: 0x8b102b  sltu        $v0, $a0, $t3
    ctx->pc = 0x3d949cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3d94a0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D94A0u;
    {
        const bool branch_taken_0x3d94a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D94A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D94A0u;
        // 0x3d94a4: 0x89102b  sltu        $v0, $a0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d94a0) {
            ctx->pc = 0x3D94B4u;
            goto label_3d94b4;
        }
    }
    ctx->pc = 0x3D94A8u;
    // 0x3d94a8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3D94A8u;
    {
        const bool branch_taken_0x3d94a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D94ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D94A8u;
        // 0x3d94ac: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d94a8) {
            ctx->pc = 0x3D94B4u;
            goto label_3d94b4;
        }
    }
    ctx->pc = 0x3D94B0u;
    // 0x3d94b0: 0xa5420012  sh          $v0, 0x12($t2)
    ctx->pc = 0x3d94b0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 18), (uint16_t)GPR_U32(ctx, 2));
label_3d94b4:
    // 0x3d94b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3D94B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D94B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D94BCu;
    // 0x3d94bc: 0x0  nop
    ctx->pc = 0x3d94bcu;
    // NOP
    ctx->pc = 0x3d94c0u;
}
