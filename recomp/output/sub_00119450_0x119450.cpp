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

// Function: sub_00119450
// Address: 0x119450 - 0x119598
void sub_00119450_0x119450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119450_0x119450");
#endif

    switch (ctx->pc) {
        case 0x119488u: goto label_119488;
        case 0x1194acu: goto label_1194ac;
        case 0x1194b4u: goto label_1194b4;
        case 0x119518u: goto label_119518;
        case 0x119528u: goto label_119528;
        case 0x119534u: goto label_119534;
        default: break;
    }

    ctx->pc = 0x119450u;

    // 0x119450: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x119450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x119454: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x119454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x119458: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x119458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11945c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11945cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119460: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x119460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x119464: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x119464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x119468: 0x26420028  addiu       $v0, $s2, 0x28
    ctx->pc = 0x119468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x11946c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x11946cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x119470: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x119470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x119474: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x119474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x119478: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x119478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x11947c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11947cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x119480: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x119480u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x119484: 0x0  nop
    ctx->pc = 0x119484u;
    // NOP
label_119488:
    // 0x119488: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x119488u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x11948c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x11948cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x119490: 0x0  nop
    ctx->pc = 0x119490u;
    // NOP
    // 0x119494: 0x0  nop
    ctx->pc = 0x119494u;
    // NOP
    // 0x119498: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x119498u;
    {
        const bool branch_taken_0x119498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x11949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119498u;
        // 0x11949c: 0x2442000c  addiu       $v0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119498) {
            ctx->pc = 0x119488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119488;
        }
    }
    ctx->pc = 0x1194A0u;
    // 0x1194a0: 0x264401e0  addiu       $a0, $s2, 0x1E0
    ctx->pc = 0x1194a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
    // 0x1194a4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1194A4u;
    SET_GPR_U32(ctx, 31, 0x1194ACu);
    ctx->pc = 0x1194A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1194A4u;
    // 0x1194a8: 0x265001b0  addiu       $s0, $s2, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1194A4u, 0x1194ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1194ACu;
label_1194ac:
    // 0x1194ac: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1194ACu;
    SET_GPR_U32(ctx, 31, 0x1194B4u);
    ctx->pc = 0x1194B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1194ACu;
    // 0x1194b0: 0x264401f0  addiu       $a0, $s2, 0x1F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1194ACu, 0x1194B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1194B4u;
label_1194b4:
    // 0x1194b4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1194b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1194b8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1194b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1194bc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1194bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1194c0: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1194c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x1194c4: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1194c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1194c8: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x1194c8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x1194cc: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x1194ccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x1194d0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1194d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1194d4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1194d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1194d8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1194d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1194dc: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1194dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x1194e0: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1194e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1194e4: 0xfa4101f0  sqc2        $vf1, 0x1F0($s2)
    ctx->pc = 0x1194e4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 496), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1194e8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1194e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1194ec: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1194ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1194f0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1194f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1194f4: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1194f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x1194f8: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1194f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1194fc: 0xfa4101e0  sqc2        $vf1, 0x1E0($s2)
    ctx->pc = 0x1194fcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 480), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x119500: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x119500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x119504: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x119504u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x119508: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x119508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x11950c: 0x26440210  addiu       $a0, $s2, 0x210
    ctx->pc = 0x11950cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 528));
    // 0x119510: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x119510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x119514: 0x0  nop
    ctx->pc = 0x119514u;
    // NOP
label_119518:
    // 0x119518: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x119518u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11951c: 0x2454ffff  addiu       $s4, $v0, -0x1
    ctx->pc = 0x11951cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x119520: 0x26130800  addiu       $s3, $s0, 0x800
    ctx->pc = 0x119520u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 2048));
    // 0x119524: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x119524u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_119528:
    // 0x119528: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x119528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x11952c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x11952Cu;
    SET_GPR_U32(ctx, 31, 0x119534u);
    ctx->pc = 0x119530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11952Cu;
    // 0x119530: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x11952Cu, 0x119534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119534u;
label_119534:
    // 0x119534: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x119534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x119538: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x119538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x11953c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x11953cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x119540: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x119540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x119544: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x119544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x119548: 0x1635fff7  bne         $s1, $s5, . + 4 + (-0x9 << 2)
    ctx->pc = 0x119548u;
    {
        const bool branch_taken_0x119548 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        ctx->pc = 0x11954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119548u;
        // 0x11954c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119548) {
            ctx->pc = 0x119528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119528;
        }
    }
    ctx->pc = 0x119550u;
    // 0x119550: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x119550u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119554: 0x1455fff0  bne         $v0, $s5, . + 4 + (-0x10 << 2)
    ctx->pc = 0x119554u;
    {
        const bool branch_taken_0x119554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x119558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119554u;
        // 0x119558: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119554) {
            ctx->pc = 0x119518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119518;
        }
    }
    ctx->pc = 0x11955Cu;
    // 0x11955c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x11955cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119560: 0xae401218  sw          $zero, 0x1218($s2)
    ctx->pc = 0x119560u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4632), GPR_U32(ctx, 0));
    // 0x119564: 0xae401230  sw          $zero, 0x1230($s2)
    ctx->pc = 0x119564u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4656), GPR_U32(ctx, 0));
    // 0x119568: 0xae401238  sw          $zero, 0x1238($s2)
    ctx->pc = 0x119568u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4664), GPR_U32(ctx, 0));
    // 0x11956c: 0xae40123c  sw          $zero, 0x123C($s2)
    ctx->pc = 0x11956cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4668), GPR_U32(ctx, 0));
    // 0x119570: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x119570u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x119574: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x119574u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119578: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x119578u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11957c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11957cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119580: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x119580u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x119584: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x119584u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119588: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x119588u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x11958c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11958cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x119590: 0x3e00008  jr          $ra
    ctx->pc = 0x119590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119590u;
        // 0x119594: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119598u;
}
