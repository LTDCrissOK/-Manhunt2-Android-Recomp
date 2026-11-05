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

// Function: sub_0016D580
// Address: 0x16d580 - 0x16d668
void sub_0016D580_0x16d580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D580_0x16d580");
#endif

    switch (ctx->pc) {
        case 0x16d598u: goto label_16d598;
        case 0x16d5a8u: goto label_16d5a8;
        case 0x16d5b0u: goto label_16d5b0;
        case 0x16d5c0u: goto label_16d5c0;
        case 0x16d5d0u: goto label_16d5d0;
        case 0x16d5d8u: goto label_16d5d8;
        case 0x16d5e8u: goto label_16d5e8;
        case 0x16d604u: goto label_16d604;
        case 0x16d614u: goto label_16d614;
        case 0x16d61cu: goto label_16d61c;
        case 0x16d62cu: goto label_16d62c;
        case 0x16d63cu: goto label_16d63c;
        case 0x16d648u: goto label_16d648;
        case 0x16d650u: goto label_16d650;
        default: break;
    }

    ctx->pc = 0x16d580u;

    // 0x16d580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16d580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16d584: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16d584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16d588: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16d588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16d58c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16d58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16d590: 0xc05ba26  jal         func_16E898
    ctx->pc = 0x16D590u;
    SET_GPR_U32(ctx, 31, 0x16D598u);
    ctx->pc = 0x16D594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D590u;
    // 0x16d594: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E898u, 0x16D590u, 0x16D598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D598u;
label_16d598:
    // 0x16d598: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16D598u;
    {
        const bool branch_taken_0x16d598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d598) {
            ctx->pc = 0x16D5B8u;
            goto label_16d5b8;
        }
    }
    ctx->pc = 0x16D5A0u;
    // 0x16d5a0: 0xc05b98e  jal         func_16E638
    ctx->pc = 0x16D5A0u;
    SET_GPR_U32(ctx, 31, 0x16D5A8u);
    ctx->pc = 0x16D5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D5A0u;
    // 0x16d5a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E638u, 0x16D5A0u, 0x16D5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D5A8u;
label_16d5a8:
    // 0x16d5a8: 0xc05b8b0  jal         func_16E2C0
    ctx->pc = 0x16D5A8u;
    SET_GPR_U32(ctx, 31, 0x16D5B0u);
    ctx->pc = 0x16D5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D5A8u;
    // 0x16d5ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E2C0u, 0x16D5A8u, 0x16D5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D5B0u;
label_16d5b0:
    // 0x16d5b0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x16D5B0u;
    {
        const bool branch_taken_0x16d5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D5B0u;
        // 0x16d5b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d5b0) {
            ctx->pc = 0x16D654u;
            goto label_16d654;
        }
    }
    ctx->pc = 0x16D5B8u;
label_16d5b8:
    // 0x16d5b8: 0xc05bd66  jal         func_16F598
    ctx->pc = 0x16D5B8u;
    SET_GPR_U32(ctx, 31, 0x16D5C0u);
    ctx->pc = 0x16D5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D5B8u;
    // 0x16d5bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F598u, 0x16D5B8u, 0x16D5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D5C0u;
label_16d5c0:
    // 0x16d5c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16D5C0u;
    {
        const bool branch_taken_0x16d5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d5c0) {
            ctx->pc = 0x16D5E0u;
            goto label_16d5e0;
        }
    }
    ctx->pc = 0x16D5C8u;
    // 0x16d5c8: 0xc05b98e  jal         func_16E638
    ctx->pc = 0x16D5C8u;
    SET_GPR_U32(ctx, 31, 0x16D5D0u);
    ctx->pc = 0x16D5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D5C8u;
    // 0x16d5cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E638u, 0x16D5C8u, 0x16D5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D5D0u;
label_16d5d0:
    // 0x16d5d0: 0xc05b94a  jal         func_16E528
    ctx->pc = 0x16D5D0u;
    SET_GPR_U32(ctx, 31, 0x16D5D8u);
    ctx->pc = 0x16D5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D5D0u;
    // 0x16d5d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E528u, 0x16D5D0u, 0x16D5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D5D8u;
label_16d5d8:
    // 0x16d5d8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x16D5D8u;
    {
        const bool branch_taken_0x16d5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D5D8u;
        // 0x16d5dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d5d8) {
            ctx->pc = 0x16D654u;
            goto label_16d654;
        }
    }
    ctx->pc = 0x16D5E0u;
