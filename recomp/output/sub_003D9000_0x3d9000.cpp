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

// Function: sub_003D9000
// Address: 0x3d9000 - 0x3d90d0
void sub_003D9000_0x3d9000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9000_0x3d9000");
#endif

    switch (ctx->pc) {
        case 0x3d90c4u: goto label_3d90c4;
        default: break;
    }

    ctx->pc = 0x3d9000u;

label_3d9000:
    // 0x3d9000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d9000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d9004: 0x30c9ffff  andi        $t1, $a2, 0xFFFF
    ctx->pc = 0x3d9004u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x3d9008: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x3d9008u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x3d900c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d900cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3d9010: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x3d9010u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9014: 0x127102b  sltu        $v0, $t1, $a3
    ctx->pc = 0x3d9014u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3d9018: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3D9018u;
    {
        const bool branch_taken_0x3d9018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9018u;
        // 0x3d901c: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9018) {
            ctx->pc = 0x3D9068u;
            goto label_3d9068;
        }
    }
    ctx->pc = 0x3D9020u;
    // 0x3d9020: 0x8d43000c  lw          $v1, 0xC($t2)
    ctx->pc = 0x3d9020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x3d9024: 0x920c0  sll         $a0, $t1, 3
    ctx->pc = 0x3d9024u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x3d9028: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3d9028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3d902c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3d902cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d9030: 0xa21026  xor         $v0, $a1, $v0
    ctx->pc = 0x3d9030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
    // 0x3d9034: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3d9034u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3d9038: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D9038u;
    {
        const bool branch_taken_0x3d9038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D903Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9038u;
        // 0x3d903c: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9038) {
            ctx->pc = 0x3D9058u;
            goto label_3d9058;
        }
    }
    ctx->pc = 0x3D9040u;
    // 0x3d9040: 0x8d42000c  lw          $v0, 0xC($t2)
    ctx->pc = 0x3d9040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x3d9044: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3d9044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3d9048: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3d9048u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d904c: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x3d904cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3d9050: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D9050u;
    {
        const bool branch_taken_0x3d9050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9050u;
        // 0x3d9054: 0x25220001  addiu       $v0, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9050) {
            ctx->pc = 0x3D9060u;
            goto label_3d9060;
        }
    }
    ctx->pc = 0x3D9058u;
label_3d9058:
    // 0x3d9058: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3D9058u;
    {
        const bool branch_taken_0x3d9058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D905Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9058u;
        // 0x3d905c: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9058) {
            ctx->pc = 0x3D90C4u;
            goto label_3d90c4;
        }
    }
    ctx->pc = 0x3D9060u;
label_3d9060:
    // 0x3d9060: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3D9060u;
    {
        const bool branch_taken_0x3d9060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9060u;
        // 0x3d9064: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9060) {
            ctx->pc = 0x3D90C4u;
            goto label_3d90c4;
        }
    }
    ctx->pc = 0x3D9068u;
label_3d9068:
    // 0x3d9068: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x3d9068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x3d906c: 0x8d44000c  lw          $a0, 0xC($t2)
    ctx->pc = 0x3d906cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x3d9070: 0x23042  srl         $a2, $v0, 1
    ctx->pc = 0x3d9070u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3d9074: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x3d9074u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x3d9078: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d9078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3d907c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3d907cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d9080: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D9080u;
    {
        const bool branch_taken_0x3d9080 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D9084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9080u;
        // 0x3d9084: 0x45102b  sltu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9080) {
            ctx->pc = 0x3D9098u;
            goto label_3d9098;
        }
    }
    ctx->pc = 0x3D9088u;
    // 0x3d9088: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d9088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d908c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x3d908cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9090: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3D9090u;
    {
        const bool branch_taken_0x3d9090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9090u;
        // 0x3d9094: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9090) {
            ctx->pc = 0x3D90C4u;
            goto label_3d90c4;
        }
    }
    ctx->pc = 0x3D9098u;
label_3d9098:
    // 0x3d9098: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D9098u;
    {
        const bool branch_taken_0x3d9098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d9098) {
            ctx->pc = 0x3D909Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D9098u;
            // 0x3d909c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D90B4u;
            goto label_3d90b4;
        }
    }
    ctx->pc = 0x3D90A0u;
    // 0x3d90a0: 0x24c7ffff  addiu       $a3, $a2, -0x1
    ctx->pc = 0x3d90a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3d90a4: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x3d90a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d90a8: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x3d90a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d90ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D90ACu;
    {
        const bool branch_taken_0x3d90ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D90B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D90ACu;
        // 0x3d90b0: 0x30e7ffff  andi        $a3, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d90ac) {
            ctx->pc = 0x3D90BCu;
            goto label_3d90bc;
        }
    }
    ctx->pc = 0x3D90B4u;
label_3d90b4:
    // 0x3d90b4: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x3d90b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d90b8: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x3d90b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_3d90bc:
    // 0x3d90bc: 0xc0f6400  jal         func_3D9000
    ctx->pc = 0x3D90BCu;
    SET_GPR_U32(ctx, 31, 0x3D90C4u);
    ctx->pc = 0x3D9000u;
    goto label_3d9000;
    ctx->pc = 0x3D90C4u;
label_3d90c4:
    // 0x3d90c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d90c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d90c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D90C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D90CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D90C8u;
        // 0x3d90cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D90C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D90D0u;
}
