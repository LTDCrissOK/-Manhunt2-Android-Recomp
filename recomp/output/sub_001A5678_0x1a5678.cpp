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

// Function: sub_001A5678
// Address: 0x1a5678 - 0x1a56f0
void sub_001A5678_0x1a5678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5678_0x1a5678");
#endif

    switch (ctx->pc) {
        case 0x1a56e0u: goto label_1a56e0;
        default: break;
    }

    ctx->pc = 0x1a5678u;

    // 0x1a5678: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a5678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a567c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1a567cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1a5680: 0x14a20017  bne         $a1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A5680u;
    {
        const bool branch_taken_0x1a5680 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A5684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5680u;
        // 0x1a5684: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5680) {
            ctx->pc = 0x1A56E0u;
            goto label_1a56e0;
        }
    }
    ctx->pc = 0x1A5688u;
    // 0x1a5688: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A5688u;
    {
        const bool branch_taken_0x1a5688 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5688u;
        // 0x1a568c: 0x3c060049  lui         $a2, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5688) {
            ctx->pc = 0x1A56E0u;
            goto label_1a56e0;
        }
    }
    ctx->pc = 0x1A5690u;
    // 0x1a5690: 0x3c070049  lui         $a3, 0x49
    ctx->pc = 0x1a5690u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)73 << 16));
    // 0x1a5694: 0xacc0f010  sw          $zero, -0xFF0($a2)
    ctx->pc = 0x1a5694u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294963216), GPR_U32(ctx, 0));
    // 0x1a5698: 0x24c2f010  addiu       $v0, $a2, -0xFF0
    ctx->pc = 0x1a5698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963216));
    // 0x1a569c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1a569cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1a56a0: 0x24e3f020  addiu       $v1, $a3, -0xFE0
    ctx->pc = 0x1a56a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963232));
    // 0x1a56a4: 0xace0f020  sw          $zero, -0xFE0($a3)
    ctx->pc = 0x1a56a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x48F020u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48F020u, _value); } while (0);
    // 0x1a56a8: 0x3c080049  lui         $t0, 0x49
    ctx->pc = 0x1a56a8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)73 << 16));
    // 0x1a56ac: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1a56acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x48F02Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48F02Cu, _value); } while (0);
    // 0x1a56b0: 0x2505f030  addiu       $a1, $t0, -0xFD0
    ctx->pc = 0x1a56b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 4294963248));
    // 0x1a56b4: 0xad00f030  sw          $zero, -0xFD0($t0)
    ctx->pc = 0x1a56b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x48F030u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48F030u, _value); } while (0);
    // 0x1a56b8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1a56b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1a56bc: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x1a56bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x48F03Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48F03Cu, _value); } while (0);
    // 0x1a56c0: 0x2484f040  addiu       $a0, $a0, -0xFC0
    ctx->pc = 0x1a56c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963264));
    // 0x1a56c4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1a56c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1a56c8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1a56c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1a56cc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1a56ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x48F024u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48F024u, _value); } while (0);
    // 0x1a56d0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1a56d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x48F028u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48F028u, _value); } while (0);
    // 0x1a56d4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1a56d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x48F034u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48F034u, _value); } while (0);
    // 0x1a56d8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1A56D8u;
    SET_GPR_U32(ctx, 31, 0x1A56E0u);
    ctx->pc = 0x1A56DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A56D8u;
    // 0x1a56dc: 0xaca00008  sw          $zero, 0x8($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1A56D8u, 0x1A56E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A56E0u;
label_1a56e0:
    // 0x1a56e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a56e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a56e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A56E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A56E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A56E4u;
        // 0x1a56e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A56E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A56ECu;
    // 0x1a56ec: 0x0  nop
    ctx->pc = 0x1a56ecu;
    // NOP
    ctx->pc = 0x1a56f0u;
}
