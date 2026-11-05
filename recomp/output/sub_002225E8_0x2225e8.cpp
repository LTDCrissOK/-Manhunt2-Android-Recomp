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

// Function: sub_002225E8
// Address: 0x2225e8 - 0x2226c8
void sub_002225E8_0x2225e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002225E8_0x2225e8");
#endif

    switch (ctx->pc) {
        case 0x222610u: goto label_222610;
        case 0x222650u: goto label_222650;
        case 0x22265cu: goto label_22265c;
        case 0x222674u: goto label_222674;
        case 0x22267cu: goto label_22267c;
        case 0x222684u: goto label_222684;
        default: break;
    }

    ctx->pc = 0x2225e8u;

    // 0x2225e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2225e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2225ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2225ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2225f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2225f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2225f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2225f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2225f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2225f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2225fc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2225fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x222600: 0x261101bc  addiu       $s1, $s0, 0x1BC
    ctx->pc = 0x222600u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x222604: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x222604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x222608: 0xc087380  jal         func_21CE00
    ctx->pc = 0x222608u;
    SET_GPR_U32(ctx, 31, 0x222610u);
    ctx->pc = 0x22260Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222608u;
    // 0x22260c: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CE00u, 0x222608u, 0x222610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222610u;
label_222610:
    // 0x222610: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x222610u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x222614: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x222614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x222618: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x222618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x22261c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22261cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222620: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x222620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x222624: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x222624u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x222628: 0x244218a8  addiu       $v0, $v0, 0x18A8
    ctx->pc = 0x222628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6312));
    // 0x22262c: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x22262cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x222630: 0xae020190  sw          $v0, 0x190($s0)
    ctx->pc = 0x222630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 2));
    // 0x222634: 0xae0301a0  sw          $v1, 0x1A0($s0)
    ctx->pc = 0x222634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 3));
    // 0x222638: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x222638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
    // 0x22263c: 0xe60101a8  swc1        $f1, 0x1A8($s0)
    ctx->pc = 0x22263cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
    // 0x222640: 0xae0001ac  sw          $zero, 0x1AC($s0)
    ctx->pc = 0x222640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 0));
    // 0x222644: 0xae0001b0  sw          $zero, 0x1B0($s0)
    ctx->pc = 0x222644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 0));
    // 0x222648: 0xae0001b4  sw          $zero, 0x1B4($s0)
    ctx->pc = 0x222648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 0));
    // 0x22264c: 0x0  nop
    ctx->pc = 0x22264cu;
    // NOP
label_222650:
    // 0x222650: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x222650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222654: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x222654u;
    SET_GPR_U32(ctx, 31, 0x22265Cu);
    ctx->pc = 0x222658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222654u;
    // 0x222658: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x222654u, 0x22265Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22265Cu;
label_22265c:
    // 0x22265c: 0x0  nop
    ctx->pc = 0x22265cu;
    // NOP
    // 0x222660: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x222660u;
    {
        const bool branch_taken_0x222660 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x222664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222660u;
        // 0x222664: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222660) {
            ctx->pc = 0x222650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222650;
        }
    }
    ctx->pc = 0x222668u;
    // 0x222668: 0xae0001d4  sw          $zero, 0x1D4($s0)
    ctx->pc = 0x222668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 0));
    // 0x22266c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x22266Cu;
    SET_GPR_U32(ctx, 31, 0x222674u);
    ctx->pc = 0x222670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22266Cu;
    // 0x222670: 0x260401d8  addiu       $a0, $s0, 0x1D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x22266Cu, 0x222674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222674u;
label_222674:
    // 0x222674: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x222674u;
    SET_GPR_U32(ctx, 31, 0x22267Cu);
    ctx->pc = 0x222678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222674u;
    // 0x222678: 0x260401e0  addiu       $a0, $s0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x222674u, 0x22267Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22267Cu;
label_22267c:
    // 0x22267c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x22267Cu;
    SET_GPR_U32(ctx, 31, 0x222684u);
    ctx->pc = 0x222680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22267Cu;
    // 0x222680: 0x260401e8  addiu       $a0, $s0, 0x1E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x22267Cu, 0x222684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222684u;
label_222684:
    // 0x222684: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x222684u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222688: 0xae0001f0  sw          $zero, 0x1F0($s0)
    ctx->pc = 0x222688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 496), GPR_U32(ctx, 0));
    // 0x22268c: 0xae0001f4  sw          $zero, 0x1F4($s0)
    ctx->pc = 0x22268cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 500), GPR_U32(ctx, 0));
    // 0x222690: 0xae0001f8  sw          $zero, 0x1F8($s0)
    ctx->pc = 0x222690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 0));
    // 0x222694: 0xae0001fc  sw          $zero, 0x1FC($s0)
    ctx->pc = 0x222694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 508), GPR_U32(ctx, 0));
    // 0x222698: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x222698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
    // 0x22269c: 0xae000204  sw          $zero, 0x204($s0)
    ctx->pc = 0x22269cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 0));
    // 0x2226a0: 0xae00020c  sw          $zero, 0x20C($s0)
    ctx->pc = 0x2226a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 0));
    // 0x2226a4: 0xa2000210  sb          $zero, 0x210($s0)
    ctx->pc = 0x2226a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 528), (uint8_t)GPR_U32(ctx, 0));
    // 0x2226a8: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x2226a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
    // 0x2226ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2226acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2226b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2226b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2226b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2226b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2226b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2226b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2226bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2226bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2226c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2226C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2226C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2226C0u;
        // 0x2226c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2226C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2226C8u;
}
