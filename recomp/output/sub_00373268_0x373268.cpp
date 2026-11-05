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

// Function: sub_00373268
// Address: 0x373268 - 0x3732b8
void sub_00373268_0x373268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373268_0x373268");
#endif

    ctx->pc = 0x373268u;

    // 0x373268: 0x3c070065  lui         $a3, 0x65
    ctx->pc = 0x373268u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)101 << 16));
    // 0x37326c: 0x8ce65b28  lw          $a2, 0x5B28($a3)
    ctx->pc = 0x37326cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x655B28u));
    // 0x373270: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x373270u;
    {
        const bool branch_taken_0x373270 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x373274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373270u;
        // 0x373274: 0x3c020065  lui         $v0, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373270) {
            ctx->pc = 0x373284u;
            goto label_373284;
        }
    }
    ctx->pc = 0x373278u;
    // 0x373278: 0xace45b28  sw          $a0, 0x5B28($a3)
    ctx->pc = 0x373278u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 23336), GPR_U32(ctx, 4));
    // 0x37327c: 0x3e00008  jr          $ra
    ctx->pc = 0x37327Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37327Cu;
        // 0x373280: 0xac455b2c  sw          $a1, 0x5B2C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 23340), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37327Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373284u;
label_373284:
    // 0x373284: 0x3c02cfff  lui         $v0, 0xCFFF
    ctx->pc = 0x373284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53247 << 16));
    // 0x373288: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x373288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
    // 0x37328c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x37328cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x373290: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x373290u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x373294: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x373294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x373298: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x373298u;
    {
        const bool branch_taken_0x373298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37329Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373298u;
        // 0x37329c: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373298) {
            ctx->pc = 0x3732A4u;
            goto label_3732a4;
        }
    }
    ctx->pc = 0x3732A0u;
    // 0x3732a0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x3732a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_3732a4:
    // 0x3732a4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3732a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3732a8: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x3732a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x3732ac: 0xa0a20003  sb          $v0, 0x3($a1)
    ctx->pc = 0x3732acu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3732b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3732B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3732B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3732B0u;
        // 0x3732b4: 0xace45b28  sw          $a0, 0x5B28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 23336), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3732B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3732B8u;
}
