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

// Function: sub_001152A0
// Address: 0x1152a0 - 0x115370
void sub_001152A0_0x1152a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001152A0_0x1152a0");
#endif

    switch (ctx->pc) {
        case 0x1152ecu: goto label_1152ec;
        case 0x1152f8u: goto label_1152f8;
        case 0x115308u: goto label_115308;
        default: break;
    }

    ctx->pc = 0x1152a0u;

    // 0x1152a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1152a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1152a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1152a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1152a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1152a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1152ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1152acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1152b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1152b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1152b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1152b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1152b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1152b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1152bc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1152bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1152c0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1152C0u;
    {
        const bool branch_taken_0x1152c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1152C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1152C0u;
        // 0x1152c4: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1152c0) {
            ctx->pc = 0x1152D0u;
            goto label_1152d0;
        }
    }
    ctx->pc = 0x1152C8u;
    // 0x1152c8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1152C8u;
    {
        const bool branch_taken_0x1152c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1152CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1152C8u;
        // 0x1152cc: 0xae4002a8  sw          $zero, 0x2A8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 680), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1152c8) {
            ctx->pc = 0x11534Cu;
            goto label_11534c;
        }
    }
    ctx->pc = 0x1152D0u;
label_1152d0:
    // 0x1152d0: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1152d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x1152d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1152d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1152d8: 0x24513d20  addiu       $s1, $v0, 0x3D20
    ctx->pc = 0x1152d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 15648));
    // 0x1152dc: 0x3c140049  lui         $s4, 0x49
    ctx->pc = 0x1152dcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)73 << 16));
    // 0x1152e0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1152e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4B3D24u));
    // 0x1152e4: 0xc043920  jal         func_10E480
    ctx->pc = 0x1152E4u;
    SET_GPR_U32(ctx, 31, 0x1152ECu);
    ctx->pc = 0x1152E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1152E4u;
    // 0x1152e8: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E480u, 0x1152E4u, 0x1152ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1152ECu;
label_1152ec:
    // 0x1152ec: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1152ECu;
    {
        const bool branch_taken_0x1152ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1152F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1152ECu;
        // 0x1152f0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1152ec) {
            ctx->pc = 0x11531Cu;
            goto label_11531c;
        }
    }
    ctx->pc = 0x1152F4u;
    // 0x1152f4: 0x0  nop
    ctx->pc = 0x1152f4u;
    // NOP
label_1152f8:
    // 0x1152f8: 0x50b30009  beql        $a1, $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1152F8u;
    {
        const bool branch_taken_0x1152f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 19));
        if (branch_taken_0x1152f8) {
            ctx->pc = 0x1152FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1152F8u;
            // 0x1152fc: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115320u;
            goto label_115320;
        }
    }
    ctx->pc = 0x115300u;
    // 0x115300: 0xc04785a  jal         func_11E168
    ctx->pc = 0x115300u;
    SET_GPR_U32(ctx, 31, 0x115308u);
    ctx->pc = 0x115304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115300u;
    // 0x115304: 0x26849a08  addiu       $a0, $s4, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E168u, 0x115300u, 0x115308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115308u;
label_115308:
    // 0x115308: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x115308u;
    {
        const bool branch_taken_0x115308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x115308) {
            ctx->pc = 0x11530Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115308u;
            // 0x11530c: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115320u;
            goto label_115320;
        }
    }
    ctx->pc = 0x115310u;
    // 0x115310: 0x8c4202a8  lw          $v0, 0x2A8($v0)
    ctx->pc = 0x115310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 680)));
    // 0x115314: 0x5050000e  beql        $v0, $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x115314u;
    {
        const bool branch_taken_0x115314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x115314) {
            ctx->pc = 0x115318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115314u;
            // 0x115318: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115350u;
            goto label_115350;
        }
    }
    ctx->pc = 0x11531Cu;
label_11531c:
    // 0x11531c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x11531cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_115320:
    // 0x115320: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x115320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115324: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x115324u;
    {
        const bool branch_taken_0x115324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115324u;
        // 0x115328: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115324) {
            ctx->pc = 0x115330u;
            goto label_115330;
        }
    }
    ctx->pc = 0x11532Cu;
    // 0x11532c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x11532cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_115330:
    // 0x115330: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x115330u;
    {
        const bool branch_taken_0x115330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x115330) {
            ctx->pc = 0x115340u;
            goto label_115340;
        }
    }
    ctx->pc = 0x115338u;
    // 0x115338: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x115338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x11533c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x11533cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_115340:
    // 0x115340: 0x14a0ffed  bnez        $a1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x115340u;
    {
        const bool branch_taken_0x115340 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x115340) {
            ctx->pc = 0x1152F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1152f8;
        }
    }
    ctx->pc = 0x115348u;
    // 0x115348: 0xae5002a8  sw          $s0, 0x2A8($s2)
    ctx->pc = 0x115348u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 680), GPR_U32(ctx, 16));
label_11534c:
    // 0x11534c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11534cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_115350:
    // 0x115350: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x115350u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x115354: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x115354u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115358: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x115358u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11535c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x11535cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115360: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x115360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x115364: 0x3e00008  jr          $ra
    ctx->pc = 0x115364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115364u;
        // 0x115368: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11536Cu;
    // 0x11536c: 0x0  nop
    ctx->pc = 0x11536cu;
    // NOP
    ctx->pc = 0x115370u;
}
