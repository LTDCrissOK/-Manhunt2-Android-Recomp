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

// Function: sub_003CDA60
// Address: 0x3cda60 - 0x3cde18
void sub_003CDA60_0x3cda60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CDA60_0x3cda60");
#endif

    switch (ctx->pc) {
        case 0x3cdafcu: goto label_3cdafc;
        case 0x3cdb50u: goto label_3cdb50;
        case 0x3cdba0u: goto label_3cdba0;
        case 0x3cdc08u: goto label_3cdc08;
        case 0x3cdc64u: goto label_3cdc64;
        case 0x3cdd90u: goto label_3cdd90;
        case 0x3cddccu: goto label_3cddcc;
        case 0x3cde04u: goto label_3cde04;
        default: break;
    }

    ctx->pc = 0x3cda60u;

    // 0x3cda60: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3cda60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3cda64: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3cda64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3cda68: 0x8c43d690  lw          $v1, -0x2970($v0)
    ctx->pc = 0x3cda68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x42D690u));
    // 0x3cda6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3cda6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cda70: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3cda70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3cda74: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3CDA74u;
    {
        const bool branch_taken_0x3cda74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CDA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDA74u;
        // 0x3cda78: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cda74) {
            ctx->pc = 0x3CDA80u;
            goto label_3cda80;
        }
    }
    ctx->pc = 0x3CDA7Cu;
    // 0x3cda7c: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x3cda7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_3cda80:
    // 0x3cda80: 0x24030440  addiu       $v1, $zero, 0x440
    ctx->pc = 0x3cda80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1088));
    // 0x3cda84: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3cda84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3cda88: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x3cda88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3cda8c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3cda8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x3cda90: 0xac45d688  sw          $a1, -0x2978($v0)
    ctx->pc = 0x3cda90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956680), GPR_U32(ctx, 5));
    // 0x3cda94: 0x248445c0  addiu       $a0, $a0, 0x45C0
    ctx->pc = 0x3cda94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17856));
    // 0x3cda98: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x3cda98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x3cda9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3cda9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3cdaa0: 0x658025  or          $s0, $v1, $a1
    ctx->pc = 0x3cdaa0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3cdaa4: 0x8a020003  lwl         $v0, 0x3($s0)
    ctx->pc = 0x3cdaa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x3cdaa8: 0x9a020000  lwr         $v0, 0x0($s0)
    ctx->pc = 0x3cdaa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x3cdaac: 0xaba20003  swl         $v0, 0x3($sp)
    ctx->pc = 0x3cdaacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3cdab0: 0xbba20000  swr         $v0, 0x0($sp)
    ctx->pc = 0x3cdab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3cdab4: 0x8a060007  lwl         $a2, 0x7($s0)
    ctx->pc = 0x3cdab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x3cdab8: 0x9a060004  lwr         $a2, 0x4($s0)
    ctx->pc = 0x3cdab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x3cdabc: 0xaba60007  swl         $a2, 0x7($sp)
    ctx->pc = 0x3cdabcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3cdac0: 0xbba60004  swr         $a2, 0x4($sp)
    ctx->pc = 0x3cdac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3cdac4: 0x8a03000b  lwl         $v1, 0xB($s0)
    ctx->pc = 0x3cdac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x3cdac8: 0x9a030008  lwr         $v1, 0x8($s0)
    ctx->pc = 0x3cdac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x3cdacc: 0xaba3000b  swl         $v1, 0xB($sp)
    ctx->pc = 0x3cdaccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3cdad0: 0xbba30008  swr         $v1, 0x8($sp)
    ctx->pc = 0x3cdad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3cdad4: 0x8a07000f  lwl         $a3, 0xF($s0)
    ctx->pc = 0x3cdad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x3cdad8: 0x9a07000c  lwr         $a3, 0xC($s0)
    ctx->pc = 0x3cdad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x3cdadc: 0xaba7000f  swl         $a3, 0xF($sp)
    ctx->pc = 0x3cdadcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3cdae0: 0xbba7000c  swr         $a3, 0xC($sp)
    ctx->pc = 0x3cdae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3cdae4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3cdae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3cdae8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CDAE8u;
    {
        const bool branch_taken_0x3cdae8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3CDAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDAE8u;
        // 0x3cdaec: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdae8) {
            ctx->pc = 0x3CDAFCu;
            goto label_3cdafc;
        }
    }
    ctx->pc = 0x3CDAF0u;
    // 0x3cdaf0: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x3cdaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3cdaf4: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3CDAF4u;
    SET_GPR_U32(ctx, 31, 0x3CDAFCu);
    ctx->pc = 0x3CDAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDAF4u;
    // 0x3cdaf8: 0x8fa6000c  lw          $a2, 0xC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3CDAF4u, 0x3CDAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDAFCu;
