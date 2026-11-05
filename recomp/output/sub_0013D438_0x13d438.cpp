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

// Function: sub_0013D438
// Address: 0x13d438 - 0x13d518
void sub_0013D438_0x13d438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D438_0x13d438");
#endif

    switch (ctx->pc) {
        case 0x13d46cu: goto label_13d46c;
        case 0x13d47cu: goto label_13d47c;
        case 0x13d488u: goto label_13d488;
        case 0x13d494u: goto label_13d494;
        case 0x13d4a0u: goto label_13d4a0;
        case 0x13d4a8u: goto label_13d4a8;
        case 0x13d4bcu: goto label_13d4bc;
        case 0x13d4c8u: goto label_13d4c8;
        case 0x13d4d4u: goto label_13d4d4;
        case 0x13d4f4u: goto label_13d4f4;
        default: break;
    }

    ctx->pc = 0x13d438u;

    // 0x13d438: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13d438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13d43c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13d43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13d440: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x13d440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x13d444: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x13d444u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d448: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13d448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13d44c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x13d44cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d450: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13d450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13d454: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x13d454u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d458: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x13d458u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d45c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13d45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13d460: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x13d460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x13d464: 0xc04f0b6  jal         func_13C2D8
    ctx->pc = 0x13D464u;
    SET_GPR_U32(ctx, 31, 0x13D46Cu);
    ctx->pc = 0x13D468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D464u;
    // 0x13d468: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x13D464u, 0x13D46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D46Cu;
label_13d46c:
    // 0x13d46c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13d46cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d470: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13d470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d474: 0xc046138  jal         func_1184E0
    ctx->pc = 0x13D474u;
    SET_GPR_U32(ctx, 31, 0x13D47Cu);
    ctx->pc = 0x13D478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D474u;
    // 0x13d478: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1184E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1184E0u, 0x13D474u, 0x13D47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D47Cu;
label_13d47c:
    // 0x13d47c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13d47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d480: 0xc046154  jal         func_118550
    ctx->pc = 0x13D480u;
    SET_GPR_U32(ctx, 31, 0x13D488u);
    ctx->pc = 0x13D484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D480u;
    // 0x13d484: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118550u, 0x13D480u, 0x13D488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D488u;
label_13d488:
    // 0x13d488: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x13d488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d48c: 0xc046164  jal         func_118590
    ctx->pc = 0x13D48Cu;
    SET_GPR_U32(ctx, 31, 0x13D494u);
    ctx->pc = 0x13D490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D48Cu;
    // 0x13d490: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118590u, 0x13D48Cu, 0x13D494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D494u;
label_13d494:
    // 0x13d494: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13d494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d498: 0xc046256  jal         func_118958
    ctx->pc = 0x13D498u;
    SET_GPR_U32(ctx, 31, 0x13D4A0u);
    ctx->pc = 0x13D49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D498u;
    // 0x13d49c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118958u, 0x13D498u, 0x13D4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D4A0u;
label_13d4a0:
    // 0x13d4a0: 0xc04f0a8  jal         func_13C2A0
    ctx->pc = 0x13D4A0u;
    SET_GPR_U32(ctx, 31, 0x13D4A8u);
    ctx->pc = 0x13D4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D4A0u;
    // 0x13d4a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2A0u, 0x13D4A0u, 0x13D4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D4A8u;
label_13d4a8:
    // 0x13d4a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13d4a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d4ac: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x13d4acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x13d4b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13d4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d4b4: 0xc045612  jal         func_115848
    ctx->pc = 0x13D4B4u;
    SET_GPR_U32(ctx, 31, 0x13D4BCu);
    ctx->pc = 0x13D4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D4B4u;
    // 0x13d4b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115848u, 0x13D4B4u, 0x13D4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D4BCu;
label_13d4bc:
    // 0x13d4bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13d4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d4c0: 0xc045668  jal         func_1159A0
    ctx->pc = 0x13D4C0u;
    SET_GPR_U32(ctx, 31, 0x13D4C8u);
    ctx->pc = 0x13D4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D4C0u;
    // 0x13d4c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159A0u, 0x13D4C0u, 0x13D4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D4C8u;
label_13d4c8:
    // 0x13d4c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13d4c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d4cc: 0xc0456b2  jal         func_115AC8
    ctx->pc = 0x13D4CCu;
    SET_GPR_U32(ctx, 31, 0x13D4D4u);
    ctx->pc = 0x13D4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D4CCu;
    // 0x13d4d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115AC8u, 0x13D4CCu, 0x13D4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D4D4u;
label_13d4d4:
    // 0x13d4d4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x13d4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x13d4d8: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x13d4d8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x13d4dc: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x13d4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x13d4e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13d4e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d4e4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x13d4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x13d4e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13d4e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d4ec: 0xc043f22  jal         func_10FC88
    ctx->pc = 0x13D4ECu;
    SET_GPR_U32(ctx, 31, 0x13D4F4u);
    ctx->pc = 0x13D4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D4ECu;
    // 0x13d4f0: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC88u, 0x13D4ECu, 0x13D4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D4F4u;
label_13d4f4:
    // 0x13d4f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13d4f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d4f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13d4f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13d4fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13d4fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d500: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13d500u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13d504: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13d504u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d508: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x13d508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13d50c: 0x3e00008  jr          $ra
    ctx->pc = 0x13D50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D50Cu;
        // 0x13d510: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D50Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D514u;
    // 0x13d514: 0x0  nop
    ctx->pc = 0x13d514u;
    // NOP
    ctx->pc = 0x13d518u;
}
