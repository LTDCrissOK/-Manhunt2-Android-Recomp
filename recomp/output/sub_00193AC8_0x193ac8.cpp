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

// Function: sub_00193AC8
// Address: 0x193ac8 - 0x193b10
void sub_00193AC8_0x193ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193AC8_0x193ac8");
#endif

    switch (ctx->pc) {
        case 0x193ac8u: goto label_193ac8;
        case 0x193accu: goto label_193acc;
        case 0x193ad0u: goto label_193ad0;
        case 0x193ad4u: goto label_193ad4;
        case 0x193ad8u: goto label_193ad8;
        case 0x193adcu: goto label_193adc;
        case 0x193ae0u: goto label_193ae0;
        case 0x193ae4u: goto label_193ae4;
        case 0x193ae8u: goto label_193ae8;
        case 0x193aecu: goto label_193aec;
        case 0x193af0u: goto label_193af0;
        case 0x193af4u: goto label_193af4;
        case 0x193af8u: goto label_193af8;
        case 0x193afcu: goto label_193afc;
        case 0x193b00u: goto label_193b00;
        case 0x193b04u: goto label_193b04;
        case 0x193b08u: goto label_193b08;
        case 0x193b0cu: goto label_193b0c;
        default: break;
    }

    ctx->pc = 0x193ac8u;

label_193ac8:
    // 0x193ac8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x193ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_193acc:
    // 0x193acc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x193accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_193ad0:
    // 0x193ad0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x193ad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_193ad4:
    // 0x193ad4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x193ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_193ad8:
    // 0x193ad8: 0xc06faee  jal         func_1BEBB8
label_193adc:
    if (ctx->pc == 0x193ADCu) {
        ctx->pc = 0x193ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193AD8u;
        // 0x193adc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193AE0u;
        goto label_193ae0;
    }
    ctx->pc = 0x193AD8u;
    SET_GPR_U32(ctx, 31, 0x193AE0u);
    ctx->pc = 0x193ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193AD8u;
    // 0x193adc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEBB8u, 0x193AD8u, 0x193AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193AE0u;
label_193ae0:
    // 0x193ae0: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x193ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_193ae4:
    // 0x193ae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_193ae8:
    // 0x193ae8: 0x8cc30024  lw          $v1, 0x24($a2)
    ctx->pc = 0x193ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_193aec:
    // 0x193aec: 0x60f809  jalr        $v1
label_193af0:
    if (ctx->pc == 0x193AF0u) {
        ctx->pc = 0x193AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193AECu;
        // 0x193af0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193AF4u;
        goto label_193af4;
    }
    ctx->pc = 0x193AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x193AF4u);
        ctx->pc = 0x193AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193AECu;
        // 0x193af0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193AECu, 0x193AF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193AF4u;
label_193af4:
    // 0x193af4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x193af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_193af8:
    // 0x193af8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x193af8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_193afc:
    // 0x193afc: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x193afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
label_193b00:
    // 0x193b00: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x193b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_193b04:
    // 0x193b04: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x193b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_193b08:
    // 0x193b08: 0x3e00008  jr          $ra
label_193b0c:
    if (ctx->pc == 0x193B0Cu) {
        ctx->pc = 0x193B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B08u;
        // 0x193b0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193B10u;
        goto label_fallthrough_0x193b08;
    }
    ctx->pc = 0x193B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B08u;
        // 0x193b0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x193b08:
    ctx->pc = 0x193B10u;
}