label_3cdafc:
    // 0x3cdafc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3cdafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3cdb00: 0x2444fffe  addiu       $a0, $v0, -0x2
    ctx->pc = 0x3cdb00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x3cdb04: 0x2c830019  sltiu       $v1, $a0, 0x19
    ctx->pc = 0x3cdb04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x3cdb08: 0x106000a1  beqz        $v1, . + 4 + (0xA1 << 2)
    ctx->pc = 0x3CDB08u;
    {
        const bool branch_taken_0x3cdb08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CDB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDB08u;
        // 0x3cdb0c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdb08) {
            ctx->pc = 0x3CDD90u;
            goto label_3cdd90;
        }
    }
    ctx->pc = 0x3CDB10u;
    // 0x3cdb10: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3cdb10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3cdb14: 0x24421ca0  addiu       $v0, $v0, 0x1CA0
    ctx->pc = 0x3cdb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7328));
    // 0x3cdb18: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3cdb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3cdb1c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3cdb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3cdb20: 0x800008  jr          $a0
    ctx->pc = 0x3CDB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3CDB28u: goto label_3cdb28;
            case 0x3CDBD0u: goto label_3cdbd0;
            case 0x3CDCACu: goto label_3cdcac;
            case 0x3CDD48u: goto label_3cdd48;
            case 0x3CDD90u: goto label_3cdd90;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CDB20u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3CDB28u;
label_3cdb28:
    // 0x3cdb28: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x3cdb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3cdb2c: 0x18600012  blez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3CDB2Cu;
    {
        const bool branch_taken_0x3cdb2c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3CDB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDB2Cu;
        // 0x3cdb30: 0x26070014  addiu       $a3, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdb2c) {
            ctx->pc = 0x3CDB78u;
            goto label_3cdb78;
        }
    }
    ctx->pc = 0x3CDB34u;
    // 0x3cdb34: 0x8ce80008  lw          $t0, 0x8($a3)
    ctx->pc = 0x3cdb34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x3cdb38: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x3cdb38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x3cdb3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3cdb3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cdb40: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3CDB40u;
    {
        const bool branch_taken_0x3cdb40 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3CDB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDB40u;
        // 0x3cdb44: 0x1025025  or          $t2, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdb40) {
            ctx->pc = 0x3CDB78u;
            goto label_3cdb78;
        }
    }
    ctx->pc = 0x3CDB48u;
    // 0x3cdb48: 0x26090024  addiu       $t1, $s0, 0x24
    ctx->pc = 0x3cdb48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x3cdb4c: 0x1261021  addu        $v0, $t1, $a2
    ctx->pc = 0x3cdb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_3cdb50:
    // 0x3cdb50: 0x1462821  addu        $a1, $t2, $a2
    ctx->pc = 0x3cdb50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x3cdb54: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3cdb54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3cdb58: 0x1062021  addu        $a0, $t0, $a2
    ctx->pc = 0x3cdb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x3cdb5c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3cdb5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3cdb60: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3cdb60u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3cdb64: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3cdb64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3cdb68: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3cdb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3cdb6c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x3cdb6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3cdb70: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3CDB70u;
    {
        const bool branch_taken_0x3cdb70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CDB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDB70u;
        // 0x3cdb74: 0x1261021  addu        $v0, $t1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdb70) {
            ctx->pc = 0x3CDB50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cdb50;
        }
    }
    ctx->pc = 0x3CDB78u;
