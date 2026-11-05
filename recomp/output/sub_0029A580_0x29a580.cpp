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

// Function: sub_0029A580
// Address: 0x29a580 - 0x29a898
void sub_0029A580_0x29a580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A580_0x29a580");
#endif

    switch (ctx->pc) {
        case 0x29a5d8u: goto label_29a5d8;
        case 0x29a5ecu: goto label_29a5ec;
        case 0x29a5f8u: goto label_29a5f8;
        case 0x29a608u: goto label_29a608;
        case 0x29a61cu: goto label_29a61c;
        case 0x29a630u: goto label_29a630;
        case 0x29a63cu: goto label_29a63c;
        case 0x29a64cu: goto label_29a64c;
        case 0x29a660u: goto label_29a660;
        case 0x29a674u: goto label_29a674;
        case 0x29a680u: goto label_29a680;
        case 0x29a690u: goto label_29a690;
        case 0x29a6a4u: goto label_29a6a4;
        case 0x29a6b8u: goto label_29a6b8;
        case 0x29a6c4u: goto label_29a6c4;
        case 0x29a6d4u: goto label_29a6d4;
        case 0x29a6e8u: goto label_29a6e8;
        case 0x29a6fcu: goto label_29a6fc;
        case 0x29a708u: goto label_29a708;
        case 0x29a718u: goto label_29a718;
        case 0x29a738u: goto label_29a738;
        case 0x29a74cu: goto label_29a74c;
        case 0x29a758u: goto label_29a758;
        case 0x29a768u: goto label_29a768;
        case 0x29a77cu: goto label_29a77c;
        case 0x29a790u: goto label_29a790;
        case 0x29a79cu: goto label_29a79c;
        case 0x29a7acu: goto label_29a7ac;
        case 0x29a7c0u: goto label_29a7c0;
        case 0x29a7d4u: goto label_29a7d4;
        case 0x29a7e0u: goto label_29a7e0;
        case 0x29a7f0u: goto label_29a7f0;
        case 0x29a804u: goto label_29a804;
        case 0x29a818u: goto label_29a818;
        case 0x29a824u: goto label_29a824;
        case 0x29a834u: goto label_29a834;
        case 0x29a848u: goto label_29a848;
        case 0x29a85cu: goto label_29a85c;
        case 0x29a868u: goto label_29a868;
        case 0x29a878u: goto label_29a878;
        case 0x29a880u: goto label_29a880;
        default: break;
    }

    ctx->pc = 0x29a580u;

    // 0x29a580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29a580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29a584: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x29a584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x29a588: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x29a588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x29a58c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29a58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29a590: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29a590u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a594: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x29a594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x29a598: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x29a598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x29a59c: 0x8c5225a4  lw          $s2, 0x25A4($v0)
    ctx->pc = 0x29a59cu;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x4C25A4u));
    // 0x29a5a0: 0x8e23008c  lw          $v1, 0x8C($s1)
    ctx->pc = 0x29a5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x29a5a4: 0x52430004  beql        $s2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A5A4u;
    {
        const bool branch_taken_0x29a5a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x29a5a4) {
            ctx->pc = 0x29A5A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29A5A4u;
            // 0x29a5a8: 0x8e220080  lw          $v0, 0x80($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29A5B8u;
            goto label_29a5b8;
        }
    }
    ctx->pc = 0x29A5ACu;
    // 0x29a5ac: 0xae32008c  sw          $s2, 0x8C($s1)
    ctx->pc = 0x29a5acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 18));
    // 0x29a5b0: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x29a5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
    // 0x29a5b4: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x29a5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_29a5b8:
    // 0x29a5b8: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x29A5B8u;
    {
        const bool branch_taken_0x29a5b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A5B8u;
        // 0x29a5bc: 0x8e220048  lw          $v0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a5b8) {
            ctx->pc = 0x29A720u;
            goto label_29a720;
        }
    }
    ctx->pc = 0x29A5C0u;
    // 0x29a5c0: 0x144000ad  bnez        $v0, . + 4 + (0xAD << 2)
    ctx->pc = 0x29A5C0u;
    {
        const bool branch_taken_0x29a5c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a5c0) {
            ctx->pc = 0x29A878u;
            goto label_29a878;
        }
    }
    ctx->pc = 0x29A5C8u;
    // 0x29a5c8: 0x16400010  bnez        $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x29A5C8u;
    {
        const bool branch_taken_0x29a5c8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A5C8u;
        // 0x29a5cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a5c8) {
            ctx->pc = 0x29A60Cu;
            goto label_29a60c;
        }
    }
    ctx->pc = 0x29A5D0u;
    // 0x29a5d0: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x29A5D0u;
    SET_GPR_U32(ctx, 31, 0x29A5D8u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x29A5D0u, 0x29A5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A5D8u;
label_29a5d8:
    // 0x29a5d8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29a5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29a5dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29a5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a5e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29a5e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a5e4: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x29A5E4u;
    SET_GPR_U32(ctx, 31, 0x29A5ECu);
    ctx->pc = 0x29A5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A5E4u;
    // 0x29a5e8: 0x24a5be18  addiu       $a1, $a1, -0x41E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29A5E4u, 0x29A5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A5ECu;
label_29a5ec:
    // 0x29a5ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29a5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a5f0: 0xc0a7436  jal         func_29D0D8
    ctx->pc = 0x29A5F0u;
    SET_GPR_U32(ctx, 31, 0x29A5F8u);
    ctx->pc = 0x29A5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A5F0u;
    // 0x29a5f4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0D8u, 0x29A5F0u, 0x29A5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A5F8u;
label_29a5f8:
    // 0x29a5f8: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x29a5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x29a5fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29a5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a600: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x29A600u;
    SET_GPR_U32(ctx, 31, 0x29A608u);
    ctx->pc = 0x29A604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A600u;
    // 0x29a604: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29A600u, 0x29A608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A608u;
label_29a608:
    // 0x29a608: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29a608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29a60c:
    // 0x29a60c: 0x16420010  bne         $s2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x29A60Cu;
    {
        const bool branch_taken_0x29a60c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x29A610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A60Cu;
        // 0x29a610: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a60c) {
            ctx->pc = 0x29A650u;
            goto label_29a650;
        }
    }
    ctx->pc = 0x29A614u;
    // 0x29a614: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x29A614u;
    SET_GPR_U32(ctx, 31, 0x29A61Cu);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x29A614u, 0x29A61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A61Cu;
