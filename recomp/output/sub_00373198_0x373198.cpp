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

// Function: sub_00373198
// Address: 0x373198 - 0x373208
void sub_00373198_0x373198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373198_0x373198");
#endif

    switch (ctx->pc) {
        case 0x3731e8u: goto label_3731e8;
        default: break;
    }

    ctx->pc = 0x373198u;

    // 0x373198: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x373198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37319c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x37319cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3731a0: 0x3c120065  lui         $s2, 0x65
    ctx->pc = 0x3731a0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)101 << 16));
    // 0x3731a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3731a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3731a8: 0x8e425b28  lw          $v0, 0x5B28($s2)
    ctx->pc = 0x3731a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x655B28u));
    // 0x3731ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3731acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3731b0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3731B0u;
    {
        const bool branch_taken_0x3731b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3731B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3731B0u;
        // 0x3731b4: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3731b0) {
            ctx->pc = 0x3731F0u;
            goto label_3731f0;
        }
    }
    ctx->pc = 0x3731B8u;
    // 0x3731b8: 0x3c100065  lui         $s0, 0x65
    ctx->pc = 0x3731b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)101 << 16));
    // 0x3731bc: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3731bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x3731c0: 0x26105b00  addiu       $s0, $s0, 0x5B00
    ctx->pc = 0x3731c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23296));
    // 0x3731c4: 0x8c455b2c  lw          $a1, 0x5B2C($v0)
    ctx->pc = 0x3731c4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x655B2Cu));
    // 0x3731c8: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x3731c8u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x655B04u));
    // 0x3731cc: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x3731ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x3731d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3731d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3731d4: 0x36220041  ori         $v0, $s1, 0x41
    ctx->pc = 0x3731d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65);
    // 0x3731d8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3731d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x655B04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x655B04u, _value); } while (0);
    // 0x3731dc: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x3731dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x3731e0: 0xc0dcce2  jal         func_373388
    ctx->pc = 0x3731E0u;
    SET_GPR_U32(ctx, 31, 0x3731E8u);
    ctx->pc = 0x3731E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3731E0u;
    // 0x3731e4: 0x8e455b28  lw          $a1, 0x5B28($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 23336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373388u, 0x3731E0u, 0x3731E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3731E8u;
label_3731e8:
    // 0x3731e8: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x3731e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x3731ec: 0xae405b28  sw          $zero, 0x5B28($s2)
    ctx->pc = 0x3731ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 23336), GPR_U32(ctx, 0));
label_3731f0:
    // 0x3731f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3731f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3731f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3731f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3731f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3731f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3731fc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3731fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x373200: 0x3e00008  jr          $ra
    ctx->pc = 0x373200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373200u;
        // 0x373204: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373208u;
}
