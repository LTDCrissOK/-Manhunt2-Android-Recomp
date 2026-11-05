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

// Function: sub_003CB048
// Address: 0x3cb048 - 0x3cb080
void sub_003CB048_0x3cb048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CB048_0x3cb048");
#endif

    switch (ctx->pc) {
        case 0x3cb060u: goto label_3cb060;
        default: break;
    }

    ctx->pc = 0x3cb048u;

    // 0x3cb048: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3cb048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3cb04c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3cb04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3cb050: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3CB050u;
    {
        const bool branch_taken_0x3cb050 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3CB054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB050u;
        // 0x3cb054: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb050) {
            ctx->pc = 0x3CB070u;
            goto label_3cb070;
        }
    }
    ctx->pc = 0x3CB058u;
    // 0x3cb058: 0xc0f2bd8  jal         func_3CAF60
    ctx->pc = 0x3CB058u;
    SET_GPR_U32(ctx, 31, 0x3CB060u);
    ctx->pc = 0x3CB05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB058u;
    // 0x3cb05c: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CAF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CAF60u, 0x3CB058u, 0x3CB060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB060u;
label_3cb060:
    // 0x3cb060: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3cb060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3cb064: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x3cb064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3cb068: 0x80f2bd8  j           func_3CAF60
    ctx->pc = 0x3CB068u;
    ctx->pc = 0x3CB06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB068u;
    // 0x3cb06c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CAF60u;
    sub_003CAF60_0x3caf60(rdram, ctx, runtime); return;
    ctx->pc = 0x3CB070u;
label_3cb070:
    // 0x3cb070: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3cb070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3cb074: 0x80f2bd8  j           func_3CAF60
    ctx->pc = 0x3CB074u;
    ctx->pc = 0x3CB078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB074u;
    // 0x3cb078: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CAF60u;
    sub_003CAF60_0x3caf60(rdram, ctx, runtime); return;
    ctx->pc = 0x3CB07Cu;
    // 0x3cb07c: 0x0  nop
    ctx->pc = 0x3cb07cu;
    // NOP
    ctx->pc = 0x3cb080u;
}
