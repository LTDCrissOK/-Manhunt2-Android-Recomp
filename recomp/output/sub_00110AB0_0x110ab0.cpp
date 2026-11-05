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

// Function: sub_00110AB0
// Address: 0x110ab0 - 0x110b00
void sub_00110AB0_0x110ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110AB0_0x110ab0");
#endif

    switch (ctx->pc) {
        case 0x110ae4u: goto label_110ae4;
        default: break;
    }

    ctx->pc = 0x110ab0u;

    // 0x110ab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x110ab4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110ab8: 0x8c82010c  lw          $v0, 0x10C($a0)
    ctx->pc = 0x110ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 268)));
    // 0x110abc: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x110ABCu;
    {
        const bool branch_taken_0x110abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110ABCu;
        // 0x110ac0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110abc) {
            ctx->pc = 0x110AECu;
            goto label_110aec;
        }
    }
    ctx->pc = 0x110AC4u;
    // 0x110ac4: 0x8c8200d0  lw          $v0, 0xD0($a0)
    ctx->pc = 0x110ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x110ac8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x110AC8u;
    {
        const bool branch_taken_0x110ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110AC8u;
        // 0x110acc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ac8) {
            ctx->pc = 0x110AECu;
            goto label_110aec;
        }
    }
    ctx->pc = 0x110AD0u;
    // 0x110ad0: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x110ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x110ad4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x110AD4u;
    {
        const bool branch_taken_0x110ad4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x110AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110AD4u;
        // 0x110ad8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ad4) {
            ctx->pc = 0x110AF0u;
            goto label_110af0;
        }
    }
    ctx->pc = 0x110ADCu;
    // 0x110adc: 0xc05fcaa  jal         func_17F2A8
    ctx->pc = 0x110ADCu;
    SET_GPR_U32(ctx, 31, 0x110AE4u);
    ctx->pc = 0x17F2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F2A8u, 0x110ADCu, 0x110AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110AE4u;
label_110ae4:
    // 0x110ae4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x110AE4u;
    {
        const bool branch_taken_0x110ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110AE4u;
        // 0x110ae8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ae4) {
            ctx->pc = 0x110AF0u;
            goto label_110af0;
        }
    }
    ctx->pc = 0x110AECu;
label_110aec:
    // 0x110aec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_110af0:
    // 0x110af0: 0x3e00008  jr          $ra
    ctx->pc = 0x110AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110AF0u;
        // 0x110af4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110AF8u;
    // 0x110af8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x110af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x110afc: 0x0  nop
    ctx->pc = 0x110afcu;
    // NOP
    ctx->pc = 0x110b00u;
}
