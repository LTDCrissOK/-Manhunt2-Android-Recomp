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

// Function: sub_00308DC0
// Address: 0x308dc0 - 0x308e20
void sub_00308DC0_0x308dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308DC0_0x308dc0");
#endif

    switch (ctx->pc) {
        case 0x308de4u: goto label_308de4;
        default: break;
    }

    ctx->pc = 0x308dc0u;

    // 0x308dc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x308dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x308dc4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x308dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x308dc8: 0x14a20012  bne         $a1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x308DC8u;
    {
        const bool branch_taken_0x308dc8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x308DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308DC8u;
        // 0x308dcc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308dc8) {
            ctx->pc = 0x308E14u;
            goto label_308e14;
        }
    }
    ctx->pc = 0x308DD0u;
    // 0x308dd0: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x308DD0u;
    {
        const bool branch_taken_0x308dd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x308DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308DD0u;
        // 0x308dd4: 0x3c04005a  lui         $a0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308dd0) {
            ctx->pc = 0x308E14u;
            goto label_308e14;
        }
    }
    ctx->pc = 0x308DD8u;
    // 0x308dd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x308dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308ddc: 0xc087380  jal         func_21CE00
    ctx->pc = 0x308DDCu;
    SET_GPR_U32(ctx, 31, 0x308DE4u);
    ctx->pc = 0x308DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308DDCu;
    // 0x308de0: 0x24846650  addiu       $a0, $a0, 0x6650 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CE00u, 0x308DDCu, 0x308DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308DE4u;
label_308de4:
    // 0x308de4: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x308de4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x308de8: 0x3c05005a  lui         $a1, 0x5A
    ctx->pc = 0x308de8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)90 << 16));
    // 0x308dec: 0x248267f0  addiu       $v0, $a0, 0x67F0
    ctx->pc = 0x308decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 26608));
    // 0x308df0: 0xac8067f0  sw          $zero, 0x67F0($a0)
    ctx->pc = 0x308df0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5A67F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5A67F0u, _value); } while (0);
    // 0x308df4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x308df4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5A67FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5A67FCu, _value); } while (0);
    // 0x308df8: 0x24a36800  addiu       $v1, $a1, 0x6800
    ctx->pc = 0x308df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 26624));
    // 0x308dfc: 0xaca06800  sw          $zero, 0x6800($a1)
    ctx->pc = 0x308dfcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5A6800u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5A6800u, _value); } while (0);
    // 0x308e00: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x308e00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5A680Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5A680Cu, _value); } while (0);
    // 0x308e04: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x308e04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5A67F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5A67F4u, _value); } while (0);
    // 0x308e08: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x308e08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5A67F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5A67F8u, _value); } while (0);
    // 0x308e0c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x308e0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5A6804u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5A6804u, _value); } while (0);
    // 0x308e10: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x308e10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5A6808u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5A6808u, _value); } while (0);
label_308e14:
    // 0x308e14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x308e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308e18: 0x3e00008  jr          $ra
    ctx->pc = 0x308E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308E18u;
        // 0x308e1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308E20u;
}
