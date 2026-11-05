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

// Function: sub_003BBA68
// Address: 0x3bba68 - 0x3bbab0
void sub_003BBA68_0x3bba68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BBA68_0x3bba68");
#endif

    switch (ctx->pc) {
        case 0x3bba80u: goto label_3bba80;
        case 0x3bba88u: goto label_3bba88;
        default: break;
    }

    ctx->pc = 0x3bba68u;

    // 0x3bba68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3bba68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3bba6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3bba6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3bba70: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3bba70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3bba74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3bba74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3bba78: 0xc0eed90  jal         func_3BB640
    ctx->pc = 0x3BBA78u;
    SET_GPR_U32(ctx, 31, 0x3BBA80u);
    ctx->pc = 0x3BBA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BBA78u;
    // 0x3bba7c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB640u, 0x3BBA78u, 0x3BBA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBA80u;
label_3bba80:
    // 0x3bba80: 0xc0eeda6  jal         func_3BB698
    ctx->pc = 0x3BBA80u;
    SET_GPR_U32(ctx, 31, 0x3BBA88u);
    ctx->pc = 0x3BBA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BBA80u;
    // 0x3bba84: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB698u, 0x3BBA80u, 0x3BBA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBA88u;
label_3bba88:
    // 0x3bba88: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x3bba88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x3bba8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bba8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bba90: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3bba90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3bba94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3bba94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bba98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3bba98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bba9c: 0x2442fde4  addiu       $v0, $v0, -0x21C
    ctx->pc = 0x3bba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966756));
    // 0x3bbaa0: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x3bbaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3bbaa4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3bbaa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bbaa8: 0x80eee76  j           func_3BB9D8
    ctx->pc = 0x3BBAA8u;
    ctx->pc = 0x3BBAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BBAA8u;
    // 0x3bbaac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB9D8u, 0x3BBAA8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3BBAB0u;
}
