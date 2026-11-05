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

// Function: sub_0027FE90
// Address: 0x27fe90 - 0x27ff30
void sub_0027FE90_0x27fe90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027FE90_0x27fe90");
#endif

    switch (ctx->pc) {
        case 0x27fea0u: goto label_27fea0;
        case 0x27ff10u: goto label_27ff10;
        default: break;
    }

    ctx->pc = 0x27fe90u;

    // 0x27fe90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27fe90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27fe94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27fe94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27fe98: 0xc0a0340  jal         func_280D00
    ctx->pc = 0x27FE98u;
    SET_GPR_U32(ctx, 31, 0x27FEA0u);
    ctx->pc = 0x280D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280D00u, 0x27FE98u, 0x27FEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FEA0u;
label_27fea0:
    // 0x27fea0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x27fea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27fea4: 0x1443001f  bne         $v0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x27FEA4u;
    {
        const bool branch_taken_0x27fea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x27FEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FEA4u;
        // 0x27fea8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fea4) {
            ctx->pc = 0x27FF24u;
            goto label_27ff24;
        }
    }
    ctx->pc = 0x27FEACu;
    // 0x27feac: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x27feacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x27feb0: 0x8c43bd5c  lw          $v1, -0x42A4($v0)
    ctx->pc = 0x27feb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD5Cu));
    // 0x27feb4: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x27FEB4u;
    {
        const bool branch_taken_0x27feb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FEB4u;
        // 0x27feb8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27feb4) {
            ctx->pc = 0x27FF24u;
            goto label_27ff24;
        }
    }
    ctx->pc = 0x27FEBCu;
    // 0x27febc: 0x9043b821  lbu         $v1, -0x47DF($v0)
    ctx->pc = 0x27febcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294948897)));
    // 0x27fec0: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x27FEC0u;
    {
        const bool branch_taken_0x27fec0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FEC0u;
        // 0x27fec4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fec0) {
            ctx->pc = 0x27FF24u;
            goto label_27ff24;
        }
    }
    ctx->pc = 0x27FEC8u;
    // 0x27fec8: 0x2446a330  addiu       $a2, $v0, -0x5CD0
    ctx->pc = 0x27fec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943536));
    // 0x27fecc: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x27feccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x27fed0: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x27FED0u;
    {
        const bool branch_taken_0x27fed0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FED0u;
        // 0x27fed4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fed0) {
            ctx->pc = 0x27FF24u;
            goto label_27ff24;
        }
    }
    ctx->pc = 0x27FED8u;
    // 0x27fed8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x27fed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x27fedc: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x27fedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x27fee0: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x27FEE0u;
    {
        const bool branch_taken_0x27fee0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x27FEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FEE0u;
        // 0x27fee4: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fee0) {
            ctx->pc = 0x27FF24u;
            goto label_27ff24;
        }
    }
    ctx->pc = 0x27FEE8u;
    // 0x27fee8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x27fee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x27feec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x27feecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x27fef0: 0x14440009  bne         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27FEF0u;
    {
        const bool branch_taken_0x27fef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x27FEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FEF0u;
        // 0x27fef4: 0xacc20008  sw          $v0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fef0) {
            ctx->pc = 0x27FF18u;
            goto label_27ff18;
        }
    }
    ctx->pc = 0x27FEF8u;
    // 0x27fef8: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x27fef8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x27fefc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x27fefcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x27ff00: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x27ff00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x27ff04: 0x8c44bd50  lw          $a0, -0x42B0($v0)
    ctx->pc = 0x27ff04u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x27ff08: 0xc0cda26  jal         func_336898
    ctx->pc = 0x27FF08u;
    SET_GPR_U32(ctx, 31, 0x27FF10u);
    ctx->pc = 0x27FF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FF08u;
    // 0x27ff0c: 0xacc00008  sw          $zero, 0x8($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x27FF08u, 0x27FF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FF10u;
label_27ff10:
    // 0x27ff10: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27FF10u;
    {
        const bool branch_taken_0x27ff10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF10u;
        // 0x27ff14: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ff10) {
            ctx->pc = 0x27FF24u;
            goto label_27ff24;
        }
    }
    ctx->pc = 0x27FF18u;
label_27ff18:
    // 0x27ff18: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x27ff18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x27ff1c: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x27ff1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x27ff20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27ff20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27ff24:
    // 0x27ff24: 0x3e00008  jr          $ra
    ctx->pc = 0x27FF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27FF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF24u;
        // 0x27ff28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27FF24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27FF2Cu;
    // 0x27ff2c: 0x0  nop
    ctx->pc = 0x27ff2cu;
    // NOP
    ctx->pc = 0x27ff30u;
}
