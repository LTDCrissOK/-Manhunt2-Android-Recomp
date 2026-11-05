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

// Function: sub_003CF918
// Address: 0x3cf918 - 0x3cfa18
void sub_003CF918_0x3cf918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CF918_0x3cf918");
#endif

    switch (ctx->pc) {
        case 0x3cf940u: goto label_3cf940;
        case 0x3cf954u: goto label_3cf954;
        case 0x3cf998u: goto label_3cf998;
        case 0x3cf9d8u: goto label_3cf9d8;
        default: break;
    }

    ctx->pc = 0x3cf918u;

    // 0x3cf918: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3cf918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3cf91c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3cf91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x3cf920: 0x3c120043  lui         $s2, 0x43
    ctx->pc = 0x3cf920u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)67 << 16));
    // 0x3cf924: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3cf924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3cf928: 0x8e42d6a8  lw          $v0, -0x2958($s2)
    ctx->pc = 0x3cf928u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x42D6A8u));
    // 0x3cf92c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x3cf92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x3cf930: 0x4410032  bgez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x3CF930u;
    {
        const bool branch_taken_0x3cf930 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3CF934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF930u;
        // 0x3cf934: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf930) {
            ctx->pc = 0x3CF9FCu;
            goto label_3cf9fc;
        }
    }
    ctx->pc = 0x3CF938u;
    // 0x3cf938: 0x3c110066  lui         $s1, 0x66
    ctx->pc = 0x3cf938u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)102 << 16));
    // 0x3cf93c: 0x26305500  addiu       $s0, $s1, 0x5500
    ctx->pc = 0x3cf93cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 21760));
label_3cf940:
    // 0x3cf940: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x3cf940u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x3cf944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cf944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf948: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x3cf948u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    // 0x3cf94c: 0xc0f3404  jal         func_3CD010
    ctx->pc = 0x3CF94Cu;
    SET_GPR_U32(ctx, 31, 0x3CF954u);
    ctx->pc = 0x3CF950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF94Cu;
    // 0x3cf950: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD010u, 0x3CF94Cu, 0x3CF954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF954u;
label_3cf954:
    // 0x3cf954: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CF954u;
    {
        const bool branch_taken_0x3cf954 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3cf954) {
            ctx->pc = 0x3CF958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CF954u;
            // 0x3cf958: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CF964u;
            goto label_3cf964;
        }
    }
    ctx->pc = 0x3CF95Cu;
    // 0x3cf95c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x3CF95Cu;
    {
        const bool branch_taken_0x3cf95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF95Cu;
        // 0x3cf960: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf95c) {
            ctx->pc = 0x3CFA00u;
            goto label_3cfa00;
        }
    }
    ctx->pc = 0x3CF964u;
label_3cf964:
    // 0x3cf964: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3CF964u;
    {
        const bool branch_taken_0x3cf964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF964u;
        // 0x3cf968: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf964) {
            ctx->pc = 0x3CF9CCu;
            goto label_3cf9cc;
        }
    }
    ctx->pc = 0x3CF96Cu;
    // 0x3cf96c: 0x3c110066  lui         $s1, 0x66
    ctx->pc = 0x3cf96cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)102 << 16));
    // 0x3cf970: 0xae40d6a8  sw          $zero, -0x2958($s2)
    ctx->pc = 0x3cf970u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294956712), GPR_U32(ctx, 0));
    // 0x3cf974: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3cf974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3cf978: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x3cf978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3cf97c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3cf97cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf980: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3cf980u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf984: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3cf984u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf988: 0x26295300  addiu       $t1, $s1, 0x5300
    ctx->pc = 0x3cf988u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 21248));
    // 0x3cf98c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x3cf98cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3cf990: 0xc0f347c  jal         func_3CD1F0
    ctx->pc = 0x3CF990u;
    SET_GPR_U32(ctx, 31, 0x3CF998u);
    ctx->pc = 0x3CF994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF990u;
    // 0x3cf994: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD1F0u, 0x3CF990u, 0x3CF998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF998u;
label_3cf998:
    // 0x3cf998: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CF998u;
    {
        const bool branch_taken_0x3cf998 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3CF99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF998u;
        // 0x3cf99c: 0x3c030066  lui         $v1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf998) {
            ctx->pc = 0x3CF9ACu;
            goto label_3cf9ac;
        }
    }
    ctx->pc = 0x3CF9A0u;
    // 0x3cf9a0: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x3cf9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x3cf9a4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3CF9A4u;
    {
        const bool branch_taken_0x3cf9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF9A4u;
        // 0x3cf9a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf9a4) {
            ctx->pc = 0x3CFA00u;
            goto label_3cfa00;
        }
    }
    ctx->pc = 0x3CF9ACu;
label_3cf9ac:
    // 0x3cf9ac: 0x26275300  addiu       $a3, $s1, 0x5300
    ctx->pc = 0x3cf9acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 21248));
    // 0x3cf9b0: 0x24665528  addiu       $a2, $v1, 0x5528
    ctx->pc = 0x3cf9b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 21800));
    // 0x3cf9b4: 0x88e40003  lwl         $a0, 0x3($a3)
    ctx->pc = 0x3cf9b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x3cf9b8: 0x98e40000  lwr         $a0, 0x0($a3)
    ctx->pc = 0x3cf9b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x3cf9bc: 0xa8c40003  swl         $a0, 0x3($a2)
    ctx->pc = 0x3cf9bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3cf9c0: 0xb8c40000  swr         $a0, 0x0($a2)
    ctx->pc = 0x3cf9c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3cf9c4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3CF9C4u;
    {
        const bool branch_taken_0x3cf9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF9C4u;
        // 0x3cf9c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf9c4) {
            ctx->pc = 0x3CFA00u;
            goto label_3cfa00;
        }
    }
    ctx->pc = 0x3CF9CCu;
label_3cf9cc:
    // 0x3cf9cc: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x3cf9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x3cf9d0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3cf9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3cf9d4: 0x0  nop
    ctx->pc = 0x3cf9d4u;
    // NOP
label_3cf9d8:
    // 0x3cf9d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3cf9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3cf9dc: 0x0  nop
    ctx->pc = 0x3cf9dcu;
    // NOP
    // 0x3cf9e0: 0x0  nop
    ctx->pc = 0x3cf9e0u;
    // NOP
    // 0x3cf9e4: 0x0  nop
    ctx->pc = 0x3cf9e4u;
    // NOP
    // 0x3cf9e8: 0x0  nop
    ctx->pc = 0x3cf9e8u;
    // NOP
    // 0x3cf9ec: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3CF9ECu;
    {
        const bool branch_taken_0x3cf9ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3cf9ec) {
            ctx->pc = 0x3CF9D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cf9d8;
        }
    }
    ctx->pc = 0x3CF9F4u;
    // 0x3cf9f4: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x3CF9F4u;
    {
        const bool branch_taken_0x3cf9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF9F4u;
        // 0x3cf9f8: 0x26305500  addiu       $s0, $s1, 0x5500 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 21760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf9f4) {
            ctx->pc = 0x3CF940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cf940;
        }
    }
    ctx->pc = 0x3CF9FCu;
label_3cf9fc:
    // 0x3cf9fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3cf9fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cfa00:
    // 0x3cfa00: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3cfa00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3cfa04: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x3cfa04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3cfa08: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x3cfa08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cfa0c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3cfa0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cfa10: 0x3e00008  jr          $ra
    ctx->pc = 0x3CFA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CFA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFA10u;
        // 0x3cfa14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CFA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CFA18u;
}
