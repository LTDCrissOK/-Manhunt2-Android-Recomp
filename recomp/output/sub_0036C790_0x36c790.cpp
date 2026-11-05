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

// Function: sub_0036C790
// Address: 0x36c790 - 0x36c7e8
void sub_0036C790_0x36c790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C790_0x36c790");
#endif

    switch (ctx->pc) {
        case 0x36c7ccu: goto label_36c7cc;
        default: break;
    }

    ctx->pc = 0x36c790u;

    // 0x36c790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c794: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x36c794u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c798: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36c798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36c79c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x36c79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x36c7a0: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x36c7a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x36c7a4: 0x26101f00  addiu       $s0, $s0, 0x1F00
    ctx->pc = 0x36c7a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7936));
    // 0x36c7a8: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x36c7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6C1F48u));
    // 0x36c7ac: 0x2606009c  addiu       $a2, $s0, 0x9C
    ctx->pc = 0x36c7acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    // 0x36c7b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x36c7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x36c7b4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x36c7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x36c7b8: 0xac43004c  sw          $v1, 0x4C($v0)
    ctx->pc = 0x36c7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 3));
    // 0x36c7bc: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x36c7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x36c7c0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x36c7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x36c7c4: 0xc0db160  jal         func_36C580
    ctx->pc = 0x36C7C4u;
    SET_GPR_U32(ctx, 31, 0x36C7CCu);
    ctx->pc = 0x36C7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C7C4u;
    // 0x36c7c8: 0xa62821  addu        $a1, $a1, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C580u, 0x36C7C4u, 0x36C7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C7CCu;
label_36c7cc:
    // 0x36c7cc: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x36c7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x36c7d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36c7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36c7d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36c7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x36c7d8: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x36c7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x36c7dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36c7dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c7e0: 0x3e00008  jr          $ra
    ctx->pc = 0x36C7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C7E0u;
        // 0x36c7e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C7E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C7E8u;
}
