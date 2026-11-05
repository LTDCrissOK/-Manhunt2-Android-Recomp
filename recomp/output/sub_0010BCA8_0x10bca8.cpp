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

// Function: sub_0010BCA8
// Address: 0x10bca8 - 0x10bd30
void sub_0010BCA8_0x10bca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BCA8_0x10bca8");
#endif

    switch (ctx->pc) {
        case 0x10bce0u: goto label_10bce0;
        case 0x10bcfcu: goto label_10bcfc;
        default: break;
    }

    ctx->pc = 0x10bca8u;

    // 0x10bca8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10bca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10bcac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10bcacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10bcb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10bcb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10bcb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10bcb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bcb8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10bcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10bcbc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x10bcbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x10bcc0: 0x922200cc  lbu         $v0, 0xCC($s1)
    ctx->pc = 0x10bcc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x10bcc4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x10BCC4u;
    {
        const bool branch_taken_0x10bcc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BCC4u;
        // 0x10bcc8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bcc4) {
            ctx->pc = 0x10BD18u;
            goto label_10bd18;
        }
    }
    ctx->pc = 0x10BCCCu;
    // 0x10bccc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x10BCCCu;
    {
        const bool branch_taken_0x10bccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BCCCu;
        // 0x10bcd0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bccc) {
            ctx->pc = 0x10BD14u;
            goto label_10bd14;
        }
    }
    ctx->pc = 0x10BCD4u;
    // 0x10bcd4: 0x2632000c  addiu       $s2, $s1, 0xC
    ctx->pc = 0x10bcd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x10bcd8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x10bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x10bcdc: 0x0  nop
    ctx->pc = 0x10bcdcu;
    // NOP
label_10bce0:
    // 0x10bce0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x10bce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x10bce4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10bce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10bce8: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x10bce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10bcec: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10BCECu;
    {
        const bool branch_taken_0x10bcec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BCECu;
        // 0x10bcf0: 0x26030001  addiu       $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bcec) {
            ctx->pc = 0x10BD00u;
            goto label_10bd00;
        }
    }
    ctx->pc = 0x10BCF4u;
    // 0x10bcf4: 0xc043e2c  jal         func_10F8B0
    ctx->pc = 0x10BCF4u;
    SET_GPR_U32(ctx, 31, 0x10BCFCu);
    ctx->pc = 0x10BCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BCF4u;
    // 0x10bcf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F8B0u, 0x10BCF4u, 0x10BCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BCFCu;
label_10bcfc:
    // 0x10bcfc: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x10bcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_10bd00:
    // 0x10bd00: 0x922200cc  lbu         $v0, 0xCC($s1)
    ctx->pc = 0x10bd00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x10bd04: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x10bd04u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x10bd08: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x10bd08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10bd0c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x10BD0Cu;
    {
        const bool branch_taken_0x10bd0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10BD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD0Cu;
        // 0x10bd10: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bd0c) {
            ctx->pc = 0x10BCE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10bce0;
        }
    }
    ctx->pc = 0x10BD14u;
label_10bd14:
    // 0x10bd14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10bd14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10bd18:
    // 0x10bd18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10bd18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10bd1c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10bd1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10bd20: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x10bd20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10bd24: 0x3e00008  jr          $ra
    ctx->pc = 0x10BD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD24u;
        // 0x10bd28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BD24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BD2Cu;
    // 0x10bd2c: 0x0  nop
    ctx->pc = 0x10bd2cu;
    // NOP
    ctx->pc = 0x10bd30u;
}
