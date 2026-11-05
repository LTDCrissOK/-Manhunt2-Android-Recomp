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

// Function: sub_003A3290
// Address: 0x3a3290 - 0x3a33a8
void sub_003A3290_0x3a3290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3290_0x3a3290");
#endif

    switch (ctx->pc) {
        case 0x3a32bcu: goto label_3a32bc;
        case 0x3a32ecu: goto label_3a32ec;
        case 0x3a32f4u: goto label_3a32f4;
        case 0x3a3308u: goto label_3a3308;
        case 0x3a3340u: goto label_3a3340;
        case 0x3a3348u: goto label_3a3348;
        case 0x3a335cu: goto label_3a335c;
        case 0x3a3378u: goto label_3a3378;
        default: break;
    }

    ctx->pc = 0x3a3290u;

    // 0x3a3290: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a3290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a3294: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a3294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a3298: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3a3298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3a329c: 0x3c130041  lui         $s3, 0x41
    ctx->pc = 0x3a329cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65 << 16));
    // 0x3a32a0: 0x26641e04  addiu       $a0, $s3, 0x1E04
    ctx->pc = 0x3a32a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 7684));
    // 0x3a32a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a32a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a32a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a32a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a32ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a32acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a32b0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a32b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a32b4: 0xc0eb4a0  jal         func_3AD280
    ctx->pc = 0x3A32B4u;
    SET_GPR_U32(ctx, 31, 0x3A32BCu);
    ctx->pc = 0x3A32B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A32B4u;
    // 0x3a32b8: 0x24511dc8  addiu       $s1, $v0, 0x1DC8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 7624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD280u, 0x3A32B4u, 0x3A32BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A32BCu;
label_3a32bc:
    // 0x3a32bc: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x3A32BCu;
    {
        const bool branch_taken_0x3a32bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A32C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A32BCu;
        // 0x3a32c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a32bc) {
            ctx->pc = 0x3A337Cu;
            goto label_3a337c;
        }
    }
    ctx->pc = 0x3A32C4u;
    // 0x3a32c4: 0x82300001  lb          $s0, 0x1($s1)
    ctx->pc = 0x3a32c4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x3a32c8: 0x16020010  bne         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3A32C8u;
    {
        const bool branch_taken_0x3a32c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A32CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A32C8u;
        // 0x3a32cc: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a32c8) {
            ctx->pc = 0x3A330Cu;
            goto label_3a330c;
        }
    }
    ctx->pc = 0x3A32D0u;
    // 0x3a32d0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a32d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a32d4: 0x24521e08  addiu       $s2, $v0, 0x1E08
    ctx->pc = 0x3a32d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 7688));
    // 0x3a32d8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3a32d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x411E08u));
    // 0x3a32dc: 0x14700003  bne         $v1, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A32DCu;
    {
        const bool branch_taken_0x3a32dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x3a32dc) {
            ctx->pc = 0x3A32ECu;
            goto label_3a32ec;
        }
    }
    ctx->pc = 0x3A32E4u;
    // 0x3a32e4: 0xc0eb280  jal         func_3ACA00
    ctx->pc = 0x3A32E4u;
    SET_GPR_U32(ctx, 31, 0x3A32ECu);
    ctx->pc = 0x3ACA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACA00u, 0x3A32E4u, 0x3A32ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A32ECu;
label_3a32ec:
    // 0x3a32ec: 0xc0e8bb4  jal         func_3A2ED0
    ctx->pc = 0x3A32ECu;
    SET_GPR_U32(ctx, 31, 0x3A32F4u);
    ctx->pc = 0x3A32F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A32ECu;
    // 0x3a32f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2ED0u, 0x3A32ECu, 0x3A32F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A32F4u;
label_3a32f4:
    // 0x3a32f4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3a32f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3a32f8: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A32F8u;
    {
        const bool branch_taken_0x3a32f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x3a32f8) {
            ctx->pc = 0x3A32FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A32F8u;
            // 0x3a32fc: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A330Cu;
            goto label_3a330c;
        }
    }
    ctx->pc = 0x3A3300u;
    // 0x3a3300: 0xc0eb28c  jal         func_3ACA30
    ctx->pc = 0x3A3300u;
    SET_GPR_U32(ctx, 31, 0x3A3308u);
    ctx->pc = 0x3ACA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACA30u, 0x3A3300u, 0x3A3308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3308u;
