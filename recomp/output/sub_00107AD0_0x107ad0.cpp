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

// Function: sub_00107AD0
// Address: 0x107ad0 - 0x107b00
void sub_00107AD0_0x107ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107AD0_0x107ad0");
#endif

    switch (ctx->pc) {
        case 0x107ad0u: goto label_107ad0;
        case 0x107ad4u: goto label_107ad4;
        case 0x107ad8u: goto label_107ad8;
        case 0x107adcu: goto label_107adc;
        case 0x107ae0u: goto label_107ae0;
        case 0x107ae4u: goto label_107ae4;
        case 0x107ae8u: goto label_107ae8;
        case 0x107aecu: goto label_107aec;
        case 0x107af0u: goto label_107af0;
        case 0x107af4u: goto label_107af4;
        case 0x107af8u: goto label_107af8;
        case 0x107afcu: goto label_107afc;
        default: break;
    }

    ctx->pc = 0x107ad0u;

label_107ad0:
    // 0x107ad0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_107ad4:
    // 0x107ad4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x107ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_107ad8:
    // 0x107ad8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_107adc:
    if (ctx->pc == 0x107ADCu) {
        ctx->pc = 0x107ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107AD8u;
        // 0x107adc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107AE0u;
        goto label_107ae0;
    }
    ctx->pc = 0x107AD8u;
    {
        const bool branch_taken_0x107ad8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x107ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107AD8u;
        // 0x107adc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ad8) {
            ctx->pc = 0x107AF0u;
            goto label_107af0;
        }
    }
    ctx->pc = 0x107AE0u;
label_107ae0:
    // 0x107ae0: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x107ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_107ae4:
    // 0x107ae4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x107ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_107ae8:
    // 0x107ae8: 0x40f809  jalr        $v0
label_107aec:
    if (ctx->pc == 0x107AECu) {
        ctx->pc = 0x107AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107AE8u;
        // 0x107aec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107AF0u;
        goto label_107af0;
    }
    ctx->pc = 0x107AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x107AF0u);
        ctx->pc = 0x107AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107AE8u;
        // 0x107aec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107AE8u, 0x107AF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107AF0u;
label_107af0:
    // 0x107af0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_107af4:
    // 0x107af4: 0x3e00008  jr          $ra
label_107af8:
    if (ctx->pc == 0x107AF8u) {
        ctx->pc = 0x107AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107AF4u;
        // 0x107af8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107AFCu;
        goto label_107afc;
    }
    ctx->pc = 0x107AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107AF4u;
        // 0x107af8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107AFCu;
label_107afc:
    // 0x107afc: 0x0  nop
    ctx->pc = 0x107afcu;
    // NOP
    ctx->pc = 0x107b00u;
}
