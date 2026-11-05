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

// Function: sub_00263ED0
// Address: 0x263ed0 - 0x263f18
void sub_00263ED0_0x263ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00263ED0_0x263ed0");
#endif

    switch (ctx->pc) {
        case 0x263eecu: goto label_263eec;
        default: break;
    }

    ctx->pc = 0x263ed0u;

    // 0x263ed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x263ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x263ed4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x263ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x263ed8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x263ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x263edc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x263edcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263ee0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x263ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x263ee4: 0xc098fae  jal         func_263EB8
    ctx->pc = 0x263EE4u;
    SET_GPR_U32(ctx, 31, 0x263EECu);
    ctx->pc = 0x263EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263EE4u;
    // 0x263ee8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263EB8u, 0x263EE4u, 0x263EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263EECu;
label_263eec:
    // 0x263eec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x263EECu;
    {
        const bool branch_taken_0x263eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263EECu;
        // 0x263ef0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263eec) {
            ctx->pc = 0x263F04u;
            goto label_263f04;
        }
    }
    ctx->pc = 0x263EF4u;
    // 0x263ef4: 0x8e020230  lw          $v0, 0x230($s0)
    ctx->pc = 0x263ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x263ef8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x263ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x263efc: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x263efcu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x263f00: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x263f00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_263f04:
    // 0x263f04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x263f04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263f08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x263f08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x263f0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x263f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x263f10: 0x3e00008  jr          $ra
    ctx->pc = 0x263F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263F10u;
        // 0x263f14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x263F18u;
}
