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

// Function: sub_003A0948
// Address: 0x3a0948 - 0x3a09a0
void sub_003A0948_0x3a0948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0948_0x3a0948");
#endif

    switch (ctx->pc) {
        case 0x3a095cu: goto label_3a095c;
        case 0x3a0984u: goto label_3a0984;
        default: break;
    }

    ctx->pc = 0x3a0948u;

    // 0x3a0948: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a0948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a094c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a094cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a0950: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3a0950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3a0954: 0xc0ecbe4  jal         func_3B2F90
    ctx->pc = 0x3A0954u;
    SET_GPR_U32(ctx, 31, 0x3A095Cu);
    ctx->pc = 0x3B2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2F90u, 0x3A0954u, 0x3A095Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A095Cu;
label_3a095c:
    // 0x3a095c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a095cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a0960: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x3a0960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x3a0964: 0x2450b7f0  addiu       $s0, $v0, -0x4810
    ctx->pc = 0x3a0964u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948848));
    // 0x3a0968: 0x2484b7f8  addiu       $a0, $a0, -0x4808
    ctx->pc = 0x3a0968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948856));
    // 0x3a096c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3a096cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x40B7F0u));
    // 0x3a0970: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a0970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0974: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A0974u;
    {
        const bool branch_taken_0x3a0974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A0978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0974u;
        // 0x3a0978: 0x24066590  addiu       $a2, $zero, 0x6590 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0974) {
            ctx->pc = 0x3A0988u;
            goto label_3a0988;
        }
    }
    ctx->pc = 0x3A097Cu;
    // 0x3a097c: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3A097Cu;
    SET_GPR_U32(ctx, 31, 0x3A0984u);
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3A097Cu, 0x3A0984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0984u;
label_3a0984:
    // 0x3a0984: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3a0984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a0988:
    // 0x3a0988: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a0988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a098c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3a098cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a0990: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3a0990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3a0994: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a0994u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a0998: 0x80ecbea  j           func_3B2FA8
    ctx->pc = 0x3A0998u;
    ctx->pc = 0x3A099Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0998u;
    // 0x3a099c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FA8u;
    sub_003B2FA8_0x3b2fa8(rdram, ctx, runtime); return;
    ctx->pc = 0x3A09A0u;
}
