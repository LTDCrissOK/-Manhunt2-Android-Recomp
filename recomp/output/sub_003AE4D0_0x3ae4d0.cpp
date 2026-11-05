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

// Function: sub_003AE4D0
// Address: 0x3ae4d0 - 0x3ae518
void sub_003AE4D0_0x3ae4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AE4D0_0x3ae4d0");
#endif

    switch (ctx->pc) {
        case 0x3ae4d0u: goto label_3ae4d0;
        case 0x3ae4d4u: goto label_3ae4d4;
        case 0x3ae4d8u: goto label_3ae4d8;
        case 0x3ae4dcu: goto label_3ae4dc;
        case 0x3ae4e0u: goto label_3ae4e0;
        case 0x3ae4e4u: goto label_3ae4e4;
        case 0x3ae4e8u: goto label_3ae4e8;
        case 0x3ae4ecu: goto label_3ae4ec;
        case 0x3ae4f0u: goto label_3ae4f0;
        case 0x3ae4f4u: goto label_3ae4f4;
        case 0x3ae4f8u: goto label_3ae4f8;
        case 0x3ae4fcu: goto label_3ae4fc;
        case 0x3ae500u: goto label_3ae500;
        case 0x3ae504u: goto label_3ae504;
        case 0x3ae508u: goto label_3ae508;
        case 0x3ae50cu: goto label_3ae50c;
        case 0x3ae510u: goto label_3ae510;
        case 0x3ae514u: goto label_3ae514;
        default: break;
    }

    ctx->pc = 0x3ae4d0u;

label_3ae4d0:
    // 0x3ae4d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ae4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3ae4d4:
    // 0x3ae4d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ae4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3ae4d8:
    // 0x3ae4d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ae4d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ae4dc:
    // 0x3ae4dc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3ae4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_3ae4e0:
    // 0x3ae4e0: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x3ae4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
label_3ae4e4:
    // 0x3ae4e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3ae4e8:
    if (ctx->pc == 0x3AE4E8u) {
        ctx->pc = 0x3AE4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE4E4u;
        // 0x3ae4e8: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE4ECu;
        goto label_3ae4ec;
    }
    ctx->pc = 0x3AE4E4u;
    {
        const bool branch_taken_0x3ae4e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE4E4u;
        // 0x3ae4e8: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae4e4) {
            ctx->pc = 0x3AE4F8u;
            goto label_3ae4f8;
        }
    }
    ctx->pc = 0x3AE4ECu;
label_3ae4ec:
    // 0x3ae4ec: 0x8c433710  lw          $v1, 0x3710($v0)
    ctx->pc = 0x3ae4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14096)));
label_3ae4f0:
    // 0x3ae4f0: 0x60f809  jalr        $v1
label_3ae4f4:
    if (ctx->pc == 0x3AE4F4u) {
        ctx->pc = 0x3AE4F8u;
        goto label_3ae4f8;
    }
    ctx->pc = 0x3AE4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3AE4F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE4F0u, 0x3AE4F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AE4F8u;
label_3ae4f8:
    // 0x3ae4f8: 0xc0ec444  jal         func_3B1110
label_3ae4fc:
    if (ctx->pc == 0x3AE4FCu) {
        ctx->pc = 0x3AE4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE4F8u;
        // 0x3ae4fc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE500u;
        goto label_3ae500;
    }
    ctx->pc = 0x3AE4F8u;
    SET_GPR_U32(ctx, 31, 0x3AE500u);
    ctx->pc = 0x3AE4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE4F8u;
    // 0x3ae4fc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1110u, 0x3AE4F8u, 0x3AE500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE500u;
label_3ae500:
    // 0x3ae500: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3ae500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3ae504:
    // 0x3ae504: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3ae504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3ae508:
    // 0x3ae508: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ae508u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ae50c:
    // 0x3ae50c: 0x3e00008  jr          $ra
label_3ae510:
    if (ctx->pc == 0x3AE510u) {
        ctx->pc = 0x3AE510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE50Cu;
        // 0x3ae510: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE514u;
        goto label_3ae514;
    }
    ctx->pc = 0x3AE50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE50Cu;
        // 0x3ae510: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE50Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE514u;
label_3ae514:
    // 0x3ae514: 0x0  nop
    ctx->pc = 0x3ae514u;
    // NOP
    ctx->pc = 0x3ae518u;
}
