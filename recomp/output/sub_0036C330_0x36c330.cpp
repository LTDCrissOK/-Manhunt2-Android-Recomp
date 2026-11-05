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

// Function: sub_0036C330
// Address: 0x36c330 - 0x36c3a8
void sub_0036C330_0x36c330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C330_0x36c330");
#endif

    switch (ctx->pc) {
        case 0x36c344u: goto label_36c344;
        case 0x36c350u: goto label_36c350;
        case 0x36c35cu: goto label_36c35c;
        case 0x36c368u: goto label_36c368;
        case 0x36c374u: goto label_36c374;
        case 0x36c380u: goto label_36c380;
        case 0x36c38cu: goto label_36c38c;
        case 0x36c398u: goto label_36c398;
        default: break;
    }

    ctx->pc = 0x36c330u;

    // 0x36c330: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c334: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36c334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c338: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36c338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36c33c: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x36C33Cu;
    SET_GPR_U32(ctx, 31, 0x36C344u);
    ctx->pc = 0x36C340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C33Cu;
    // 0x36c340: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x36C33Cu, 0x36C344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C344u;
label_36c344:
    // 0x36c344: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x36c344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x36c348: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x36C348u;
    SET_GPR_U32(ctx, 31, 0x36C350u);
    ctx->pc = 0x36C34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C348u;
    // 0x36c34c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x36C348u, 0x36C350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C350u;
label_36c350:
    // 0x36c350: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x36c350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x36c354: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x36C354u;
    SET_GPR_U32(ctx, 31, 0x36C35Cu);
    ctx->pc = 0x36C358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C354u;
    // 0x36c358: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x36C354u, 0x36C35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C35Cu;
label_36c35c:
    // 0x36c35c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x36c35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x36c360: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x36C360u;
    SET_GPR_U32(ctx, 31, 0x36C368u);
    ctx->pc = 0x36C364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C360u;
    // 0x36c364: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x36C360u, 0x36C368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C368u;
label_36c368:
    // 0x36c368: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x36c368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x36c36c: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x36C36Cu;
    SET_GPR_U32(ctx, 31, 0x36C374u);
    ctx->pc = 0x36C370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C36Cu;
    // 0x36c370: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x36C36Cu, 0x36C374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C374u;
label_36c374:
    // 0x36c374: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x36c374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36c378: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x36C378u;
    SET_GPR_U32(ctx, 31, 0x36C380u);
    ctx->pc = 0x36C37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C378u;
    // 0x36c37c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x36C378u, 0x36C380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C380u;
label_36c380:
    // 0x36c380: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x36c380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x36c384: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x36C384u;
    SET_GPR_U32(ctx, 31, 0x36C38Cu);
    ctx->pc = 0x36C388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C384u;
    // 0x36c388: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x36C384u, 0x36C38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C38Cu;
label_36c38c:
    // 0x36c38c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x36c38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36c390: 0xc0db170  jal         func_36C5C0
    ctx->pc = 0x36C390u;
    SET_GPR_U32(ctx, 31, 0x36C398u);
    ctx->pc = 0x36C394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C390u;
    // 0x36c394: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5C0u, 0x36C390u, 0x36C398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C398u;
label_36c398:
    // 0x36c398: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36c398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c39c: 0x3e00008  jr          $ra
    ctx->pc = 0x36C39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C39Cu;
        // 0x36c3a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C39Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C3A4u;
    // 0x36c3a4: 0x0  nop
    ctx->pc = 0x36c3a4u;
    // NOP
    ctx->pc = 0x36c3a8u;
}
