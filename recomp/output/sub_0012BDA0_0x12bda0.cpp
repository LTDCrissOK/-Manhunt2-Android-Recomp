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

// Function: sub_0012BDA0
// Address: 0x12bda0 - 0x12be00
void sub_0012BDA0_0x12bda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012BDA0_0x12bda0");
#endif

    switch (ctx->pc) {
        case 0x12bdb4u: goto label_12bdb4;
        default: break;
    }

    ctx->pc = 0x12bda0u;

    // 0x12bda0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12bda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12bda4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12bda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12bda8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12bda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12bdac: 0xc04b19a  jal         func_12C668
    ctx->pc = 0x12BDACu;
    SET_GPR_U32(ctx, 31, 0x12BDB4u);
    ctx->pc = 0x12BDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BDACu;
    // 0x12bdb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C668u, 0x12BDACu, 0x12BDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BDB4u;
label_12bdb4:
    // 0x12bdb4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12bdb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bdb8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x12bdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12bdbc: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12BDBCu;
    {
        const bool branch_taken_0x12bdbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12BDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BDBCu;
        // 0x12bdc0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bdbc) {
            ctx->pc = 0x12BDDCu;
            goto label_12bddc;
        }
    }
    ctx->pc = 0x12BDC4u;
    // 0x12bdc4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x12bdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x12bdc8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x12bdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x12bdcc: 0x908200c7  lbu         $v0, 0xC7($a0)
    ctx->pc = 0x12bdccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 199)));
    // 0x12bdd0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x12BDD0u;
    {
        const bool branch_taken_0x12bdd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BDD0u;
        // 0x12bdd4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bdd0) {
            ctx->pc = 0x12BDDCu;
            goto label_12bddc;
        }
    }
    ctx->pc = 0x12BDD8u;
    // 0x12bdd8: 0xa08200c7  sb          $v0, 0xC7($a0)
    ctx->pc = 0x12bdd8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 199), (uint8_t)GPR_U32(ctx, 2));
label_12bddc:
    // 0x12bddc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12bddcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bde0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12bde0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12bde4: 0x3e00008  jr          $ra
    ctx->pc = 0x12BDE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BDE4u;
        // 0x12bde8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BDE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BDECu;
    // 0x12bdec: 0x0  nop
    ctx->pc = 0x12bdecu;
    // NOP
    // 0x12bdf0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x12bdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12bdf4: 0x0  nop
    ctx->pc = 0x12bdf4u;
    // NOP
    // 0x12bdf8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x12bdf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12bdfc: 0x0  nop
    ctx->pc = 0x12bdfcu;
    // NOP
    ctx->pc = 0x12be00u;
}
