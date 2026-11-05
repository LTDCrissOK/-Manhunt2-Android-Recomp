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

// Function: sub_0037FEA8
// Address: 0x37fea8 - 0x37ff48
void sub_0037FEA8_0x37fea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037FEA8_0x37fea8");
#endif

    switch (ctx->pc) {
        case 0x37fef0u: goto label_37fef0;
        case 0x37fef8u: goto label_37fef8;
        case 0x37ff1cu: goto label_37ff1c;
        default: break;
    }

    ctx->pc = 0x37fea8u;

    // 0x37fea8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x37fea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37feac: 0x248400b0  addiu       $a0, $a0, 0xB0
    ctx->pc = 0x37feacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    // 0x37feb0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x37feb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x37feb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x37feb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x37feb8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37feb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37febc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x37febcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x37fec0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x37fec0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fec4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x37fec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x37fec8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x37fec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x37fecc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x37feccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x37fed0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x37fed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x37fed4: 0x8c900064  lw          $s0, 0x64($a0)
    ctx->pc = 0x37fed4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x37fed8: 0x12110011  beq         $s0, $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x37FED8u;
    {
        const bool branch_taken_0x37fed8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x37FEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FED8u;
        // 0x37fedc: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fed8) {
            ctx->pc = 0x37FF20u;
            goto label_37ff20;
        }
    }
    ctx->pc = 0x37FEE0u;
    // 0x37fee0: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x37fee0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x37fee4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x37fee4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37fee8: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x37fee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x37feec: 0x0  nop
    ctx->pc = 0x37feecu;
    // NOP
label_37fef0:
    // 0x37fef0: 0xc0e009c  jal         func_380270
    ctx->pc = 0x37FEF0u;
    SET_GPR_U32(ctx, 31, 0x37FEF8u);
    ctx->pc = 0x37FEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FEF0u;
    // 0x37fef4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380270u, 0x37FEF0u, 0x37FEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FEF8u;
label_37fef8:
    // 0x37fef8: 0x50550004  beql        $v0, $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x37FEF8u;
    {
        const bool branch_taken_0x37fef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x37fef8) {
            ctx->pc = 0x37FEFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37FEF8u;
            // 0x37fefc: 0x8e100064  lw          $s0, 0x64($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37FF0Cu;
            goto label_37ff0c;
        }
    }
    ctx->pc = 0x37FF00u;
    // 0x37ff00: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x37ff00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x37ff04: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x37FF04u;
    {
        const bool branch_taken_0x37ff04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FF04u;
        // 0x37ff08: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ff04) {
            ctx->pc = 0x37FF24u;
            goto label_37ff24;
        }
    }
    ctx->pc = 0x37FF0Cu;
label_37ff0c:
    // 0x37ff0c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x37ff0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ff10: 0x2111826  xor         $v1, $s0, $s1
    ctx->pc = 0x37ff10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 17));
    // 0x37ff14: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x37ff14u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x37ff18: 0x5040fff5  beql        $v0, $zero, . + 4 + (-0xB << 2)
label_37ff1c:
    if (ctx->pc == 0x37FF1Cu) {
        ctx->pc = 0x37FF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FF18u;
        // 0x37ff1c: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37FF20u;
        goto label_37ff20;
    }
    ctx->pc = 0x37FF18u;
    {
        const bool branch_taken_0x37ff18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ff18) {
            ctx->pc = 0x37FF1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37FF18u;
            // 0x37ff1c: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37FEF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37fef0;
        }
    }
    ctx->pc = 0x37FF20u;
label_37ff20:
    // 0x37ff20: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x37ff20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_37ff24:
    // 0x37ff24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x37ff24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37ff28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x37ff28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37ff2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x37ff2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37ff30: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x37ff30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37ff34: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x37ff34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37ff38: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x37ff38u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37ff3c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x37ff3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37ff40: 0x3e00008  jr          $ra
    ctx->pc = 0x37FF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37FF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FF40u;
        // 0x37ff44: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37FF40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37FF48u;
}
