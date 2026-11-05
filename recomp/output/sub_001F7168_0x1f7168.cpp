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

// Function: sub_001F7168
// Address: 0x1f7168 - 0x1f71c0
void sub_001F7168_0x1f7168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7168_0x1f7168");
#endif

    switch (ctx->pc) {
        case 0x1f71b4u: goto label_1f71b4;
        default: break;
    }

    ctx->pc = 0x1f7168u;

    // 0x1f7168: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1f7168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1f716c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f716cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f7170: 0x8c62bd6c  lw          $v0, -0x4294($v1)
    ctx->pc = 0x1f7170u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD6Cu));
    // 0x1f7174: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F7174u;
    {
        const bool branch_taken_0x1f7174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7174u;
        // 0x1f7178: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7174) {
            ctx->pc = 0x1F71B4u;
            goto label_1f71b4;
        }
    }
    ctx->pc = 0x1F717Cu;
    // 0x1f717c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f717cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f7180: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x1f7180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f7184: 0x8ca313a0  lw          $v1, 0x13A0($a1)
    ctx->pc = 0x1f7184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 5024)));
    // 0x1f7188: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1F7188u;
    {
        const bool branch_taken_0x1f7188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7188u;
        // 0x1f718c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7188) {
            ctx->pc = 0x1F71B8u;
            goto label_1f71b8;
        }
    }
    ctx->pc = 0x1F7190u;
    // 0x1f7190: 0x8ca215e8  lw          $v0, 0x15E8($a1)
    ctx->pc = 0x1f7190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 5608)));
    // 0x1f7194: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F7194u;
    {
        const bool branch_taken_0x1f7194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7194u;
        // 0x1f7198: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7194) {
            ctx->pc = 0x1F71B8u;
            goto label_1f71b8;
        }
    }
    ctx->pc = 0x1F719Cu;
    // 0x1f719c: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1f719cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1f71a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f71a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f71a4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f71a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f71a8: 0x24849b28  addiu       $a0, $a0, -0x64D8
    ctx->pc = 0x1f71a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
    // 0x1f71ac: 0xc07fe34  jal         func_1FF8D0
    ctx->pc = 0x1F71ACu;
    SET_GPR_U32(ctx, 31, 0x1F71B4u);
    ctx->pc = 0x1F71B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F71ACu;
    // 0x1f71b0: 0xaca215e8  sw          $v0, 0x15E8($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 5608), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF8D0u, 0x1F71ACu, 0x1F71B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F71B4u;
label_1f71b4:
    // 0x1f71b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f71b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f71b8:
    // 0x1f71b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F71B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F71BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F71B8u;
        // 0x1f71bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F71B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F71C0u;
}
