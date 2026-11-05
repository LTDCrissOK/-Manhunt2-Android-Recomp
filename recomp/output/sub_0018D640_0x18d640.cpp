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

// Function: sub_0018D640
// Address: 0x18d640 - 0x18d6f0
void sub_0018D640_0x18d640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018D640_0x18d640");
#endif

    switch (ctx->pc) {
        case 0x18d640u: goto label_18d640;
        case 0x18d644u: goto label_18d644;
        case 0x18d648u: goto label_18d648;
        case 0x18d64cu: goto label_18d64c;
        case 0x18d650u: goto label_18d650;
        case 0x18d654u: goto label_18d654;
        case 0x18d658u: goto label_18d658;
        case 0x18d65cu: goto label_18d65c;
        case 0x18d660u: goto label_18d660;
        case 0x18d664u: goto label_18d664;
        case 0x18d668u: goto label_18d668;
        case 0x18d66cu: goto label_18d66c;
        case 0x18d670u: goto label_18d670;
        case 0x18d674u: goto label_18d674;
        case 0x18d678u: goto label_18d678;
        case 0x18d67cu: goto label_18d67c;
        case 0x18d680u: goto label_18d680;
        case 0x18d684u: goto label_18d684;
        case 0x18d688u: goto label_18d688;
        case 0x18d68cu: goto label_18d68c;
        case 0x18d690u: goto label_18d690;
        case 0x18d694u: goto label_18d694;
        case 0x18d698u: goto label_18d698;
        case 0x18d69cu: goto label_18d69c;
        case 0x18d6a0u: goto label_18d6a0;
        case 0x18d6a4u: goto label_18d6a4;
        case 0x18d6a8u: goto label_18d6a8;
        case 0x18d6acu: goto label_18d6ac;
        case 0x18d6b0u: goto label_18d6b0;
        case 0x18d6b4u: goto label_18d6b4;
        case 0x18d6b8u: goto label_18d6b8;
        case 0x18d6bcu: goto label_18d6bc;
        case 0x18d6c0u: goto label_18d6c0;
        case 0x18d6c4u: goto label_18d6c4;
        case 0x18d6c8u: goto label_18d6c8;
        case 0x18d6ccu: goto label_18d6cc;
        case 0x18d6d0u: goto label_18d6d0;
        case 0x18d6d4u: goto label_18d6d4;
        case 0x18d6d8u: goto label_18d6d8;
        case 0x18d6dcu: goto label_18d6dc;
        case 0x18d6e0u: goto label_18d6e0;
        case 0x18d6e4u: goto label_18d6e4;
        case 0x18d6e8u: goto label_18d6e8;
        case 0x18d6ecu: goto label_18d6ec;
        default: break;
    }

    ctx->pc = 0x18d640u;

label_18d640:
    // 0x18d640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18d640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18d644:
    // 0x18d644: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18d644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18d648:
    // 0x18d648: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x18d648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_18d64c:
    // 0x18d64c: 0xc061a2e  jal         func_1868B8
label_18d650:
    if (ctx->pc == 0x18D650u) {
        ctx->pc = 0x18D650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D64Cu;
        // 0x18d650: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D654u;
        goto label_18d654;
    }
    ctx->pc = 0x18D64Cu;
    SET_GPR_U32(ctx, 31, 0x18D654u);
    ctx->pc = 0x18D650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D64Cu;
    // 0x18d650: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868B8u, 0x18D64Cu, 0x18D654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D654u;
label_18d654:
    // 0x18d654: 0x8c430060  lw          $v1, 0x60($v0)
    ctx->pc = 0x18d654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_18d658:
    // 0x18d658: 0x8c440064  lw          $a0, 0x64($v0)
    ctx->pc = 0x18d658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_18d65c:
    // 0x18d65c: 0x8c6504c0  lw          $a1, 0x4C0($v1)
    ctx->pc = 0x18d65cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1216)));
label_18d660:
    // 0x18d660: 0x8c820450  lw          $v0, 0x450($a0)
    ctx->pc = 0x18d660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1104)));
label_18d664:
    // 0x18d664: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
label_18d668:
    if (ctx->pc == 0x18D668u) {
        ctx->pc = 0x18D66Cu;
        goto label_18d66c;
    }
    ctx->pc = 0x18D664u;
    {
        const bool branch_taken_0x18d664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x18d664) {
            ctx->pc = 0x18D680u;
            goto label_18d680;
        }
    }
    ctx->pc = 0x18D66Cu;
label_18d66c:
    // 0x18d66c: 0xc061a2a  jal         func_1868A8
label_18d670:
    if (ctx->pc == 0x18D670u) {
        ctx->pc = 0x18D670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D66Cu;
        // 0x18d670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D674u;
        goto label_18d674;
    }
    ctx->pc = 0x18D66Cu;
    SET_GPR_U32(ctx, 31, 0x18D674u);
    ctx->pc = 0x18D670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D66Cu;
    // 0x18d670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868A8u, 0x18D66Cu, 0x18D674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D674u;
label_18d674:
    // 0x18d674: 0x8c430450  lw          $v1, 0x450($v0)
    ctx->pc = 0x18d674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
label_18d678:
    // 0x18d678: 0x8c620fec  lw          $v0, 0xFEC($v1)
    ctx->pc = 0x18d678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4076)));
