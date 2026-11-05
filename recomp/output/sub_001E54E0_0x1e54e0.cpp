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

// Function: sub_001E54E0
// Address: 0x1e54e0 - 0x1e5568
void sub_001E54E0_0x1e54e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E54E0_0x1e54e0");
#endif

    switch (ctx->pc) {
        case 0x1e5510u: goto label_1e5510;
        case 0x1e5518u: goto label_1e5518;
        case 0x1e5530u: goto label_1e5530;
        default: break;
    }

    ctx->pc = 0x1e54e0u;

    // 0x1e54e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e54e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e54e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e54e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e54e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e54e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e54ec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e54ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e54f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e54f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e54f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e54f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e54f8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e54f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e54fc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e54fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e5500: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E5500u;
    {
        const bool branch_taken_0x1e5500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5500u;
        // 0x1e5504: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5500) {
            ctx->pc = 0x1E554Cu;
            goto label_1e554c;
        }
    }
    ctx->pc = 0x1E5508u;
    // 0x1e5508: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e5508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e550c: 0x0  nop
    ctx->pc = 0x1e550cu;
    // NOP
label_1e5510:
    // 0x1e5510: 0xc07957c  jal         func_1E55F0
    ctx->pc = 0x1E5510u;
    SET_GPR_U32(ctx, 31, 0x1E5518u);
    ctx->pc = 0x1E5514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5510u;
    // 0x1e5514: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E55F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E55F0u, 0x1E5510u, 0x1E5518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5518u;
label_1e5518:
    // 0x1e5518: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e5518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e551c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e551cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5520: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e5520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5524: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1e5524u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5528: 0xc077cda  jal         func_1DF368
    ctx->pc = 0x1E5528u;
    SET_GPR_U32(ctx, 31, 0x1E5530u);
    ctx->pc = 0x1E552Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5528u;
    // 0x1e552c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF368u, 0x1E5528u, 0x1E5530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5530u;
label_1e5530:
    // 0x1e5530: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E5530u;
    {
        const bool branch_taken_0x1e5530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5530u;
        // 0x1e5534: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5530) {
            ctx->pc = 0x1E5550u;
            goto label_1e5550;
        }
    }
    ctx->pc = 0x1E5538u;
    // 0x1e5538: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e5538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e553c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e553cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1e5540: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1e5540u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e5544: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1E5544u;
    {
        const bool branch_taken_0x1e5544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5544u;
        // 0x1e5548: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5544) {
            ctx->pc = 0x1E5510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5510;
        }
    }
    ctx->pc = 0x1E554Cu;
label_1e554c:
    // 0x1e554c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e554cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5550:
    // 0x1e5550: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e5550u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5554: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e5554u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e5558: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e5558u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e555c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e555cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e5560: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5560u;
        // 0x1e5564: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5568u;
}
