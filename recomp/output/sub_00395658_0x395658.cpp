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

// Function: sub_00395658
// Address: 0x395658 - 0x395740
void sub_00395658_0x395658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395658_0x395658");
#endif

    switch (ctx->pc) {
        case 0x395678u: goto label_395678;
        case 0x3956a4u: goto label_3956a4;
        case 0x3956b0u: goto label_3956b0;
        case 0x3956dcu: goto label_3956dc;
        case 0x3956f4u: goto label_3956f4;
        case 0x395708u: goto label_395708;
        case 0x39571cu: goto label_39571c;
        default: break;
    }

    ctx->pc = 0x395658u;

    // 0x395658: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x395658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39565c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39565cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x395660: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x395660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395664: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x395664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x395668: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x395668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x39566c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x39566cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x395670: 0xc0e66ac  jal         func_399AB0
    ctx->pc = 0x395670u;
    SET_GPR_U32(ctx, 31, 0x395678u);
    ctx->pc = 0x395674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395670u;
    // 0x395674: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399AB0u, 0x395670u, 0x395678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395678u;
label_395678:
    // 0x395678: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x395678u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39567c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x39567cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x395680: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x395680u;
    {
        const bool branch_taken_0x395680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x395684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395680u;
        // 0x395684: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395680) {
            ctx->pc = 0x395690u;
            goto label_395690;
        }
    }
    ctx->pc = 0x395688u;
    // 0x395688: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x395688u;
    {
        const bool branch_taken_0x395688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395688u;
        // 0x39568c: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395688) {
            ctx->pc = 0x395724u;
            goto label_395724;
        }
    }
    ctx->pc = 0x395690u;
label_395690:
    // 0x395690: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x395690u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x395694: 0x54440012  bnel        $v0, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x395694u;
    {
        const bool branch_taken_0x395694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x395694) {
            ctx->pc = 0x395698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395694u;
            // 0x395698: 0x82110003  lb          $s1, 0x3($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3956E0u;
            goto label_3956e0;
        }
    }
    ctx->pc = 0x39569Cu;
    // 0x39569c: 0xc0e66ac  jal         func_399AB0
    ctx->pc = 0x39569Cu;
    SET_GPR_U32(ctx, 31, 0x3956A4u);
    ctx->pc = 0x3956A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39569Cu;
    // 0x3956a0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399AB0u, 0x39569Cu, 0x3956A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3956A4u;
label_3956a4:
    // 0x3956a4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3956a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3956a8: 0xc0e66d6  jal         func_399B58
    ctx->pc = 0x3956A8u;
    SET_GPR_U32(ctx, 31, 0x3956B0u);
    ctx->pc = 0x3956ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3956A8u;
    // 0x3956ac: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399B58u, 0x3956A8u, 0x3956B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3956B0u;
label_3956b0:
    // 0x3956b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3956b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3956b4: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x3956b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3956b8: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x3956b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3956bc: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x3956bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x3956c0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x3956c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3956c4: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x3956c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3956c8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3956c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3956cc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3956CCu;
    {
        const bool branch_taken_0x3956cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3956D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3956CCu;
        // 0x3956d0: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3956cc) {
            ctx->pc = 0x3956DCu;
            goto label_3956dc;
        }
    }
    ctx->pc = 0x3956D4u;
    // 0x3956d4: 0xc0e53b2  jal         func_394EC8
    ctx->pc = 0x3956D4u;
    SET_GPR_U32(ctx, 31, 0x3956DCu);
    ctx->pc = 0x3956D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3956D4u;
    // 0x3956d8: 0xae050010  sw          $a1, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394EC8u, 0x3956D4u, 0x3956DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3956DCu;
label_3956dc:
    // 0x3956dc: 0x82110003  lb          $s1, 0x3($s0)
    ctx->pc = 0x3956dcu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_3956e0:
    // 0x3956e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3956e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3956e4: 0x56220010  bnel        $s1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3956E4u;
    {
        const bool branch_taken_0x3956e4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3956e4) {
            ctx->pc = 0x3956E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3956E4u;
            // 0x3956e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395728u;
            goto label_395728;
        }
    }
    ctx->pc = 0x3956ECu;
    // 0x3956ec: 0xc0e66ac  jal         func_399AB0
    ctx->pc = 0x3956ECu;
    SET_GPR_U32(ctx, 31, 0x3956F4u);
    ctx->pc = 0x3956F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3956ECu;
    // 0x3956f0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399AB0u, 0x3956ECu, 0x3956F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3956F4u;
label_3956f4:
    // 0x3956f4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3956f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3956f8: 0x5651000b  bnel        $s2, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x3956F8u;
    {
        const bool branch_taken_0x3956f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        if (branch_taken_0x3956f8) {
            ctx->pc = 0x3956FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3956F8u;
            // 0x3956fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395728u;
            goto label_395728;
        }
    }
    ctx->pc = 0x395700u;
    // 0x395700: 0xc0e66d6  jal         func_399B58
    ctx->pc = 0x395700u;
    SET_GPR_U32(ctx, 31, 0x395708u);
    ctx->pc = 0x395704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395700u;
    // 0x395704: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399B58u, 0x395700u, 0x395708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395708u;
label_395708:
    // 0x395708: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x395708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x39570c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39570cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395710: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x395710u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x395714: 0xc0e53b2  jal         func_394EC8
    ctx->pc = 0x395714u;
    SET_GPR_U32(ctx, 31, 0x39571Cu);
    ctx->pc = 0x395718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395714u;
    // 0x395718: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394EC8u, 0x395714u, 0x39571Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39571Cu;
label_39571c:
    // 0x39571c: 0xa2120001  sb          $s2, 0x1($s0)
    ctx->pc = 0x39571cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 18));
    // 0x395720: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x395720u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_395724:
    // 0x395724: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x395724u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_395728:
    // 0x395728: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x395728u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39572c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39572cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x395730: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x395730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x395734: 0x3e00008  jr          $ra
    ctx->pc = 0x395734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x395738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395734u;
        // 0x395738: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39573Cu;
    // 0x39573c: 0x0  nop
    ctx->pc = 0x39573cu;
    // NOP
    ctx->pc = 0x395740u;
}
