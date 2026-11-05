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

// Function: sub_00205B98
// Address: 0x205b98 - 0x205bf8
void sub_00205B98_0x205b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205B98_0x205b98");
#endif

    switch (ctx->pc) {
        case 0x205bbcu: goto label_205bbc;
        case 0x205bd0u: goto label_205bd0;
        case 0x205be0u: goto label_205be0;
        default: break;
    }

    ctx->pc = 0x205b98u;

    // 0x205b98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x205b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x205b9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x205b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x205ba0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x205ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x205ba4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x205ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x205ba8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x205ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x205bac: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x205BACu;
    {
        const bool branch_taken_0x205bac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x205BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205BACu;
        // 0x205bb0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205bac) {
            ctx->pc = 0x205BE0u;
            goto label_205be0;
        }
    }
    ctx->pc = 0x205BB4u;
    // 0x205bb4: 0xc0e7ddc  jal         func_39F770
    ctx->pc = 0x205BB4u;
    SET_GPR_U32(ctx, 31, 0x205BBCu);
    ctx->pc = 0x39F770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39F770u, 0x205BB4u, 0x205BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205BBCu;
label_205bbc:
    // 0x205bbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x205bbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205bc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x205bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205bc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x205bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205bc8: 0xc0e6fbe  jal         func_39BEF8
    ctx->pc = 0x205BC8u;
    SET_GPR_U32(ctx, 31, 0x205BD0u);
    ctx->pc = 0x205BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205BC8u;
    // 0x205bcc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BEF8u, 0x205BC8u, 0x205BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205BD0u;
label_205bd0:
    // 0x205bd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x205bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205bd4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x205bd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205bd8: 0xc0e6fbe  jal         func_39BEF8
    ctx->pc = 0x205BD8u;
    SET_GPR_U32(ctx, 31, 0x205BE0u);
    ctx->pc = 0x205BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205BD8u;
    // 0x205bdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BEF8u, 0x205BD8u, 0x205BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205BE0u;
label_205be0:
    // 0x205be0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x205be0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205be4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x205be4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x205be8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x205be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x205bec: 0x3e00008  jr          $ra
    ctx->pc = 0x205BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205BECu;
        // 0x205bf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205BF4u;
    // 0x205bf4: 0x0  nop
    ctx->pc = 0x205bf4u;
    // NOP
    ctx->pc = 0x205bf8u;
}