label_3cdb78:
    // 0x3cdb78: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x3cdb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x3cdb7c: 0x18600084  blez        $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x3CDB7Cu;
    {
        const bool branch_taken_0x3cdb7c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3CDB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDB7Cu;
        // 0x3cdb80: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdb7c) {
            ctx->pc = 0x3CDD90u;
            goto label_3cdd90;
        }
    }
    ctx->pc = 0x3CDB84u;
    // 0x3cdb84: 0x8ce8000c  lw          $t0, 0xC($a3)
    ctx->pc = 0x3cdb84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x3cdb88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3cdb88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cdb8c: 0x18600080  blez        $v1, . + 4 + (0x80 << 2)
    ctx->pc = 0x3CDB8Cu;
    {
        const bool branch_taken_0x3cdb8c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3CDB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDB8Cu;
        // 0x3cdb90: 0x1025025  or          $t2, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdb8c) {
            ctx->pc = 0x3CDD90u;
            goto label_3cdd90;
        }
    }
    ctx->pc = 0x3CDB94u;
    // 0x3cdb94: 0x24e90050  addiu       $t1, $a3, 0x50
    ctx->pc = 0x3cdb94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x3cdb98: 0x1261021  addu        $v0, $t1, $a2
    ctx->pc = 0x3cdb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x3cdb9c: 0x0  nop
    ctx->pc = 0x3cdb9cu;
    // NOP
label_3cdba0:
    // 0x3cdba0: 0x1462821  addu        $a1, $t2, $a2
    ctx->pc = 0x3cdba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x3cdba4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3cdba4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3cdba8: 0x1062021  addu        $a0, $t0, $a2
    ctx->pc = 0x3cdba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x3cdbac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3cdbacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3cdbb0: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3cdbb0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3cdbb4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3cdbb4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3cdbb8: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x3cdbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x3cdbbc: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x3cdbbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3cdbc0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3CDBC0u;
    {
        const bool branch_taken_0x3cdbc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CDBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDBC0u;
        // 0x3cdbc4: 0x1261021  addu        $v0, $t1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdbc0) {
            ctx->pc = 0x3CDBA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cdba0;
        }
    }
    ctx->pc = 0x3CDBC8u;
    // 0x3cdbc8: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x3CDBC8u;
    {
        const bool branch_taken_0x3cdbc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CDBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDBC8u;
        // 0x3cdbcc: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdbc8) {
            ctx->pc = 0x3CDD94u;
            goto label_3cdd94;
        }
    }
    ctx->pc = 0x3CDBD0u;
label_3cdbd0:
    // 0x3cdbd0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3cdbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3cdbd4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3cdbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3cdbd8: 0x1860006e  blez        $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x3CDBD8u;
    {
        const bool branch_taken_0x3cdbd8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3CDBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDBD8u;
        // 0x3cdbdc: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdbd8) {
            ctx->pc = 0x3CDD94u;
            goto label_3cdd94;
        }
    }
    ctx->pc = 0x3CDBE0u;
    // 0x3cdbe0: 0x8a040017  lwl         $a0, 0x17($s0)
    ctx->pc = 0x3cdbe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x3cdbe4: 0x9a040014  lwr         $a0, 0x14($s0)
    ctx->pc = 0x3cdbe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x3cdbe8: 0xaba40013  swl         $a0, 0x13($sp)
    ctx->pc = 0x3cdbe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3cdbec: 0xbba40010  swr         $a0, 0x10($sp)
    ctx->pc = 0x3cdbecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3cdbf0: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x3cdbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x3cdbf4: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x3cdbf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cdbf8: 0x861025  or          $v0, $a0, $a2
    ctx->pc = 0x3cdbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x3cdbfc: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x3cdbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x3cdc00: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3CDC00u;
    {
        const bool branch_taken_0x3cdc00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CDC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDC00u;
        // 0x3cdc04: 0x26020158  addiu       $v0, $s0, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdc00) {
            ctx->pc = 0x3CDC64u;
            goto label_3cdc64;
        }
    }
    ctx->pc = 0x3CDC08u;
