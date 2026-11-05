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

// Function: sub_0012FBB8
// Address: 0x12fbb8 - 0x12fc90
void sub_0012FBB8_0x12fbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012FBB8_0x12fbb8");
#endif

    switch (ctx->pc) {
        case 0x12fbe4u: goto label_12fbe4;
        case 0x12fbf0u: goto label_12fbf0;
        case 0x12fbfcu: goto label_12fbfc;
        case 0x12fc04u: goto label_12fc04;
        case 0x12fc10u: goto label_12fc10;
        case 0x12fc18u: goto label_12fc18;
        case 0x12fc24u: goto label_12fc24;
        case 0x12fc2cu: goto label_12fc2c;
        case 0x12fc40u: goto label_12fc40;
        case 0x12fc74u: goto label_12fc74;
        default: break;
    }

    ctx->pc = 0x12fbb8u;

    // 0x12fbb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12fbb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12fbbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12fbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12fbc0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12fbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12fbc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12fbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12fbc8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12fbc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fbcc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12fbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12fbd0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x12fbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x12fbd4: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x12FBD4u;
    {
        const bool branch_taken_0x12fbd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12FBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FBD4u;
        // 0x12fbd8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fbd4) {
            ctx->pc = 0x12FC78u;
            goto label_12fc78;
        }
    }
    ctx->pc = 0x12FBDCu;
    // 0x12fbdc: 0xc04bc6e  jal         func_12F1B8
    ctx->pc = 0x12FBDCu;
    SET_GPR_U32(ctx, 31, 0x12FBE4u);
    ctx->pc = 0x12FBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FBDCu;
    // 0x12fbe0: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F1B8u, 0x12FBDCu, 0x12FBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FBE4u;
label_12fbe4:
    // 0x12fbe4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12fbe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fbe8: 0xc046144  jal         func_118510
    ctx->pc = 0x12FBE8u;
    SET_GPR_U32(ctx, 31, 0x12FBF0u);
    ctx->pc = 0x12FBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FBE8u;
    // 0x12fbec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118510u, 0x12FBE8u, 0x12FBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FBF0u;
label_12fbf0:
    // 0x12fbf0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12fbf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fbf4: 0xc046138  jal         func_1184E0
    ctx->pc = 0x12FBF4u;
    SET_GPR_U32(ctx, 31, 0x12FBFCu);
    ctx->pc = 0x12FBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FBF4u;
    // 0x12fbf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1184E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1184E0u, 0x12FBF4u, 0x12FBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FBFCu;
label_12fbfc:
    // 0x12fbfc: 0xc04615c  jal         func_118570
    ctx->pc = 0x12FBFCu;
    SET_GPR_U32(ctx, 31, 0x12FC04u);
    ctx->pc = 0x12FC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FBFCu;
    // 0x12fc00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118570u, 0x12FBFCu, 0x12FC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FC04u;
label_12fc04:
    // 0x12fc04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12fc04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fc08: 0xc046154  jal         func_118550
    ctx->pc = 0x12FC08u;
    SET_GPR_U32(ctx, 31, 0x12FC10u);
    ctx->pc = 0x12FC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FC08u;
    // 0x12fc0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118550u, 0x12FC08u, 0x12FC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FC10u;
label_12fc10:
    // 0x12fc10: 0xc046272  jal         func_1189C8
    ctx->pc = 0x12FC10u;
    SET_GPR_U32(ctx, 31, 0x12FC18u);
    ctx->pc = 0x12FC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FC10u;
    // 0x12fc14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189C8u, 0x12FC10u, 0x12FC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FC18u;
label_12fc18:
    // 0x12fc18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12fc18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fc1c: 0xc046256  jal         func_118958
    ctx->pc = 0x12FC1Cu;
    SET_GPR_U32(ctx, 31, 0x12FC24u);
    ctx->pc = 0x12FC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FC1Cu;
    // 0x12fc20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118958u, 0x12FC1Cu, 0x12FC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FC24u;
label_12fc24:
    // 0x12fc24: 0xc046356  jal         func_118D58
    ctx->pc = 0x12FC24u;
    SET_GPR_U32(ctx, 31, 0x12FC2Cu);
    ctx->pc = 0x12FC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FC24u;
    // 0x12fc28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118D58u, 0x12FC24u, 0x12FC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FC2Cu;
label_12fc2c:
    // 0x12fc2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12fc2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fc30: 0x52000011  beql        $s0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x12FC30u;
    {
        const bool branch_taken_0x12fc30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fc30) {
            ctx->pc = 0x12FC34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FC30u;
            // 0x12fc34: 0xae51000c  sw          $s1, 0xC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FC78u;
            goto label_12fc78;
        }
    }
    ctx->pc = 0x12FC38u;
    // 0x12fc38: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x12FC38u;
    SET_GPR_U32(ctx, 31, 0x12FC40u);
    ctx->pc = 0x12FC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FC38u;
    // 0x12fc3c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x12FC38u, 0x12FC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FC40u;
label_12fc40:
    // 0x12fc40: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x12fc40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x12fc44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12fc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fc48: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x12fc48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x12fc4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12fc4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fc50: 0x6a030007  ldl         $v1, 0x7($s0)
    ctx->pc = 0x12fc50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x12fc54: 0x6e030000  ldr         $v1, 0x0($s0)
    ctx->pc = 0x12fc54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x12fc58: 0x6a06000f  ldl         $a2, 0xF($s0)
    ctx->pc = 0x12fc58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x12fc5c: 0x6e060008  ldr         $a2, 0x8($s0)
    ctx->pc = 0x12fc5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x12fc60: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x12fc60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fc64: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x12fc64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fc68: 0xb046000f  sdl         $a2, 0xF($v0)
    ctx->pc = 0x12fc68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fc6c: 0xc04634e  jal         func_118D38
    ctx->pc = 0x12FC6Cu;
    SET_GPR_U32(ctx, 31, 0x12FC74u);
    ctx->pc = 0x12FC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FC6Cu;
    // 0x12fc70: 0xb4460008  sdr         $a2, 0x8($v0) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118D38u, 0x12FC6Cu, 0x12FC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FC74u;
label_12fc74:
    // 0x12fc74: 0xae51000c  sw          $s1, 0xC($s2)
    ctx->pc = 0x12fc74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 17));
label_12fc78:
    // 0x12fc78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12fc78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12fc7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12fc7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12fc80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12fc80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12fc84: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12fc84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12fc88: 0x3e00008  jr          $ra
    ctx->pc = 0x12FC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FC88u;
        // 0x12fc8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12FC88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12FC90u;
}
