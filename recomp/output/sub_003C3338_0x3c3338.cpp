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

// Function: sub_003C3338
// Address: 0x3c3338 - 0x3c3440
void sub_003C3338_0x3c3338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C3338_0x3c3338");
#endif

    switch (ctx->pc) {
        case 0x3c3388u: goto label_3c3388;
        case 0x3c3398u: goto label_3c3398;
        case 0x3c33c0u: goto label_3c33c0;
        case 0x3c33f8u: goto label_3c33f8;
        default: break;
    }

    ctx->pc = 0x3c3338u;

    // 0x3c3338: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3c3338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3c333c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c333cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c3340: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3c3340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3c3344: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3c3344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x3c3348: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3c3348u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c334c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x3c334cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x3c3350: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3c3350u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3354: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3c3354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3c3358: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3c3358u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c335c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3c335cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3c3360: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3c3360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3c3364: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3c3364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x3c3368: 0x14e2000d  bne         $a3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3C3368u;
    {
        const bool branch_taken_0x3c3368 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3368u;
        // 0x3c336c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3368) {
            ctx->pc = 0x3C33A0u;
            goto label_3c33a0;
        }
    }
    ctx->pc = 0x3C3370u;
    // 0x3c3370: 0x3c100043  lui         $s0, 0x43
    ctx->pc = 0x3c3370u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)67 << 16));
    // 0x3c3374: 0x3c110066  lui         $s1, 0x66
    ctx->pc = 0x3c3374u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)102 << 16));
    // 0x3c3378: 0x26311030  addiu       $s1, $s1, 0x1030
    ctx->pc = 0x3c3378u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4144));
    // 0x3c337c: 0x8e06d168  lw          $a2, -0x2E98($s0)
    ctx->pc = 0x3c337cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x42D168u));
    // 0x3c3380: 0xc0f27da  jal         func_3C9F68
    ctx->pc = 0x3C3380u;
    SET_GPR_U32(ctx, 31, 0x3C3388u);
    ctx->pc = 0x3C3384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3380u;
    // 0x3c3384: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9F68u, 0x3C3380u, 0x3C3388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3388u;
label_3c3388:
    // 0x3c3388: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3c3388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x3c338c: 0xae00d168  sw          $zero, -0x2E98($s0)
    ctx->pc = 0x3c338cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294955368), GPR_U32(ctx, 0));
    // 0x3c3390: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3C3390u;
    {
        const bool branch_taken_0x3c3390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3390u;
        // 0x3c3394: 0xac71d16c  sw          $s1, -0x2E94($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294955372), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3390) {
            ctx->pc = 0x3C3418u;
            goto label_3c3418;
        }
    }
    ctx->pc = 0x3C3398u;
label_3c3398:
    // 0x3c3398: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3C3398u;
    {
        const bool branch_taken_0x3c3398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C339Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3398u;
        // 0x3c339c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3398) {
            ctx->pc = 0x3C3418u;
            goto label_3c3418;
        }
    }
    ctx->pc = 0x3C33A0u;
label_3c33a0:
    // 0x3c33a0: 0x1260001c  beqz        $s3, . + 4 + (0x1C << 2)
    ctx->pc = 0x3C33A0u;
    {
        const bool branch_taken_0x3c33a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C33A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C33A0u;
        // 0x3c33a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c33a0) {
            ctx->pc = 0x3C3414u;
            goto label_3c3414;
        }
    }
    ctx->pc = 0x3C33A8u;
    // 0x3c33a8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3c33a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3c33ac: 0x3c110043  lui         $s1, 0x43
    ctx->pc = 0x3c33acu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)67 << 16));
    // 0x3c33b0: 0x24551030  addiu       $s5, $v0, 0x1030
    ctx->pc = 0x3c33b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4144));
    // 0x3c33b4: 0x3c120043  lui         $s2, 0x43
    ctx->pc = 0x3c33b4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)67 << 16));
    // 0x3c33b8: 0x2d01821  addu        $v1, $s6, $s0
    ctx->pc = 0x3c33b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x3c33bc: 0x0  nop
    ctx->pc = 0x3c33bcu;
    // NOP
label_3c33c0:
    // 0x3c33c0: 0x8e24d16c  lw          $a0, -0x2E94($s1)
    ctx->pc = 0x3c33c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294955372)));
    // 0x3c33c4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3c33c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c33c8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3c33c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c33cc: 0x8e42d168  lw          $v0, -0x2E98($s2)
    ctx->pc = 0x3c33ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294955368)));
    // 0x3c33d0: 0x8e23d16c  lw          $v1, -0x2E94($s1)
    ctx->pc = 0x3c33d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294955372)));
    // 0x3c33d4: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x3c33d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3c33d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c33d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3c33dc: 0xae46d168  sw          $a2, -0x2E98($s2)
    ctx->pc = 0x3c33dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294955368), GPR_U32(ctx, 6));
    // 0x3c33e0: 0x28c20080  slti        $v0, $a2, 0x80
    ctx->pc = 0x3c33e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x3c33e4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3C33E4u;
    {
        const bool branch_taken_0x3c33e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C33E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C33E4u;
        // 0x3c33e8: 0xae23d16c  sw          $v1, -0x2E94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294955372), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c33e4) {
            ctx->pc = 0x3C3404u;
            goto label_3c3404;
        }
    }
    ctx->pc = 0x3C33ECu;
    // 0x3c33ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c33ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c33f0: 0xc0f27da  jal         func_3C9F68
    ctx->pc = 0x3C33F0u;
    SET_GPR_U32(ctx, 31, 0x3C33F8u);
    ctx->pc = 0x3C33F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C33F0u;
    // 0x3c33f4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9F68u, 0x3C33F0u, 0x3C33F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C33F8u;
label_3c33f8:
    // 0x3c33f8: 0xae35d16c  sw          $s5, -0x2E94($s1)
    ctx->pc = 0x3c33f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294955372), GPR_U32(ctx, 21));
    // 0x3c33fc: 0x1040ffe6  beqz        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3C33FCu;
    {
        const bool branch_taken_0x3c33fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C33FCu;
        // 0x3c3400: 0xae40d168  sw          $zero, -0x2E98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294955368), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c33fc) {
            ctx->pc = 0x3C3398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c3398;
        }
    }
    ctx->pc = 0x3C3404u;
label_3c3404:
    // 0x3c3404: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3c3404u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3c3408: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x3c3408u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3c340c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x3C340Cu;
    {
        const bool branch_taken_0x3c340c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C3410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C340Cu;
        // 0x3c3410: 0x2d01821  addu        $v1, $s6, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c340c) {
            ctx->pc = 0x3C33C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c33c0;
        }
    }
    ctx->pc = 0x3C3414u;
label_3c3414:
    // 0x3c3414: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3c3414u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c3418:
    // 0x3c3418: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3c3418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3c341c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3c341cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3c3420: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3c3420u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c3424: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3c3424u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c3428: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3c3428u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c342c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3c342cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c3430: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x3c3430u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c3434: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c3434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c3438: 0x3e00008  jr          $ra
    ctx->pc = 0x3C3438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C343Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3438u;
        // 0x3c343c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C3438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C3440u;
}
