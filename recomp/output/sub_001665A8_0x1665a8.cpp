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

// Function: sub_001665A8
// Address: 0x1665a8 - 0x166638
void sub_001665A8_0x1665a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001665A8_0x1665a8");
#endif

    switch (ctx->pc) {
        case 0x1665a8u: goto label_1665a8;
        case 0x1665acu: goto label_1665ac;
        case 0x1665b0u: goto label_1665b0;
        case 0x1665b4u: goto label_1665b4;
        case 0x1665b8u: goto label_1665b8;
        case 0x1665bcu: goto label_1665bc;
        case 0x1665c0u: goto label_1665c0;
        case 0x1665c4u: goto label_1665c4;
        case 0x1665c8u: goto label_1665c8;
        case 0x1665ccu: goto label_1665cc;
        case 0x1665d0u: goto label_1665d0;
        case 0x1665d4u: goto label_1665d4;
        case 0x1665d8u: goto label_1665d8;
        case 0x1665dcu: goto label_1665dc;
        case 0x1665e0u: goto label_1665e0;
        case 0x1665e4u: goto label_1665e4;
        case 0x1665e8u: goto label_1665e8;
        case 0x1665ecu: goto label_1665ec;
        case 0x1665f0u: goto label_1665f0;
        case 0x1665f4u: goto label_1665f4;
        case 0x1665f8u: goto label_1665f8;
        case 0x1665fcu: goto label_1665fc;
        case 0x166600u: goto label_166600;
        case 0x166604u: goto label_166604;
        case 0x166608u: goto label_166608;
        case 0x16660cu: goto label_16660c;
        case 0x166610u: goto label_166610;
        case 0x166614u: goto label_166614;
        case 0x166618u: goto label_166618;
        case 0x16661cu: goto label_16661c;
        case 0x166620u: goto label_166620;
        case 0x166624u: goto label_166624;
        case 0x166628u: goto label_166628;
        case 0x16662cu: goto label_16662c;
        case 0x166630u: goto label_166630;
        case 0x166634u: goto label_166634;
        default: break;
    }

    ctx->pc = 0x1665a8u;

label_1665a8:
    // 0x1665a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1665a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1665ac:
    // 0x1665ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1665acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1665b0:
    // 0x1665b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1665b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1665b4:
    // 0x1665b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1665b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1665b8:
    // 0x1665b8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1665b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1665bc:
    // 0x1665bc: 0xc04f230  jal         func_13C8C0
label_1665c0:
    if (ctx->pc == 0x1665C0u) {
        ctx->pc = 0x1665C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1665BCu;
        // 0x1665c0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1665C4u;
        goto label_1665c4;
    }
    ctx->pc = 0x1665BCu;
    SET_GPR_U32(ctx, 31, 0x1665C4u);
    ctx->pc = 0x1665C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1665BCu;
    // 0x1665c0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C8C0u, 0x1665BCu, 0x1665C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1665C4u;
label_1665c4:
    // 0x1665c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1665c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1665c8:
    // 0x1665c8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1665c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1665cc:
    // 0x1665cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1665ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1665d0:
    // 0x1665d0: 0xc04f33e  jal         func_13CCF8
label_1665d4:
    if (ctx->pc == 0x1665D4u) {
        ctx->pc = 0x1665D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1665D0u;
        // 0x1665d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1665D8u;
        goto label_1665d8;
    }
    ctx->pc = 0x1665D0u;
    SET_GPR_U32(ctx, 31, 0x1665D8u);
    ctx->pc = 0x1665D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1665D0u;
    // 0x1665d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCF8u, 0x1665D0u, 0x1665D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1665D8u;
label_1665d8:
    // 0x1665d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1665d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1665dc:
    // 0x1665dc: 0xc04f0b6  jal         func_13C2D8
label_1665e0:
    if (ctx->pc == 0x1665E0u) {
        ctx->pc = 0x1665E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1665DCu;
        // 0x1665e0: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1665E4u;
        goto label_1665e4;
    }
    ctx->pc = 0x1665DCu;
    SET_GPR_U32(ctx, 31, 0x1665E4u);
    ctx->pc = 0x1665E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1665DCu;
    // 0x1665e0: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x1665DCu, 0x1665E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1665E4u;
label_1665e4:
    // 0x1665e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1665e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1665e8:
    // 0x1665e8: 0x8e2502e0  lw          $a1, 0x2E0($s1)
    ctx->pc = 0x1665e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
label_1665ec:
    // 0x1665ec: 0xc0461e8  jal         func_1187A0
label_1665f0:
    if (ctx->pc == 0x1665F0u) {
        ctx->pc = 0x1665F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1665ECu;
        // 0x1665f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1665F4u;
        goto label_1665f4;
    }
    ctx->pc = 0x1665ECu;
    SET_GPR_U32(ctx, 31, 0x1665F4u);
    ctx->pc = 0x1665F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1665ECu;
    // 0x1665f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A0u, 0x1665ECu, 0x1665F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1665F4u;
label_1665f4:
    // 0x1665f4: 0x8e2503bc  lw          $a1, 0x3BC($s1)
    ctx->pc = 0x1665f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 956)));
label_1665f8:
    // 0x1665f8: 0xc046256  jal         func_118958
label_1665fc:
    if (ctx->pc == 0x1665FCu) {
        ctx->pc = 0x1665FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1665F8u;
        // 0x1665fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166600u;
        goto label_166600;
    }
    ctx->pc = 0x1665F8u;
    SET_GPR_U32(ctx, 31, 0x166600u);
    ctx->pc = 0x1665FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1665F8u;
    // 0x1665fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118958u, 0x1665F8u, 0x166600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166600u;
label_166600:
    // 0x166600: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x166600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_166604:
    // 0x166604: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x166604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_166608:
    // 0x166608: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x166608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16660c:
    // 0x16660c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x16660cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_166610:
    // 0x166610: 0x40f809  jalr        $v0
label_166614:
    if (ctx->pc == 0x166614u) {
        ctx->pc = 0x166614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166610u;
        // 0x166614: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166618u;
        goto label_166618;
    }
    ctx->pc = 0x166610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x166618u);
        ctx->pc = 0x166614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166610u;
        // 0x166614: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166610u, 0x166618u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166618u;
label_166618:
    // 0x166618: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x166618u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16661c:
    // 0x16661c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16661cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_166620:
    // 0x166620: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x166620u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_166624:
    // 0x166624: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x166624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_166628:
    // 0x166628: 0x3e00008  jr          $ra
label_16662c:
    if (ctx->pc == 0x16662Cu) {
        ctx->pc = 0x16662Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166628u;
        // 0x16662c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166630u;
        goto label_166630;
    }
    ctx->pc = 0x166628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16662Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166628u;
        // 0x16662c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166630u;
label_166630:
    // 0x166630: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x166630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_166634:
    // 0x166634: 0x0  nop
    ctx->pc = 0x166634u;
    // NOP
    ctx->pc = 0x166638u;
}
