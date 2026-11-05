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

// Function: sub_003A28E8
// Address: 0x3a28e8 - 0x3a29d8
void sub_003A28E8_0x3a28e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A28E8_0x3a28e8");
#endif

    switch (ctx->pc) {
        case 0x3a292cu: goto label_3a292c;
        case 0x3a2934u: goto label_3a2934;
        case 0x3a2940u: goto label_3a2940;
        case 0x3a2954u: goto label_3a2954;
        case 0x3a29a8u: goto label_3a29a8;
        default: break;
    }

    ctx->pc = 0x3a28e8u;

    // 0x3a28e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3a28e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3a28ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a28ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a28f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a28f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a28f4: 0x24041200  addiu       $a0, $zero, 0x1200
    ctx->pc = 0x3a28f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4608));
    // 0x3a28f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a28f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a28fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a28fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a2900: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x3a2900u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2904: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3a2904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3a2908: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3a2908u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a290c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3a290cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3a2910: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3a2910u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2914: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3a2914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3a2918: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x3a2918u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a291c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3a291cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3a2920: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3a2920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3a2924: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A2924u;
    SET_GPR_U32(ctx, 31, 0x3A292Cu);
    ctx->pc = 0x3A2928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2924u;
    // 0x3a2928: 0xe0b02d  daddu       $s6, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A2924u, 0x3A292Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A292Cu;
label_3a292c:
    // 0x3a292c: 0xc0ee156  jal         func_3B8558
    ctx->pc = 0x3A292Cu;
    SET_GPR_U32(ctx, 31, 0x3A2934u);
    ctx->pc = 0x3A2930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A292Cu;
    // 0x3a2930: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8558u, 0x3A292Cu, 0x3A2934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2934u;
label_3a2934:
    // 0x3a2934: 0x24041201  addiu       $a0, $zero, 0x1201
    ctx->pc = 0x3a2934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4609));
    // 0x3a2938: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A2938u;
    SET_GPR_U32(ctx, 31, 0x3A2940u);
    ctx->pc = 0x3A293Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2938u;
    // 0x3a293c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A2938u, 0x3A2940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2940u;
label_3a2940:
    // 0x3a2940: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a2940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a2944: 0x12030019  beq         $s0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x3A2944u;
    {
        const bool branch_taken_0x3a2944 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A2948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2944u;
        // 0x3a2948: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2944) {
            ctx->pc = 0x3A29ACu;
            goto label_3a29ac;
        }
    }
    ctx->pc = 0x3A294Cu;
    // 0x3a294c: 0xc0eb27a  jal         func_3AC9E8
    ctx->pc = 0x3A294Cu;
    SET_GPR_U32(ctx, 31, 0x3A2954u);
    ctx->pc = 0x3AC9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC9E8u, 0x3A294Cu, 0x3A2954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2954u;
label_3a2954:
    // 0x3a2954: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3a2954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a2958: 0x82230002  lb          $v1, 0x2($s1)
    ctx->pc = 0x3a2958u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3a295c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A295Cu;
    {
        const bool branch_taken_0x3a295c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A295Cu;
        // 0x3a2960: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a295c) {
            ctx->pc = 0x3A2974u;
            goto label_3a2974;
        }
    }
    ctx->pc = 0x3A2964u;
    // 0x3a2964: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A2964u;
    {
        const bool branch_taken_0x3a2964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A2968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2964u;
        // 0x3a2968: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2964) {
            ctx->pc = 0x3A2974u;
            goto label_3a2974;
        }
    }
    ctx->pc = 0x3A296Cu;
    // 0x3a296c: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3A296Cu;
    {
        const bool branch_taken_0x3a296c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a296c) {
            ctx->pc = 0x3A29A0u;
            goto label_3a29a0;
        }
    }
    ctx->pc = 0x3A2974u;
label_3a2974:
    // 0x3a2974: 0xa2240002  sb          $a0, 0x2($s1)
    ctx->pc = 0x3a2974u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x3a2978: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x3a2978u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a297c: 0xa2240001  sb          $a0, 0x1($s1)
    ctx->pc = 0x3a297cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3a2980: 0xae330008  sw          $s3, 0x8($s1)
    ctx->pc = 0x3a2980u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 19));
    // 0x3a2984: 0x8a420003  lwl         $v0, 0x3($s2)
    ctx->pc = 0x3a2984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x3a2988: 0x9a420000  lwr         $v0, 0x0($s2)
    ctx->pc = 0x3a2988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x3a298c: 0xaa220017  swl         $v0, 0x17($s1)
    ctx->pc = 0x3a298cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3a2990: 0xba220014  swr         $v0, 0x14($s1)
    ctx->pc = 0x3a2990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3a2994: 0xae35000c  sw          $s5, 0xC($s1)
    ctx->pc = 0x3a2994u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 21));
    // 0x3a2998: 0xae360010  sw          $s6, 0x10($s1)
    ctx->pc = 0x3a2998u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 22));
    // 0x3a299c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3a299cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_3a29a0:
    // 0x3a29a0: 0xc0eb286  jal         func_3ACA18
    ctx->pc = 0x3A29A0u;
    SET_GPR_U32(ctx, 31, 0x3A29A8u);
    ctx->pc = 0x3ACA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACA18u, 0x3A29A0u, 0x3A29A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A29A8u;
label_3a29a8:
    // 0x3a29a8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3a29a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a29ac:
    // 0x3a29ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a29acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a29b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a29b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a29b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a29b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a29b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3a29b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a29bc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3a29bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a29c0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3a29c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3a29c4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3a29c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a29c8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3a29c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3a29cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3A29CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A29D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A29CCu;
        // 0x3a29d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A29CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A29D4u;
    // 0x3a29d4: 0x0  nop
    ctx->pc = 0x3a29d4u;
    // NOP
    ctx->pc = 0x3a29d8u;
}
