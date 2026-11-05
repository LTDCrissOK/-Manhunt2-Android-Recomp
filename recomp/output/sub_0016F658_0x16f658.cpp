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

// Function: sub_0016F658
// Address: 0x16f658 - 0x16f6b8
void sub_0016F658_0x16f658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F658_0x16f658");
#endif

    switch (ctx->pc) {
        case 0x16f668u: goto label_16f668;
        default: break;
    }

    ctx->pc = 0x16f658u;

    // 0x16f658: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16f658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16f65c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16f65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16f660: 0xc05a618  jal         func_169860
    ctx->pc = 0x16F660u;
    SET_GPR_U32(ctx, 31, 0x16F668u);
    ctx->pc = 0x16F664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F660u;
    // 0x16f664: 0x8c84005c  lw          $a0, 0x5C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169860u, 0x16F660u, 0x16F668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F668u;
label_16f668:
    // 0x16f668: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x16f668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x16f66c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16f66cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16f670: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x16f670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x16f674: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x16f674u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x16f678: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16f678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16f67c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16f67cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f680: 0x8c640108  lw          $a0, 0x108($v1)
    ctx->pc = 0x16f680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x16f684: 0x8c850ff8  lw          $a1, 0xFF8($a0)
    ctx->pc = 0x16f684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4088)));
    // 0x16f688: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x16f688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16f68c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x16f68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x16f690: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x16f690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x16f694: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x16f694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x16f698: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x16f698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x16f69c: 0x14660002  bne         $v1, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x16F69Cu;
    {
        const bool branch_taken_0x16f69c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x16F6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F69Cu;
        // 0x16f6a0: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f69c) {
            ctx->pc = 0x16F6A8u;
            goto label_16f6a8;
        }
    }
    ctx->pc = 0x16F6A4u;
    // 0x16f6a4: 0x38470001  xori        $a3, $v0, 0x1
    ctx->pc = 0x16f6a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_16f6a8:
    // 0x16f6a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16f6a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f6ac: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x16f6acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f6b0: 0x3e00008  jr          $ra
    ctx->pc = 0x16F6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F6B0u;
        // 0x16f6b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F6B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F6B8u;
}
