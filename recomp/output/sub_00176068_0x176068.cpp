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

// Function: sub_00176068
// Address: 0x176068 - 0x1760c8
void sub_00176068_0x176068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176068_0x176068");
#endif

    switch (ctx->pc) {
        case 0x17607cu: goto label_17607c;
        default: break;
    }

    ctx->pc = 0x176068u;

    // 0x176068: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x176068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17606c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17606cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x176070: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x176070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x176074: 0xc04f8aa  jal         func_13E2A8
    ctx->pc = 0x176074u;
    SET_GPR_U32(ctx, 31, 0x17607Cu);
    ctx->pc = 0x176078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176074u;
    // 0x176078: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E2A8u, 0x176074u, 0x17607Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17607Cu;
label_17607c:
    // 0x17607c: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x17607cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x176080: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x176080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
    // 0x176084: 0x7e0000c0  sq          $zero, 0xC0($s0)
    ctx->pc = 0x176084u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 192), GPR_VEC(ctx, 0));
    // 0x176088: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x176088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17608c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x17608cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x176090: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x176090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
    // 0x176094: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x176094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x176098: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x176098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x17609c: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x17609cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    // 0x1760a0: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1760a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1760a4: 0x7e0000f0  sq          $zero, 0xF0($s0)
    ctx->pc = 0x1760a4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 240), GPR_VEC(ctx, 0));
    // 0x1760a8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1760a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1760ac: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x1760acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x1760b0: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1760b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x1760b4: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x1760b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x1760b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1760b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1760bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1760bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1760c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1760C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1760C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1760C0u;
        // 0x1760c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1760C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1760C8u;
}