label_3a3308:
    // 0x3a3308: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x3a3308u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_3a330c:
    // 0x3a330c: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x3a330cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x3a3310: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a3310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a3314: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x3a3314u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x3a3318: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3A3318u;
    {
        const bool branch_taken_0x3a3318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A331Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3318u;
        // 0x3a331c: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3318) {
            ctx->pc = 0x3A3360u;
            goto label_3a3360;
        }
    }
    ctx->pc = 0x3A3320u;
    // 0x3a3320: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x3a3320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x3a3324: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3a3324u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a3328: 0x24701e0c  addiu       $s0, $v1, 0x1E0C
    ctx->pc = 0x3a3328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 7692));
    // 0x3a332c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3a332cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x411E0Cu));
    // 0x3a3330: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A3330u;
    {
        const bool branch_taken_0x3a3330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x3a3330) {
            ctx->pc = 0x3A3340u;
            goto label_3a3340;
        }
    }
    ctx->pc = 0x3A3338u;
    // 0x3a3338: 0xc0eb280  jal         func_3ACA00
    ctx->pc = 0x3A3338u;
    SET_GPR_U32(ctx, 31, 0x3A3340u);
    ctx->pc = 0x3ACA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACA00u, 0x3A3338u, 0x3A3340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3340u;
label_3a3340:
    // 0x3a3340: 0xc0e8c2e  jal         func_3A30B8
    ctx->pc = 0x3A3340u;
    SET_GPR_U32(ctx, 31, 0x3A3348u);
    ctx->pc = 0x3A3344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3340u;
    // 0x3a3344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A30B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A30B8u, 0x3A3340u, 0x3A3348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3348u;
label_3a3348:
    // 0x3a3348: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3a3348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a334c: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A334Cu;
    {
        const bool branch_taken_0x3a334c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x3a334c) {
            ctx->pc = 0x3A3350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A334Cu;
            // 0x3a3350: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A3360u;
            goto label_3a3360;
        }
    }
    ctx->pc = 0x3A3354u;
    // 0x3a3354: 0xc0eb28c  jal         func_3ACA30
    ctx->pc = 0x3A3354u;
    SET_GPR_U32(ctx, 31, 0x3A335Cu);
    ctx->pc = 0x3ACA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACA30u, 0x3A3354u, 0x3A335Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A335Cu;
label_3a335c:
    // 0x3a335c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a335cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_3a3360:
    // 0x3a3360: 0x24421e40  addiu       $v0, $v0, 0x1E40
    ctx->pc = 0x3a3360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7744));
    // 0x3a3364: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3a3364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a3368: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A3368u;
    {
        const bool branch_taken_0x3a3368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a3368) {
            ctx->pc = 0x3A336Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A3368u;
            // 0x3a336c: 0xae601e04  sw          $zero, 0x1E04($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 7684), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A337Cu;
            goto label_3a337c;
        }
    }
    ctx->pc = 0x3A3370u;
    // 0x3a3370: 0xc0e8aee  jal         func_3A2BB8
    ctx->pc = 0x3A3370u;
    SET_GPR_U32(ctx, 31, 0x3A3378u);
    ctx->pc = 0x3A2BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2BB8u, 0x3A3370u, 0x3A3378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3378u;
label_3a3378:
    // 0x3a3378: 0xae601e04  sw          $zero, 0x1E04($s3)
    ctx->pc = 0x3a3378u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 7684), GPR_U32(ctx, 0));
label_3a337c:
    // 0x3a337c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a337cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a3380: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a3380u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a3384: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a3384u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a3388: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3a3388u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a338c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a338cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a3390: 0x3e00008  jr          $ra
    ctx->pc = 0x3A3390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3390u;
        // 0x3a3394: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3398u;
    // 0x3a3398: 0x80620001  lb          $v0, 0x1($v1)
    ctx->pc = 0x3a3398u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x3a339c: 0x0  nop
    ctx->pc = 0x3a339cu;
    // NOP
    // 0x3a33a0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x3a33a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x3a33a4: 0x0  nop
    ctx->pc = 0x3a33a4u;
    // NOP
    ctx->pc = 0x3a33a8u;
}