label_29a61c:
    // 0x29a61c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29a61cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29a620: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29a620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a624: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29a624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a628: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x29A628u;
    SET_GPR_U32(ctx, 31, 0x29A630u);
    ctx->pc = 0x29A62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A628u;
    // 0x29a62c: 0x24a5be20  addiu       $a1, $a1, -0x41E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29A628u, 0x29A630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A630u;
label_29a630:
    // 0x29a630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29a630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a634: 0xc0a7436  jal         func_29D0D8
    ctx->pc = 0x29A634u;
    SET_GPR_U32(ctx, 31, 0x29A63Cu);
    ctx->pc = 0x29A638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A634u;
    // 0x29a638: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0D8u, 0x29A634u, 0x29A63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A63Cu;
label_29a63c:
    // 0x29a63c: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x29a63cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x29a640: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29a640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a644: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x29A644u;
    SET_GPR_U32(ctx, 31, 0x29A64Cu);
    ctx->pc = 0x29A648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A644u;
    // 0x29a648: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29A644u, 0x29A64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A64Cu;
label_29a64c:
    // 0x29a64c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x29a64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_29a650:
    // 0x29a650: 0x16420010  bne         $s2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x29A650u;
    {
        const bool branch_taken_0x29a650 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x29A654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A650u;
        // 0x29a654: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a650) {
            ctx->pc = 0x29A694u;
            goto label_29a694;
        }
    }
    ctx->pc = 0x29A658u;
    // 0x29a658: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x29A658u;
    SET_GPR_U32(ctx, 31, 0x29A660u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x29A658u, 0x29A660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A660u;
label_29a660:
    // 0x29a660: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29a660u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29a664: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29a664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a668: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29a668u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a66c: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x29A66Cu;
    SET_GPR_U32(ctx, 31, 0x29A674u);
    ctx->pc = 0x29A670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A66Cu;
    // 0x29a670: 0x24a5be28  addiu       $a1, $a1, -0x41D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29A66Cu, 0x29A674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A674u;
label_29a674:
    // 0x29a674: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29a674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a678: 0xc0a7436  jal         func_29D0D8
    ctx->pc = 0x29A678u;
    SET_GPR_U32(ctx, 31, 0x29A680u);
    ctx->pc = 0x29A67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A678u;
    // 0x29a67c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0D8u, 0x29A678u, 0x29A680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A680u;
label_29a680:
    // 0x29a680: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x29a680u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x29a684: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29a684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a688: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x29A688u;
    SET_GPR_U32(ctx, 31, 0x29A690u);
    ctx->pc = 0x29A68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A688u;
    // 0x29a68c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29A688u, 0x29A690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A690u;
label_29a690:
    // 0x29a690: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29a690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29a694:
    // 0x29a694: 0x16420010  bne         $s2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x29A694u;
    {
        const bool branch_taken_0x29a694 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x29A698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A694u;
        // 0x29a698: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a694) {
            ctx->pc = 0x29A6D8u;
            goto label_29a6d8;
        }
    }
    ctx->pc = 0x29A69Cu;
    // 0x29a69c: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x29A69Cu;
    SET_GPR_U32(ctx, 31, 0x29A6A4u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x29A69Cu, 0x29A6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A6A4u;
label_29a6a4:
    // 0x29a6a4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29a6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29a6a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29a6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a6ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29a6acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a6b0: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x29A6B0u;
    SET_GPR_U32(ctx, 31, 0x29A6B8u);
    ctx->pc = 0x29A6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A6B0u;
    // 0x29a6b4: 0x24a5be30  addiu       $a1, $a1, -0x41D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29A6B0u, 0x29A6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A6B8u;
label_29a6b8:
    // 0x29a6b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29a6b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a6bc: 0xc0a7436  jal         func_29D0D8
    ctx->pc = 0x29A6BCu;
    SET_GPR_U32(ctx, 31, 0x29A6C4u);
    ctx->pc = 0x29A6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A6BCu;
    // 0x29a6c0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0D8u, 0x29A6BCu, 0x29A6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A6C4u;
label_29a6c4:
    // 0x29a6c4: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x29a6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x29a6c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29a6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a6cc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x29A6CCu;
    SET_GPR_U32(ctx, 31, 0x29A6D4u);
    ctx->pc = 0x29A6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A6CCu;
    // 0x29a6d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29A6CCu, 0x29A6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A6D4u;
label_29a6d4:
    // 0x29a6d4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x29a6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_29a6d8:
    // 0x29a6d8: 0x16420067  bne         $s2, $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x29A6D8u;
    {
        const bool branch_taken_0x29a6d8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x29a6d8) {
            ctx->pc = 0x29A878u;
            goto label_29a878;
        }
    }
    ctx->pc = 0x29A6E0u;
    // 0x29a6e0: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x29A6E0u;
    SET_GPR_U32(ctx, 31, 0x29A6E8u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x29A6E0u, 0x29A6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A6E8u;
label_29a6e8:
    // 0x29a6e8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29a6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29a6ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29a6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a6f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29a6f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a6f4: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x29A6F4u;
    SET_GPR_U32(ctx, 31, 0x29A6FCu);
    ctx->pc = 0x29A6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A6F4u;
    // 0x29a6f8: 0x24a5be38  addiu       $a1, $a1, -0x41C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29A6F4u, 0x29A6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A6FCu;
label_29a6fc:
    // 0x29a6fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29a6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a700: 0xc0a7436  jal         func_29D0D8
    ctx->pc = 0x29A700u;
    SET_GPR_U32(ctx, 31, 0x29A708u);
    ctx->pc = 0x29A704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A700u;
    // 0x29a704: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0D8u, 0x29A700u, 0x29A708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A708u;
label_29a708:
    // 0x29a708: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x29a708u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x29a70c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29a70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a710: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x29A710u;
    SET_GPR_U32(ctx, 31, 0x29A718u);
    ctx->pc = 0x29A714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A710u;
    // 0x29a714: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29A710u, 0x29A718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A718u;
label_29a718:
    // 0x29a718: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x29A718u;
    {
        const bool branch_taken_0x29a718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a718) {
            ctx->pc = 0x29A878u;
            goto label_29a878;
        }
    }
    ctx->pc = 0x29A720u;
