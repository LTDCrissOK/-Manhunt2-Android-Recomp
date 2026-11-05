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

// Function: sub_001664F8
// Address: 0x1664f8 - 0x1665a8
void sub_001664F8_0x1664f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001664F8_0x1664f8");
#endif

    switch (ctx->pc) {
        case 0x1664f8u: goto label_1664f8;
        case 0x1664fcu: goto label_1664fc;
        case 0x166500u: goto label_166500;
        case 0x166504u: goto label_166504;
        case 0x166508u: goto label_166508;
        case 0x16650cu: goto label_16650c;
        case 0x166510u: goto label_166510;
        case 0x166514u: goto label_166514;
        case 0x166518u: goto label_166518;
        case 0x16651cu: goto label_16651c;
        case 0x166520u: goto label_166520;
        case 0x166524u: goto label_166524;
        case 0x166528u: goto label_166528;
        case 0x16652cu: goto label_16652c;
        case 0x166530u: goto label_166530;
        case 0x166534u: goto label_166534;
        case 0x166538u: goto label_166538;
        case 0x16653cu: goto label_16653c;
        case 0x166540u: goto label_166540;
        case 0x166544u: goto label_166544;
        case 0x166548u: goto label_166548;
        case 0x16654cu: goto label_16654c;
        case 0x166550u: goto label_166550;
        case 0x166554u: goto label_166554;
        case 0x166558u: goto label_166558;
        case 0x16655cu: goto label_16655c;
        case 0x166560u: goto label_166560;
        case 0x166564u: goto label_166564;
        case 0x166568u: goto label_166568;
        case 0x16656cu: goto label_16656c;
        case 0x166570u: goto label_166570;
        case 0x166574u: goto label_166574;
        case 0x166578u: goto label_166578;
        case 0x16657cu: goto label_16657c;
        case 0x166580u: goto label_166580;
        case 0x166584u: goto label_166584;
        case 0x166588u: goto label_166588;
        case 0x16658cu: goto label_16658c;
        case 0x166590u: goto label_166590;
        case 0x166594u: goto label_166594;
        case 0x166598u: goto label_166598;
        case 0x16659cu: goto label_16659c;
        case 0x1665a0u: goto label_1665a0;
        case 0x1665a4u: goto label_1665a4;
        default: break;
    }

    ctx->pc = 0x1664f8u;

label_1664f8:
    // 0x1664f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1664f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1664fc:
    // 0x1664fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1664fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_166500:
    // 0x166500: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x166500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_166504:
    // 0x166504: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x166504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_166508:
    // 0x166508: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x166508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_16650c:
    // 0x16650c: 0xc04f21c  jal         func_13C870
label_166510:
    if (ctx->pc == 0x166510u) {
        ctx->pc = 0x166510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16650Cu;
        // 0x166510: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166514u;
        goto label_166514;
    }
    ctx->pc = 0x16650Cu;
    SET_GPR_U32(ctx, 31, 0x166514u);
    ctx->pc = 0x166510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16650Cu;
    // 0x166510: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C870u, 0x16650Cu, 0x166514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166514u;
label_166514:
    // 0x166514: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x166514u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_166518:
    // 0x166518: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x166518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16651c:
    // 0x16651c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16651cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_166520:
    // 0x166520: 0xc04f33e  jal         func_13CCF8
label_166524:
    if (ctx->pc == 0x166524u) {
        ctx->pc = 0x166524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166520u;
        // 0x166524: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166528u;
        goto label_166528;
    }
    ctx->pc = 0x166520u;
    SET_GPR_U32(ctx, 31, 0x166528u);
    ctx->pc = 0x166524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166520u;
    // 0x166524: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCF8u, 0x166520u, 0x166528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166528u;
label_166528:
    // 0x166528: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x166528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16652c:
    // 0x16652c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16652cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_166530:
    // 0x166530: 0xae0203a8  sw          $v0, 0x3A8($s0)
    ctx->pc = 0x166530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 936), GPR_U32(ctx, 2));
label_166534:
    // 0x166534: 0xc04f0b6  jal         func_13C2D8
label_166538:
    if (ctx->pc == 0x166538u) {
        ctx->pc = 0x166538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166534u;
        // 0x166538: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16653Cu;
        goto label_16653c;
    }
    ctx->pc = 0x166534u;
    SET_GPR_U32(ctx, 31, 0x16653Cu);
    ctx->pc = 0x166538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166534u;
    // 0x166538: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x166534u, 0x16653Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16653Cu;
