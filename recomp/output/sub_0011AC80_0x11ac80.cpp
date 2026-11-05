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

// Function: sub_0011AC80
// Address: 0x11ac80 - 0x11ad08
void sub_0011AC80_0x11ac80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011AC80_0x11ac80");
#endif

    switch (ctx->pc) {
        case 0x11acc8u: goto label_11acc8;
        case 0x11acd4u: goto label_11acd4;
        default: break;
    }

    ctx->pc = 0x11ac80u;

    // 0x11ac80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11ac80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11ac84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11ac84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11ac88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11ac88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11ac8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11ac8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11ac90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11ac94: 0x92051212  lbu         $a1, 0x1212($s0)
    ctx->pc = 0x11ac94u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4626)));
    // 0x11ac98: 0x92041210  lbu         $a0, 0x1210($s0)
    ctx->pc = 0x11ac98u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4624)));
    // 0x11ac9c: 0x92021211  lbu         $v0, 0x1211($s0)
    ctx->pc = 0x11ac9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4625)));
    // 0x11aca0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x11aca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aca4: 0x92031213  lbu         $v1, 0x1213($s0)
    ctx->pc = 0x11aca4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4627)));
    // 0x11aca8: 0xa2021210  sb          $v0, 0x1210($s0)
    ctx->pc = 0x11aca8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4624), (uint8_t)GPR_U32(ctx, 2));
    // 0x11acac: 0xa2041211  sb          $a0, 0x1211($s0)
    ctx->pc = 0x11acacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4625), (uint8_t)GPR_U32(ctx, 4));
    // 0x11acb0: 0xa2031212  sb          $v1, 0x1212($s0)
    ctx->pc = 0x11acb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4626), (uint8_t)GPR_U32(ctx, 3));
    // 0x11acb4: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x11ACB4u;
    {
        const bool branch_taken_0x11acb4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ACB4u;
        // 0x11acb8: 0xa2051213  sb          $a1, 0x1213($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4627), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11acb4) {
            ctx->pc = 0x11ACF4u;
            goto label_11acf4;
        }
    }
    ctx->pc = 0x11ACBCu;
    // 0x11acbc: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x11ACBCu;
    {
        const bool branch_taken_0x11acbc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ACC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ACBCu;
        // 0x11acc0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11acbc) {
            ctx->pc = 0x11ACECu;
            goto label_11acec;
        }
    }
    ctx->pc = 0x11ACC4u;
    // 0x11acc4: 0x92051211  lbu         $a1, 0x1211($s0)
    ctx->pc = 0x11acc4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4625)));
label_11acc8:
    // 0x11acc8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x11acc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11accc: 0xc046b0c  jal         func_11AC30
    ctx->pc = 0x11ACCCu;
    SET_GPR_U32(ctx, 31, 0x11ACD4u);
    ctx->pc = 0x11ACD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ACCCu;
    // 0x11acd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AC30u, 0x11ACCCu, 0x11ACD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ACD4u;
label_11acd4:
    // 0x11acd4: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x11acd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x11acd8: 0x92021213  lbu         $v0, 0x1213($s0)
    ctx->pc = 0x11acd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4627)));
    // 0x11acdc: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x11acdcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x11ace0: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x11ace0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11ace4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11ACE4u;
    {
        const bool branch_taken_0x11ace4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11ace4) {
            ctx->pc = 0x11ACE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11ACE4u;
            // 0x11ace8: 0x92051211  lbu         $a1, 0x1211($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4625)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11ACC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11acc8;
        }
    }
    ctx->pc = 0x11ACECu;
label_11acec:
    // 0x11acec: 0xae001214  sw          $zero, 0x1214($s0)
    ctx->pc = 0x11acecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4628), GPR_U32(ctx, 0));
    // 0x11acf0: 0xa2001213  sb          $zero, 0x1213($s0)
    ctx->pc = 0x11acf0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4627), (uint8_t)GPR_U32(ctx, 0));
label_11acf4:
    // 0x11acf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11acf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11acf8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11acf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11acfc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11acfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ad00: 0x3e00008  jr          $ra
    ctx->pc = 0x11AD00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD00u;
        // 0x11ad04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AD00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11AD08u;
}
