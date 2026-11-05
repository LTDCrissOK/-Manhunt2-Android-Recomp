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

// Function: sub_0035BDB8
// Address: 0x35bdb8 - 0x35be10
void sub_0035BDB8_0x35bdb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035BDB8_0x35bdb8");
#endif

    switch (ctx->pc) {
        case 0x35bde0u: goto label_35bde0;
        default: break;
    }

    ctx->pc = 0x35bdb8u;

    // 0x35bdb8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x35bdb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x35bdbc: 0x14a20012  bne         $a1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x35BDBCu;
    {
        const bool branch_taken_0x35bdbc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x35BDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BDBCu;
        // 0x35bdc0: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bdbc) {
            ctx->pc = 0x35BE08u;
            goto label_35be08;
        }
    }
    ctx->pc = 0x35BDC4u;
    // 0x35bdc4: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x35BDC4u;
    {
        const bool branch_taken_0x35bdc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BDC4u;
        // 0x35bdc8: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bdc4) {
            ctx->pc = 0x35BE08u;
            goto label_35be08;
        }
    }
    ctx->pc = 0x35BDCCu;
    // 0x35bdcc: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x35bdccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x35bdd0: 0x2442d4c0  addiu       $v0, $v0, -0x2B40
    ctx->pc = 0x35bdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956224));
    // 0x35bdd4: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x35bdd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
    // 0x35bdd8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x35bdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35bddc: 0x0  nop
    ctx->pc = 0x35bddcu;
    // NOP
label_35bde0:
    // 0x35bde0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x35bde0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x35bde4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x35bde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x35bde8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x35bde8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x35bdec: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x35bdecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x35bdf0: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x35BDF0u;
    {
        const bool branch_taken_0x35bdf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x35BDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BDF0u;
        // 0x35bdf4: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bdf0) {
            ctx->pc = 0x35BDE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35bde0;
        }
    }
    ctx->pc = 0x35BDF8u;
    // 0x35bdf8: 0x24a2d5c0  addiu       $v0, $a1, -0x2A40
    ctx->pc = 0x35bdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956480));
    // 0x35bdfc: 0xaca0d5c0  sw          $zero, -0x2A40($a1)
    ctx->pc = 0x35bdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294956480), GPR_U32(ctx, 0));
    // 0x35be00: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x35be00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x35be04: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x35be04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_35be08:
    // 0x35be08: 0x3e00008  jr          $ra
    ctx->pc = 0x35BE08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35BE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BE08u;
        // 0x35be0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BE08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35BE10u;
}
