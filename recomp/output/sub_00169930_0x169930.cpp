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

// Function: sub_00169930
// Address: 0x169930 - 0x1699a8
void sub_00169930_0x169930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169930_0x169930");
#endif

    ctx->pc = 0x169930u;

    // 0x169930: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x169930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169934: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x169934u;
    {
        const bool branch_taken_0x169934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x169938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169934u;
        // 0x169938: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169934) {
            ctx->pc = 0x16999Cu;
            goto label_16999c;
        }
    }
    ctx->pc = 0x16993Cu;
    // 0x16993c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x16993cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x169940: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x169940u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
    // 0x169944: 0xa0800008  sb          $zero, 0x8($a0)
    ctx->pc = 0x169944u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x169948: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x169948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x16994c: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x16994cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x169950: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x169950u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x169954: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x169954u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x169958: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x169958u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x16995c: 0x7c800050  sq          $zero, 0x50($a0)
    ctx->pc = 0x16995cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 0));
    // 0x169960: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x169960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x169964: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x169964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169968: 0xac82006c  sw          $v0, 0x6C($a0)
    ctx->pc = 0x169968u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 2));
    // 0x16996c: 0xac83007c  sw          $v1, 0x7C($a0)
    ctx->pc = 0x16996cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 3));
    // 0x169970: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x169970u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x169974: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x169974u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x169978: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x169978u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x16997c: 0xa0800068  sb          $zero, 0x68($a0)
    ctx->pc = 0x16997cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 104), (uint8_t)GPR_U32(ctx, 0));
    // 0x169980: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x169980u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
    // 0x169984: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x169984u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
    // 0x169988: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x169988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x16998c: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x16998cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x169990: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x169990u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x169994: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x169994u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
    // 0x169998: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x169998u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
label_16999c:
    // 0x16999c: 0x3e00008  jr          $ra
    ctx->pc = 0x16999Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16999Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1699A4u;
    // 0x1699a4: 0x0  nop
    ctx->pc = 0x1699a4u;
    // NOP
    ctx->pc = 0x1699a8u;
}
