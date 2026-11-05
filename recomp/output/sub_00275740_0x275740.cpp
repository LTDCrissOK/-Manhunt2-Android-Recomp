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

// Function: sub_00275740
// Address: 0x275740 - 0x2757e0
void sub_00275740_0x275740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275740_0x275740");
#endif

    switch (ctx->pc) {
        case 0x275770u: goto label_275770;
        case 0x2757bcu: goto label_2757bc;
        default: break;
    }

    ctx->pc = 0x275740u;

    // 0x275740: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x275740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x275744: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x275744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x275748: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x275748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x27574c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27574cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275750: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x275750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x275754: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x275754u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275758: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x275758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x27575c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x27575cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275760: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x275760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x275764: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x275764u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275768: 0xc09d9b8  jal         func_2766E0
    ctx->pc = 0x275768u;
    SET_GPR_U32(ctx, 31, 0x275770u);
    ctx->pc = 0x27576Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275768u;
    // 0x27576c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2766E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2766E0u, 0x275768u, 0x275770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275770u;
label_275770:
    // 0x275770: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x275770u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275774: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x275774u;
    {
        const bool branch_taken_0x275774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x275778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275774u;
        // 0x275778: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275774) {
            ctx->pc = 0x2757C0u;
            goto label_2757c0;
        }
    }
    ctx->pc = 0x27577Cu;
    // 0x27577c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x27577cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x275780: 0xfa010300  sqc2        $vf1, 0x300($s0)
    ctx->pc = 0x275780u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 768), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x275784: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x275784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275788: 0xa2110373  sb          $s1, 0x373($s0)
    ctx->pc = 0x275788u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 883), (uint8_t)GPR_U32(ctx, 17));
    // 0x27578c: 0xa2020370  sb          $v0, 0x370($s0)
    ctx->pc = 0x27578cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 880), (uint8_t)GPR_U32(ctx, 2));
    // 0x275790: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x275790u;
    {
        const bool branch_taken_0x275790 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x275794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275790u;
        // 0x275794: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275790) {
            ctx->pc = 0x2757A8u;
            goto label_2757a8;
        }
    }
    ctx->pc = 0x275798u;
    // 0x275798: 0x90620010  lbu         $v0, 0x10($v1)
    ctx->pc = 0x275798u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x27579c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27579cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2757a0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2757A0u;
    {
        const bool branch_taken_0x2757a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2757a0) {
            ctx->pc = 0x2757A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2757A0u;
            // 0x2757a4: 0xa2040374  sb          $a0, 0x374($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 884), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2757B0u;
            goto label_2757b0;
        }
    }
    ctx->pc = 0x2757A8u;
label_2757a8:
    // 0x2757a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2757a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2757ac: 0xa2040374  sb          $a0, 0x374($s0)
    ctx->pc = 0x2757acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 884), (uint8_t)GPR_U32(ctx, 4));
label_2757b0:
    // 0x2757b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2757b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2757b4: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x2757B4u;
    SET_GPR_U32(ctx, 31, 0x2757BCu);
    ctx->pc = 0x2757B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2757B4u;
    // 0x2757b8: 0x26041e80  addiu       $a0, $s0, 0x1E80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 7808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x2757B4u, 0x2757BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2757BCu;
label_2757bc:
    // 0x2757bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2757bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2757c0:
    // 0x2757c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2757c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2757c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2757c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2757c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2757c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2757cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2757ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2757d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2757d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2757d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2757D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2757D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2757D4u;
        // 0x2757d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2757D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2757DCu;
    // 0x2757dc: 0x0  nop
    ctx->pc = 0x2757dcu;
    // NOP
    ctx->pc = 0x2757e0u;
}
