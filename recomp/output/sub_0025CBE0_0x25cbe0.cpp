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

// Function: sub_0025CBE0
// Address: 0x25cbe0 - 0x25cc38
void sub_0025CBE0_0x25cbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CBE0_0x25cbe0");
#endif

    switch (ctx->pc) {
        case 0x25cc18u: goto label_25cc18;
        case 0x25cc28u: goto label_25cc28;
        default: break;
    }

    ctx->pc = 0x25cbe0u;

    // 0x25cbe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25cbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25cbe4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25cbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25cbe8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x25cbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x25cbec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25cbecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cbf0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x25cbf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25cbf4: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x25CBF4u;
    {
        const bool branch_taken_0x25cbf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cbf4) {
            ctx->pc = 0x25CBF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25CBF4u;
            // 0x25cbf8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25CC2Cu;
            goto label_25cc2c;
        }
    }
    ctx->pc = 0x25CBFCu;
    // 0x25cbfc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x25cbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x25cc00: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x25CC00u;
    {
        const bool branch_taken_0x25cc00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cc00) {
            ctx->pc = 0x25CC04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25CC00u;
            // 0x25cc04: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25CC2Cu;
            goto label_25cc2c;
        }
    }
    ctx->pc = 0x25CC08u;
    // 0x25cc08: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x25CC08u;
    {
        const bool branch_taken_0x25cc08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cc08) {
            ctx->pc = 0x25CC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25CC08u;
            // 0x25cc0c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25CC2Cu;
            goto label_25cc2c;
        }
    }
    ctx->pc = 0x25CC10u;
    // 0x25cc10: 0xc0d27c6  jal         func_349F18
    ctx->pc = 0x25CC10u;
    SET_GPR_U32(ctx, 31, 0x25CC18u);
    ctx->pc = 0x25CC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CC10u;
    // 0x25cc14: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349F18u, 0x25CC10u, 0x25CC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CC18u;
label_25cc18:
    // 0x25cc18: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x25cc18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x25cc1c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x25cc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x25cc20: 0xc0d1e7e  jal         func_3479F8
    ctx->pc = 0x25CC20u;
    SET_GPR_U32(ctx, 31, 0x25CC28u);
    ctx->pc = 0x25CC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CC20u;
    // 0x25cc24: 0xc44c2b30  lwc1        $f12, 0x2B30($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3479F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3479F8u, 0x25CC20u, 0x25CC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CC28u;
label_25cc28:
    // 0x25cc28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25cc28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25cc2c:
    // 0x25cc2c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x25cc2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25cc30: 0x3e00008  jr          $ra
    ctx->pc = 0x25CC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CC30u;
        // 0x25cc34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CC30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25CC38u;
}