label_3cdc08:
    // 0x3cdc08: 0x68880007  ldl         $t0, 0x7($a0)
    ctx->pc = 0x3cdc08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x3cdc0c: 0x6c880000  ldr         $t0, 0x0($a0)
    ctx->pc = 0x3cdc0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x3cdc10: 0x6883000f  ldl         $v1, 0xF($a0)
    ctx->pc = 0x3cdc10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3cdc14: 0x6c830008  ldr         $v1, 0x8($a0)
    ctx->pc = 0x3cdc14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3cdc18: 0x68850017  ldl         $a1, 0x17($a0)
    ctx->pc = 0x3cdc18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3cdc1c: 0x6c850010  ldr         $a1, 0x10($a0)
    ctx->pc = 0x3cdc1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3cdc20: 0x6887001f  ldl         $a3, 0x1F($a0)
    ctx->pc = 0x3cdc20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x3cdc24: 0x6c870018  ldr         $a3, 0x18($a0)
    ctx->pc = 0x3cdc24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x3cdc28: 0xb0c80007  sdl         $t0, 0x7($a2)
    ctx->pc = 0x3cdc28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cdc2c: 0xb4c80000  sdr         $t0, 0x0($a2)
    ctx->pc = 0x3cdc2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cdc30: 0xb0c3000f  sdl         $v1, 0xF($a2)
    ctx->pc = 0x3cdc30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cdc34: 0xb4c30008  sdr         $v1, 0x8($a2)
    ctx->pc = 0x3cdc34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cdc38: 0xb0c50017  sdl         $a1, 0x17($a2)
    ctx->pc = 0x3cdc38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cdc3c: 0xb4c50010  sdr         $a1, 0x10($a2)
    ctx->pc = 0x3cdc3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cdc40: 0xb0c7001f  sdl         $a3, 0x1F($a2)
    ctx->pc = 0x3cdc40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cdc44: 0xb4c70018  sdr         $a3, 0x18($a2)
    ctx->pc = 0x3cdc44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cdc48: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x3cdc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x3cdc4c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x3cdc4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x3cdc50: 0x0  nop
    ctx->pc = 0x3cdc50u;
    // NOP
    // 0x3cdc54: 0x1482ffec  bne         $a0, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x3CDC54u;
    {
        const bool branch_taken_0x3cdc54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3cdc54) {
            ctx->pc = 0x3CDC08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cdc08;
        }
    }
    ctx->pc = 0x3CDC5Cu;
    // 0x3cdc5c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3CDC5Cu;
    {
        const bool branch_taken_0x3cdc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cdc5c) {
            ctx->pc = 0x3CDC98u;
            goto label_3cdc98;
        }
    }
    ctx->pc = 0x3CDC64u;
