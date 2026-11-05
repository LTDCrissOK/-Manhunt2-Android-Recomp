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

// Function: sub_0024A5B0
// Address: 0x24a5b0 - 0x24a640
void sub_0024A5B0_0x24a5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A5B0_0x24a5b0");
#endif

    switch (ctx->pc) {
        case 0x24a5b0u: goto label_24a5b0;
        case 0x24a5b4u: goto label_24a5b4;
        case 0x24a5b8u: goto label_24a5b8;
        case 0x24a5bcu: goto label_24a5bc;
        case 0x24a5c0u: goto label_24a5c0;
        case 0x24a5c4u: goto label_24a5c4;
        case 0x24a5c8u: goto label_24a5c8;
        case 0x24a5ccu: goto label_24a5cc;
        case 0x24a5d0u: goto label_24a5d0;
        case 0x24a5d4u: goto label_24a5d4;
        case 0x24a5d8u: goto label_24a5d8;
        case 0x24a5dcu: goto label_24a5dc;
        case 0x24a5e0u: goto label_24a5e0;
        case 0x24a5e4u: goto label_24a5e4;
        case 0x24a5e8u: goto label_24a5e8;
        case 0x24a5ecu: goto label_24a5ec;
        case 0x24a5f0u: goto label_24a5f0;
        case 0x24a5f4u: goto label_24a5f4;
        case 0x24a5f8u: goto label_24a5f8;
        case 0x24a5fcu: goto label_24a5fc;
        case 0x24a600u: goto label_24a600;
        case 0x24a604u: goto label_24a604;
        case 0x24a608u: goto label_24a608;
        case 0x24a60cu: goto label_24a60c;
        case 0x24a610u: goto label_24a610;
        case 0x24a614u: goto label_24a614;
        case 0x24a618u: goto label_24a618;
        case 0x24a61cu: goto label_24a61c;
        case 0x24a620u: goto label_24a620;
        case 0x24a624u: goto label_24a624;
        case 0x24a628u: goto label_24a628;
        case 0x24a62cu: goto label_24a62c;
        case 0x24a630u: goto label_24a630;
        case 0x24a634u: goto label_24a634;
        case 0x24a638u: goto label_24a638;
        case 0x24a63cu: goto label_24a63c;
        default: break;
    }

    ctx->pc = 0x24a5b0u;

label_24a5b0:
    // 0x24a5b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24a5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_24a5b4:
    // 0x24a5b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24a5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_24a5b8:
    // 0x24a5b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24a5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_24a5bc:
    // 0x24a5bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24a5bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24a5c0:
    // 0x24a5c0: 0x8e020218  lw          $v0, 0x218($s0)
    ctx->pc = 0x24a5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_24a5c4:
    // 0x24a5c4: 0x8c4301cc  lw          $v1, 0x1CC($v0)
    ctx->pc = 0x24a5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 460)));
label_24a5c8:
    // 0x24a5c8: 0x60f809  jalr        $v1
label_24a5cc:
    if (ctx->pc == 0x24A5CCu) {
        ctx->pc = 0x24A5D0u;
        goto label_24a5d0;
    }
    ctx->pc = 0x24A5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x24A5D0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A5C8u, 0x24A5D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24A5D0u;
label_24a5d0:
    // 0x24a5d0: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x24a5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_24a5d4:
    // 0x24a5d4: 0x2402004a  addiu       $v0, $zero, 0x4A
    ctx->pc = 0x24a5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_24a5d8:
    // 0x24a5d8: 0x8c83014c  lw          $v1, 0x14C($a0)
    ctx->pc = 0x24a5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 332)));
label_24a5dc:
    // 0x24a5dc: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_24a5e0:
    if (ctx->pc == 0x24A5E0u) {
        ctx->pc = 0x24A5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A5DCu;
        // 0x24a5e0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A5E4u;
        goto label_24a5e4;
    }
    ctx->pc = 0x24A5DCu;
    {
        const bool branch_taken_0x24a5dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A5DCu;
        // 0x24a5e0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a5dc) {
            ctx->pc = 0x24A624u;
            goto label_24a624;
        }
    }
    ctx->pc = 0x24A5E4u;
label_24a5e4:
    // 0x24a5e4: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_24a5e8:
    if (ctx->pc == 0x24A5E8u) {
        ctx->pc = 0x24A5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A5E4u;
        // 0x24a5e8: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A5ECu;
        goto label_24a5ec;
    }
    ctx->pc = 0x24A5E4u;
    {
        const bool branch_taken_0x24a5e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A5E4u;
        // 0x24a5e8: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a5e4) {
            ctx->pc = 0x24A624u;
            goto label_24a624;
        }
    }
    ctx->pc = 0x24A5ECu;
