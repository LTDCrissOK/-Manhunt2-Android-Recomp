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

// Function: sub_0039D278
// Address: 0x39d278 - 0x39d2e0
void sub_0039D278_0x39d278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039D278_0x39d278");
#endif

    switch (ctx->pc) {
        case 0x39d290u: goto label_39d290;
        case 0x39d2c4u: goto label_39d2c4;
        default: break;
    }

    ctx->pc = 0x39d278u;

    // 0x39d278: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39d278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39d27c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39d27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39d280: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39d280u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d284: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x39d284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x39d288: 0xc0e6458  jal         func_399160
    ctx->pc = 0x39D288u;
    SET_GPR_U32(ctx, 31, 0x39D290u);
    ctx->pc = 0x39D28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D288u;
    // 0x39d28c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399160u, 0x39D288u, 0x39D290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D290u;
label_39d290:
    // 0x39d290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39d290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d294: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39d294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39d298: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x39D298u;
    {
        const bool branch_taken_0x39d298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x39D29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D298u;
        // 0x39d29c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d298) {
            ctx->pc = 0x39D2B8u;
            goto label_39d2b8;
        }
    }
    ctx->pc = 0x39D2A0u;
    // 0x39d2a0: 0x84860042  lh          $a2, 0x42($a0)
    ctx->pc = 0x39d2a0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 66)));
    // 0x39d2a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39d2a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39d2a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x39d2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39d2ac: 0x80e6fbe  j           func_39BEF8
    ctx->pc = 0x39D2ACu;
    ctx->pc = 0x39D2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D2ACu;
    // 0x39d2b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BEF8u;
    sub_0039BEF8_0x39bef8(rdram, ctx, runtime); return;
    ctx->pc = 0x39D2B4u;
    // 0x39d2b4: 0x0  nop
    ctx->pc = 0x39d2b4u;
    // NOP
label_39d2b8:
    // 0x39d2b8: 0x86060042  lh          $a2, 0x42($s0)
    ctx->pc = 0x39d2b8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 66)));
    // 0x39d2bc: 0xc0e6fbe  jal         func_39BEF8
    ctx->pc = 0x39D2BCu;
    SET_GPR_U32(ctx, 31, 0x39D2C4u);
    ctx->pc = 0x39D2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D2BCu;
    // 0x39d2c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BEF8u, 0x39D2BCu, 0x39D2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D2C4u;
label_39d2c4:
    // 0x39d2c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39d2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d2c8: 0x84860044  lh          $a2, 0x44($a0)
    ctx->pc = 0x39d2c8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x39d2cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x39d2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39d2d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39d2d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39d2d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x39d2d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39d2d8: 0x80e6fbe  j           func_39BEF8
    ctx->pc = 0x39D2D8u;
    ctx->pc = 0x39D2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D2D8u;
    // 0x39d2dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BEF8u;
    sub_0039BEF8_0x39bef8(rdram, ctx, runtime); return;
    ctx->pc = 0x39D2E0u;
}
