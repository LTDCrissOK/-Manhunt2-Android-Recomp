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

// Function: sub_00126740
// Address: 0x126740 - 0x126848
void sub_00126740_0x126740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126740_0x126740");
#endif

    switch (ctx->pc) {
        case 0x1267c0u: goto label_1267c0;
        case 0x1267fcu: goto label_1267fc;
        default: break;
    }

    ctx->pc = 0x126740u;

    // 0x126740: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x126740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x126744: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x126744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x126748: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x126748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12674c: 0x8ca3a9d4  lw          $v1, -0x562C($a1)
    ctx->pc = 0x12674cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FA9D4u));
    // 0x126750: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x126750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126754: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x126754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x126758: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x126758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12675c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12675cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x126760: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x126760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x126764: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x126764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x126768: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x126768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x12676c: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x12676Cu;
    {
        const bool branch_taken_0x12676c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x126770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12676Cu;
        // 0x126770: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12676c) {
            ctx->pc = 0x12681Cu;
            goto label_12681c;
        }
    }
    ctx->pc = 0x126774u;
    // 0x126774: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x126774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x126778: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x126778u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x12677c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12677Cu;
    {
        const bool branch_taken_0x12677c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12677c) {
            ctx->pc = 0x126780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12677Cu;
            // 0x126780: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x126784u;
            goto label_126784;
        }
    }
    ctx->pc = 0x126784u;
label_126784:
    // 0x126784: 0x1810  mfhi        $v1
    ctx->pc = 0x126784u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x126788: 0x54600025  bnel        $v1, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x126788u;
    {
        const bool branch_taken_0x126788 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x126788) {
            ctx->pc = 0x12678Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126788u;
            // 0x12678c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126820u;
            goto label_126820;
        }
    }
    ctx->pc = 0x126790u;
    // 0x126790: 0x92020300  lbu         $v0, 0x300($s0)
    ctx->pc = 0x126790u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 768)));
    // 0x126794: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x126794u;
    {
        const bool branch_taken_0x126794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x126798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126794u;
        // 0x126798: 0x90a2a9d4  lbu         $v0, -0x562C($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294945236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126794) {
            ctx->pc = 0x12681Cu;
            goto label_12681c;
        }
    }
    ctx->pc = 0x12679Cu;
    // 0x12679c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12679cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1267a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1267a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1267a4: 0x2416000c  addiu       $s6, $zero, 0xC
    ctx->pc = 0x1267a4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1267a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1267a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1267ac: 0x26150240  addiu       $s5, $s0, 0x240
    ctx->pc = 0x1267acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
    // 0x1267b0: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x1267b0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1267b4: 0x26130248  addiu       $s3, $s0, 0x248
    ctx->pc = 0x1267b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 584));
    // 0x1267b8: 0x92020300  lbu         $v0, 0x300($s0)
    ctx->pc = 0x1267b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 768)));
    // 0x1267bc: 0x0  nop
    ctx->pc = 0x1267bcu;
    // NOP
label_1267c0:
    // 0x1267c0: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1267c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1267c4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1267C4u;
    {
        const bool branch_taken_0x1267c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1267C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1267C4u;
        // 0x1267c8: 0x2362018  mult        $a0, $s1, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1267c4) {
            ctx->pc = 0x12681Cu;
            goto label_12681c;
        }
    }
    ctx->pc = 0x1267CCu;
    // 0x1267cc: 0x2a41021  addu        $v0, $s5, $a0
    ctx->pc = 0x1267ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x1267d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1267d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1267d4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1267D4u;
    {
        const bool branch_taken_0x1267d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1267D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1267D4u;
        // 0x1267d8: 0x2641021  addu        $v0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1267d4) {
            ctx->pc = 0x126808u;
            goto label_126808;
        }
    }
    ctx->pc = 0x1267DCu;
    // 0x1267dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1267dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1267e0: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x1267e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1267e4: 0x74182b  sltu        $v1, $v1, $s4
    ctx->pc = 0x1267e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1267e8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1267E8u;
    {
        const bool branch_taken_0x1267e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1267ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1267E8u;
        // 0x1267ec: 0x309200ff  andi        $s2, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1267e8) {
            ctx->pc = 0x126808u;
            goto label_126808;
        }
    }
    ctx->pc = 0x1267F0u;
    // 0x1267f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1267f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1267f4: 0xc0499c6  jal         func_126718
    ctx->pc = 0x1267F4u;
    SET_GPR_U32(ctx, 31, 0x1267FCu);
    ctx->pc = 0x1267F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1267F4u;
    // 0x1267f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126718u, 0x1267F4u, 0x1267FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1267FCu;
label_1267fc:
    // 0x1267fc: 0x92020300  lbu         $v0, 0x300($s0)
    ctx->pc = 0x1267fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 768)));
    // 0x126800: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x126800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x126804: 0xa2020300  sb          $v0, 0x300($s0)
    ctx->pc = 0x126804u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 768), (uint8_t)GPR_U32(ctx, 2));
label_126808:
    // 0x126808: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x126808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x12680c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x12680cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x126810: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x126810u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x126814: 0x5460ffea  bnel        $v1, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x126814u;
    {
        const bool branch_taken_0x126814 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x126814) {
            ctx->pc = 0x126818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126814u;
            // 0x126818: 0x92020300  lbu         $v0, 0x300($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 768)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1267C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1267c0;
        }
    }
    ctx->pc = 0x12681Cu;
label_12681c:
    // 0x12681c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12681cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_126820:
    // 0x126820: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x126820u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x126824: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x126824u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126828: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x126828u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12682c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x12682cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x126830: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x126830u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x126834: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x126834u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x126838: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x126838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12683c: 0x3e00008  jr          $ra
    ctx->pc = 0x12683Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12683Cu;
        // 0x126840: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12683Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126844u;
    // 0x126844: 0x0  nop
    ctx->pc = 0x126844u;
    // NOP
    ctx->pc = 0x126848u;
}