label_3cdc64:
    // 0x3cdc64: 0xdc880000  ld          $t0, 0x0($a0)
    ctx->pc = 0x3cdc64u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3cdc68: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x3cdc68u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3cdc6c: 0xdc850010  ld          $a1, 0x10($a0)
    ctx->pc = 0x3cdc6cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3cdc70: 0xdc870018  ld          $a3, 0x18($a0)
    ctx->pc = 0x3cdc70u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3cdc74: 0xfcc80000  sd          $t0, 0x0($a2)
    ctx->pc = 0x3cdc74u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 8));
    // 0x3cdc78: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x3cdc78u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x3cdc7c: 0xfcc50010  sd          $a1, 0x10($a2)
    ctx->pc = 0x3cdc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 5));
    // 0x3cdc80: 0xfcc70018  sd          $a3, 0x18($a2)
    ctx->pc = 0x3cdc80u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 7));
    // 0x3cdc84: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x3cdc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x3cdc88: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x3cdc88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x3cdc8c: 0x0  nop
    ctx->pc = 0x3cdc8cu;
    // NOP
    // 0x3cdc90: 0x1482fff4  bne         $a0, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3CDC90u;
    {
        const bool branch_taken_0x3cdc90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3cdc90) {
            ctx->pc = 0x3CDC64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cdc64;
        }
    }
    ctx->pc = 0x3CDC98u;
label_3cdc98:
    // 0x3cdc98: 0x88880003  lwl         $t0, 0x3($a0)
    ctx->pc = 0x3cdc98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x3cdc9c: 0x98880000  lwr         $t0, 0x0($a0)
    ctx->pc = 0x3cdc9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x3cdca0: 0xa8c80003  swl         $t0, 0x3($a2)
    ctx->pc = 0x3cdca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3cdca4: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x3CDCA4u;
    {
        const bool branch_taken_0x3cdca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CDCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDCA4u;
        // 0x3cdca8: 0xb8c80000  swr         $t0, 0x0($a2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdca4) {
            ctx->pc = 0x3CDD90u;
            goto label_3cdd90;
        }
    }
    ctx->pc = 0x3CDCACu;
label_3cdcac:
    // 0x3cdcac: 0x8a060017  lwl         $a2, 0x17($s0)
    ctx->pc = 0x3cdcacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x3cdcb0: 0x9a060014  lwr         $a2, 0x14($s0)
    ctx->pc = 0x3cdcb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x3cdcb4: 0xaba60013  swl         $a2, 0x13($sp)
    ctx->pc = 0x3cdcb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3cdcb8: 0xbba60010  swr         $a2, 0x10($sp)
    ctx->pc = 0x3cdcb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3cdcbc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x3cdcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cdcc0: 0x6a03001f  ldl         $v1, 0x1F($s0)
    ctx->pc = 0x3cdcc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3cdcc4: 0x6e030018  ldr         $v1, 0x18($s0)
    ctx->pc = 0x3cdcc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3cdcc8: 0x6a040027  ldl         $a0, 0x27($s0)
    ctx->pc = 0x3cdcc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3cdccc: 0x6e040020  ldr         $a0, 0x20($s0)
    ctx->pc = 0x3cdcccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3cdcd0: 0x6a05002f  ldl         $a1, 0x2F($s0)
    ctx->pc = 0x3cdcd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3cdcd4: 0x6e050028  ldr         $a1, 0x28($s0)
    ctx->pc = 0x3cdcd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3cdcd8: 0x6a060037  ldl         $a2, 0x37($s0)
    ctx->pc = 0x3cdcd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3cdcdc: 0x6e060030  ldr         $a2, 0x30($s0)
    ctx->pc = 0x3cdcdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3cdce0: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x3cdce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cdce4: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x3cdce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cdce8: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x3cdce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cdcec: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x3cdcecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cdcf0: 0xb0450017  sdl         $a1, 0x17($v0)
    ctx->pc = 0x3cdcf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cdcf4: 0xb4450010  sdr         $a1, 0x10($v0)
    ctx->pc = 0x3cdcf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cdcf8: 0xb046001f  sdl         $a2, 0x1F($v0)
    ctx->pc = 0x3cdcf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cdcfc: 0xb4460018  sdr         $a2, 0x18($v0)
    ctx->pc = 0x3cdcfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cdd00: 0x6a03003f  ldl         $v1, 0x3F($s0)
    ctx->pc = 0x3cdd00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3cdd04: 0x6e030038  ldr         $v1, 0x38($s0)
    ctx->pc = 0x3cdd04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3cdd08: 0x6a040047  ldl         $a0, 0x47($s0)
    ctx->pc = 0x3cdd08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3cdd0c: 0x6e040040  ldr         $a0, 0x40($s0)
    ctx->pc = 0x3cdd0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3cdd10: 0x6a05004f  ldl         $a1, 0x4F($s0)
    ctx->pc = 0x3cdd10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3cdd14: 0x6e050048  ldr         $a1, 0x48($s0)
    ctx->pc = 0x3cdd14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3cdd18: 0x6a060057  ldl         $a2, 0x57($s0)
    ctx->pc = 0x3cdd18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3cdd1c: 0x6e060050  ldr         $a2, 0x50($s0)
    ctx->pc = 0x3cdd1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3cdd20: 0xb0430027  sdl         $v1, 0x27($v0)
    ctx->pc = 0x3cdd20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cdd24: 0xb4430020  sdr         $v1, 0x20($v0)
    ctx->pc = 0x3cdd24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cdd28: 0xb044002f  sdl         $a0, 0x2F($v0)
    ctx->pc = 0x3cdd28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cdd2c: 0xb4440028  sdr         $a0, 0x28($v0)
    ctx->pc = 0x3cdd2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cdd30: 0xb0450037  sdl         $a1, 0x37($v0)
    ctx->pc = 0x3cdd30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cdd34: 0xb4450030  sdr         $a1, 0x30($v0)
    ctx->pc = 0x3cdd34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cdd38: 0xb046003f  sdl         $a2, 0x3F($v0)
    ctx->pc = 0x3cdd38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cdd3c: 0xb4460038  sdr         $a2, 0x38($v0)
    ctx->pc = 0x3cdd3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cdd40: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3CDD40u;
    {
        const bool branch_taken_0x3cdd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CDD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDD40u;
        // 0x3cdd44: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdd40) {
            ctx->pc = 0x3CDD94u;
            goto label_3cdd94;
        }
    }
    ctx->pc = 0x3CDD48u;
