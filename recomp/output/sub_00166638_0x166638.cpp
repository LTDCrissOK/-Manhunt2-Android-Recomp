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

// Function: sub_00166638
// Address: 0x166638 - 0x1666d0
void sub_00166638_0x166638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166638_0x166638");
#endif

    switch (ctx->pc) {
        case 0x166638u: goto label_166638;
        case 0x16663cu: goto label_16663c;
        case 0x166640u: goto label_166640;
        case 0x166644u: goto label_166644;
        case 0x166648u: goto label_166648;
        case 0x16664cu: goto label_16664c;
        case 0x166650u: goto label_166650;
        case 0x166654u: goto label_166654;
        case 0x166658u: goto label_166658;
        case 0x16665cu: goto label_16665c;
        case 0x166660u: goto label_166660;
        case 0x166664u: goto label_166664;
        case 0x166668u: goto label_166668;
        case 0x16666cu: goto label_16666c;
        case 0x166670u: goto label_166670;
        case 0x166674u: goto label_166674;
        case 0x166678u: goto label_166678;
        case 0x16667cu: goto label_16667c;
        case 0x166680u: goto label_166680;
        case 0x166684u: goto label_166684;
        case 0x166688u: goto label_166688;
        case 0x16668cu: goto label_16668c;
        case 0x166690u: goto label_166690;
        case 0x166694u: goto label_166694;
        case 0x166698u: goto label_166698;
        case 0x16669cu: goto label_16669c;
        case 0x1666a0u: goto label_1666a0;
        case 0x1666a4u: goto label_1666a4;
        case 0x1666a8u: goto label_1666a8;
        case 0x1666acu: goto label_1666ac;
        case 0x1666b0u: goto label_1666b0;
        case 0x1666b4u: goto label_1666b4;
        case 0x1666b8u: goto label_1666b8;
        case 0x1666bcu: goto label_1666bc;
        case 0x1666c0u: goto label_1666c0;
        case 0x1666c4u: goto label_1666c4;
        case 0x1666c8u: goto label_1666c8;
        case 0x1666ccu: goto label_1666cc;
        default: break;
    }

    ctx->pc = 0x166638u;

label_166638:
    // 0x166638: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x166638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16663c:
    // 0x16663c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16663cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_166640:
    // 0x166640: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x166640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_166644:
    // 0x166644: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x166644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_166648:
    // 0x166648: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x166648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_16664c:
    // 0x16664c: 0xc04f244  jal         func_13C910
label_166650:
    if (ctx->pc == 0x166650u) {
        ctx->pc = 0x166650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16664Cu;
        // 0x166650: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166654u;
        goto label_166654;
    }
    ctx->pc = 0x16664Cu;
    SET_GPR_U32(ctx, 31, 0x166654u);
    ctx->pc = 0x166650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16664Cu;
    // 0x166650: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C910u, 0x16664Cu, 0x166654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166654u;
label_166654:
    // 0x166654: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x166654u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_166658:
    // 0x166658: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x166658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_16665c:
    // 0x16665c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16665cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166660:
    // 0x166660: 0xc04f33e  jal         func_13CCF8
label_166664:
    if (ctx->pc == 0x166664u) {
        ctx->pc = 0x166664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166660u;
        // 0x166664: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166668u;
        goto label_166668;
    }
    ctx->pc = 0x166660u;
    SET_GPR_U32(ctx, 31, 0x166668u);
    ctx->pc = 0x166664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166660u;
    // 0x166664: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCF8u, 0x166660u, 0x166668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166668u;
label_166668:
    // 0x166668: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16666c:
    // 0x16666c: 0xc04f0b6  jal         func_13C2D8
label_166670:
    if (ctx->pc == 0x166670u) {
        ctx->pc = 0x166670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16666Cu;
        // 0x166670: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166674u;
        goto label_166674;
    }
    ctx->pc = 0x16666Cu;
    SET_GPR_U32(ctx, 31, 0x166674u);
    ctx->pc = 0x166670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16666Cu;
    // 0x166670: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x16666Cu, 0x166674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166674u;
label_166674:
    // 0x166674: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x166674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_166678:
    // 0x166678: 0x8e2502e0  lw          $a1, 0x2E0($s1)
    ctx->pc = 0x166678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
label_16667c:
    // 0x16667c: 0xc0461e8  jal         func_1187A0
label_166680:
    if (ctx->pc == 0x166680u) {
        ctx->pc = 0x166680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16667Cu;
        // 0x166680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166684u;
        goto label_166684;
    }
    ctx->pc = 0x16667Cu;
    SET_GPR_U32(ctx, 31, 0x166684u);
    ctx->pc = 0x166680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16667Cu;
    // 0x166680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A0u, 0x16667Cu, 0x166684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166684u;
label_166684:
    // 0x166684: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_166688:
    // 0x166688: 0xc046226  jal         func_118898
label_16668c:
    if (ctx->pc == 0x16668Cu) {
        ctx->pc = 0x16668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166688u;
        // 0x16668c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166690u;
        goto label_166690;
    }
    ctx->pc = 0x166688u;
    SET_GPR_U32(ctx, 31, 0x166690u);
    ctx->pc = 0x16668Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166688u;
    // 0x16668c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118898u, 0x166688u, 0x166690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166690u;
label_166690:
    // 0x166690: 0x8e2503bc  lw          $a1, 0x3BC($s1)
    ctx->pc = 0x166690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 956)));
label_166694:
    // 0x166694: 0xc046256  jal         func_118958
label_166698:
    if (ctx->pc == 0x166698u) {
        ctx->pc = 0x166698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166694u;
        // 0x166698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16669Cu;
        goto label_16669c;
    }
    ctx->pc = 0x166694u;
    SET_GPR_U32(ctx, 31, 0x16669Cu);
    ctx->pc = 0x166698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166694u;
    // 0x166698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118958u, 0x166694u, 0x16669Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16669Cu;
label_16669c:
    // 0x16669c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x16669cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1666a0:
    // 0x1666a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1666a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1666a4:
    // 0x1666a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1666a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1666a8:
    // 0x1666a8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1666a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1666ac:
    // 0x1666ac: 0x40f809  jalr        $v0
label_1666b0:
    if (ctx->pc == 0x1666B0u) {
        ctx->pc = 0x1666B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1666ACu;
        // 0x1666b0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1666B4u;
        goto label_1666b4;
    }
    ctx->pc = 0x1666ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1666B4u);
        ctx->pc = 0x1666B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1666ACu;
        // 0x1666b0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1666ACu, 0x1666B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1666B4u;
label_1666b4:
    // 0x1666b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1666b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1666b8:
    // 0x1666b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1666b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1666bc:
    // 0x1666bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1666bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1666c0:
    // 0x1666c0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1666c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1666c4:
    // 0x1666c4: 0x3e00008  jr          $ra
label_1666c8:
    if (ctx->pc == 0x1666C8u) {
        ctx->pc = 0x1666C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1666C4u;
        // 0x1666c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1666CCu;
        goto label_1666cc;
    }
    ctx->pc = 0x1666C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1666C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1666C4u;
        // 0x1666c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1666C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1666CCu;
label_1666cc:
    // 0x1666cc: 0x0  nop
    ctx->pc = 0x1666ccu;
    // NOP
    ctx->pc = 0x1666d0u;
}
