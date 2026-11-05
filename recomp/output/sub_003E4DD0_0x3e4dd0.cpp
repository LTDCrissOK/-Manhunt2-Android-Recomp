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

// Function: sub_003E4DD0
// Address: 0x3e4dd0 - 0x3e4ee0
void sub_003E4DD0_0x3e4dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E4DD0_0x3e4dd0");
#endif

    switch (ctx->pc) {
        case 0x3e4dd0u: goto label_3e4dd0;
        case 0x3e4dd4u: goto label_3e4dd4;
        case 0x3e4dd8u: goto label_3e4dd8;
        case 0x3e4ddcu: goto label_3e4ddc;
        case 0x3e4de0u: goto label_3e4de0;
        case 0x3e4de4u: goto label_3e4de4;
        case 0x3e4de8u: goto label_3e4de8;
        case 0x3e4decu: goto label_3e4dec;
        case 0x3e4df0u: goto label_3e4df0;
        case 0x3e4df4u: goto label_3e4df4;
        case 0x3e4df8u: goto label_3e4df8;
        case 0x3e4dfcu: goto label_3e4dfc;
        case 0x3e4e00u: goto label_3e4e00;
        case 0x3e4e04u: goto label_3e4e04;
        case 0x3e4e08u: goto label_3e4e08;
        case 0x3e4e0cu: goto label_3e4e0c;
        case 0x3e4e10u: goto label_3e4e10;
        case 0x3e4e14u: goto label_3e4e14;
        case 0x3e4e18u: goto label_3e4e18;
        case 0x3e4e1cu: goto label_3e4e1c;
        case 0x3e4e20u: goto label_3e4e20;
        case 0x3e4e24u: goto label_3e4e24;
        case 0x3e4e28u: goto label_3e4e28;
        case 0x3e4e2cu: goto label_3e4e2c;
        case 0x3e4e30u: goto label_3e4e30;
        case 0x3e4e34u: goto label_3e4e34;
        case 0x3e4e38u: goto label_3e4e38;
        case 0x3e4e3cu: goto label_3e4e3c;
        case 0x3e4e40u: goto label_3e4e40;
        case 0x3e4e44u: goto label_3e4e44;
        case 0x3e4e48u: goto label_3e4e48;
        case 0x3e4e4cu: goto label_3e4e4c;
        case 0x3e4e50u: goto label_3e4e50;
        case 0x3e4e54u: goto label_3e4e54;
        case 0x3e4e58u: goto label_3e4e58;
        case 0x3e4e5cu: goto label_3e4e5c;
        case 0x3e4e60u: goto label_3e4e60;
        case 0x3e4e64u: goto label_3e4e64;
        case 0x3e4e68u: goto label_3e4e68;
        case 0x3e4e6cu: goto label_3e4e6c;
        case 0x3e4e70u: goto label_3e4e70;
        case 0x3e4e74u: goto label_3e4e74;
        case 0x3e4e78u: goto label_3e4e78;
        case 0x3e4e7cu: goto label_3e4e7c;
        case 0x3e4e80u: goto label_3e4e80;
        case 0x3e4e84u: goto label_3e4e84;
        case 0x3e4e88u: goto label_3e4e88;
        case 0x3e4e8cu: goto label_3e4e8c;
        case 0x3e4e90u: goto label_3e4e90;
        case 0x3e4e94u: goto label_3e4e94;
        case 0x3e4e98u: goto label_3e4e98;
        case 0x3e4e9cu: goto label_3e4e9c;
        case 0x3e4ea0u: goto label_3e4ea0;
        case 0x3e4ea4u: goto label_3e4ea4;
        case 0x3e4ea8u: goto label_3e4ea8;
        case 0x3e4eacu: goto label_3e4eac;
        case 0x3e4eb0u: goto label_3e4eb0;
        case 0x3e4eb4u: goto label_3e4eb4;
        case 0x3e4eb8u: goto label_3e4eb8;
        case 0x3e4ebcu: goto label_3e4ebc;
        case 0x3e4ec0u: goto label_3e4ec0;
        case 0x3e4ec4u: goto label_3e4ec4;
        case 0x3e4ec8u: goto label_3e4ec8;
        case 0x3e4eccu: goto label_3e4ecc;
        case 0x3e4ed0u: goto label_3e4ed0;
        case 0x3e4ed4u: goto label_3e4ed4;
        case 0x3e4ed8u: goto label_3e4ed8;
        case 0x3e4edcu: goto label_3e4edc;
        default: break;
    }

    ctx->pc = 0x3e4dd0u;