label_3cdd48:
    // 0x3cdd48: 0x8a070017  lwl         $a3, 0x17($s0)
    ctx->pc = 0x3cdd48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x3cdd4c: 0x9a070014  lwr         $a3, 0x14($s0)
    ctx->pc = 0x3cdd4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x3cdd50: 0xaba70013  swl         $a3, 0x13($sp)
    ctx->pc = 0x3cdd50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3cdd54: 0xbba70010  swr         $a3, 0x10($sp)
    ctx->pc = 0x3cdd54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3cdd58: 0x8a04001b  lwl         $a0, 0x1B($s0)
    ctx->pc = 0x3cdd58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x3cdd5c: 0x9a040018  lwr         $a0, 0x18($s0)
    ctx->pc = 0x3cdd5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x3cdd60: 0xaba40017  swl         $a0, 0x17($sp)
    ctx->pc = 0x3cdd60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3cdd64: 0xbba40014  swr         $a0, 0x14($sp)
    ctx->pc = 0x3cdd64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3cdd68: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x3cdd68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x3cdd6c: 0x2cc20401  sltiu       $v0, $a2, 0x401
    ctx->pc = 0x3cdd6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
    // 0x3cdd70: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3CDD70u;
    {
        const bool branch_taken_0x3cdd70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CDD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDD70u;
        // 0x3cdd74: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdd70) {
            ctx->pc = 0x3CDD88u;
            goto label_3cdd88;
        }
    }
    ctx->pc = 0x3CDD78u;
    // 0x3cdd78: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x3cdd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3cdd7c: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x3cdd7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3cdd80: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x3cdd80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x3cdd84: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x3cdd84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3cdd88:
    // 0x3cdd88: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3CDD88u;
    SET_GPR_U32(ctx, 31, 0x3CDD90u);
    ctx->pc = 0x3CDD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDD88u;
    // 0x3cdd8c: 0x2605001c  addiu       $a1, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3CDD88u, 0x3CDD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDD90u;
