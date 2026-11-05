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

// Function: sub_0016C510
// Address: 0x16c510 - 0x16c588
void sub_0016C510_0x16c510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C510_0x16c510");
#endif

    switch (ctx->pc) {
        case 0x16c528u: goto label_16c528;
        case 0x16c558u: goto label_16c558;
        case 0x16c560u: goto label_16c560;
        case 0x16c568u: goto label_16c568;
        case 0x16c570u: goto label_16c570;
        case 0x16c578u: goto label_16c578;
        default: break;
    }

    ctx->pc = 0x16c510u;

    // 0x16c510: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16c510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16c514: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16c514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16c518: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16c518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16c51c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16c51cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c520: 0xc05a618  jal         func_169860
    ctx->pc = 0x16C520u;
    SET_GPR_U32(ctx, 31, 0x16C528u);
    ctx->pc = 0x16C524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C520u;
    // 0x16c524: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169860u, 0x16C520u, 0x16C528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C528u;
label_16c528:
    // 0x16c528: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x16c528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x16c52c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16c52cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16c530: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x16c530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x16c534: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16c534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16c538: 0x8c62020c  lw          $v0, 0x20C($v1)
    ctx->pc = 0x16c538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x16c53c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x16C53Cu;
    {
        const bool branch_taken_0x16c53c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c53c) {
            ctx->pc = 0x16C540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C53Cu;
            // 0x16c540: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C57Cu;
            goto label_16c57c;
        }
    }
    ctx->pc = 0x16C544u;
    // 0x16c544: 0x8c4200d0  lw          $v0, 0xD0($v0)
    ctx->pc = 0x16c544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x16c548: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x16C548u;
    {
        const bool branch_taken_0x16c548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c548) {
            ctx->pc = 0x16C54Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C548u;
            // 0x16c54c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C57Cu;
            goto label_16c57c;
        }
    }
    ctx->pc = 0x16C550u;
    // 0x16c550: 0xc05b1e8  jal         func_16C7A0
    ctx->pc = 0x16C550u;
    SET_GPR_U32(ctx, 31, 0x16C558u);
    ctx->pc = 0x16C554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C550u;
    // 0x16c554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C7A0u, 0x16C550u, 0x16C558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C558u;
label_16c558:
    // 0x16c558: 0xc05b214  jal         func_16C850
    ctx->pc = 0x16C558u;
    SET_GPR_U32(ctx, 31, 0x16C560u);
    ctx->pc = 0x16C55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C558u;
    // 0x16c55c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C850u, 0x16C558u, 0x16C560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C560u;
label_16c560:
    // 0x16c560: 0xc05b246  jal         func_16C918
    ctx->pc = 0x16C560u;
    SET_GPR_U32(ctx, 31, 0x16C568u);
    ctx->pc = 0x16C564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C560u;
    // 0x16c564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C918u, 0x16C560u, 0x16C568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C568u;
label_16c568:
    // 0x16c568: 0xc05b294  jal         func_16CA50
    ctx->pc = 0x16C568u;
    SET_GPR_U32(ctx, 31, 0x16C570u);
    ctx->pc = 0x16C56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C568u;
    // 0x16c56c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CA50u, 0x16C568u, 0x16C570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C570u;
label_16c570:
    // 0x16c570: 0xc05b2dc  jal         func_16CB70
    ctx->pc = 0x16C570u;
    SET_GPR_U32(ctx, 31, 0x16C578u);
    ctx->pc = 0x16C574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C570u;
    // 0x16c574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CB70u, 0x16C570u, 0x16C578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C578u;
label_16c578:
    // 0x16c578: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16c578u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16c57c:
    // 0x16c57c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16c57cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16c580: 0x3e00008  jr          $ra
    ctx->pc = 0x16C580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C580u;
        // 0x16c584: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C588u;
}