label_16653c:
    // 0x16653c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16653cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_166540:
    // 0x166540: 0x8e0502e0  lw          $a1, 0x2E0($s0)
    ctx->pc = 0x166540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
label_166544:
    // 0x166544: 0xc0461e8  jal         func_1187A0
label_166548:
    if (ctx->pc == 0x166548u) {
        ctx->pc = 0x166548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166544u;
        // 0x166548: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16654Cu;
        goto label_16654c;
    }
    ctx->pc = 0x166544u;
    SET_GPR_U32(ctx, 31, 0x16654Cu);
    ctx->pc = 0x166548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166544u;
    // 0x166548: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A0u, 0x166544u, 0x16654Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16654Cu;
label_16654c:
    // 0x16654c: 0x92050300  lbu         $a1, 0x300($s0)
    ctx->pc = 0x16654cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 768)));
label_166550:
    // 0x166550: 0xc046226  jal         func_118898
label_166554:
    if (ctx->pc == 0x166554u) {
        ctx->pc = 0x166554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166550u;
        // 0x166554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166558u;
        goto label_166558;
    }
    ctx->pc = 0x166550u;
    SET_GPR_U32(ctx, 31, 0x166558u);
    ctx->pc = 0x166554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166550u;
    // 0x166554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118898u, 0x166550u, 0x166558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166558u;
label_166558:
    // 0x166558: 0xc04f02a  jal         func_13C0A8
label_16655c:
    if (ctx->pc == 0x16655Cu) {
        ctx->pc = 0x16655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166558u;
        // 0x16655c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166560u;
        goto label_166560;
    }
    ctx->pc = 0x166558u;
    SET_GPR_U32(ctx, 31, 0x166560u);
    ctx->pc = 0x16655Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166558u;
    // 0x16655c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C0A8u, 0x166558u, 0x166560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166560u;
label_166560:
    // 0x166560: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x166560u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_166564:
    // 0x166564: 0xc0460c4  jal         func_118310
label_166568:
    if (ctx->pc == 0x166568u) {
        ctx->pc = 0x166568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166564u;
        // 0x166568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16656Cu;
        goto label_16656c;
    }
    ctx->pc = 0x166564u;
    SET_GPR_U32(ctx, 31, 0x16656Cu);
    ctx->pc = 0x166568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166564u;
    // 0x166568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118310u, 0x166564u, 0x16656Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16656Cu;
label_16656c:
    // 0x16656c: 0x8e0503bc  lw          $a1, 0x3BC($s0)
    ctx->pc = 0x16656cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 956)));
label_166570:
    // 0x166570: 0xc046256  jal         func_118958
label_166574:
    if (ctx->pc == 0x166574u) {
        ctx->pc = 0x166574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166570u;
        // 0x166574: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166578u;
        goto label_166578;
    }
    ctx->pc = 0x166570u;
    SET_GPR_U32(ctx, 31, 0x166578u);
    ctx->pc = 0x166574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166570u;
    // 0x166574: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118958u, 0x166570u, 0x166578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166578u;
label_166578:
    // 0x166578: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x166578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_16657c:
    // 0x16657c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16657cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_166580:
    // 0x166580: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x166580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166584:
    // 0x166584: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x166584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_166588:
    // 0x166588: 0x40f809  jalr        $v0
label_16658c:
    if (ctx->pc == 0x16658Cu) {
        ctx->pc = 0x16658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166588u;
        // 0x16658c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166590u;
        goto label_166590;
    }
    ctx->pc = 0x166588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x166590u);
        ctx->pc = 0x16658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166588u;
        // 0x16658c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166588u, 0x166590u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166590u;
label_166590:
    // 0x166590: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x166590u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_166594:
    // 0x166594: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x166594u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_166598:
    // 0x166598: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x166598u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16659c:
    // 0x16659c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16659cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1665a0:
    // 0x1665a0: 0x3e00008  jr          $ra
label_1665a4:
    if (ctx->pc == 0x1665A4u) {
        ctx->pc = 0x1665A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1665A0u;
        // 0x1665a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1665A8u;
        goto label_fallthrough_0x1665a0;
    }
    ctx->pc = 0x1665A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1665A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1665A0u;
        // 0x1665a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1665A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1665a0:
    ctx->pc = 0x1665A8u;
}