label_24a5ec:
    // 0x24a5ec: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_24a5f0:
    if (ctx->pc == 0x24A5F0u) {
        ctx->pc = 0x24A5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A5ECu;
        // 0x24a5f0: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A5F4u;
        goto label_24a5f4;
    }
    ctx->pc = 0x24A5ECu;
    {
        const bool branch_taken_0x24a5ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A5ECu;
        // 0x24a5f0: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a5ec) {
            ctx->pc = 0x24A624u;
            goto label_24a624;
        }
    }
    ctx->pc = 0x24A5F4u;
label_24a5f4:
    // 0x24a5f4: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_24a5f8:
    if (ctx->pc == 0x24A5F8u) {
        ctx->pc = 0x24A5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A5F4u;
        // 0x24a5f8: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A5FCu;
        goto label_24a5fc;
    }
    ctx->pc = 0x24A5F4u;
    {
        const bool branch_taken_0x24a5f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A5F4u;
        // 0x24a5f8: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a5f4) {
            ctx->pc = 0x24A624u;
            goto label_24a624;
        }
    }
    ctx->pc = 0x24A5FCu;
label_24a5fc:
    // 0x24a5fc: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_24a600:
    if (ctx->pc == 0x24A600u) {
        ctx->pc = 0x24A600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A5FCu;
        // 0x24a600: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A604u;
        goto label_24a604;
    }
    ctx->pc = 0x24A5FCu;
    {
        const bool branch_taken_0x24a5fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A5FCu;
        // 0x24a600: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a5fc) {
            ctx->pc = 0x24A624u;
            goto label_24a624;
        }
    }
    ctx->pc = 0x24A604u;
label_24a604:
    // 0x24a604: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_24a608:
    if (ctx->pc == 0x24A608u) {
        ctx->pc = 0x24A608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A604u;
        // 0x24a608: 0x24020049  addiu       $v0, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A60Cu;
        goto label_24a60c;
    }
    ctx->pc = 0x24A604u;
    {
        const bool branch_taken_0x24a604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A604u;
        // 0x24a608: 0x24020049  addiu       $v0, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a604) {
            ctx->pc = 0x24A624u;
            goto label_24a624;
        }
    }
    ctx->pc = 0x24A60Cu;
label_24a60c:
    // 0x24a60c: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
label_24a610:
    if (ctx->pc == 0x24A610u) {
        ctx->pc = 0x24A610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A60Cu;
        // 0x24a610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A614u;
        goto label_24a614;
    }
    ctx->pc = 0x24A60Cu;
    {
        const bool branch_taken_0x24a60c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24a60c) {
            ctx->pc = 0x24A610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A60Cu;
            // 0x24a610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A628u;
            goto label_24a628;
        }
    }
    ctx->pc = 0x24A614u;
label_24a614:
    // 0x24a614: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_24a618:
    if (ctx->pc == 0x24A618u) {
        ctx->pc = 0x24A618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A614u;
        // 0x24a618: 0x24050046  addiu       $a1, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A61Cu;
        goto label_24a61c;
    }
    ctx->pc = 0x24A614u;
    {
        const bool branch_taken_0x24a614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A614u;
        // 0x24a618: 0x24050046  addiu       $a1, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a614) {
            ctx->pc = 0x24A624u;
            goto label_24a624;
        }
    }
    ctx->pc = 0x24A61Cu;
label_24a61c:
    // 0x24a61c: 0xc069712  jal         func_1A5C48
label_24a620:
    if (ctx->pc == 0x24A620u) {
        ctx->pc = 0x24A620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A61Cu;
        // 0x24a620: 0x2406080d  addiu       $a2, $zero, 0x80D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A624u;
        goto label_24a624;
    }
    ctx->pc = 0x24A61Cu;
    SET_GPR_U32(ctx, 31, 0x24A624u);
    ctx->pc = 0x24A620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A61Cu;
    // 0x24a620: 0x2406080d  addiu       $a2, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x24A61Cu, 0x24A624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A624u;
label_24a624:
    // 0x24a624: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24a624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24a628:
    // 0x24a628: 0xc092760  jal         func_249D80
label_24a62c:
    if (ctx->pc == 0x24A62Cu) {
        ctx->pc = 0x24A62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A628u;
        // 0x24a62c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A630u;
        goto label_24a630;
    }
    ctx->pc = 0x24A628u;
    SET_GPR_U32(ctx, 31, 0x24A630u);
    ctx->pc = 0x24A62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A628u;
    // 0x24a62c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249D80u, 0x24A628u, 0x24A630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A630u;
label_24a630:
    // 0x24a630: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24a630u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24a634:
    // 0x24a634: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24a634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_24a638:
    // 0x24a638: 0x3e00008  jr          $ra
label_24a63c:
    if (ctx->pc == 0x24A63Cu) {
        ctx->pc = 0x24A63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A638u;
        // 0x24a63c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A640u;
        goto label_fallthrough_0x24a638;
    }
    ctx->pc = 0x24A638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A638u;
        // 0x24a63c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24a638:
    ctx->pc = 0x24A640u;
}