label_3e4dd0:
    // 0x3e4dd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e4dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3e4dd4:
    // 0x3e4dd4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3e4dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_3e4dd8:
    // 0x3e4dd8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x3e4dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_3e4ddc:
    // 0x3e4ddc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e4ddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e4de0:
    // 0x3e4de0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3e4de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3e4de4:
    // 0x3e4de4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e4de4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e4de8:
    // 0x3e4de8: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x3e4de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3e4dec:
    // 0x3e4dec: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x3e4decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3e4df0:
    // 0x3e4df0: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x3e4df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_3e4df4:
    // 0x3e4df4: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x3e4df4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3e4df8:
    // 0x3e4df8: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x3e4df8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3e4dfc:
    // 0x3e4dfc: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x3e4dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_3e4e00:
    // 0x3e4e00: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x3e4e00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3e4e04:
    // 0x3e4e04: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x3e4e04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3e4e08:
    // 0x3e4e08: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x3e4e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_3e4e0c:
    // 0x3e4e0c: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x3e4e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3e4e10:
    // 0x3e4e10: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x3e4e10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3e4e14:
    // 0x3e4e14: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x3e4e14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_3e4e18:
    // 0x3e4e18: 0x1230002b  beq         $s1, $s0, . + 4 + (0x2B << 2)
label_3e4e1c:
    if (ctx->pc == 0x3E4E1Cu) {
        ctx->pc = 0x3E4E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4E18u;
        // 0x3e4e1c: 0x87a40016  lh          $a0, 0x16($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4E20u;
        goto label_3e4e20;
    }
    ctx->pc = 0x3E4E18u;
    {
        const bool branch_taken_0x3e4e18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x3E4E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4E18u;
        // 0x3e4e1c: 0x87a40016  lh          $a0, 0x16($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4e18) {
            ctx->pc = 0x3E4EC8u;
            goto label_3e4ec8;
        }
    }
    ctx->pc = 0x3E4E20u;
label_3e4e20:
    // 0x3e4e20: 0x4800008  bltz        $a0, . + 4 + (0x8 << 2)
label_3e4e24:
    if (ctx->pc == 0x3E4E24u) {
        ctx->pc = 0x3E4E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4E20u;
        // 0x3e4e24: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4E28u;
        goto label_3e4e28;
    }
    ctx->pc = 0x3E4E20u;
    {
        const bool branch_taken_0x3e4e20 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3E4E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4E20u;
        // 0x3e4e24: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4e20) {
            ctx->pc = 0x3E4E44u;
            goto label_3e4e44;
        }
    }
    ctx->pc = 0x3E4E28u;
label_3e4e28:
    // 0x3e4e28: 0x87a20018  lh          $v0, 0x18($sp)
    ctx->pc = 0x3e4e28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 24)));
label_3e4e2c:
    // 0x3e4e2c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3e4e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3e4e30:
    // 0x3e4e30: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3e4e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3e4e34:
    // 0x3e4e34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3e4e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3e4e38:
    // 0x3e4e38: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3e4e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3e4e3c:
    // 0x3e4e3c: 0x10000002  b           . + 4 + (0x2 << 2)
label_3e4e40:
    if (ctx->pc == 0x3E4E40u) {
        ctx->pc = 0x3E4E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4E3Cu;
        // 0x3e4e40: 0x8c82fffc  lw          $v0, -0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4E44u;
        goto label_3e4e44;
    }
    ctx->pc = 0x3E4E3Cu;
    {
        const bool branch_taken_0x3e4e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4E3Cu;
        // 0x3e4e40: 0x8c82fffc  lw          $v0, -0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4e3c) {
            ctx->pc = 0x3E4E48u;
            goto label_3e4e48;
        }
    }
    ctx->pc = 0x3E4E44u;
