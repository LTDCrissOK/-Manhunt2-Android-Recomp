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

// Function: sub_003AAA80
// Address: 0x3aaa80 - 0x3aaab0
void sub_003AAA80_0x3aaa80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AAA80_0x3aaa80");
#endif

    switch (ctx->pc) {
        case 0x3aaa90u: goto label_3aaa90;
        case 0x3aaa98u: goto label_3aaa98;
        case 0x3aaaa0u: goto label_3aaaa0;
        default: break;
    }

    ctx->pc = 0x3aaa80u;

    // 0x3aaa80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3aaa80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3aaa84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3aaa84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3aaa88: 0xc0ea7d8  jal         func_3A9F60
    ctx->pc = 0x3AAA88u;
    SET_GPR_U32(ctx, 31, 0x3AAA90u);
    ctx->pc = 0x3A9F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F60u, 0x3AAA88u, 0x3AAA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAA90u;
label_3aaa90:
    // 0x3aaa90: 0xc0eaaac  jal         func_3AAAB0
    ctx->pc = 0x3AAA90u;
    SET_GPR_U32(ctx, 31, 0x3AAA98u);
    ctx->pc = 0x3AAAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AAAB0u, 0x3AAA90u, 0x3AAA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAA98u;
label_3aaa98:
    // 0x3aaa98: 0xc0ea7de  jal         func_3A9F78
    ctx->pc = 0x3AAA98u;
    SET_GPR_U32(ctx, 31, 0x3AAAA0u);
    ctx->pc = 0x3A9F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F78u, 0x3AAA98u, 0x3AAAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAAA0u;
label_3aaaa0:
    // 0x3aaaa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3aaaa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aaaa4: 0x80ea7cc  j           func_3A9F30
    ctx->pc = 0x3AAAA4u;
    ctx->pc = 0x3AAAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAAA4u;
    // 0x3aaaa8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F30u, 0x3AAAA4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AAAACu;
    // 0x3aaaac: 0x0  nop
    ctx->pc = 0x3aaaacu;
    // NOP
    ctx->pc = 0x3aaab0u;
}
