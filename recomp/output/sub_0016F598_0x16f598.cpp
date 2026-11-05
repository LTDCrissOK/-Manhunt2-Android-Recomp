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

// Function: sub_0016F598
// Address: 0x16f598 - 0x16f5f8
void sub_0016F598_0x16f598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F598_0x16f598");
#endif

    switch (ctx->pc) {
        case 0x16f5a8u: goto label_16f5a8;
        default: break;
    }

    ctx->pc = 0x16f598u;

    // 0x16f598: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16f598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16f59c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16f59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16f5a0: 0xc05a618  jal         func_169860
    ctx->pc = 0x16F5A0u;
    SET_GPR_U32(ctx, 31, 0x16F5A8u);
    ctx->pc = 0x16F5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F5A0u;
    // 0x16f5a4: 0x8c84005c  lw          $a0, 0x5C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169860u, 0x16F5A0u, 0x16F5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F5A8u;
label_16f5a8:
    // 0x16f5a8: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x16f5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x16f5ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16f5acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16f5b0: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x16f5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x16f5b4: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x16f5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x16f5b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16f5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16f5bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16f5bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f5c0: 0x8c640108  lw          $a0, 0x108($v1)
    ctx->pc = 0x16f5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x16f5c4: 0x8c850ff8  lw          $a1, 0xFF8($a0)
    ctx->pc = 0x16f5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4088)));
    // 0x16f5c8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x16f5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16f5cc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x16f5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x16f5d0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x16f5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x16f5d4: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x16f5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x16f5d8: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x16f5d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x16f5dc: 0x10660002  beq         $v1, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x16F5DCu;
    {
        const bool branch_taken_0x16f5dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x16F5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F5DCu;
        // 0x16f5e0: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f5dc) {
            ctx->pc = 0x16F5E8u;
            goto label_16f5e8;
        }
    }
    ctx->pc = 0x16F5E4u;
    // 0x16f5e4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x16f5e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16f5e8:
    // 0x16f5e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16f5e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f5ec: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x16f5ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f5f0: 0x3e00008  jr          $ra
    ctx->pc = 0x16F5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F5F0u;
        // 0x16f5f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F5F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F5F8u;
}
