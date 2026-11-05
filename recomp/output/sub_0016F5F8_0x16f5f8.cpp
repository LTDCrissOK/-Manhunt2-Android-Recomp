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

// Function: sub_0016F5F8
// Address: 0x16f5f8 - 0x16f658
void sub_0016F5F8_0x16f5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F5F8_0x16f5f8");
#endif

    switch (ctx->pc) {
        case 0x16f608u: goto label_16f608;
        default: break;
    }

    ctx->pc = 0x16f5f8u;

    // 0x16f5f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16f5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16f5fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16f5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16f600: 0xc05a618  jal         func_169860
    ctx->pc = 0x16F600u;
    SET_GPR_U32(ctx, 31, 0x16F608u);
    ctx->pc = 0x16F604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F600u;
    // 0x16f604: 0x8c84005c  lw          $a0, 0x5C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169860u, 0x16F600u, 0x16F608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F608u;
label_16f608:
    // 0x16f608: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x16f608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x16f60c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16f60cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16f610: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x16f610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x16f614: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x16f614u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x16f618: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16f618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16f61c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16f61cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f620: 0x8c640108  lw          $a0, 0x108($v1)
    ctx->pc = 0x16f620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x16f624: 0x8c850ff8  lw          $a1, 0xFF8($a0)
    ctx->pc = 0x16f624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4088)));
    // 0x16f628: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x16f628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16f62c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x16f62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x16f630: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x16f630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x16f634: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x16f634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x16f638: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x16f638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x16f63c: 0x14660002  bne         $v1, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x16F63Cu;
    {
        const bool branch_taken_0x16f63c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x16F640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F63Cu;
        // 0x16f640: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f63c) {
            ctx->pc = 0x16F648u;
            goto label_16f648;
        }
    }
    ctx->pc = 0x16F644u;
    // 0x16f644: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x16f644u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16f648:
    // 0x16f648: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16f648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f64c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x16f64cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f650: 0x3e00008  jr          $ra
    ctx->pc = 0x16F650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F650u;
        // 0x16f654: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F658u;
}
