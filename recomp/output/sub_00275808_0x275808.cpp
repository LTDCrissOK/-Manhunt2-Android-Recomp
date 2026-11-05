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

// Function: sub_00275808
// Address: 0x275808 - 0x2758d8
void sub_00275808_0x275808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275808_0x275808");
#endif

    switch (ctx->pc) {
        case 0x27583cu: goto label_27583c;
        case 0x275864u: goto label_275864;
        case 0x275880u: goto label_275880;
        case 0x2758a4u: goto label_2758a4;
        case 0x2758b0u: goto label_2758b0;
        default: break;
    }

    ctx->pc = 0x275808u;

    // 0x275808: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x275808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27580c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27580cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x275810: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x275810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x275814: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x275814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275818: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x275818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x27581c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27581cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275820: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x275820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x275824: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x275824u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275828: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x275828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x27582c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x27582cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275830: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x275830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x275834: 0xc09da86  jal         func_276A18
    ctx->pc = 0x275834u;
    SET_GPR_U32(ctx, 31, 0x27583Cu);
    ctx->pc = 0x275838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275834u;
    // 0x275838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276A18u, 0x275834u, 0x27583Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27583Cu;
label_27583c:
    // 0x27583c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27583cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275840: 0x1240001c  beqz        $s2, . + 4 + (0x1C << 2)
    ctx->pc = 0x275840u;
    {
        const bool branch_taken_0x275840 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x275844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275840u;
        // 0x275844: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275840) {
            ctx->pc = 0x2758B4u;
            goto label_2758b4;
        }
    }
    ctx->pc = 0x275848u;
    // 0x275848: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x275848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27584c: 0xae201e7c  sw          $zero, 0x1E7C($s1)
    ctx->pc = 0x27584cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7804), GPR_U32(ctx, 0));
    // 0x275850: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x275850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275854: 0xae221e78  sw          $v0, 0x1E78($s1)
    ctx->pc = 0x275854u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7800), GPR_U32(ctx, 2));
    // 0x275858: 0x26241e88  addiu       $a0, $s1, 0x1E88
    ctx->pc = 0x275858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 7816));
    // 0x27585c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x27585Cu;
    SET_GPR_U32(ctx, 31, 0x275864u);
    ctx->pc = 0x275860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27585Cu;
    // 0x275860: 0x26301ea0  addiu       $s0, $s1, 0x1EA0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 7840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x27585Cu, 0x275864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275864u;
label_275864:
    // 0x275864: 0xa2331e94  sb          $s3, 0x1E94($s1)
    ctx->pc = 0x275864u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7828), (uint8_t)GPR_U32(ctx, 19));
    // 0x275868: 0xae201e90  sw          $zero, 0x1E90($s1)
    ctx->pc = 0x275868u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7824), GPR_U32(ctx, 0));
    // 0x27586c: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x27586cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x275870: 0xfa211ea0  sqc2        $vf1, 0x1EA0($s1)
    ctx->pc = 0x275870u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 7840), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x275874: 0x8e251e90  lw          $a1, 0x1E90($s1)
    ctx->pc = 0x275874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7824)));
    // 0x275878: 0xc09d7da  jal         func_275F68
    ctx->pc = 0x275878u;
    SET_GPR_U32(ctx, 31, 0x275880u);
    ctx->pc = 0x27587Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275878u;
    // 0x27587c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275F68u, 0x275878u, 0x275880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275880u;
label_275880:
    // 0x275880: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x275880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x275884: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x275884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275888: 0x8e271e90  lw          $a3, 0x1E90($s1)
    ctx->pc = 0x275888u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7824)));
    // 0x27588c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27588cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275890: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x275890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x275894: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x275894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275898: 0xe33826  xor         $a3, $a3, $v1
    ctx->pc = 0x275898u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 3));
    // 0x27589c: 0xc09d5d0  jal         func_275740
    ctx->pc = 0x27589Cu;
    SET_GPR_U32(ctx, 31, 0x2758A4u);
    ctx->pc = 0x2758A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27589Cu;
    // 0x2758a0: 0x2ce70001  sltiu       $a3, $a3, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x275740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275740u, 0x27589Cu, 0x2758A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2758A4u;
label_2758a4:
    // 0x2758a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2758a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2758a8: 0xc09d4fc  jal         func_2753F0
    ctx->pc = 0x2758A8u;
    SET_GPR_U32(ctx, 31, 0x2758B0u);
    ctx->pc = 0x2758ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2758A8u;
    // 0x2758ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2753F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2753F0u, 0x2758A8u, 0x2758B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2758B0u;
label_2758b0:
    // 0x2758b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2758b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2758b4:
    // 0x2758b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2758b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2758b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2758b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2758bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2758bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2758c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2758c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2758c4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2758c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2758c8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2758c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2758cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2758CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2758D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2758CCu;
        // 0x2758d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2758CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2758D4u;
    // 0x2758d4: 0x0  nop
    ctx->pc = 0x2758d4u;
    // NOP
    ctx->pc = 0x2758d8u;
}