label_3e4e44:
    // 0x3e4e44: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3e4e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3e4e48:
    // 0x3e4e48: 0x87a40014  lh          $a0, 0x14($sp)
    ctx->pc = 0x3e4e48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 20)));
label_3e4e4c:
    // 0x3e4e4c: 0x40f809  jalr        $v0
label_3e4e50:
    if (ctx->pc == 0x3E4E50u) {
        ctx->pc = 0x3E4E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4E4Cu;
        // 0x3e4e50: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4E54u;
        goto label_3e4e54;
    }
    ctx->pc = 0x3E4E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E4E54u);
        ctx->pc = 0x3E4E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4E4Cu;
        // 0x3e4e50: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E4E4Cu, 0x3E4E54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E4E54u;
label_3e4e54:
    // 0x3e4e54: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3e4e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3e4e58:
    // 0x3e4e58: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_3e4e5c:
    if (ctx->pc == 0x3E4E5Cu) {
        ctx->pc = 0x3E4E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4E58u;
        // 0x3e4e5c: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4E60u;
        goto label_3e4e60;
    }
    ctx->pc = 0x3E4E58u;
    {
        const bool branch_taken_0x3e4e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4e58) {
            ctx->pc = 0x3E4E5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E4E58u;
            // 0x3e4e5c: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E4E68u;
            goto label_3e4e68;
        }
    }
    ctx->pc = 0x3E4E60u;
label_3e4e60:
    // 0x3e4e60: 0x1000ffed  b           . + 4 + (-0x13 << 2)
label_3e4e64:
    if (ctx->pc == 0x3E4E64u) {
        ctx->pc = 0x3E4E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4E60u;
        // 0x3e4e64: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4E68u;
        goto label_3e4e68;
    }
    ctx->pc = 0x3E4E60u;
    {
        const bool branch_taken_0x3e4e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4E60u;
        // 0x3e4e64: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4e60) {
            ctx->pc = 0x3E4E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e4e18;
        }
    }
    ctx->pc = 0x3E4E68u;
label_3e4e68:
    // 0x3e4e68: 0x12300017  beq         $s1, $s0, . + 4 + (0x17 << 2)
label_3e4e6c:
    if (ctx->pc == 0x3E4E6Cu) {
        ctx->pc = 0x3E4E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4E68u;
        // 0x3e4e6c: 0x87a40016  lh          $a0, 0x16($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4E70u;
        goto label_3e4e70;
    }
    ctx->pc = 0x3E4E68u;
    {
        const bool branch_taken_0x3e4e68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x3E4E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4E68u;
        // 0x3e4e6c: 0x87a40016  lh          $a0, 0x16($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4e68) {
            ctx->pc = 0x3E4EC8u;
            goto label_3e4ec8;
        }
    }
    ctx->pc = 0x3E4E70u;
label_3e4e70:
    // 0x3e4e70: 0x4800008  bltz        $a0, . + 4 + (0x8 << 2)
label_3e4e74:
    if (ctx->pc == 0x3E4E74u) {
        ctx->pc = 0x3E4E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4E70u;
        // 0x3e4e74: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4E78u;
        goto label_3e4e78;
    }
    ctx->pc = 0x3E4E70u;
    {
        const bool branch_taken_0x3e4e70 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3E4E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4E70u;
        // 0x3e4e74: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4e70) {
            ctx->pc = 0x3E4E94u;
            goto label_3e4e94;
        }
    }
    ctx->pc = 0x3E4E78u;
label_3e4e78:
    // 0x3e4e78: 0x87a20018  lh          $v0, 0x18($sp)
    ctx->pc = 0x3e4e78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 24)));
