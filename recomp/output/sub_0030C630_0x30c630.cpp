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

// Function: sub_0030C630
// Address: 0x30c630 - 0x30c6f8
void sub_0030C630_0x30c630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C630_0x30c630");
#endif

    switch (ctx->pc) {
        case 0x30c654u: goto label_30c654;
        case 0x30c668u: goto label_30c668;
        case 0x30c670u: goto label_30c670;
        case 0x30c680u: goto label_30c680;
        case 0x30c68cu: goto label_30c68c;
        case 0x30c698u: goto label_30c698;
        case 0x30c6a4u: goto label_30c6a4;
        case 0x30c6b8u: goto label_30c6b8;
        case 0x30c6c8u: goto label_30c6c8;
        case 0x30c6d4u: goto label_30c6d4;
        default: break;
    }

    ctx->pc = 0x30c630u;

    // 0x30c630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30c630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30c634: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x30c634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x30c638: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x30c638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x30c63c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30c63cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c640: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30c640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30c644: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30c644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30c648: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30c648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x30c64c: 0xc0c2390  jal         func_308E40
    ctx->pc = 0x30C64Cu;
    SET_GPR_U32(ctx, 31, 0x30C654u);
    ctx->pc = 0x30C650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C64Cu;
    // 0x30c650: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308E40u, 0x30C64Cu, 0x30C654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C654u;
label_30c654:
    // 0x30c654: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x30c654u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
    // 0x30c658: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30c658u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c65c: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x30c65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x30c660: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x30C660u;
    SET_GPR_U32(ctx, 31, 0x30C668u);
    ctx->pc = 0x30C664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C660u;
    // 0x30c664: 0x24842170  addiu       $a0, $a0, 0x2170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x30C660u, 0x30C668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C668u;
label_30c668:
    // 0x30c668: 0xc0c4808  jal         func_312020
    ctx->pc = 0x30C668u;
    SET_GPR_U32(ctx, 31, 0x30C670u);
    ctx->pc = 0x30C66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C668u;
    // 0x30c66c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312020u, 0x30C668u, 0x30C670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C670u;
label_30c670:
    // 0x30c670: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30c670u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c674: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x30c674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x30c678: 0xc0c4828  jal         func_3120A0
    ctx->pc = 0x30C678u;
    SET_GPR_U32(ctx, 31, 0x30C680u);
    ctx->pc = 0x30C67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C678u;
    // 0x30c67c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3120A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3120A0u, 0x30C678u, 0x30C680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C680u;
label_30c680:
    // 0x30c680: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30c680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c684: 0xc0c23a6  jal         func_308E98
    ctx->pc = 0x30C684u;
    SET_GPR_U32(ctx, 31, 0x30C68Cu);
    ctx->pc = 0x30C688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C684u;
    // 0x30c688: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308E98u, 0x30C684u, 0x30C68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C68Cu;
label_30c68c:
    // 0x30c68c: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x30c68cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x30c690: 0xc0c23ac  jal         func_308EB0
    ctx->pc = 0x30C690u;
    SET_GPR_U32(ctx, 31, 0x30C698u);
    ctx->pc = 0x30C694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C690u;
    // 0x30c694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308EB0u, 0x30C690u, 0x30C698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C698u;
label_30c698:
    // 0x30c698: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x30c698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x30c69c: 0xc0c24de  jal         func_309378
    ctx->pc = 0x30C69Cu;
    SET_GPR_U32(ctx, 31, 0x30C6A4u);
    ctx->pc = 0x30C6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C69Cu;
    // 0x30c6a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309378u, 0x30C69Cu, 0x30C6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C6A4u;
label_30c6a4:
    // 0x30c6a4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x30c6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x30c6a8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C6A8u;
    {
        const bool branch_taken_0x30c6a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c6a8) {
            ctx->pc = 0x30C6ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30C6A8u;
            // 0x30c6ac: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30C6BCu;
            goto label_30c6bc;
        }
    }
    ctx->pc = 0x30C6B0u;
    // 0x30c6b0: 0xc0c4858  jal         func_312160
    ctx->pc = 0x30C6B0u;
    SET_GPR_U32(ctx, 31, 0x30C6B8u);
    ctx->pc = 0x30C6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C6B0u;
    // 0x30c6b4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312160u, 0x30C6B0u, 0x30C6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C6B8u;
label_30c6b8:
    // 0x30c6b8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x30c6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_30c6bc:
    // 0x30c6bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30c6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c6c0: 0xc0c23a6  jal         func_308E98
    ctx->pc = 0x30C6C0u;
    SET_GPR_U32(ctx, 31, 0x30C6C8u);
    ctx->pc = 0x30C6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C6C0u;
    // 0x30c6c4: 0x8c45000c  lw          $a1, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308E98u, 0x30C6C0u, 0x30C6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C6C8u;
label_30c6c8:
    // 0x30c6c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x30c6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c6cc: 0xc0c3182  jal         func_30C608
    ctx->pc = 0x30C6CCu;
    SET_GPR_U32(ctx, 31, 0x30C6D4u);
    ctx->pc = 0x30C6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C6CCu;
    // 0x30c6d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C608u, 0x30C6CCu, 0x30C6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C6D4u;
label_30c6d4:
    // 0x30c6d4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x30c6d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c6d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30c6d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c6dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30c6dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30c6e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x30c6e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30c6e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x30c6e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30c6e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30c6e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30c6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x30C6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C6ECu;
        // 0x30c6f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C6F4u;
    // 0x30c6f4: 0x0  nop
    ctx->pc = 0x30c6f4u;
    // NOP
    ctx->pc = 0x30c6f8u;
}
