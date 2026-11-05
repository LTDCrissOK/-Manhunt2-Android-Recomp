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

// Function: sub_0016E528
// Address: 0x16e528 - 0x16e5c8
void sub_0016E528_0x16e528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E528_0x16e528");
#endif

    switch (ctx->pc) {
        case 0x16e528u: goto label_16e528;
        case 0x16e52cu: goto label_16e52c;
        case 0x16e530u: goto label_16e530;
        case 0x16e534u: goto label_16e534;
        case 0x16e538u: goto label_16e538;
        case 0x16e53cu: goto label_16e53c;
        case 0x16e540u: goto label_16e540;
        case 0x16e544u: goto label_16e544;
        case 0x16e548u: goto label_16e548;
        case 0x16e54cu: goto label_16e54c;
        case 0x16e550u: goto label_16e550;
        case 0x16e554u: goto label_16e554;
        case 0x16e558u: goto label_16e558;
        case 0x16e55cu: goto label_16e55c;
        case 0x16e560u: goto label_16e560;
        case 0x16e564u: goto label_16e564;
        case 0x16e568u: goto label_16e568;
        case 0x16e56cu: goto label_16e56c;
        case 0x16e570u: goto label_16e570;
        case 0x16e574u: goto label_16e574;
        case 0x16e578u: goto label_16e578;
        case 0x16e57cu: goto label_16e57c;
        case 0x16e580u: goto label_16e580;
        case 0x16e584u: goto label_16e584;
        case 0x16e588u: goto label_16e588;
        case 0x16e58cu: goto label_16e58c;
        case 0x16e590u: goto label_16e590;
        case 0x16e594u: goto label_16e594;
        case 0x16e598u: goto label_16e598;
        case 0x16e59cu: goto label_16e59c;
        case 0x16e5a0u: goto label_16e5a0;
        case 0x16e5a4u: goto label_16e5a4;
        case 0x16e5a8u: goto label_16e5a8;
        case 0x16e5acu: goto label_16e5ac;
        case 0x16e5b0u: goto label_16e5b0;
        case 0x16e5b4u: goto label_16e5b4;
        case 0x16e5b8u: goto label_16e5b8;
        case 0x16e5bcu: goto label_16e5bc;
        case 0x16e5c0u: goto label_16e5c0;
        case 0x16e5c4u: goto label_16e5c4;
        default: break;
    }

    ctx->pc = 0x16e528u;

label_16e528:
    // 0x16e528: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16e528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_16e52c:
    // 0x16e52c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x16e52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_16e530:
    // 0x16e530: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x16e530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_16e534:
    // 0x16e534: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16e534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_16e538:
    // 0x16e538: 0xc04f9a4  jal         func_13E690
label_16e53c:
    if (ctx->pc == 0x16E53Cu) {
        ctx->pc = 0x16E53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E538u;
        // 0x16e53c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E540u;
        goto label_16e540;
    }
    ctx->pc = 0x16E538u;
    SET_GPR_U32(ctx, 31, 0x16E540u);
    ctx->pc = 0x16E53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E538u;
    // 0x16e53c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E690u, 0x16E538u, 0x16E540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E540u;
label_16e540:
    // 0x16e540: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x16e540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_16e544:
    // 0x16e544: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16e544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16e548:
    // 0x16e548: 0xae0300f4  sw          $v1, 0xF4($s0)
    ctx->pc = 0x16e548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 3));
label_16e54c:
    // 0x16e54c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x16e54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_16e550:
    // 0x16e550: 0xc04f8fc  jal         func_13E3F0
label_16e554:
    if (ctx->pc == 0x16E554u) {
        ctx->pc = 0x16E554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E550u;
        // 0x16e554: 0xae0200f0  sw          $v0, 0xF0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E558u;
        goto label_16e558;
    }
    ctx->pc = 0x16E550u;
    SET_GPR_U32(ctx, 31, 0x16E558u);
    ctx->pc = 0x16E554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E550u;
    // 0x16e554: 0xae0200f0  sw          $v0, 0xF0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E3F0u, 0x16E550u, 0x16E558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E558u;
label_16e558:
    // 0x16e558: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16e558u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16e55c:
    // 0x16e55c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x16e55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_16e560:
    // 0x16e560: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x16e560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
label_16e564:
    // 0x16e564: 0xc046330  jal         func_118CC0