label_29a720:
    // 0x29a720: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x29A720u;
    {
        const bool branch_taken_0x29a720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a720) {
            ctx->pc = 0x29A878u;
            goto label_29a878;
        }
    }
    ctx->pc = 0x29A728u;
    // 0x29a728: 0x16400010  bnez        $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x29A728u;
    {
        const bool branch_taken_0x29a728 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A728u;
        // 0x29a72c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a728) {
            ctx->pc = 0x29A76Cu;
            goto label_29a76c;
        }
    }
    ctx->pc = 0x29A730u;
    // 0x29a730: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x29A730u;
    SET_GPR_U32(ctx, 31, 0x29A738u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x29A730u, 0x29A738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A738u;
label_29a738:
    // 0x29a738: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29a738u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29a73c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29a73cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a740: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29a740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a744: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x29A744u;
    SET_GPR_U32(ctx, 31, 0x29A74Cu);
    ctx->pc = 0x29A748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A744u;
    // 0x29a748: 0x24a5be40  addiu       $a1, $a1, -0x41C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29A744u, 0x29A74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A74Cu;
label_29a74c:
    // 0x29a74c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29a74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a750: 0xc0a7436  jal         func_29D0D8
    ctx->pc = 0x29A750u;
    SET_GPR_U32(ctx, 31, 0x29A758u);
    ctx->pc = 0x29A754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A750u;
    // 0x29a754: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0D8u, 0x29A750u, 0x29A758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A758u;
label_29a758:
    // 0x29a758: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x29a758u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x29a75c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29a75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a760: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x29A760u;
    SET_GPR_U32(ctx, 31, 0x29A768u);
    ctx->pc = 0x29A764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A760u;
    // 0x29a764: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29A760u, 0x29A768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A768u;
label_29a768:
    // 0x29a768: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29a768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29a76c:
    // 0x29a76c: 0x16420010  bne         $s2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x29A76Cu;
    {
        const bool branch_taken_0x29a76c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x29A770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A76Cu;
        // 0x29a770: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a76c) {
            ctx->pc = 0x29A7B0u;
            goto label_29a7b0;
        }
    }
    ctx->pc = 0x29A774u;
    // 0x29a774: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x29A774u;
    SET_GPR_U32(ctx, 31, 0x29A77Cu);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x29A774u, 0x29A77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A77Cu;
