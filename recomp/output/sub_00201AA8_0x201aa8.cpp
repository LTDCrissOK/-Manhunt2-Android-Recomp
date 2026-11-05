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

// Function: sub_00201AA8
// Address: 0x201aa8 - 0x201b10
void sub_00201AA8_0x201aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201AA8_0x201aa8");
#endif

    switch (ctx->pc) {
        case 0x201ad8u: goto label_201ad8;
        case 0x201ae8u: goto label_201ae8;
        default: break;
    }

    ctx->pc = 0x201aa8u;

    // 0x201aa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x201aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x201aac: 0x248401f4  addiu       $a0, $a0, 0x1F4
    ctx->pc = 0x201aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 500));
    // 0x201ab0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x201ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x201ab4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x201ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x201ab8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x201ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x201abc: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x201abcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x201ac0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x201ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x201ac4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x201ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x201ac8: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x201AC8u;
    {
        const bool branch_taken_0x201ac8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x201ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201AC8u;
        // 0x201acc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201ac8) {
            ctx->pc = 0x201AF8u;
            goto label_201af8;
        }
    }
    ctx->pc = 0x201AD0u;
    // 0x201ad0: 0xc082906  jal         func_20A418
    ctx->pc = 0x201AD0u;
    SET_GPR_U32(ctx, 31, 0x201AD8u);
    ctx->pc = 0x201AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201AD0u;
    // 0x201ad4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A418u, 0x201AD0u, 0x201AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201AD8u;
label_201ad8:
    // 0x201ad8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x201AD8u;
    {
        const bool branch_taken_0x201ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201ad8) {
            ctx->pc = 0x201ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201AD8u;
            // 0x201adc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201AF4u;
            goto label_201af4;
        }
    }
    ctx->pc = 0x201AE0u;
    // 0x201ae0: 0xc082912  jal         func_20A448
    ctx->pc = 0x201AE0u;
    SET_GPR_U32(ctx, 31, 0x201AE8u);
    ctx->pc = 0x201AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201AE0u;
    // 0x201ae4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A448u, 0x201AE0u, 0x201AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201AE8u;
label_201ae8:
    // 0x201ae8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x201AE8u;
    {
        const bool branch_taken_0x201ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201AE8u;
        // 0x201aec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201ae8) {
            ctx->pc = 0x201AF8u;
            goto label_201af8;
        }
    }
    ctx->pc = 0x201AF0u;
    // 0x201af0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x201af0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_201af4:
    // 0x201af4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x201af4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_201af8:
    // 0x201af8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x201af8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201afc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x201afcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x201b00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x201b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201b04: 0x3e00008  jr          $ra
    ctx->pc = 0x201B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201B04u;
        // 0x201b08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201B04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201B0Cu;
    // 0x201b0c: 0x0  nop
    ctx->pc = 0x201b0cu;
    // NOP
    ctx->pc = 0x201b10u;
}
