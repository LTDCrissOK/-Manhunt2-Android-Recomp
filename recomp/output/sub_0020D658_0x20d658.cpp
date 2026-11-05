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

// Function: sub_0020D658
// Address: 0x20d658 - 0x20d6a8
void sub_0020D658_0x20d658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D658_0x20d658");
#endif

    switch (ctx->pc) {
        case 0x20d658u: goto label_20d658;
        case 0x20d65cu: goto label_20d65c;
        case 0x20d660u: goto label_20d660;
        case 0x20d664u: goto label_20d664;
        case 0x20d668u: goto label_20d668;
        case 0x20d66cu: goto label_20d66c;
        case 0x20d670u: goto label_20d670;
        case 0x20d674u: goto label_20d674;
        case 0x20d678u: goto label_20d678;
        case 0x20d67cu: goto label_20d67c;
        case 0x20d680u: goto label_20d680;
        case 0x20d684u: goto label_20d684;
        case 0x20d688u: goto label_20d688;
        case 0x20d68cu: goto label_20d68c;
        case 0x20d690u: goto label_20d690;
        case 0x20d694u: goto label_20d694;
        case 0x20d698u: goto label_20d698;
        case 0x20d69cu: goto label_20d69c;
        case 0x20d6a0u: goto label_20d6a0;
        case 0x20d6a4u: goto label_20d6a4;
        default: break;
    }

    ctx->pc = 0x20d658u;

label_20d658:
    // 0x20d658: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20d658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20d65c:
    // 0x20d65c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20d65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_20d660:
    // 0x20d660: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20d660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_20d664:
    // 0x20d664: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20d664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20d668:
    // 0x20d668: 0xc08357c  jal         func_20D5F0
label_20d66c:
    if (ctx->pc == 0x20D66Cu) {
        ctx->pc = 0x20D66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D668u;
        // 0x20d66c: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D670u;
        goto label_20d670;
    }
    ctx->pc = 0x20D668u;
    SET_GPR_U32(ctx, 31, 0x20D670u);
    ctx->pc = 0x20D66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D668u;
    // 0x20d66c: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D5F0u, 0x20D668u, 0x20D670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D670u;
label_20d670:
    // 0x20d670: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20d670u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20d674:
    // 0x20d674: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_20d678:
    if (ctx->pc == 0x20D678u) {
        ctx->pc = 0x20D678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D674u;
        // 0x20d678: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D67Cu;
        goto label_20d67c;
    }
    ctx->pc = 0x20D674u;
    {
        const bool branch_taken_0x20d674 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D674u;
        // 0x20d678: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d674) {
            ctx->pc = 0x20D690u;
            goto label_20d690;
        }
    }
    ctx->pc = 0x20D67Cu;
label_20d67c:
    // 0x20d67c: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x20d67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_20d680:
    // 0x20d680: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20d680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20d684:
    // 0x20d684: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x20d684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_20d688:
    // 0x20d688: 0x40f809  jalr        $v0
label_20d68c:
    if (ctx->pc == 0x20D68Cu) {
        ctx->pc = 0x20D68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D688u;
        // 0x20d68c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D690u;
        goto label_20d690;
    }
    ctx->pc = 0x20D688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20D690u);
        ctx->pc = 0x20D68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D688u;
        // 0x20d68c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D688u, 0x20D690u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20D690u;
label_20d690:
    // 0x20d690: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x20d690u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20d694:
    // 0x20d694: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20d694u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20d698:
    // 0x20d698: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20d698u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20d69c:
    // 0x20d69c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20d69cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20d6a0:
    // 0x20d6a0: 0x3e00008  jr          $ra
label_20d6a4:
    if (ctx->pc == 0x20D6A4u) {
        ctx->pc = 0x20D6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D6A0u;
        // 0x20d6a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D6A8u;
        goto label_fallthrough_0x20d6a0;
    }
    ctx->pc = 0x20D6A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D6A0u;
        // 0x20d6a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D6A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20d6a0:
    ctx->pc = 0x20D6A8u;
}
