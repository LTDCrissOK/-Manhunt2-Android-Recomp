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

// Function: sub_00202B08
// Address: 0x202b08 - 0x202c10
void sub_00202B08_0x202b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202B08_0x202b08");
#endif

    switch (ctx->pc) {
        case 0x202b5cu: goto label_202b5c;
        case 0x202bc4u: goto label_202bc4;
        case 0x202bd8u: goto label_202bd8;
        default: break;
    }

    ctx->pc = 0x202b08u;

    // 0x202b08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x202b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x202b0c: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x202b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x202b10: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x202b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x202b14: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x202b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x202b18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x202b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x202b1c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x202b1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202b20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x202b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x202b24: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x202b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x202b28: 0xa2420028  sb          $v0, 0x28($s2)
    ctx->pc = 0x202b28u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 2));
    // 0x202b2c: 0xa2430029  sb          $v1, 0x29($s2)
    ctx->pc = 0x202b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x202b30: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x202b30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x202b34: 0x10c00030  beqz        $a2, . + 4 + (0x30 << 2)
    ctx->pc = 0x202B34u;
    {
        const bool branch_taken_0x202b34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x202B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B34u;
        // 0x202b38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202b34) {
            ctx->pc = 0x202BF8u;
            goto label_202bf8;
        }
    }
    ctx->pc = 0x202B3Cu;
    // 0x202b3c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x202b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x202b40: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x202b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x202b44: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x202b44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202b48: 0x8c70045c  lw          $s0, 0x45C($v1)
    ctx->pc = 0x202b48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1116)));
    // 0x202b4c: 0x1600001b  bnez        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x202B4Cu;
    {
        const bool branch_taken_0x202b4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x202B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B4Cu;
        // 0x202b50: 0x8c510480  lw          $s1, 0x480($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202b4c) {
            ctx->pc = 0x202BBCu;
            goto label_202bbc;
        }
    }
    ctx->pc = 0x202B54u;
    // 0x202b54: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x202B54u;
    {
        const bool branch_taken_0x202b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B54u;
        // 0x202b58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202b54) {
            ctx->pc = 0x202BF8u;
            goto label_202bf8;
        }
    }
    ctx->pc = 0x202B5Cu;
label_202b5c:
    // 0x202b5c: 0x68a30007  ldl         $v1, 0x7($a1)
    ctx->pc = 0x202b5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x202b60: 0x6ca30000  ldr         $v1, 0x0($a1)
    ctx->pc = 0x202b60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x202b64: 0x68a4000f  ldl         $a0, 0xF($a1)
    ctx->pc = 0x202b64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x202b68: 0x6ca40008  ldr         $a0, 0x8($a1)
    ctx->pc = 0x202b68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x202b6c: 0x68a60017  ldl         $a2, 0x17($a1)
    ctx->pc = 0x202b6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x202b70: 0x6ca60010  ldr         $a2, 0x10($a1)
    ctx->pc = 0x202b70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x202b74: 0x68a7001f  ldl         $a3, 0x1F($a1)
    ctx->pc = 0x202b74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x202b78: 0x6ca70018  ldr         $a3, 0x18($a1)
    ctx->pc = 0x202b78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x202b7c: 0xb2430007  sdl         $v1, 0x7($s2)
    ctx->pc = 0x202b7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x202b80: 0xb6430000  sdr         $v1, 0x0($s2)
    ctx->pc = 0x202b80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x202b84: 0xb244000f  sdl         $a0, 0xF($s2)
    ctx->pc = 0x202b84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x202b88: 0xb6440008  sdr         $a0, 0x8($s2)
    ctx->pc = 0x202b88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x202b8c: 0xb2460017  sdl         $a2, 0x17($s2)
    ctx->pc = 0x202b8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x202b90: 0xb6460010  sdr         $a2, 0x10($s2)
    ctx->pc = 0x202b90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x202b94: 0xb247001f  sdl         $a3, 0x1F($s2)
    ctx->pc = 0x202b94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x202b98: 0xb6470018  sdr         $a3, 0x18($s2)
    ctx->pc = 0x202b98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x202b9c: 0x68a30027  ldl         $v1, 0x27($a1)
    ctx->pc = 0x202b9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x202ba0: 0x6ca30020  ldr         $v1, 0x20($a1)
    ctx->pc = 0x202ba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x202ba4: 0x8ca40028  lw          $a0, 0x28($a1)
    ctx->pc = 0x202ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x202ba8: 0xb2430027  sdl         $v1, 0x27($s2)
    ctx->pc = 0x202ba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x202bac: 0xb6430020  sdr         $v1, 0x20($s2)
    ctx->pc = 0x202bacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x202bb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x202bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202bb4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x202BB4u;
    {
        const bool branch_taken_0x202bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202BB4u;
        // 0x202bb8: 0xae440028  sw          $a0, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202bb4) {
            ctx->pc = 0x202BF8u;
            goto label_202bf8;
        }
    }
    ctx->pc = 0x202BBCu;
label_202bbc:
    // 0x202bbc: 0xc0b6750  jal         func_2D9D40
    ctx->pc = 0x202BBCu;
    SET_GPR_U32(ctx, 31, 0x202BC4u);
    ctx->pc = 0x202BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202BBCu;
    // 0x202bc0: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9D40u, 0x202BBCu, 0x202BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202BC4u;
label_202bc4:
    // 0x202bc4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x202bc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202bc8: 0x1a20000a  blez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x202BC8u;
    {
        const bool branch_taken_0x202bc8 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x202BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202BC8u;
        // 0x202bcc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202bc8) {
            ctx->pc = 0x202BF4u;
            goto label_202bf4;
        }
    }
    ctx->pc = 0x202BD0u;
    // 0x202bd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x202bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202bd4: 0x26030024  addiu       $v1, $s0, 0x24
    ctx->pc = 0x202bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_202bd8:
    // 0x202bd8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x202bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x202bdc: 0x1046ffdf  beq         $v0, $a2, . + 4 + (-0x21 << 2)
    ctx->pc = 0x202BDCu;
    {
        const bool branch_taken_0x202bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x202BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202BDCu;
        // 0x202be0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202bdc) {
            ctx->pc = 0x202B5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202b5c;
        }
    }
    ctx->pc = 0x202BE4u;
    // 0x202be4: 0x2463002c  addiu       $v1, $v1, 0x2C
    ctx->pc = 0x202be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
    // 0x202be8: 0x91102a  slt         $v0, $a0, $s1
    ctx->pc = 0x202be8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x202bec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x202BECu;
    {
        const bool branch_taken_0x202bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202BECu;
        // 0x202bf0: 0x24a5002c  addiu       $a1, $a1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202bec) {
            ctx->pc = 0x202BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202bd8;
        }
    }
    ctx->pc = 0x202BF4u;
label_202bf4:
    // 0x202bf4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x202bf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202bf8:
    // 0x202bf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x202bf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202bfc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x202bfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x202c00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x202c00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202c04: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x202c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x202c08: 0x3e00008  jr          $ra
    ctx->pc = 0x202C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C08u;
        // 0x202c0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202C10u;
}
