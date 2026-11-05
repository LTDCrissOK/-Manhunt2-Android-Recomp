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

// Function: sub_00166470
// Address: 0x166470 - 0x1664f8
void sub_00166470_0x166470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166470_0x166470");
#endif

    switch (ctx->pc) {
        case 0x166470u: goto label_166470;
        case 0x166474u: goto label_166474;
        case 0x166478u: goto label_166478;
        case 0x16647cu: goto label_16647c;
        case 0x166480u: goto label_166480;
        case 0x166484u: goto label_166484;
        case 0x166488u: goto label_166488;
        case 0x16648cu: goto label_16648c;
        case 0x166490u: goto label_166490;
        case 0x166494u: goto label_166494;
        case 0x166498u: goto label_166498;
        case 0x16649cu: goto label_16649c;
        case 0x1664a0u: goto label_1664a0;
        case 0x1664a4u: goto label_1664a4;
        case 0x1664a8u: goto label_1664a8;
        case 0x1664acu: goto label_1664ac;
        case 0x1664b0u: goto label_1664b0;
        case 0x1664b4u: goto label_1664b4;
        case 0x1664b8u: goto label_1664b8;
        case 0x1664bcu: goto label_1664bc;
        case 0x1664c0u: goto label_1664c0;
        case 0x1664c4u: goto label_1664c4;
        case 0x1664c8u: goto label_1664c8;
        case 0x1664ccu: goto label_1664cc;
        case 0x1664d0u: goto label_1664d0;
        case 0x1664d4u: goto label_1664d4;
        case 0x1664d8u: goto label_1664d8;
        case 0x1664dcu: goto label_1664dc;
        case 0x1664e0u: goto label_1664e0;
        case 0x1664e4u: goto label_1664e4;
        case 0x1664e8u: goto label_1664e8;
        case 0x1664ecu: goto label_1664ec;
        case 0x1664f0u: goto label_1664f0;
        case 0x1664f4u: goto label_1664f4;
        default: break;
    }

    ctx->pc = 0x166470u;

label_166470:
    // 0x166470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x166470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_166474:
    // 0x166474: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x166474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_166478:
    // 0x166478: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x166478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_16647c:
    // 0x16647c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16647cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_166480:
    // 0x166480: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x166480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_166484:
    // 0x166484: 0xc04f208  jal         func_13C820
label_166488:
    if (ctx->pc == 0x166488u) {
        ctx->pc = 0x166488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166484u;
        // 0x166488: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16648Cu;
        goto label_16648c;
    }
    ctx->pc = 0x166484u;
    SET_GPR_U32(ctx, 31, 0x16648Cu);
    ctx->pc = 0x166488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166484u;
    // 0x166488: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C820u, 0x166484u, 0x16648Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16648Cu;
label_16648c:
    // 0x16648c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x16648cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_166490:
    // 0x166490: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x166490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_166494:
    // 0x166494: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166498:
    // 0x166498: 0xc04f33e  jal         func_13CCF8
label_16649c:
    if (ctx->pc == 0x16649Cu) {
        ctx->pc = 0x16649Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166498u;
        // 0x16649c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1664A0u;
        goto label_1664a0;
    }
    ctx->pc = 0x166498u;
    SET_GPR_U32(ctx, 31, 0x1664A0u);
    ctx->pc = 0x16649Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166498u;
    // 0x16649c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCF8u, 0x166498u, 0x1664A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1664A0u;
label_1664a0:
    // 0x1664a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1664a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1664a4:
    // 0x1664a4: 0xc04f0b6  jal         func_13C2D8
label_1664a8:
    if (ctx->pc == 0x1664A8u) {
        ctx->pc = 0x1664A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1664A4u;
        // 0x1664a8: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1664ACu;
        goto label_1664ac;
    }
    ctx->pc = 0x1664A4u;
    SET_GPR_U32(ctx, 31, 0x1664ACu);
    ctx->pc = 0x1664A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1664A4u;
    // 0x1664a8: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x1664A4u, 0x1664ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1664ACu;
label_1664ac:
    // 0x1664ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1664acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1664b0:
    // 0x1664b0: 0x8e2502e4  lw          $a1, 0x2E4($s1)
    ctx->pc = 0x1664b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 740)));
label_1664b4:
    // 0x1664b4: 0xc045fea  jal         func_117FA8
label_1664b8:
    if (ctx->pc == 0x1664B8u) {
        ctx->pc = 0x1664B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1664B4u;
        // 0x1664b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1664BCu;
        goto label_1664bc;
    }
    ctx->pc = 0x1664B4u;
    SET_GPR_U32(ctx, 31, 0x1664BCu);
    ctx->pc = 0x1664B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1664B4u;
    // 0x1664b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x1664B4u, 0x1664BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1664BCu;
label_1664bc:
    // 0x1664bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1664bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1664c0:
    // 0x1664c0: 0xc046058  jal         func_118160
label_1664c4:
    if (ctx->pc == 0x1664C4u) {
        ctx->pc = 0x1664C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1664C0u;
        // 0x1664c4: 0x262502f0  addiu       $a1, $s1, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1664C8u;
        goto label_1664c8;
    }
    ctx->pc = 0x1664C0u;
    SET_GPR_U32(ctx, 31, 0x1664C8u);
    ctx->pc = 0x1664C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1664C0u;
    // 0x1664c4: 0x262502f0  addiu       $a1, $s1, 0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118160u, 0x1664C0u, 0x1664C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1664C8u;
label_1664c8:
    // 0x1664c8: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1664c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1664cc:
    // 0x1664cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1664ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1664d0:
    // 0x1664d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1664d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1664d4:
    // 0x1664d4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1664d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1664d8:
    // 0x1664d8: 0x40f809  jalr        $v0
label_1664dc:
    if (ctx->pc == 0x1664DCu) {
        ctx->pc = 0x1664DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1664D8u;
        // 0x1664dc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1664E0u;
        goto label_1664e0;
    }
    ctx->pc = 0x1664D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1664E0u);
        ctx->pc = 0x1664DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1664D8u;
        // 0x1664dc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1664D8u, 0x1664E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1664E0u;
label_1664e0:
    // 0x1664e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1664e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1664e4:
    // 0x1664e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1664e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1664e8:
    // 0x1664e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1664e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1664ec:
    // 0x1664ec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1664ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1664f0:
    // 0x1664f0: 0x3e00008  jr          $ra
label_1664f4:
    if (ctx->pc == 0x1664F4u) {
        ctx->pc = 0x1664F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1664F0u;
        // 0x1664f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1664F8u;
        goto label_fallthrough_0x1664f0;
    }
    ctx->pc = 0x1664F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1664F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1664F0u;
        // 0x1664f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1664F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1664f0:
    ctx->pc = 0x1664F8u;
}
