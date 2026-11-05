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

// Function: sub_003DA658
// Address: 0x3da658 - 0x3da6d0
void sub_003DA658_0x3da658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DA658_0x3da658");
#endif

    switch (ctx->pc) {
        case 0x3da688u: goto label_3da688;
        default: break;
    }

    ctx->pc = 0x3da658u;

    // 0x3da658: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3da658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3da65c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3da65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3da660: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3da660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3da664: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3da664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da668: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3da668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3da66c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DA66Cu;
    {
        const bool branch_taken_0x3da66c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3da66c) {
            ctx->pc = 0x3DA670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DA66Cu;
            // 0x3da670: 0x96030010  lhu         $v1, 0x10($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DA690u;
            goto label_3da690;
        }
    }
    ctx->pc = 0x3DA674u;
    // 0x3da674: 0x96060010  lhu         $a2, 0x10($s0)
    ctx->pc = 0x3da674u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3da678: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3da678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da67c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3da67cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3da680: 0xc0f6910  jal         func_3DA440
    ctx->pc = 0x3DA680u;
    SET_GPR_U32(ctx, 31, 0x3DA688u);
    ctx->pc = 0x3DA684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA680u;
    // 0x3da684: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DA440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DA440u, 0x3DA680u, 0x3DA688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA688u;
label_3da688:
    // 0x3da688: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3DA688u;
    {
        const bool branch_taken_0x3da688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA688u;
        // 0x3da68c: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da688) {
            ctx->pc = 0x3DA6B8u;
            goto label_3da6b8;
        }
    }
    ctx->pc = 0x3DA690u;
label_3da690:
    // 0x3da690: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3da690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3da694: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3DA694u;
    {
        const bool branch_taken_0x3da694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DA698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA694u;
        // 0x3da698: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da694) {
            ctx->pc = 0x3DA6B4u;
            goto label_3da6b4;
        }
    }
    ctx->pc = 0x3DA69Cu;
    // 0x3da69c: 0x96030012  lhu         $v1, 0x12($s0)
    ctx->pc = 0x3da69cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x3da6a0: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x3da6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3da6a4: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DA6A4u;
    {
        const bool branch_taken_0x3da6a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3da6a4) {
            ctx->pc = 0x3DA6A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DA6A4u;
            // 0x3da6a8: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DA6B8u;
            goto label_3da6b8;
        }
    }
    ctx->pc = 0x3DA6ACu;
    // 0x3da6ac: 0x2482fffe  addiu       $v0, $a0, -0x2
    ctx->pc = 0x3da6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x3da6b0: 0xa6020012  sh          $v0, 0x12($s0)
    ctx->pc = 0x3da6b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
label_3da6b4:
    // 0x3da6b4: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x3da6b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_3da6b8:
    // 0x3da6b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3da6b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3da6bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3da6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3da6c0: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x3da6c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x3da6c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3da6c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3da6c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3DA6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA6C8u;
        // 0x3da6cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA6C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DA6D0u;
}