label_3e4e7c:
    // 0x3e4e7c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3e4e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3e4e80:
    // 0x3e4e80: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3e4e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3e4e84:
    // 0x3e4e84: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3e4e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3e4e88:
    // 0x3e4e88: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3e4e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3e4e8c:
    // 0x3e4e8c: 0x10000002  b           . + 4 + (0x2 << 2)
label_3e4e90:
    if (ctx->pc == 0x3E4E90u) {
        ctx->pc = 0x3E4E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4E8Cu;
        // 0x3e4e90: 0x8c82fffc  lw          $v0, -0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4E94u;
        goto label_3e4e94;
    }
    ctx->pc = 0x3E4E8Cu;
    {
        const bool branch_taken_0x3e4e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4E8Cu;
        // 0x3e4e90: 0x8c82fffc  lw          $v0, -0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4e8c) {
            ctx->pc = 0x3E4E98u;
            goto label_3e4e98;
        }
    }
    ctx->pc = 0x3E4E94u;
label_3e4e94:
    // 0x3e4e94: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3e4e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3e4e98:
    // 0x3e4e98: 0x87a40014  lh          $a0, 0x14($sp)
    ctx->pc = 0x3e4e98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 20)));
label_3e4e9c:
    // 0x3e4e9c: 0x40f809  jalr        $v0
label_3e4ea0:
    if (ctx->pc == 0x3E4EA0u) {
        ctx->pc = 0x3E4EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4E9Cu;
        // 0x3e4ea0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4EA4u;
        goto label_3e4ea4;
    }
    ctx->pc = 0x3E4E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E4EA4u);
        ctx->pc = 0x3E4EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4E9Cu;
        // 0x3e4ea0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E4E9Cu, 0x3E4EA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E4EA4u;
label_3e4ea4:
    // 0x3e4ea4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3e4ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3e4ea8:
    // 0x3e4ea8: 0x5040ffef  beql        $v0, $zero, . + 4 + (-0x11 << 2)
label_3e4eac:
    if (ctx->pc == 0x3E4EACu) {
        ctx->pc = 0x3E4EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4EA8u;
        // 0x3e4eac: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4EB0u;
        goto label_3e4eb0;
    }
    ctx->pc = 0x3E4EA8u;
    {
        const bool branch_taken_0x3e4ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4ea8) {
            ctx->pc = 0x3E4EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E4EA8u;
            // 0x3e4eac: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E4E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e4e68;
        }
    }
    ctx->pc = 0x3E4EB0u;
label_3e4eb0:
    // 0x3e4eb0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3e4eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e4eb4:
    // 0x3e4eb4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e4eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e4eb8:
    // 0x3e4eb8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3e4eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3e4ebc:
    // 0x3e4ebc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3e4ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3e4ec0:
    // 0x3e4ec0: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
label_3e4ec4:
    if (ctx->pc == 0x3E4EC4u) {
        ctx->pc = 0x3E4EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4EC0u;
        // 0x3e4ec4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4EC8u;
        goto label_3e4ec8;
    }
    ctx->pc = 0x3E4EC0u;
    {
        const bool branch_taken_0x3e4ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4EC0u;
        // 0x3e4ec4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4ec0) {
            ctx->pc = 0x3E4E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e4e18;
        }
    }
    ctx->pc = 0x3E4EC8u;
label_3e4ec8:
    // 0x3e4ec8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3e4ec8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e4ecc:
    // 0x3e4ecc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3e4eccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3e4ed0:
    // 0x3e4ed0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x3e4ed0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_3e4ed4:
    // 0x3e4ed4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3e4ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3e4ed8:
    // 0x3e4ed8: 0x3e00008  jr          $ra
label_3e4edc:
    if (ctx->pc == 0x3E4EDCu) {
        ctx->pc = 0x3E4EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4ED8u;
        // 0x3e4edc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4EE0u;
        goto label_fallthrough_0x3e4ed8;
    }
    ctx->pc = 0x3E4ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E4EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4ED8u;
        // 0x3e4edc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E4ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e4ed8:
    ctx->pc = 0x3E4EE0u;
}
