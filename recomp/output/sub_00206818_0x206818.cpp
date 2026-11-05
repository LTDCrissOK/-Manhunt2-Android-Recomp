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

// Function: sub_00206818
// Address: 0x206818 - 0x2068f0
void sub_00206818_0x206818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206818_0x206818");
#endif

    switch (ctx->pc) {
        case 0x206864u: goto label_206864;
        case 0x206880u: goto label_206880;
        default: break;
    }

    ctx->pc = 0x206818u;

    // 0x206818: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x206818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20681c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20681cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x206820: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x206820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x206824: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x206824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206828: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x206828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20682c: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x20682cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206830: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x206830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x206834: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x206834u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206838: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x206838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x20683c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x20683cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206840: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x206840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x206844: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x206844u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206848: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x206848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x20684c: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x20684cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206850: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x206850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x206854: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x206854u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206858: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x206858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x20685c: 0xc0819e8  jal         func_2067A0
    ctx->pc = 0x20685Cu;
    SET_GPR_U32(ctx, 31, 0x206864u);
    ctx->pc = 0x206860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20685Cu;
    // 0x206860: 0xe0b82d  daddu       $s7, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2067A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2067A0u, 0x20685Cu, 0x206864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206864u;
label_206864:
    // 0x206864: 0x9202000d  lbu         $v0, 0xD($s0)
    ctx->pc = 0x206864u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x206868: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x206868u;
    {
        const bool branch_taken_0x206868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20686Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206868u;
        // 0x20686c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206868) {
            ctx->pc = 0x2068A0u;
            goto label_2068a0;
        }
    }
    ctx->pc = 0x206870u;
    // 0x206870: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x206870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206874: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x206874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206878: 0xc0818b6  jal         func_2062D8
    ctx->pc = 0x206878u;
    SET_GPR_U32(ctx, 31, 0x206880u);
    ctx->pc = 0x20687Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206878u;
    // 0x20687c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2062D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2062D8u, 0x206878u, 0x206880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206880u;
label_206880:
    // 0x206880: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x206880u;
    {
        const bool branch_taken_0x206880 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x206884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206880u;
        // 0x206884: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206880) {
            ctx->pc = 0x2068A0u;
            goto label_2068a0;
        }
    }
    ctx->pc = 0x206888u;
    // 0x206888: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x206888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x20688c: 0x90430021  lbu         $v1, 0x21($v0)
    ctx->pc = 0x20688cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 33)));
    // 0x206890: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x206890u;
    {
        const bool branch_taken_0x206890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x206894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206890u;
        // 0x206894: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206890) {
            ctx->pc = 0x20689Cu;
            goto label_20689c;
        }
    }
    ctx->pc = 0x206898u;
    // 0x206898: 0xa04093c0  sb          $zero, -0x6C40($v0)
    ctx->pc = 0x206898u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294939584), (uint8_t)GPR_U32(ctx, 0));
label_20689c:
    // 0x20689c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20689cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2068a0:
    // 0x2068a0: 0xae160010  sw          $s6, 0x10($s0)
    ctx->pc = 0x2068a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 22));
    // 0x2068a4: 0xae150014  sw          $s5, 0x14($s0)
    ctx->pc = 0x2068a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 21));
    // 0x2068a8: 0xae170018  sw          $s7, 0x18($s0)
    ctx->pc = 0x2068a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 23));
    // 0x2068ac: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x2068ACu;
    {
        const bool branch_taken_0x2068ac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2068B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2068ACu;
        // 0x2068b0: 0xa202000f  sb          $v0, 0xF($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2068ac) {
            ctx->pc = 0x2068C0u;
            goto label_2068c0;
        }
    }
    ctx->pc = 0x2068B4u;
    // 0x2068b4: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x2068b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2068b8: 0xfa010020  sqc2        $vf1, 0x20($s0)
    ctx->pc = 0x2068b8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2068bc: 0xa2020030  sb          $v0, 0x30($s0)
    ctx->pc = 0x2068bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 2));
label_2068c0:
    // 0x2068c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2068c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2068c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2068c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2068c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2068c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2068cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2068ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2068d0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2068d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2068d4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2068d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2068d8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2068d8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2068dc: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2068dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2068e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2068e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2068e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2068E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2068E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2068E4u;
        // 0x2068e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2068E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2068ECu;
    // 0x2068ec: 0x0  nop
    ctx->pc = 0x2068ecu;
    // NOP
    ctx->pc = 0x2068f0u;
}
