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

// Function: sub_003A2BB8
// Address: 0x3a2bb8 - 0x3a2c10
void sub_003A2BB8_0x3a2bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A2BB8_0x3a2bb8");
#endif

    switch (ctx->pc) {
        case 0x3a2bdcu: goto label_3a2bdc;
        case 0x3a2be4u: goto label_3a2be4;
        case 0x3a2bf8u: goto label_3a2bf8;
        default: break;
    }

    ctx->pc = 0x3a2bb8u;

    // 0x3a2bb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a2bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a2bbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a2bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a2bc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a2bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a2bc4: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x3a2bc4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x3a2bc8: 0x26101e48  addiu       $s0, $s0, 0x1E48
    ctx->pc = 0x3a2bc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7752));
    // 0x3a2bcc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3a2bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3a2bd0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3a2bd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x411E48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x411E48u, _value); } while (0);
    // 0x3a2bd4: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A2BD4u;
    SET_GPR_U32(ctx, 31, 0x3A2BDCu);
    ctx->pc = 0x3A2BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2BD4u;
    // 0x3a2bd8: 0x24042600  addiu       $a0, $zero, 0x2600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A2BD4u, 0x3A2BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2BDCu;
label_3a2bdc:
    // 0x3a2bdc: 0xc0ee37a  jal         func_3B8DE8
    ctx->pc = 0x3A2BDCu;
    SET_GPR_U32(ctx, 31, 0x3A2BE4u);
    ctx->pc = 0x3B8DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8DE8u, 0x3A2BDCu, 0x3A2BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2BE4u;
label_3a2be4:
    // 0x3a2be4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x3a2be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x3a2be8: 0x24042601  addiu       $a0, $zero, 0x2601
    ctx->pc = 0x3a2be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9729));
    // 0x3a2bec: 0x24631e44  addiu       $v1, $v1, 0x1E44
    ctx->pc = 0x3a2becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7748));
    // 0x3a2bf0: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A2BF0u;
    SET_GPR_U32(ctx, 31, 0x3A2BF8u);
    ctx->pc = 0x3A2BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2BF0u;
    // 0x3a2bf4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A2BF0u, 0x3A2BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2BF8u;
label_3a2bf8:
    // 0x3a2bf8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3a2bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x3a2bfc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3a2bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a2c00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a2c00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a2c04: 0x3e00008  jr          $ra
    ctx->pc = 0x3A2C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2C04u;
        // 0x3a2c08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A2C0Cu;
    // 0x3a2c0c: 0x0  nop
    ctx->pc = 0x3a2c0cu;
    // NOP
    ctx->pc = 0x3a2c10u;
}
