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

// Function: sub_001EB080
// Address: 0x1eb080 - 0x1eb0f0
void sub_001EB080_0x1eb080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EB080_0x1eb080");
#endif

    switch (ctx->pc) {
        case 0x1eb0e0u: goto label_1eb0e0;
        default: break;
    }

    ctx->pc = 0x1eb080u;

    // 0x1eb080: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x1eb080u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x1eb084: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1eb084u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1eb088: 0x90a39200  lbu         $v1, -0x6E00($a1)
    ctx->pc = 0x1eb088u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3F9200u));
    // 0x1eb08c: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x1eb08cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x1eb090: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eb090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1eb094: 0x24c6c858  addiu       $a2, $a2, -0x37A8
    ctx->pc = 0x1eb094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953048));
    // 0x1eb098: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1eb098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1eb09c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1eb09cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb0a0: 0xa0a39200  sb          $v1, -0x6E00($a1)
    ctx->pc = 0x1eb0a0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3F9200u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F9200u, _value); } while (0);
    // 0x1eb0a4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1eb0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1eb0a8: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x1eb0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x1eb0ac: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1eb0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1eb0b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eb0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eb0b4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1eb0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1eb0b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1eb0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eb0bc: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x1eb0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x1eb0c0: 0x90a29200  lbu         $v0, -0x6E00($a1)
    ctx->pc = 0x1eb0c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294939136)));
    // 0x1eb0c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eb0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eb0c8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1eb0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1eb0cc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1eb0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1eb0d0: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1eb0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1eb0d4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1eb0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1eb0d8: 0xc07e646  jal         func_1F9918
    ctx->pc = 0x1EB0D8u;
    SET_GPR_U32(ctx, 31, 0x1EB0E0u);
    ctx->pc = 0x1EB0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB0D8u;
    // 0x1eb0dc: 0x8ce50004  lw          $a1, 0x4($a3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9918u, 0x1EB0D8u, 0x1EB0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB0E0u;
label_1eb0e0:
    // 0x1eb0e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eb0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eb0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB0E4u;
        // 0x1eb0e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB0ECu;
    // 0x1eb0ec: 0x0  nop
    ctx->pc = 0x1eb0ecu;
    // NOP
    ctx->pc = 0x1eb0f0u;
}
