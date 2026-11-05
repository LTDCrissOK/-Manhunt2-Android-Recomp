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

// Function: sub_003A3FF0
// Address: 0x3a3ff0 - 0x3a4048
void sub_003A3FF0_0x3a3ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3FF0_0x3a3ff0");
#endif

    switch (ctx->pc) {
        case 0x3a4010u: goto label_3a4010;
        case 0x3a4024u: goto label_3a4024;
        case 0x3a4030u: goto label_3a4030;
        default: break;
    }

    ctx->pc = 0x3a3ff0u;

    // 0x3a3ff0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a3ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a3ff4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a3ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a3ff8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a3ff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3ffc: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x3a3ffcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3a4000: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a4000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a4004: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a4004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a4008: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A4008u;
    SET_GPR_U32(ctx, 31, 0x3A4010u);
    ctx->pc = 0x3A400Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4008u;
    // 0x3a400c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A4008u, 0x3A4010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4010u;
label_3a4010:
    // 0x3a4010: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a4010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a4014: 0x8c462a9c  lw          $a2, 0x2A9C($v0)
    ctx->pc = 0x3a4014u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x412A9Cu));
    // 0x3a4018: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a4018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a401c: 0xc0ee012  jal         func_3B8048
    ctx->pc = 0x3A401Cu;
    SET_GPR_U32(ctx, 31, 0x3A4024u);
    ctx->pc = 0x3A4020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A401Cu;
    // 0x3a4020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8048u, 0x3A401Cu, 0x3A4024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4024u;
label_3a4024:
    // 0x3a4024: 0x34048001  ori         $a0, $zero, 0x8001
    ctx->pc = 0x3a4024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x3a4028: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A4028u;
    SET_GPR_U32(ctx, 31, 0x3A4030u);
    ctx->pc = 0x3A402Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4028u;
    // 0x3a402c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A4028u, 0x3A4030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4030u;
label_3a4030:
    // 0x3a4030: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a4030u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a4034: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a4034u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4038: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a4038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a403c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a403cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a4040: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4040u;
        // 0x3a4044: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4048u;
}
