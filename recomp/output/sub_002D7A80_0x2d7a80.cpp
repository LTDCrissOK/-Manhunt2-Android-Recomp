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

// Function: sub_002D7A80
// Address: 0x2d7a80 - 0x2d7b20
void sub_002D7A80_0x2d7a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7A80_0x2d7a80");
#endif

    switch (ctx->pc) {
        case 0x2d7ad0u: goto label_2d7ad0;
        case 0x2d7ad8u: goto label_2d7ad8;
        default: break;
    }

    ctx->pc = 0x2d7a80u;

    // 0x2d7a80: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2d7a80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7a84: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2d7a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2d7a88: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x2d7a88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d7a8c: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x2d7a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2d7a90: 0x1023821  addu        $a3, $t0, $v0
    ctx->pc = 0x2d7a90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2d7a94: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x2d7a94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2d7a98: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D7A98u;
    {
        const bool branch_taken_0x2d7a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7A98u;
        // 0x2d7a9c: 0xa0482d  daddu       $t1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7a98) {
            ctx->pc = 0x2D7B14u;
            goto label_2d7b14;
        }
    }
    ctx->pc = 0x2D7AA0u;
    // 0x2d7aa0: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x2d7aa0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d7aa4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D7AA4u;
    {
        const bool branch_taken_0x2d7aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7AA4u;
        // 0x2d7aa8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7aa4) {
            ctx->pc = 0x2D7AD8u;
            goto label_2d7ad8;
        }
    }
    ctx->pc = 0x2D7AACu;
    // 0x2d7aac: 0xa81023  subu        $v0, $a1, $t0
    ctx->pc = 0x2d7aacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x2d7ab0: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x2d7ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x2d7ab4: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x2d7ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x2d7ab8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2d7ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2d7abc: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2d7abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2d7ac0: 0xe2182b  sltu        $v1, $a3, $v0
    ctx->pc = 0x2d7ac0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d7ac4: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D7AC4u;
    {
        const bool branch_taken_0x2d7ac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7AC4u;
        // 0x2d7ac8: 0xacc20004  sw          $v0, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7ac4) {
            ctx->pc = 0x2D7B14u;
            goto label_2d7b14;
        }
    }
    ctx->pc = 0x2D7ACCu;
    // 0x2d7acc: 0x0  nop
    ctx->pc = 0x2d7accu;
    // NOP
label_2d7ad0:
    // 0x2d7ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7AD0u;
        // 0x2d7ad4: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7AD8u;
label_2d7ad8:
    // 0x2d7ad8: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x2d7ad8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2d7adc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D7ADCu;
    {
        const bool branch_taken_0x2d7adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7adc) {
            ctx->pc = 0x2D7B14u;
            goto label_2d7b14;
        }
    }
    ctx->pc = 0x2D7AE4u;
    // 0x2d7ae4: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x2d7ae4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d7ae8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D7AE8u;
    {
        const bool branch_taken_0x2d7ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7AE8u;
        // 0x2d7aec: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7ae8) {
            ctx->pc = 0x2D7AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7ad8;
        }
    }
    ctx->pc = 0x2D7AF0u;
    // 0x2d7af0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2d7af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d7af4: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x2d7af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x2d7af8: 0xa31023  subu        $v0, $a1, $v1
    ctx->pc = 0x2d7af8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2d7afc: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x2d7afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x2d7b00: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2d7b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2d7b04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d7b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d7b08: 0xe3202b  sltu        $a0, $a3, $v1
    ctx->pc = 0x2d7b08u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2d7b0c: 0x1080fff0  beqz        $a0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2D7B0Cu;
    {
        const bool branch_taken_0x2d7b0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7B0Cu;
        // 0x2d7b10: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7b0c) {
            ctx->pc = 0x2D7AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7ad0;
        }
    }
    ctx->pc = 0x2D7B14u;
label_2d7b14:
    // 0x2d7b14: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7B14u;
        // 0x2d7b18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7B1Cu;
    // 0x2d7b1c: 0x0  nop
    ctx->pc = 0x2d7b1cu;
    // NOP
    ctx->pc = 0x2d7b20u;
}
