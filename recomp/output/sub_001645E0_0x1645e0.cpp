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

// Function: sub_001645E0
// Address: 0x1645e0 - 0x164670
void sub_001645E0_0x1645e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001645E0_0x1645e0");
#endif

    switch (ctx->pc) {
        case 0x1645f4u: goto label_1645f4;
        case 0x1645fcu: goto label_1645fc;
        case 0x164604u: goto label_164604;
        case 0x16460cu: goto label_16460c;
        case 0x164614u: goto label_164614;
        case 0x16461cu: goto label_16461c;
        case 0x164624u: goto label_164624;
        case 0x16465cu: goto label_16465c;
        default: break;
    }

    ctx->pc = 0x1645e0u;

    // 0x1645e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1645e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1645e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1645e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1645e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1645e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1645ec: 0xc05922c  jal         func_1648B0
    ctx->pc = 0x1645ECu;
    SET_GPR_U32(ctx, 31, 0x1645F4u);
    ctx->pc = 0x1645F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1645ECu;
    // 0x1645f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1648B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1648B0u, 0x1645ECu, 0x1645F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1645F4u;
label_1645f4:
    // 0x1645f4: 0xc05924e  jal         func_164938
    ctx->pc = 0x1645F4u;
    SET_GPR_U32(ctx, 31, 0x1645FCu);
    ctx->pc = 0x1645F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1645F4u;
    // 0x1645f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164938u, 0x1645F4u, 0x1645FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1645FCu;
label_1645fc:
    // 0x1645fc: 0xc0592ca  jal         func_164B28
    ctx->pc = 0x1645FCu;
    SET_GPR_U32(ctx, 31, 0x164604u);
    ctx->pc = 0x164600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1645FCu;
    // 0x164600: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164B28u, 0x1645FCu, 0x164604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164604u;
label_164604:
    // 0x164604: 0xc059302  jal         func_164C08
    ctx->pc = 0x164604u;
    SET_GPR_U32(ctx, 31, 0x16460Cu);
    ctx->pc = 0x164608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164604u;
    // 0x164608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164C08u, 0x164604u, 0x16460Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16460Cu;
label_16460c:
    // 0x16460c: 0xc04f04c  jal         func_13C130
    ctx->pc = 0x16460Cu;
    SET_GPR_U32(ctx, 31, 0x164614u);
    ctx->pc = 0x164610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16460Cu;
    // 0x164610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C130u, 0x16460Cu, 0x164614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164614u;
label_164614:
    // 0x164614: 0xc04f06e  jal         func_13C1B8
    ctx->pc = 0x164614u;
    SET_GPR_U32(ctx, 31, 0x16461Cu);
    ctx->pc = 0x164618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164614u;
    // 0x164618: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C1B8u, 0x164614u, 0x16461Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16461Cu;
label_16461c:
    // 0x16461c: 0xc059b4e  jal         func_166D38
    ctx->pc = 0x16461Cu;
    SET_GPR_U32(ctx, 31, 0x164624u);
    ctx->pc = 0x164620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16461Cu;
    // 0x164620: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166D38u, 0x16461Cu, 0x164624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164624u;
label_164624:
    // 0x164624: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x164624u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x164628: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x164628u;
    {
        const bool branch_taken_0x164628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164628u;
        // 0x16462c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164628) {
            ctx->pc = 0x16465Cu;
            goto label_16465c;
        }
    }
    ctx->pc = 0x164630u;
    // 0x164630: 0x8e0302e0  lw          $v1, 0x2E0($s0)
    ctx->pc = 0x164630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
    // 0x164634: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x164634u;
    {
        const bool branch_taken_0x164634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x164634) {
            ctx->pc = 0x164638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164634u;
            // 0x164638: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164660u;
            goto label_164660;
        }
    }
    ctx->pc = 0x16463Cu;
    // 0x16463c: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x16463cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x164640: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x164640u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x164644: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x164644u;
    {
        const bool branch_taken_0x164644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164644) {
            ctx->pc = 0x164648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164644u;
            // 0x164648: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164660u;
            goto label_164660;
        }
    }
    ctx->pc = 0x16464Cu;
    // 0x16464c: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16464Cu;
    {
        const bool branch_taken_0x16464c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x16464c) {
            ctx->pc = 0x164650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16464Cu;
            // 0x164650: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164660u;
            goto label_164660;
        }
    }
    ctx->pc = 0x164654u;
    // 0x164654: 0xc0599da  jal         func_166768
    ctx->pc = 0x164654u;
    SET_GPR_U32(ctx, 31, 0x16465Cu);
    ctx->pc = 0x164658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164654u;
    // 0x164658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166768u, 0x164654u, 0x16465Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16465Cu;
label_16465c:
    // 0x16465c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16465cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_164660:
    // 0x164660: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x164660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x164664: 0x3e00008  jr          $ra
    ctx->pc = 0x164664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164664u;
        // 0x164668: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16466Cu;
    // 0x16466c: 0x0  nop
    ctx->pc = 0x16466cu;
    // NOP
    ctx->pc = 0x164670u;
}
