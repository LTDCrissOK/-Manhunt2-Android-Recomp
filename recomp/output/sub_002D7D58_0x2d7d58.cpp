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

// Function: sub_002D7D58
// Address: 0x2d7d58 - 0x2d7e40
void sub_002D7D58_0x2d7d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7D58_0x2d7d58");
#endif

    switch (ctx->pc) {
        case 0x2d7d88u: goto label_2d7d88;
        case 0x2d7db8u: goto label_2d7db8;
        default: break;
    }

    ctx->pc = 0x2d7d58u;

    // 0x2d7d58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d7d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d7d5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d7d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d7d60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d7d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d7d64: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d7d64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7d68: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d7d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d7d6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d7d6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7d70: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d7d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d7d74: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d7d74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7d78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d7d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d7d7c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2D7D7Cu;
    {
        const bool branch_taken_0x2d7d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7D7Cu;
        // 0x2d7d80: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7d7c) {
            ctx->pc = 0x2D7DB0u;
            goto label_2d7db0;
        }
    }
    ctx->pc = 0x2D7D84u;
    // 0x2d7d84: 0x0  nop
    ctx->pc = 0x2d7d84u;
    // NOP
label_2d7d88:
    // 0x2d7d88: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x2d7d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x2d7d8c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x2d7d8cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d7d90: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2d7d90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2d7d94: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d7d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d7d98: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d7d98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d7d9c: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x2d7d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d7da0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2d7da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d7da4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d7da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d7da8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d7da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d7dac: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2d7dacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2d7db0:
    // 0x2d7db0: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x2D7DB0u;
    SET_GPR_U32(ctx, 31, 0x2D7DB8u);
    ctx->pc = 0x2D7DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7DB0u;
    // 0x2d7db4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x2D7DB0u, 0x2D7DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7DB8u;
label_2d7db8:
    // 0x2d7db8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2d7db8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d7dbc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2D7DBCu;
    {
        const bool branch_taken_0x2d7dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7DBCu;
        // 0x2d7dc0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7dbc) {
            ctx->pc = 0x2D7D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7d88;
        }
    }
    ctx->pc = 0x2D7DC4u;
    // 0x2d7dc4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2d7dc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2d7dc8: 0x32440003  andi        $a0, $s2, 0x3
    ctx->pc = 0x2d7dc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
    // 0x2d7dcc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d7dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d7dd0: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2d7dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d7dd4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2d7dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d7dd8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d7dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d7ddc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d7ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d7de0: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2D7DE0u;
    {
        const bool branch_taken_0x2d7de0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7DE0u;
        // 0x2d7de4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7de0) {
            ctx->pc = 0x2D7E20u;
            goto label_2d7e20;
        }
    }
    ctx->pc = 0x2D7DE8u;
    // 0x2d7de8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2d7de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d7dec: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2d7decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d7df0: 0x72182a  slt         $v1, $v1, $s2
    ctx->pc = 0x2d7df0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2d7df4: 0x26420003  addiu       $v0, $s2, 0x3
    ctx->pc = 0x2d7df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
    // 0x2d7df8: 0x243100b  movn        $v0, $s2, $v1
    ctx->pc = 0x2d7df8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 18));
    // 0x2d7dfc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2d7dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d7e00: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2d7e00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2d7e04: 0x26430004  addiu       $v1, $s2, 0x4
    ctx->pc = 0x2d7e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2d7e08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d7e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d7e0c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2d7e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2d7e10: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x2d7e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2d7e14: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x2d7e14u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d7e18: 0x629023  subu        $s2, $v1, $v0
    ctx->pc = 0x2d7e18u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d7e1c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x2d7e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_2d7e20:
    // 0x2d7e20: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2d7e20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7e24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d7e24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d7e28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d7e28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d7e2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d7e2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d7e30: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d7e30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d7e34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d7e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d7e38: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7E38u;
        // 0x2d7e3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7E40u;
}