label_3cdd90:
    // 0x3cdd90: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3cdd90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3cdd94:
    // 0x3cdd94: 0x4810019  bgez        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3CDD94u;
    {
        const bool branch_taken_0x3cdd94 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x3CDD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDD94u;
        // 0x3cdd98: 0x3c070043  lui         $a3, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdd94) {
            ctx->pc = 0x3CDDFCu;
            goto label_3cddfc;
        }
    }
    ctx->pc = 0x3CDD9Cu;
    // 0x3cdd9c: 0x41023  negu        $v0, $a0
    ctx->pc = 0x3cdd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x3cdda0: 0x8ce3d608  lw          $v1, -0x29F8($a3)
    ctx->pc = 0x3cdda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294956552)));
    // 0x3cdda4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3cdda4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cdda8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3cdda8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3cddac: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3CDDACu;
    {
        const bool branch_taken_0x3cddac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x3CDDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDDACu;
        // 0x3cddb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cddac) {
            ctx->pc = 0x3CDDC8u;
            goto label_3cddc8;
        }
    }
    ctx->pc = 0x3CDDB4u;
    // 0x3cddb4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3cddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3cddb8: 0xace2d608  sw          $v0, -0x29F8($a3)
    ctx->pc = 0x3cddb8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294956552), GPR_U32(ctx, 2));
    // 0x3cddbc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3CDDBCu;
    {
        const bool branch_taken_0x3cddbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CDDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDDBCu;
        // 0x3cddc0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cddbc) {
            ctx->pc = 0x3CDE08u;
            goto label_3cde08;
        }
    }
    ctx->pc = 0x3CDDC4u;
    // 0x3cddc4: 0x0  nop
    ctx->pc = 0x3cddc4u;
    // NOP
label_3cddc8:
    // 0x3cddc8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3cddc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3cddcc:
    // 0x3cddcc: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x3cddccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3cddd0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3CDDD0u;
    {
        const bool branch_taken_0x3cddd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CDDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDDD0u;
        // 0x3cddd4: 0x24e2d608  addiu       $v0, $a3, -0x29F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cddd0) {
            ctx->pc = 0x3CDE04u;
            goto label_3cde04;
        }
    }
    ctx->pc = 0x3CDDD8u;
    // 0x3cddd8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x3cddd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3cdddc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3cdddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3cdde0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3cdde0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3cdde4: 0x1485fff9  bne         $a0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3CDDE4u;
    {
        const bool branch_taken_0x3cdde4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x3CDDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDDE4u;
        // 0x3cdde8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdde4) {
            ctx->pc = 0x3CDDCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cddcc;
        }
    }
    ctx->pc = 0x3CDDECu;
    // 0x3cddec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3cddecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3cddf0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3cddf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3cddf4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3CDDF4u;
    {
        const bool branch_taken_0x3cddf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CDDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDDF4u;
        // 0x3cddf8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cddf4) {
            ctx->pc = 0x3CDE08u;
            goto label_3cde08;
        }
    }
    ctx->pc = 0x3CDDFCu;
label_3cddfc:
    // 0x3cddfc: 0xc0f2674  jal         func_3C99D0
    ctx->pc = 0x3CDDFCu;
    SET_GPR_U32(ctx, 31, 0x3CDE04u);
    ctx->pc = 0x3C99D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99D0u, 0x3CDDFCu, 0x3CDE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDE04u;
label_3cde04:
    // 0x3cde04: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3cde04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3cde08:
    // 0x3cde08: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3cde08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cde0c: 0x3e00008  jr          $ra
    ctx->pc = 0x3CDE0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CDE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDE0Cu;
        // 0x3cde10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CDE0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CDE14u;
    // 0x3cde14: 0x0  nop
    ctx->pc = 0x3cde14u;
    // NOP
    ctx->pc = 0x3cde18u;
}
