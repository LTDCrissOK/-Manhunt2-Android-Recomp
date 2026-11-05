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

// Function: sub_002D4198
// Address: 0x2d4198 - 0x2d4208
void sub_002D4198_0x2d4198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4198_0x2d4198");
#endif

    switch (ctx->pc) {
        case 0x2d41d4u: goto label_2d41d4;
        case 0x2d41f4u: goto label_2d41f4;
        default: break;
    }

    ctx->pc = 0x2d4198u;

    // 0x2d4198: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d4198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d419c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d419cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d41a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d41a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d41a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d41a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d41a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d41a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d41ac: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x2d41acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x2d41b0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2d41b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2d41b4: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2d41b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x2d41b8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D41B8u;
    {
        const bool branch_taken_0x2d41b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D41BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D41B8u;
        // 0x2d41bc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d41b8) {
            ctx->pc = 0x2D41D4u;
            goto label_2d41d4;
        }
    }
    ctx->pc = 0x2D41C0u;
    // 0x2d41c0: 0x8e02025c  lw          $v0, 0x25C($s0)
    ctx->pc = 0x2d41c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
    // 0x2d41c4: 0x54510004  bnel        $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D41C4u;
    {
        const bool branch_taken_0x2d41c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2d41c4) {
            ctx->pc = 0x2D41C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D41C4u;
            // 0x2d41c8: 0x8e0301a0  lw          $v1, 0x1A0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D41D8u;
            goto label_2d41d8;
        }
    }
    ctx->pc = 0x2D41CCu;
    // 0x2d41cc: 0xc0894f0  jal         func_2253C0
    ctx->pc = 0x2D41CCu;
    SET_GPR_U32(ctx, 31, 0x2D41D4u);
    ctx->pc = 0x2D41D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D41CCu;
    // 0x2d41d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2253C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2253C0u, 0x2D41CCu, 0x2D41D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D41D4u;
label_2d41d4:
    // 0x2d41d4: 0x8e0301a0  lw          $v1, 0x1A0($s0)
    ctx->pc = 0x2d41d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
label_2d41d8:
    // 0x2d41d8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d41d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d41dc: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D41DCu;
    {
        const bool branch_taken_0x2d41dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d41dc) {
            ctx->pc = 0x2D41E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D41DCu;
            // 0x2d41e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D41F8u;
            goto label_2d41f8;
        }
    }
    ctx->pc = 0x2D41E4u;
    // 0x2d41e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d41e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d41e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d41e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d41ec: 0xc0844ac  jal         func_2112B0
    ctx->pc = 0x2D41ECu;
    SET_GPR_U32(ctx, 31, 0x2D41F4u);
    ctx->pc = 0x2D41F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D41ECu;
    // 0x2d41f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2112B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2112B0u, 0x2D41ECu, 0x2D41F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D41F4u;
label_2d41f4:
    // 0x2d41f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d41f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d41f8:
    // 0x2d41f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d41f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d41fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d41fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d4200: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4200u;
        // 0x2d4204: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4208u;
}
