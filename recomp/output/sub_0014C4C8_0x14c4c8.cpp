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

// Function: sub_0014C4C8
// Address: 0x14c4c8 - 0x14c548
void sub_0014C4C8_0x14c4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C4C8_0x14c4c8");
#endif

    switch (ctx->pc) {
        case 0x14c500u: goto label_14c500;
        case 0x14c50cu: goto label_14c50c;
        case 0x14c520u: goto label_14c520;
        case 0x14c530u: goto label_14c530;
        default: break;
    }

    ctx->pc = 0x14c4c8u;

    // 0x14c4c8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x14c4c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14c4cc: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x14c4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x14c4d0: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x14c4d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x14c4d4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14c4d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14c4d8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x14c4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x14c4dc: 0x248404f4  addiu       $a0, $a0, 0x4F4
    ctx->pc = 0x14c4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1268));
    // 0x14c4e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14c4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14c4e4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x14c4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x14c4e8: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x14c4e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14c4ec: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x14c4ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14c4f0: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x14C4F0u;
    {
        const bool branch_taken_0x14c4f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C4F0u;
        // 0x14c4f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c4f0) {
            ctx->pc = 0x14C534u;
            goto label_14c534;
        }
    }
    ctx->pc = 0x14C4F8u;
    // 0x14c4f8: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x14C4F8u;
    SET_GPR_U32(ctx, 31, 0x14C500u);
    ctx->pc = 0x14C4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C4F8u;
    // 0x14c4fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x14C4F8u, 0x14C500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C500u;
label_14c500:
    // 0x14c500: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14c500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c504: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x14C504u;
    SET_GPR_U32(ctx, 31, 0x14C50Cu);
    ctx->pc = 0x14C508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C504u;
    // 0x14c508: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x14C504u, 0x14C50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C50Cu;
label_14c50c:
    // 0x14c50c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14C50Cu;
    {
        const bool branch_taken_0x14c50c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C50Cu;
        // 0x14c510: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c50c) {
            ctx->pc = 0x14C528u;
            goto label_14c528;
        }
    }
    ctx->pc = 0x14C514u;
    // 0x14c514: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x14c514u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x14c518: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x14C518u;
    SET_GPR_U32(ctx, 31, 0x14C520u);
    ctx->pc = 0x14C51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C518u;
    // 0x14c51c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x14C518u, 0x14C520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C520u;
label_14c520:
    // 0x14c520: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14C520u;
    {
        const bool branch_taken_0x14c520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C520u;
        // 0x14c524: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c520) {
            ctx->pc = 0x14C534u;
            goto label_14c534;
        }
    }
    ctx->pc = 0x14C528u;
label_14c528:
    // 0x14c528: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x14C528u;
    SET_GPR_U32(ctx, 31, 0x14C530u);
    ctx->pc = 0x14C52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C528u;
    // 0x14c52c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x14C528u, 0x14C530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C530u;
label_14c530:
    // 0x14c530: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14c530u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14c534:
    // 0x14c534: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14c534u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14c538: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x14c538u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c53c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14c53cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14c540: 0x3e00008  jr          $ra
    ctx->pc = 0x14C540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C540u;
        // 0x14c544: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C548u;
}
