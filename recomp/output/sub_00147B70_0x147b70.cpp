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

// Function: sub_00147B70
// Address: 0x147b70 - 0x147bd0
void sub_00147B70_0x147b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147B70_0x147b70");
#endif

    ctx->pc = 0x147b70u;

    // 0x147b70: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x147b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x147b74: 0x14a20014  bne         $a1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x147B74u;
    {
        const bool branch_taken_0x147b74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x147b74) {
            ctx->pc = 0x147BC8u;
            goto label_147bc8;
        }
    }
    ctx->pc = 0x147B7Cu;
    // 0x147b7c: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x147B7Cu;
    {
        const bool branch_taken_0x147b7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x147B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147B7Cu;
        // 0x147b80: 0x3c050049  lui         $a1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147b7c) {
            ctx->pc = 0x147BC8u;
            goto label_147bc8;
        }
    }
    ctx->pc = 0x147B84u;
    // 0x147b84: 0x3c060049  lui         $a2, 0x49
    ctx->pc = 0x147b84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)73 << 16));
    // 0x147b88: 0xaca0bd38  sw          $zero, -0x42C8($a1)
    ctx->pc = 0x147b88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294950200), GPR_U32(ctx, 0));
    // 0x147b8c: 0x24a2bd38  addiu       $v0, $a1, -0x42C8
    ctx->pc = 0x147b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950200));
    // 0x147b90: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x147b90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x147b94: 0x24c3bd48  addiu       $v1, $a2, -0x42B8
    ctx->pc = 0x147b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950216));
    // 0x147b98: 0xacc0bd48  sw          $zero, -0x42B8($a2)
    ctx->pc = 0x147b98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x48BD48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48BD48u, _value); } while (0);
    // 0x147b9c: 0x3c070049  lui         $a3, 0x49
    ctx->pc = 0x147b9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)73 << 16));
    // 0x147ba0: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x147ba0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x48BD54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48BD54u, _value); } while (0);
    // 0x147ba4: 0x24e4bd58  addiu       $a0, $a3, -0x42A8
    ctx->pc = 0x147ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950232));
    // 0x147ba8: 0xace0bd58  sw          $zero, -0x42A8($a3)
    ctx->pc = 0x147ba8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x48BD58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48BD58u, _value); } while (0);
    // 0x147bac: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x147bacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x48BD64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48BD64u, _value); } while (0);
    // 0x147bb0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x147bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x147bb4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x147bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x147bb8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x147bb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x48BD4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48BD4Cu, _value); } while (0);
    // 0x147bbc: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x147bbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x48BD50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48BD50u, _value); } while (0);
    // 0x147bc0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x147bc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x48BD5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48BD5Cu, _value); } while (0);
    // 0x147bc4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x147bc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x48BD60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48BD60u, _value); } while (0);
label_147bc8:
    // 0x147bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x147BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147BD0u;
}
