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

// Function: sub_00142FF0
// Address: 0x142ff0 - 0x143040
void sub_00142FF0_0x142ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142FF0_0x142ff0");
#endif

    switch (ctx->pc) {
        case 0x143014u: goto label_143014;
        default: break;
    }

    ctx->pc = 0x142ff0u;

    // 0x142ff0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x142ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x142ff4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x142ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x142ff8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x142ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x142ffc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x142ffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143000: 0x8e020460  lw          $v0, 0x460($s0)
    ctx->pc = 0x143000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1120)));
    // 0x143004: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x143004u;
    {
        const bool branch_taken_0x143004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x143004) {
            ctx->pc = 0x143008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x143004u;
            // 0x143008: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143030u;
            goto label_143030;
        }
    }
    ctx->pc = 0x14300Cu;
    // 0x14300c: 0xc04e572  jal         func_1395C8
    ctx->pc = 0x14300Cu;
    SET_GPR_U32(ctx, 31, 0x143014u);
    ctx->pc = 0x1395C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1395C8u, 0x14300Cu, 0x143014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143014u;
label_143014:
    // 0x143014: 0xae000b20  sw          $zero, 0xB20($s0)
    ctx->pc = 0x143014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2848), GPR_U32(ctx, 0));
    // 0x143018: 0xa2000b10  sb          $zero, 0xB10($s0)
    ctx->pc = 0x143018u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2832), (uint8_t)GPR_U32(ctx, 0));
    // 0x14301c: 0xa2000b11  sb          $zero, 0xB11($s0)
    ctx->pc = 0x14301cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2833), (uint8_t)GPR_U32(ctx, 0));
    // 0x143020: 0xae000b14  sw          $zero, 0xB14($s0)
    ctx->pc = 0x143020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2836), GPR_U32(ctx, 0));
    // 0x143024: 0xae000b18  sw          $zero, 0xB18($s0)
    ctx->pc = 0x143024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2840), GPR_U32(ctx, 0));
    // 0x143028: 0xae000b1c  sw          $zero, 0xB1C($s0)
    ctx->pc = 0x143028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2844), GPR_U32(ctx, 0));
    // 0x14302c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14302cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_143030:
    // 0x143030: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x143030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x143034: 0x3e00008  jr          $ra
    ctx->pc = 0x143034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143034u;
        // 0x143038: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14303Cu;
    // 0x14303c: 0x0  nop
    ctx->pc = 0x14303cu;
    // NOP
    ctx->pc = 0x143040u;
}