label_18d67c:
    // 0x18d67c: 0xac4000b4  sw          $zero, 0xB4($v0)
    ctx->pc = 0x18d67cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 0));
label_18d680:
    // 0x18d680: 0xc061a2a  jal         func_1868A8
label_18d684:
    if (ctx->pc == 0x18D684u) {
        ctx->pc = 0x18D684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D680u;
        // 0x18d684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D688u;
        goto label_18d688;
    }
    ctx->pc = 0x18D680u;
    SET_GPR_U32(ctx, 31, 0x18D688u);
    ctx->pc = 0x18D684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D680u;
    // 0x18d684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868A8u, 0x18D680u, 0x18D688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D688u;
label_18d688:
    // 0x18d688: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x18d688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18d68c:
    // 0x18d68c: 0xc071154  jal         func_1C4550
label_18d690:
    if (ctx->pc == 0x18D690u) {
        ctx->pc = 0x18D690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D68Cu;
        // 0x18d690: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D694u;
        goto label_18d694;
    }
    ctx->pc = 0x18D68Cu;
    SET_GPR_U32(ctx, 31, 0x18D694u);
    ctx->pc = 0x18D690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D68Cu;
    // 0x18d690: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4550u, 0x18D68Cu, 0x18D694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D694u;
label_18d694:
    // 0x18d694: 0xc061a16  jal         func_186858
label_18d698:
    if (ctx->pc == 0x18D698u) {
        ctx->pc = 0x18D698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D694u;
        // 0x18d698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D69Cu;
        goto label_18d69c;
    }
    ctx->pc = 0x18D694u;
    SET_GPR_U32(ctx, 31, 0x18D69Cu);
    ctx->pc = 0x18D698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D694u;
    // 0x18d698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18D694u, 0x18D69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D69Cu;
label_18d69c:
    // 0x18d69c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18d6a0:
    // 0x18d6a0: 0xc061a16  jal         func_186858
label_18d6a4:
    if (ctx->pc == 0x18D6A4u) {
        ctx->pc = 0x18D6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D6A0u;
        // 0x18d6a4: 0xac4000b0  sw          $zero, 0xB0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D6A8u;
        goto label_18d6a8;
    }
    ctx->pc = 0x18D6A0u;
    SET_GPR_U32(ctx, 31, 0x18D6A8u);
    ctx->pc = 0x18D6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D6A0u;
    // 0x18d6a4: 0xac4000b0  sw          $zero, 0xB0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18D6A0u, 0x18D6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D6A8u;
label_18d6a8:
    // 0x18d6a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18d6ac:
    // 0x18d6ac: 0xc061a16  jal         func_186858
label_18d6b0:
    if (ctx->pc == 0x18D6B0u) {
        ctx->pc = 0x18D6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D6ACu;
        // 0x18d6b0: 0xac4000b4  sw          $zero, 0xB4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D6B4u;
        goto label_18d6b4;
    }
    ctx->pc = 0x18D6ACu;
    SET_GPR_U32(ctx, 31, 0x18D6B4u);
    ctx->pc = 0x18D6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D6ACu;
    // 0x18d6b0: 0xac4000b4  sw          $zero, 0xB4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18D6ACu, 0x18D6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D6B4u;
label_18d6b4:
    // 0x18d6b4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x18d6b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_18d6b8:
    // 0x18d6b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18d6b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d6bc:
    // 0x18d6bc: 0x0  nop
    ctx->pc = 0x18d6bcu;
    // NOP
label_18d6c0:
    // 0x18d6c0: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x18d6c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_18d6c4:
    // 0x18d6c4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x18d6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18d6c8:
    // 0x18d6c8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_18d6cc:
    if (ctx->pc == 0x18D6CCu) {
        ctx->pc = 0x18D6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D6C8u;
        // 0x18d6cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D6D0u;
        goto label_18d6d0;
    }
    ctx->pc = 0x18D6C8u;
    {
        const bool branch_taken_0x18d6c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D6C8u;
        // 0x18d6cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d6c8) {
            ctx->pc = 0x18D6E4u;
            goto label_18d6e4;
        }
    }
    ctx->pc = 0x18D6D0u;
label_18d6d0:
    // 0x18d6d0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x18d6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18d6d4:
    // 0x18d6d4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x18d6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_18d6d8:
    // 0x18d6d8: 0x40f809  jalr        $v0
label_18d6dc:
    if (ctx->pc == 0x18D6DCu) {
        ctx->pc = 0x18D6E0u;
        goto label_18d6e0;
    }
    ctx->pc = 0x18D6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18D6E0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D6D8u, 0x18D6E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18D6E0u;
label_18d6e0:
    // 0x18d6e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18d6e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18d6e4:
    // 0x18d6e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x18d6e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18d6e8:
    // 0x18d6e8: 0x3e00008  jr          $ra
label_18d6ec:
    if (ctx->pc == 0x18D6ECu) {
        ctx->pc = 0x18D6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D6E8u;
        // 0x18d6ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D6F0u;
        goto label_fallthrough_0x18d6e8;
    }
    ctx->pc = 0x18D6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D6E8u;
        // 0x18d6ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D6E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18d6e8:
    ctx->pc = 0x18D6F0u;
}
