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

// Function: sub_002D0460
// Address: 0x2d0460 - 0x2d04d8
void sub_002D0460_0x2d0460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0460_0x2d0460");
#endif

    switch (ctx->pc) {
        case 0x2d0474u: goto label_2d0474;
        case 0x2d04c8u: goto label_2d04c8;
        default: break;
    }

    ctx->pc = 0x2d0460u;

    // 0x2d0460: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d0460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d0464: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d0464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d0468: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d0468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2d046c: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x2D046Cu;
    SET_GPR_U32(ctx, 31, 0x2D0474u);
    ctx->pc = 0x2D0470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D046Cu;
    // 0x2d0470: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x2D046Cu, 0x2D0474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0474u;
label_2d0474:
    // 0x2d0474: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2d0474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d0478: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x2d0478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x2d047c: 0x3442ce40  ori         $v0, $v0, 0xCE40
    ctx->pc = 0x2d047cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52800);
    // 0x2d0480: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2d0480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d0484: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x2d0484u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2d0488: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d0488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d048c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2d048cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2d0490: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2d0490u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2d0494: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2d0494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2d0498: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2d0498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2d049c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d049cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d04a0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2d04a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2d04a4: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2D04A4u;
    {
        const bool branch_taken_0x2d04a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d04a4) {
            ctx->pc = 0x2D04A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D04A4u;
            // 0x2d04a8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D04ACu;
            goto label_2d04ac;
        }
    }
    ctx->pc = 0x2D04ACu;
label_2d04ac:
    // 0x2d04ac: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2d04acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d04b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d04b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d04b4: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x2d04b4u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2d04b8: 0x1810  mfhi        $v1
    ctx->pc = 0x2d04b8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2d04bc: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2d04bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2d04c0: 0xc0f401a  jal         func_3D0068
    ctx->pc = 0x2D04C0u;
    SET_GPR_U32(ctx, 31, 0x2D04C8u);
    ctx->pc = 0x3D0068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0068u, 0x2D04C0u, 0x2D04C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D04C8u;
label_2d04c8:
    // 0x2d04c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d04c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d04cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d04ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d04d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D04D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D04D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D04D0u;
        // 0x2d04d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D04D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D04D8u;
}
