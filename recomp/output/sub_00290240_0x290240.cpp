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

// Function: sub_00290240
// Address: 0x290240 - 0x290328
void sub_00290240_0x290240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290240_0x290240");
#endif

    switch (ctx->pc) {
        case 0x290278u: goto label_290278;
        case 0x290284u: goto label_290284;
        case 0x290298u: goto label_290298;
        case 0x2902a0u: goto label_2902a0;
        case 0x2902d8u: goto label_2902d8;
        case 0x2902e0u: goto label_2902e0;
        case 0x29030cu: goto label_29030c;
        default: break;
    }

    ctx->pc = 0x290240u;

    // 0x290240: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x290240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x290244: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x290244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x290248: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x290248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x29024c: 0x24422dc0  addiu       $v0, $v0, 0x2DC0
    ctx->pc = 0x29024cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11712));
    // 0x290250: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x290250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x290254: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x290254u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290258: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x290258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29025c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x29025cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290260: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x290260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x290264: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x290264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x290268: 0x264502e0  addiu       $a1, $s2, 0x2E0
    ctx->pc = 0x290268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 736));
    // 0x29026c: 0xae420278  sw          $v0, 0x278($s2)
    ctx->pc = 0x29026cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 632), GPR_U32(ctx, 2));
    // 0x290270: 0xc0a4216  jal         func_290858
    ctx->pc = 0x290270u;
    SET_GPR_U32(ctx, 31, 0x290278u);
    ctx->pc = 0x290274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290270u;
    // 0x290274: 0x265102f0  addiu       $s1, $s2, 0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290858u, 0x290270u, 0x290278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290278u;
label_290278:
    // 0x290278: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x290278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29027c: 0xc0a4216  jal         func_290858
    ctx->pc = 0x29027Cu;
    SET_GPR_U32(ctx, 31, 0x290284u);
    ctx->pc = 0x290280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29027Cu;
    // 0x290280: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290858u, 0x29027Cu, 0x290284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290284u;
label_290284:
    // 0x290284: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x290284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x290288: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x290288u;
    {
        const bool branch_taken_0x290288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290288u;
        // 0x29028c: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290288) {
            ctx->pc = 0x2902B0u;
            goto label_2902b0;
        }
    }
    ctx->pc = 0x290290u;
    // 0x290290: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x290290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x290294: 0x0  nop
    ctx->pc = 0x290294u;
    // NOP
label_290298:
    // 0x290298: 0xc0f860a  jal         func_3E1828
    ctx->pc = 0x290298u;
    SET_GPR_U32(ctx, 31, 0x2902A0u);
    ctx->pc = 0x29029Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290298u;
    // 0x29029c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1828u, 0x290298u, 0x2902A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2902A0u;
label_2902a0:
    // 0x2902a0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2902a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2902a4: 0x0  nop
    ctx->pc = 0x2902a4u;
    // NOP
    // 0x2902a8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2902A8u;
    {
        const bool branch_taken_0x2902a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2902a8) {
            ctx->pc = 0x2902ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2902A8u;
            // 0x2902ac: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_290298;
        }
    }
    ctx->pc = 0x2902B0u;
label_2902b0:
    // 0x2902b0: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x2902b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x2902b4: 0x265002e0  addiu       $s0, $s2, 0x2E0
    ctx->pc = 0x2902b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 736));
    // 0x2902b8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2902b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2902bc: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2902bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x2902c0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x2902c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x2902c4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2902c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2902c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2902C8u;
    {
        const bool branch_taken_0x2902c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2902CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2902C8u;
        // 0x2902cc: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2902c8) {
            ctx->pc = 0x2902F0u;
            goto label_2902f0;
        }
    }
    ctx->pc = 0x2902D0u;
    // 0x2902d0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2902d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2902d4: 0x0  nop
    ctx->pc = 0x2902d4u;
    // NOP
label_2902d8:
    // 0x2902d8: 0xc0f860a  jal         func_3E1828
    ctx->pc = 0x2902D8u;
    SET_GPR_U32(ctx, 31, 0x2902E0u);
    ctx->pc = 0x2902DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2902D8u;
    // 0x2902dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1828u, 0x2902D8u, 0x2902E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2902E0u;
label_2902e0:
    // 0x2902e0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2902e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2902e4: 0x0  nop
    ctx->pc = 0x2902e4u;
    // NOP
    // 0x2902e8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2902E8u;
    {
        const bool branch_taken_0x2902e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2902e8) {
            ctx->pc = 0x2902ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2902E8u;
            // 0x2902ec: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2902D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2902d8;
        }
    }
    ctx->pc = 0x2902F0u;
label_2902f0:
    // 0x2902f0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2902f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2902f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2902f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2902f8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2902f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2902fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2902fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290300: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x290300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x290304: 0xc0a9712  jal         func_2A5C48
    ctx->pc = 0x290304u;
    SET_GPR_U32(ctx, 31, 0x29030Cu);
    ctx->pc = 0x290308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290304u;
    // 0x290308: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5C48u, 0x290304u, 0x29030Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29030Cu;
label_29030c:
    // 0x29030c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29030cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290310: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x290310u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x290314: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x290314u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290318: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x290318u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29031c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29031cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290320: 0x3e00008  jr          $ra
    ctx->pc = 0x290320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290320u;
        // 0x290324: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290328u;
}
