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

// Function: sub_003D96C8
// Address: 0x3d96c8 - 0x3d97a0
void sub_003D96C8_0x3d96c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D96C8_0x3d96c8");
#endif

    switch (ctx->pc) {
        case 0x3d9710u: goto label_3d9710;
        default: break;
    }

    ctx->pc = 0x3d96c8u;

    // 0x3d96c8: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x3d96c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d96cc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d96ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d96d0: 0xa91023  subu        $v0, $a1, $t1
    ctx->pc = 0x3d96d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x3d96d4: 0x68a3fff7  ldl         $v1, -0x9($a1)
    ctx->pc = 0x3d96d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294967287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3d96d8: 0x6ca3fff0  ldr         $v1, -0x10($a1)
    ctx->pc = 0x3d96d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294967280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3d96dc: 0x68a4ffff  ldl         $a0, -0x1($a1)
    ctx->pc = 0x3d96dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3d96e0: 0x6ca4fff8  ldr         $a0, -0x8($a1)
    ctx->pc = 0x3d96e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3d96e4: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x3d96e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d96e8: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x3d96e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d96ec: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x3d96ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d96f0: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x3d96f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d96f4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3d96f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x3d96f8: 0x2443fffe  addiu       $v1, $v0, -0x2
    ctx->pc = 0x3d96f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x3d96fc: 0x2447ffff  addiu       $a3, $v0, -0x1
    ctx->pc = 0x3d96fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3d9700: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x3d9700u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x3d9704: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3D9704u;
    {
        const bool branch_taken_0x3d9704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9704u;
        // 0x3d9708: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9704) {
            ctx->pc = 0x3D974Cu;
            goto label_3d974c;
        }
    }
    ctx->pc = 0x3D970Cu;
    // 0x3d970c: 0x0  nop
    ctx->pc = 0x3d970cu;
    // NOP
label_3d9710:
    // 0x3d9710: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x3d9710u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x3d9714: 0x1092821  addu        $a1, $t0, $t1
    ctx->pc = 0x3d9714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x3d9718: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3d9718u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d971c: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x3d971cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x3d9720: 0x68a80007  ldl         $t0, 0x7($a1)
    ctx->pc = 0x3d9720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x3d9724: 0x6ca80000  ldr         $t0, 0x0($a1)
    ctx->pc = 0x3d9724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x3d9728: 0x68aa000f  ldl         $t2, 0xF($a1)
    ctx->pc = 0x3d9728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x3d972c: 0x6caa0008  ldr         $t2, 0x8($a1)
    ctx->pc = 0x3d972cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x3d9730: 0xb0880007  sdl         $t0, 0x7($a0)
    ctx->pc = 0x3d9730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d9734: 0xb4880000  sdr         $t0, 0x0($a0)
    ctx->pc = 0x3d9734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d9738: 0xb08a000f  sdl         $t2, 0xF($a0)
    ctx->pc = 0x3d9738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d973c: 0x24e3ffff  addiu       $v1, $a3, -0x1
    ctx->pc = 0x3d973cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3d9740: 0xb48a0008  sdr         $t2, 0x8($a0)
    ctx->pc = 0x3d9740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d9744: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x3d9744u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x3d9748: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3d9748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3d974c:
    // 0x3d974c: 0x18e00008  blez        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D974Cu;
    {
        const bool branch_taken_0x3d974c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x3D9750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D974Cu;
        // 0x3d9750: 0x33043  sra         $a2, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d974c) {
            ctx->pc = 0x3D9770u;
            goto label_3d9770;
        }
    }
    ctx->pc = 0x3D9754u;
    // 0x3d9754: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x3d9754u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x3d9758: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3d9758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3d975c: 0x892821  addu        $a1, $a0, $t1
    ctx->pc = 0x3d975cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x3d9760: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3d9760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3d9764: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x3d9764u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3d9768: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x3D9768u;
    {
        const bool branch_taken_0x3d9768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D976Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9768u;
        // 0x3d976c: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9768) {
            ctx->pc = 0x3D9710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d9710;
        }
    }
    ctx->pc = 0x3D9770u;
label_3d9770:
    // 0x3d9770: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x3d9770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x3d9774: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x3d9774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x3d9778: 0x6ba70007  ldl         $a3, 0x7($sp)
    ctx->pc = 0x3d9778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x3d977c: 0x6fa70000  ldr         $a3, 0x0($sp)
    ctx->pc = 0x3d977cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x3d9780: 0x6ba8000f  ldl         $t0, 0xF($sp)
    ctx->pc = 0x3d9780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x3d9784: 0x6fa80008  ldr         $t0, 0x8($sp)
    ctx->pc = 0x3d9784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x3d9788: 0xb0470007  sdl         $a3, 0x7($v0)
    ctx->pc = 0x3d9788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d978c: 0xb4470000  sdr         $a3, 0x0($v0)
    ctx->pc = 0x3d978cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d9790: 0xb048000f  sdl         $t0, 0xF($v0)
    ctx->pc = 0x3d9790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d9794: 0xb4480008  sdr         $t0, 0x8($v0)
    ctx->pc = 0x3d9794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d9798: 0x3e00008  jr          $ra
    ctx->pc = 0x3D9798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D979Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9798u;
        // 0x3d979c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D97A0u;
}
