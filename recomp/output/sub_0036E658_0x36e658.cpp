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

// Function: sub_0036E658
// Address: 0x36e658 - 0x36e698
void sub_0036E658_0x36e658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E658_0x36e658");
#endif

    switch (ctx->pc) {
        case 0x36e658u: goto label_36e658;
        case 0x36e65cu: goto label_36e65c;
        case 0x36e660u: goto label_36e660;
        case 0x36e664u: goto label_36e664;
        case 0x36e668u: goto label_36e668;
        case 0x36e66cu: goto label_36e66c;
        case 0x36e670u: goto label_36e670;
        case 0x36e674u: goto label_36e674;
        case 0x36e678u: goto label_36e678;
        case 0x36e67cu: goto label_36e67c;
        case 0x36e680u: goto label_36e680;
        case 0x36e684u: goto label_36e684;
        case 0x36e688u: goto label_36e688;
        case 0x36e68cu: goto label_36e68c;
        case 0x36e690u: goto label_36e690;
        case 0x36e694u: goto label_36e694;
        default: break;
    }

    ctx->pc = 0x36e658u;

label_36e658:
    // 0x36e658: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36e658u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36e65c:
    // 0x36e65c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36e65cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_36e660:
    // 0x36e660: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36e660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_36e664:
    // 0x36e664: 0x3e00008  jr          $ra
label_36e668:
    if (ctx->pc == 0x36E668u) {
        ctx->pc = 0x36E668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E664u;
        // 0x36e668: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36E66Cu;
        goto label_36e66c;
    }
    ctx->pc = 0x36E664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E664u;
        // 0x36e668: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E66Cu;
label_36e66c:
    // 0x36e66c: 0x0  nop
    ctx->pc = 0x36e66cu;
    // NOP
label_36e670:
    // 0x36e670: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x36e670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_36e674:
    // 0x36e674: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x36e674u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_36e678:
    // 0x36e678: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_36e67c:
    if (ctx->pc == 0x36E67Cu) {
        ctx->pc = 0x36E67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E678u;
        // 0x36e67c: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36E680u;
        goto label_36e680;
    }
    ctx->pc = 0x36E678u;
    {
        const bool branch_taken_0x36e678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E678u;
        // 0x36e67c: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e678) {
            ctx->pc = 0x36E6FCu;
            return;
        }
    }
    ctx->pc = 0x36E680u;
label_36e680:
    // 0x36e680: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x36e680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_36e684:
    // 0x36e684: 0x24427dd0  addiu       $v0, $v0, 0x7DD0
    ctx->pc = 0x36e684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32208));
label_36e688:
    // 0x36e688: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x36e688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_36e68c:
    // 0x36e68c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x36e68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_36e690:
    // 0x36e690: 0x800008  jr          $a0
label_36e694:
    if (ctx->pc == 0x36E694u) {
        ctx->pc = 0x36E698u;
        goto label_fallthrough_0x36e690;
    }
    ctx->pc = 0x36E690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E690u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x36e690:
    ctx->pc = 0x36E698u;
}