label_29a77c:
    // 0x29a77c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29a77cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29a780: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29a780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a784: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29a784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a788: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x29A788u;
    SET_GPR_U32(ctx, 31, 0x29A790u);
    ctx->pc = 0x29A78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A788u;
    // 0x29a78c: 0x24a5be48  addiu       $a1, $a1, -0x41B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29A788u, 0x29A790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A790u;
label_29a790:
    // 0x29a790: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29a790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a794: 0xc0a7436  jal         func_29D0D8
    ctx->pc = 0x29A794u;
    SET_GPR_U32(ctx, 31, 0x29A79Cu);
    ctx->pc = 0x29A798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A794u;
    // 0x29a798: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0D8u, 0x29A794u, 0x29A79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A79Cu;
label_29a79c:
    // 0x29a79c: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x29a79cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x29a7a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29a7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a7a4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x29A7A4u;
    SET_GPR_U32(ctx, 31, 0x29A7ACu);
    ctx->pc = 0x29A7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A7A4u;
    // 0x29a7a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29A7A4u, 0x29A7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A7ACu;
label_29a7ac:
    // 0x29a7ac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x29a7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_29a7b0:
    // 0x29a7b0: 0x16420010  bne         $s2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x29A7B0u;
    {
        const bool branch_taken_0x29a7b0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x29A7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A7B0u;
        // 0x29a7b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a7b0) {
            ctx->pc = 0x29A7F4u;
            goto label_29a7f4;
        }
    }
    ctx->pc = 0x29A7B8u;
    // 0x29a7b8: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x29A7B8u;
    SET_GPR_U32(ctx, 31, 0x29A7C0u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x29A7B8u, 0x29A7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A7C0u;
label_29a7c0:
    // 0x29a7c0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29a7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29a7c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29a7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a7c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29a7c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a7cc: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x29A7CCu;
    SET_GPR_U32(ctx, 31, 0x29A7D4u);
    ctx->pc = 0x29A7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A7CCu;
    // 0x29a7d0: 0x24a5be50  addiu       $a1, $a1, -0x41B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29A7CCu, 0x29A7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A7D4u;
label_29a7d4:
    // 0x29a7d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29a7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a7d8: 0xc0a7436  jal         func_29D0D8
    ctx->pc = 0x29A7D8u;
    SET_GPR_U32(ctx, 31, 0x29A7E0u);
    ctx->pc = 0x29A7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A7D8u;
    // 0x29a7dc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0D8u, 0x29A7D8u, 0x29A7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A7E0u;
label_29a7e0:
    // 0x29a7e0: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x29a7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x29a7e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29a7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a7e8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x29A7E8u;
    SET_GPR_U32(ctx, 31, 0x29A7F0u);
    ctx->pc = 0x29A7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A7E8u;
    // 0x29a7ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29A7E8u, 0x29A7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A7F0u;
label_29a7f0:
    // 0x29a7f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29a7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29a7f4:
    // 0x29a7f4: 0x16420010  bne         $s2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x29A7F4u;
    {
        const bool branch_taken_0x29a7f4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x29A7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A7F4u;
        // 0x29a7f8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a7f4) {
            ctx->pc = 0x29A838u;
            goto label_29a838;
        }
    }
    ctx->pc = 0x29A7FCu;
    // 0x29a7fc: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x29A7FCu;
    SET_GPR_U32(ctx, 31, 0x29A804u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x29A7FCu, 0x29A804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A804u;
label_29a804:
    // 0x29a804: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29a804u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29a808: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29a808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a80c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29a80cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a810: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x29A810u;
    SET_GPR_U32(ctx, 31, 0x29A818u);
    ctx->pc = 0x29A814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A810u;
    // 0x29a814: 0x24a5be58  addiu       $a1, $a1, -0x41A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29A810u, 0x29A818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A818u;
label_29a818:
    // 0x29a818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29a818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a81c: 0xc0a7436  jal         func_29D0D8
    ctx->pc = 0x29A81Cu;
    SET_GPR_U32(ctx, 31, 0x29A824u);
    ctx->pc = 0x29A820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A81Cu;
    // 0x29a820: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0D8u, 0x29A81Cu, 0x29A824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A824u;
label_29a824:
    // 0x29a824: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x29a824u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x29a828: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29a828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a82c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x29A82Cu;
    SET_GPR_U32(ctx, 31, 0x29A834u);
    ctx->pc = 0x29A830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A82Cu;
    // 0x29a830: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29A82Cu, 0x29A834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A834u;
label_29a834:
    // 0x29a834: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x29a834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_29a838:
    // 0x29a838: 0x1642000f  bne         $s2, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x29A838u;
    {
        const bool branch_taken_0x29a838 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x29a838) {
            ctx->pc = 0x29A878u;
            goto label_29a878;
        }
    }
    ctx->pc = 0x29A840u;
    // 0x29a840: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x29A840u;
    SET_GPR_U32(ctx, 31, 0x29A848u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x29A840u, 0x29A848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A848u;
label_29a848:
    // 0x29a848: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29a848u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29a84c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29a84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a850: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29a850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a854: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x29A854u;
    SET_GPR_U32(ctx, 31, 0x29A85Cu);
    ctx->pc = 0x29A858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A854u;
    // 0x29a858: 0x24a5be60  addiu       $a1, $a1, -0x41A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29A854u, 0x29A85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A85Cu;
label_29a85c:
    // 0x29a85c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29a85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a860: 0xc0a7436  jal         func_29D0D8
    ctx->pc = 0x29A860u;
    SET_GPR_U32(ctx, 31, 0x29A868u);
    ctx->pc = 0x29A864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A860u;
    // 0x29a864: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0D8u, 0x29A860u, 0x29A868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A868u;
label_29a868:
    // 0x29a868: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x29a868u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x29a86c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29a86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a870: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x29A870u;
    SET_GPR_U32(ctx, 31, 0x29A878u);
    ctx->pc = 0x29A874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A870u;
    // 0x29a874: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29A870u, 0x29A878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A878u;
label_29a878:
    // 0x29a878: 0xc0a67d4  jal         func_299F50
    ctx->pc = 0x29A878u;
    SET_GPR_U32(ctx, 31, 0x29A880u);
    ctx->pc = 0x29A87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A878u;
    // 0x29a87c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299F50u, 0x29A878u, 0x29A880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A880u;
label_29a880:
    // 0x29a880: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x29a880u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a884: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x29a884u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29a888: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29a888u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29a88c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x29a88cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29a890: 0x3e00008  jr          $ra
    ctx->pc = 0x29A890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A890u;
        // 0x29a894: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A898u;
}
