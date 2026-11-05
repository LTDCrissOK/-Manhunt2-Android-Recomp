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

// Function: sub_00188888
// Address: 0x188888 - 0x188908
void sub_00188888_0x188888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188888_0x188888");
#endif

    switch (ctx->pc) {
        case 0x188888u: goto label_188888;
        case 0x18888cu: goto label_18888c;
        case 0x188890u: goto label_188890;
        case 0x188894u: goto label_188894;
        case 0x188898u: goto label_188898;
        case 0x18889cu: goto label_18889c;
        case 0x1888a0u: goto label_1888a0;
        case 0x1888a4u: goto label_1888a4;
        case 0x1888a8u: goto label_1888a8;
        case 0x1888acu: goto label_1888ac;
        case 0x1888b0u: goto label_1888b0;
        case 0x1888b4u: goto label_1888b4;
        case 0x1888b8u: goto label_1888b8;
        case 0x1888bcu: goto label_1888bc;
        case 0x1888c0u: goto label_1888c0;
        case 0x1888c4u: goto label_1888c4;
        case 0x1888c8u: goto label_1888c8;
        case 0x1888ccu: goto label_1888cc;
        case 0x1888d0u: goto label_1888d0;
        case 0x1888d4u: goto label_1888d4;
        case 0x1888d8u: goto label_1888d8;
        case 0x1888dcu: goto label_1888dc;
        case 0x1888e0u: goto label_1888e0;
        case 0x1888e4u: goto label_1888e4;
        case 0x1888e8u: goto label_1888e8;
        case 0x1888ecu: goto label_1888ec;
        case 0x1888f0u: goto label_1888f0;
        case 0x1888f4u: goto label_1888f4;
        case 0x1888f8u: goto label_1888f8;
        case 0x1888fcu: goto label_1888fc;
        case 0x188900u: goto label_188900;
        case 0x188904u: goto label_188904;
        default: break;
    }

    ctx->pc = 0x188888u;

label_188888:
    // 0x188888: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x188888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18888c:
    // 0x18888c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18888cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_188890:
    // 0x188890: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x188890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_188894:
    // 0x188894: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x188894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_188898:
    // 0x188898: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x188898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_18889c:
    // 0x18889c: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_1888a0:
    if (ctx->pc == 0x1888A0u) {
        ctx->pc = 0x1888A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18889Cu;
        // 0x1888a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1888A4u;
        goto label_1888a4;
    }
    ctx->pc = 0x18889Cu;
    {
        const bool branch_taken_0x18889c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18889c) {
            ctx->pc = 0x1888A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18889Cu;
            // 0x1888a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1888FCu;
            goto label_1888fc;
        }
    }
    ctx->pc = 0x1888A4u;
label_1888a4:
    // 0x1888a4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1888a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1888a8:
    // 0x1888a8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1888ac:
    if (ctx->pc == 0x1888ACu) {
        ctx->pc = 0x1888ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1888A8u;
        // 0x1888ac: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1888B0u;
        goto label_1888b0;
    }
    ctx->pc = 0x1888A8u;
    {
        const bool branch_taken_0x1888a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1888ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1888A8u;
        // 0x1888ac: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1888a8) {
            ctx->pc = 0x1888C0u;
            goto label_1888c0;
        }
    }
    ctx->pc = 0x1888B0u;
label_1888b0:
    // 0x1888b0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1888b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1888b4:
    // 0x1888b4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1888b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1888b8:
    // 0x1888b8: 0x40f809  jalr        $v0
label_1888bc:
    if (ctx->pc == 0x1888BCu) {
        ctx->pc = 0x1888C0u;
        goto label_1888c0;
    }
    ctx->pc = 0x1888B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1888C0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1888B8u, 0x1888C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1888C0u;
label_1888c0:
    // 0x1888c0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1888c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1888c4:
    // 0x1888c4: 0xc061a16  jal         func_186858
label_1888c8:
    if (ctx->pc == 0x1888C8u) {
        ctx->pc = 0x1888C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1888C4u;
        // 0x1888c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1888CCu;
        goto label_1888cc;
    }
    ctx->pc = 0x1888C4u;
    SET_GPR_U32(ctx, 31, 0x1888CCu);
    ctx->pc = 0x1888C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1888C4u;
    // 0x1888c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1888C4u, 0x1888CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1888CCu;
label_1888cc:
    // 0x1888cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1888ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1888d0:
    // 0x1888d0: 0xc06ee66  jal         func_1BB998
label_1888d4:
    if (ctx->pc == 0x1888D4u) {
        ctx->pc = 0x1888D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1888D0u;
        // 0x1888d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1888D8u;
        goto label_1888d8;
    }
    ctx->pc = 0x1888D0u;
    SET_GPR_U32(ctx, 31, 0x1888D8u);
    ctx->pc = 0x1888D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1888D0u;
    // 0x1888d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB998u, 0x1888D0u, 0x1888D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1888D8u;
label_1888d8:
    // 0x1888d8: 0xc061a16  jal         func_186858
label_1888dc:
    if (ctx->pc == 0x1888DCu) {
        ctx->pc = 0x1888DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1888D8u;
        // 0x1888dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1888E0u;
        goto label_1888e0;
    }
    ctx->pc = 0x1888D8u;
    SET_GPR_U32(ctx, 31, 0x1888E0u);
    ctx->pc = 0x1888DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1888D8u;
    // 0x1888dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1888D8u, 0x1888E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1888E0u;
label_1888e0:
    // 0x1888e0: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1888e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_1888e4:
    // 0x1888e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1888e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1888e8:
    // 0x1888e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1888e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1888ec:
    // 0x1888ec: 0xc061a16  jal         func_186858
label_1888f0:
    if (ctx->pc == 0x1888F0u) {
        ctx->pc = 0x1888F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1888ECu;
        // 0x1888f0: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1888F4u;
        goto label_1888f4;
    }
    ctx->pc = 0x1888ECu;
    SET_GPR_U32(ctx, 31, 0x1888F4u);
    ctx->pc = 0x1888F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1888ECu;
    // 0x1888f0: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1888ECu, 0x1888F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1888F4u;
label_1888f4:
    // 0x1888f4: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x1888f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_1888f8:
    // 0x1888f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1888f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1888fc:
    // 0x1888fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1888fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_188900:
    // 0x188900: 0x3e00008  jr          $ra
label_188904:
    if (ctx->pc == 0x188904u) {
        ctx->pc = 0x188904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188900u;
        // 0x188904: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188908u;
        goto label_fallthrough_0x188900;
    }
    ctx->pc = 0x188900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188900u;
        // 0x188904: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x188900:
    ctx->pc = 0x188908u;
}