label_16e568:
    if (ctx->pc == 0x16E568u) {
        ctx->pc = 0x16E568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E564u;
        // 0x16e568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E56Cu;
        goto label_16e56c;
    }
    ctx->pc = 0x16E564u;
    SET_GPR_U32(ctx, 31, 0x16E56Cu);
    ctx->pc = 0x16E568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E564u;
    // 0x16e568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118CC0u, 0x16E564u, 0x16E56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E56Cu;
label_16e56c:
    // 0x16e56c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x16e56cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_16e570:
    // 0x16e570: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16e570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16e574:
    // 0x16e574: 0xc05bb28  jal         func_16ECA0
label_16e578:
    if (ctx->pc == 0x16E578u) {
        ctx->pc = 0x16E578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E574u;
        // 0x16e578: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E57Cu;
        goto label_16e57c;
    }
    ctx->pc = 0x16E574u;
    SET_GPR_U32(ctx, 31, 0x16E57Cu);
    ctx->pc = 0x16E578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E574u;
    // 0x16e578: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16ECA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16ECA0u, 0x16E574u, 0x16E57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E57Cu;
label_16e57c:
    // 0x16e57c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_16e580:
    if (ctx->pc == 0x16E580u) {
        ctx->pc = 0x16E580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E57Cu;
        // 0x16e580: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E584u;
        goto label_16e584;
    }
    ctx->pc = 0x16E57Cu;
    {
        const bool branch_taken_0x16e57c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16E580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E57Cu;
        // 0x16e580: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e57c) {
            ctx->pc = 0x16E590u;
            goto label_16e590;
        }
    }
    ctx->pc = 0x16E584u;
label_16e584:
    // 0x16e584: 0xc05a5fe  jal         func_1697F8
label_16e588:
    if (ctx->pc == 0x16E588u) {
        ctx->pc = 0x16E588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E584u;
        // 0x16e588: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E58Cu;
        goto label_16e58c;
    }
    ctx->pc = 0x16E584u;
    SET_GPR_U32(ctx, 31, 0x16E58Cu);
    ctx->pc = 0x16E588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E584u;
    // 0x16e588: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x16E584u, 0x16E58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E58Cu;
label_16e58c:
    // 0x16e58c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16e58cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16e590:
    // 0x16e590: 0xc0461e8  jal         func_1187A0
label_16e594:
    if (ctx->pc == 0x16E594u) {
        ctx->pc = 0x16E594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E590u;
        // 0x16e594: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E598u;
        goto label_16e598;
    }
    ctx->pc = 0x16E590u;
    SET_GPR_U32(ctx, 31, 0x16E598u);
    ctx->pc = 0x16E594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E590u;
    // 0x16e594: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A0u, 0x16E590u, 0x16E598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E598u;
label_16e598:
    // 0x16e598: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x16e598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_16e59c:
    // 0x16e59c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16e59cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16e5a0:
    // 0x16e5a0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x16e5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_16e5a4:
    // 0x16e5a4: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x16e5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_16e5a8:
    // 0x16e5a8: 0x40f809  jalr        $v0
label_16e5ac:
    if (ctx->pc == 0x16E5ACu) {
        ctx->pc = 0x16E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E5A8u;
        // 0x16e5ac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E5B0u;
        goto label_16e5b0;
    }
    ctx->pc = 0x16E5A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16E5B0u);
        ctx->pc = 0x16E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E5A8u;
        // 0x16e5ac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E5A8u, 0x16E5B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16E5B0u;
label_16e5b0:
    // 0x16e5b0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x16e5b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16e5b4:
    // 0x16e5b4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x16e5b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_16e5b8:
    // 0x16e5b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16e5b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16e5bc:
    // 0x16e5bc: 0x3e00008  jr          $ra
label_16e5c0:
    if (ctx->pc == 0x16E5C0u) {
        ctx->pc = 0x16E5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E5BCu;
        // 0x16e5c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E5C4u;
        goto label_16e5c4;
    }
    ctx->pc = 0x16E5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E5BCu;
        // 0x16e5c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E5BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E5C4u;
label_16e5c4:
    // 0x16e5c4: 0x0  nop
    ctx->pc = 0x16e5c4u;
    // NOP
    ctx->pc = 0x16e5c8u;
}
