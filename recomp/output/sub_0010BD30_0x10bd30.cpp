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

// Function: sub_0010BD30
// Address: 0x10bd30 - 0x10bdc0
void sub_0010BD30_0x10bd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BD30_0x10bd30");
#endif

    switch (ctx->pc) {
        case 0x10bd68u: goto label_10bd68;
        case 0x10bd84u: goto label_10bd84;
        default: break;
    }

    ctx->pc = 0x10bd30u;

    // 0x10bd30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10bd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10bd34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10bd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10bd38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10bd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10bd3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10bd3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bd40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10bd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10bd44: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x10bd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x10bd48: 0x922200cc  lbu         $v0, 0xCC($s1)
    ctx->pc = 0x10bd48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x10bd4c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x10BD4Cu;
    {
        const bool branch_taken_0x10bd4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD4Cu;
        // 0x10bd50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bd4c) {
            ctx->pc = 0x10BDA4u;
            goto label_10bda4;
        }
    }
    ctx->pc = 0x10BD54u;
    // 0x10bd54: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x10BD54u;
    {
        const bool branch_taken_0x10bd54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD54u;
        // 0x10bd58: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bd54) {
            ctx->pc = 0x10BDA0u;
            goto label_10bda0;
        }
    }
    ctx->pc = 0x10BD5Cu;
    // 0x10bd5c: 0x2632000c  addiu       $s2, $s1, 0xC
    ctx->pc = 0x10bd5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x10bd60: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x10bd60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x10bd64: 0x0  nop
    ctx->pc = 0x10bd64u;
    // NOP
label_10bd68:
    // 0x10bd68: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x10bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x10bd6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10bd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10bd70: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x10bd70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10bd74: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10BD74u;
    {
        const bool branch_taken_0x10bd74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD74u;
        // 0x10bd78: 0x26030001  addiu       $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bd74) {
            ctx->pc = 0x10BD8Cu;
            goto label_10bd8c;
        }
    }
    ctx->pc = 0x10BD7Cu;
    // 0x10bd7c: 0xc043e40  jal         func_10F900
    ctx->pc = 0x10BD7Cu;
    SET_GPR_U32(ctx, 31, 0x10BD84u);
    ctx->pc = 0x10F900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F900u, 0x10BD7Cu, 0x10BD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BD84u;
label_10bd84:
    // 0x10bd84: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10BD84u;
    {
        const bool branch_taken_0x10bd84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10BD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD84u;
        // 0x10bd88: 0x26030001  addiu       $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bd84) {
            ctx->pc = 0x10BDA0u;
            goto label_10bda0;
        }
    }
    ctx->pc = 0x10BD8Cu;
label_10bd8c:
    // 0x10bd8c: 0x922200cc  lbu         $v0, 0xCC($s1)
    ctx->pc = 0x10bd8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x10bd90: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x10bd90u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x10bd94: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x10bd94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10bd98: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x10BD98u;
    {
        const bool branch_taken_0x10bd98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10BD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD98u;
        // 0x10bd9c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bd98) {
            ctx->pc = 0x10BD68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10bd68;
        }
    }
    ctx->pc = 0x10BDA0u;
label_10bda0:
    // 0x10bda0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10bda0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10bda4:
    // 0x10bda4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10bda4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10bda8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10bda8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10bdac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x10bdacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10bdb0: 0x3e00008  jr          $ra
    ctx->pc = 0x10BDB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BDB0u;
        // 0x10bdb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BDB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BDB8u;
    // 0x10bdb8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x10bdb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x10bdbc: 0x0  nop
    ctx->pc = 0x10bdbcu;
    // NOP
    ctx->pc = 0x10bdc0u;
}
