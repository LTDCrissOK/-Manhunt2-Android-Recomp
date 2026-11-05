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

// Function: sub_0039FDB8
// Address: 0x39fdb8 - 0x39fe08
void sub_0039FDB8_0x39fdb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039FDB8_0x39fdb8");
#endif

    switch (ctx->pc) {
        case 0x39fddcu: goto label_39fddc;
        case 0x39fdecu: goto label_39fdec;
        default: break;
    }

    ctx->pc = 0x39fdb8u;

    // 0x39fdb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39fdb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39fdbc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x39fdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x39fdc0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39fdc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39fdc4: 0x2451ae04  addiu       $s1, $v0, -0x51FC
    ctx->pc = 0x39fdc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946308));
    // 0x39fdc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39fdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39fdcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39fdccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39fdd0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39fdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39fdd4: 0xc0eb4a0  jal         func_3AD280
    ctx->pc = 0x39FDD4u;
    SET_GPR_U32(ctx, 31, 0x39FDDCu);
    ctx->pc = 0x39FDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FDD4u;
    // 0x39fdd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD280u, 0x39FDD4u, 0x39FDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FDDCu;
label_39fddc:
    // 0x39fddc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39FDDCu;
    {
        const bool branch_taken_0x39fddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FDDCu;
        // 0x39fde0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fddc) {
            ctx->pc = 0x39FDF0u;
            goto label_39fdf0;
        }
    }
    ctx->pc = 0x39FDE4u;
    // 0x39fde4: 0xc0e7f82  jal         func_39FE08
    ctx->pc = 0x39FDE4u;
    SET_GPR_U32(ctx, 31, 0x39FDECu);
    ctx->pc = 0x39FE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FE08u, 0x39FDE4u, 0x39FDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FDECu;
label_39fdec:
    // 0x39fdec: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x39fdecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_39fdf0:
    // 0x39fdf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39fdf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39fdf4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39fdf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39fdf8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39fdf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39fdfc: 0x3e00008  jr          $ra
    ctx->pc = 0x39FDFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39FE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FDFCu;
        // 0x39fe00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39FDFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39FE04u;
    // 0x39fe04: 0x0  nop
    ctx->pc = 0x39fe04u;
    // NOP
    ctx->pc = 0x39fe08u;
}
