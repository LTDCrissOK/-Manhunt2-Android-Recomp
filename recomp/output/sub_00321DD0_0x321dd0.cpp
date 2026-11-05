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

// Function: sub_00321DD0
// Address: 0x321dd0 - 0x321ef8
void sub_00321DD0_0x321dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321DD0_0x321dd0");
#endif

    switch (ctx->pc) {
        case 0x321e5cu: goto label_321e5c;
        case 0x321eccu: goto label_321ecc;
        case 0x321ed4u: goto label_321ed4;
        default: break;
    }

    ctx->pc = 0x321dd0u;

    // 0x321dd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x321dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x321dd4: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x321dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x321dd8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x321dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x321ddc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x321ddcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321de0: 0x1220003c  beqz        $s1, . + 4 + (0x3C << 2)
    ctx->pc = 0x321DE0u;
    {
        const bool branch_taken_0x321de0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x321DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321DE0u;
        // 0x321de4: 0xffbf0050  sd          $ra, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321de0) {
            ctx->pc = 0x321ED4u;
            goto label_321ed4;
        }
    }
    ctx->pc = 0x321DE8u;
    // 0x321de8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x321de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x321dec: 0x27b00008  addiu       $s0, $sp, 0x8
    ctx->pc = 0x321decu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x321df0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x321df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x321df4: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x321df4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
    // 0x321df8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x321df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x321dfc: 0x248358e0  addiu       $v1, $a0, 0x58E0
    ctx->pc = 0x321dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 22752));
    // 0x321e00: 0x8c8258e0  lw          $v0, 0x58E0($a0)
    ctx->pc = 0x321e00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5B58E0u));
    // 0x321e04: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x321e04u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5B58E4u));
    // 0x321e08: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x321e08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321e0c: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x321e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x321e10: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x321e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x321e14: 0xac8658e0  sw          $a2, 0x58E0($a0)
    ctx->pc = 0x321e14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x5B58E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B58E0u, _value); } while (0);
    // 0x321e18: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x321e18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x321e1c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x321e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x321e20: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x321e20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x5B58E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B58E4u, _value); } while (0);
    // 0x321e24: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x321e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x321e28: 0x6862000f  ldl         $v0, 0xF($v1)
    ctx->pc = 0x321e28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x321e2c: 0x6c620008  ldr         $v0, 0x8($v1)
    ctx->pc = 0x321e2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x321e30: 0xb3a2000f  sdl         $v0, 0xF($sp)
    ctx->pc = 0x321e30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x321e34: 0xb7a20008  sdr         $v0, 0x8($sp)
    ctx->pc = 0x321e34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x321e38: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x321e38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x321e3c: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x321e3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x321e40: 0xb062000f  sdl         $v0, 0xF($v1)
    ctx->pc = 0x321e40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x321e44: 0xb4620008  sdr         $v0, 0x8($v1)
    ctx->pc = 0x321e44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x321e48: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x321e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321e4c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x321E4Cu;
    {
        const bool branch_taken_0x321e4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x321e4c) {
            ctx->pc = 0x321E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321E4Cu;
            // 0x321e50: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321E60u;
            goto label_321e60;
        }
    }
    ctx->pc = 0x321E54u;
    // 0x321e54: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x321E54u;
    SET_GPR_U32(ctx, 31, 0x321E5Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x321E54u, 0x321E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321E5Cu;
label_321e5c:
    // 0x321e5c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x321e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_321e60:
    // 0x321e60: 0x3c03005b  lui         $v1, 0x5B
    ctx->pc = 0x321e60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
    // 0x321e64: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x321e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x321e68: 0x246458f0  addiu       $a0, $v1, 0x58F0
    ctx->pc = 0x321e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 22768));
    // 0x321e6c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x321e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x321e70: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x321e70u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5B58F4u));
    // 0x321e74: 0x8c6258f0  lw          $v0, 0x58F0($v1)
    ctx->pc = 0x321e74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5B58F0u));
    // 0x321e78: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x321e78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321e7c: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x321e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x321e80: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x321e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x321e84: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x321e84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x321e88: 0xac6658f0  sw          $a2, 0x58F0($v1)
    ctx->pc = 0x321e88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x5B58F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B58F0u, _value); } while (0);
    // 0x321e8c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x321e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x321e90: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x321e90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x5B58F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B58F4u, _value); } while (0);
    // 0x321e94: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x321e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x321e98: 0x6882000f  ldl         $v0, 0xF($a0)
    ctx->pc = 0x321e98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x321e9c: 0x6c820008  ldr         $v0, 0x8($a0)
    ctx->pc = 0x321e9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x321ea0: 0xb3a2000f  sdl         $v0, 0xF($sp)
    ctx->pc = 0x321ea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x321ea4: 0xb7a20008  sdr         $v0, 0x8($sp)
    ctx->pc = 0x321ea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x321ea8: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x321ea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x321eac: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x321eacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x321eb0: 0xb082000f  sdl         $v0, 0xF($a0)
    ctx->pc = 0x321eb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x321eb4: 0xb4820008  sdr         $v0, 0x8($a0)
    ctx->pc = 0x321eb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x321eb8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x321eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321ebc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x321EBCu;
    {
        const bool branch_taken_0x321ebc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x321ebc) {
            ctx->pc = 0x321ECCu;
            goto label_321ecc;
        }
    }
    ctx->pc = 0x321EC4u;
    // 0x321ec4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x321EC4u;
    SET_GPR_U32(ctx, 31, 0x321ECCu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x321EC4u, 0x321ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321ECCu;
label_321ecc:
    // 0x321ecc: 0xc0c8762  jal         func_321D88
    ctx->pc = 0x321ECCu;
    SET_GPR_U32(ctx, 31, 0x321ED4u);
    ctx->pc = 0x321ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321ECCu;
    // 0x321ed0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321D88u, 0x321ECCu, 0x321ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321ED4u;
label_321ed4:
    // 0x321ed4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x321ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x321ed8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x321ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x321edc: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x321edcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x321ee0: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x321ee0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x321ee4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x321ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x321ee8: 0xa040be10  sb          $zero, -0x41F0($v0)
    ctx->pc = 0x321ee8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FBE10u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FBE10u, _value); } while (0);
    // 0x321eec: 0xac60be0c  sw          $zero, -0x41F4($v1)
    ctx->pc = 0x321eecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FBE0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBE0Cu, _value); } while (0);
    // 0x321ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x321EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321EF0u;
        // 0x321ef4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321EF8u;
}