label_16d5e0:
    // 0x16d5e0: 0xc05a618  jal         func_169860
    ctx->pc = 0x16D5E0u;
    SET_GPR_U32(ctx, 31, 0x16D5E8u);
    ctx->pc = 0x16D5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D5E0u;
    // 0x16d5e4: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169860u, 0x16D5E0u, 0x16D5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D5E8u;
label_16d5e8:
    // 0x16d5e8: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x16d5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x16d5ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16d5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16d5f0: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x16d5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x16d5f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d5f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16d5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16d5fc: 0xc04f9cc  jal         func_13E730
    ctx->pc = 0x16D5FCu;
    SET_GPR_U32(ctx, 31, 0x16D604u);
    ctx->pc = 0x16D600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D5FCu;
    // 0x16d600: 0x8c71020c  lw          $s1, 0x20C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E730u, 0x16D5FCu, 0x16D604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D604u;
label_16d604:
    // 0x16d604: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16D604u;
    {
        const bool branch_taken_0x16d604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d604) {
            ctx->pc = 0x16D624u;
            goto label_16d624;
        }
    }
    ctx->pc = 0x16D60Cu;
    // 0x16d60c: 0xc05b98e  jal         func_16E638
    ctx->pc = 0x16D60Cu;
    SET_GPR_U32(ctx, 31, 0x16D614u);
    ctx->pc = 0x16D610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D60Cu;
    // 0x16d610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E638u, 0x16D60Cu, 0x16D614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D614u;
label_16d614:
    // 0x16d614: 0xc05b7ce  jal         func_16DF38
    ctx->pc = 0x16D614u;
    SET_GPR_U32(ctx, 31, 0x16D61Cu);
    ctx->pc = 0x16D618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D614u;
    // 0x16d618: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DF38u, 0x16D614u, 0x16D61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D61Cu;
label_16d61c:
    // 0x16d61c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x16D61Cu;
    {
        const bool branch_taken_0x16d61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D61Cu;
        // 0x16d620: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d61c) {
            ctx->pc = 0x16D654u;
            goto label_16d654;
        }
    }
    ctx->pc = 0x16D624u;
label_16d624:
    // 0x16d624: 0xc043a2c  jal         func_10E8B0
    ctx->pc = 0x16D624u;
    SET_GPR_U32(ctx, 31, 0x16D62Cu);
    ctx->pc = 0x16D628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D624u;
    // 0x16d628: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E8B0u, 0x16D624u, 0x16D62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D62Cu;
label_16d62c:
    // 0x16d62c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x16D62Cu;
    {
        const bool branch_taken_0x16d62c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d62c) {
            ctx->pc = 0x16D630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D62Cu;
            // 0x16d630: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D654u;
            goto label_16d654;
        }
    }
    ctx->pc = 0x16D634u;
    // 0x16d634: 0xc05b98e  jal         func_16E638
    ctx->pc = 0x16D634u;
    SET_GPR_U32(ctx, 31, 0x16D63Cu);
    ctx->pc = 0x16D638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D634u;
    // 0x16d638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E638u, 0x16D634u, 0x16D63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D63Cu;
label_16d63c:
    // 0x16d63c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d640: 0xc05b7f0  jal         func_16DFC0
    ctx->pc = 0x16D640u;
    SET_GPR_U32(ctx, 31, 0x16D648u);
    ctx->pc = 0x16D644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D640u;
    // 0x16d644: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DFC0u, 0x16D640u, 0x16D648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D648u;
label_16d648:
    // 0x16d648: 0xc05be2a  jal         func_16F8A8
    ctx->pc = 0x16D648u;
    SET_GPR_U32(ctx, 31, 0x16D650u);
    ctx->pc = 0x16D64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D648u;
    // 0x16d64c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F8A8u, 0x16D648u, 0x16D650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D650u;
label_16d650:
    // 0x16d650: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16d650u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16d654:
    // 0x16d654: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16d654u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16d658: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16d658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d65c: 0x3e00008  jr          $ra
    ctx->pc = 0x16D65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D65Cu;
        // 0x16d660: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D65Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D664u;
    // 0x16d664: 0x0  nop
    ctx->pc = 0x16d664u;
    // NOP
    ctx->pc = 0x16d668u;
}
