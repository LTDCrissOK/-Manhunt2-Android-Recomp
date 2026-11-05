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

// Function: sub_0020E248
// Address: 0x20e248 - 0x20e2c8
void sub_0020E248_0x20e248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E248_0x20e248");
#endif

    switch (ctx->pc) {
        case 0x20e274u: goto label_20e274;
        case 0x20e2b0u: goto label_20e2b0;
        default: break;
    }

    ctx->pc = 0x20e248u;

    // 0x20e248: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20e248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20e24c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20e24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20e250: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20e250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20e254: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20e254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e258: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x20e258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x20e25c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x20E25Cu;
    {
        const bool branch_taken_0x20e25c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e25c) {
            ctx->pc = 0x20E260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E25Cu;
            // 0x20e260: 0x8e04010c  lw          $a0, 0x10C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E278u;
            goto label_20e278;
        }
    }
    ctx->pc = 0x20E264u;
    // 0x20e264: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x20e264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x20e268: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20e268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20e26c: 0xc0763f2  jal         func_1D8FC8
    ctx->pc = 0x20E26Cu;
    SET_GPR_U32(ctx, 31, 0x20E274u);
    ctx->pc = 0x20E270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E26Cu;
    // 0x20e270: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8FC8u, 0x20E26Cu, 0x20E274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E274u;
label_20e274:
    // 0x20e274: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x20e274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_20e278:
    // 0x20e278: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x20E278u;
    {
        const bool branch_taken_0x20e278 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e278) {
            ctx->pc = 0x20E27Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E278u;
            // 0x20e27c: 0x8e040104  lw          $a0, 0x104($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E294u;
            goto label_20e294;
        }
    }
    ctx->pc = 0x20E280u;
    // 0x20e280: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x20e280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x20e284: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20e284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20e288: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x20e288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x20e28c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x20e28cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x20e290: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x20e290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_20e294:
    // 0x20e294: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x20E294u;
    {
        const bool branch_taken_0x20e294 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e294) {
            ctx->pc = 0x20E298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E294u;
            // 0x20e298: 0xae000100  sw          $zero, 0x100($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E2B8u;
            goto label_20e2b8;
        }
    }
    ctx->pc = 0x20E29Cu;
    // 0x20e29c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20e29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20e2a0: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x20e2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x20e2a4: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x20e2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x20e2a8: 0xc0c48da  jal         func_312368
    ctx->pc = 0x20E2A8u;
    SET_GPR_U32(ctx, 31, 0x20E2B0u);
    ctx->pc = 0x20E2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E2A8u;
    // 0x20e2ac: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x20E2A8u, 0x20E2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E2B0u;
label_20e2b0:
    // 0x20e2b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20E2B0u;
    {
        const bool branch_taken_0x20e2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E2B0u;
        // 0x20e2b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e2b0) {
            ctx->pc = 0x20E2BCu;
            goto label_20e2bc;
        }
    }
    ctx->pc = 0x20E2B8u;
label_20e2b8:
    // 0x20e2b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20e2b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20e2bc:
    // 0x20e2bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20e2bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20e2c0: 0x3e00008  jr          $ra
    ctx->pc = 0x20E2C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E2C0u;
        // 0x20e2c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E2C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E2C8u;
}
