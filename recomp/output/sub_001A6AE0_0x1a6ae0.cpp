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

// Function: sub_001A6AE0
// Address: 0x1a6ae0 - 0x1a6bd8
void sub_001A6AE0_0x1a6ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6AE0_0x1a6ae0");
#endif

    switch (ctx->pc) {
        case 0x1a6b58u: goto label_1a6b58;
        case 0x1a6bb0u: goto label_1a6bb0;
        case 0x1a6bc4u: goto label_1a6bc4;
        default: break;
    }

    ctx->pc = 0x1a6ae0u;

    // 0x1a6ae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a6ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a6ae4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a6ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a6ae8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a6ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a6aec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a6aecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6af0: 0x8e0601c8  lw          $a2, 0x1C8($s0)
    ctx->pc = 0x1a6af0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
    // 0x1a6af4: 0x4c00016  bltz        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x1A6AF4u;
    {
        const bool branch_taken_0x1a6af4 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1A6AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6AF4u;
        // 0x1a6af8: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6af4) {
            ctx->pc = 0x1A6B50u;
            goto label_1a6b50;
        }
    }
    ctx->pc = 0x1A6AFCu;
    // 0x1a6afc: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1a6afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1a6b00: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A6B00u;
    {
        const bool branch_taken_0x1a6b00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A6B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B00u;
        // 0x1a6b04: 0x28620025  slti        $v0, $v1, 0x25 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)37) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6b00) {
            ctx->pc = 0x1A6B3Cu;
            goto label_1a6b3c;
        }
    }
    ctx->pc = 0x1A6B08u;
    // 0x1a6b08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A6B08u;
    {
        const bool branch_taken_0x1a6b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B08u;
        // 0x1a6b0c: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6b08) {
            ctx->pc = 0x1A6B20u;
            goto label_1a6b20;
        }
    }
    ctx->pc = 0x1A6B10u;
    // 0x1a6b10: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A6B10u;
    {
        const bool branch_taken_0x1a6b10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A6B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B10u;
        // 0x1a6b14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6b10) {
            ctx->pc = 0x1A6B34u;
            goto label_1a6b34;
        }
    }
    ctx->pc = 0x1A6B18u;
    // 0x1a6b18: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1A6B18u;
    {
        const bool branch_taken_0x1a6b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B18u;
        // 0x1a6b1c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6b18) {
            ctx->pc = 0x1A6BC8u;
            goto label_1a6bc8;
        }
    }
    ctx->pc = 0x1A6B20u;
label_1a6b20:
    // 0x1a6b20: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x1a6b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x1a6b24: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A6B24u;
    {
        const bool branch_taken_0x1a6b24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A6B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B24u;
        // 0x1a6b28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6b24) {
            ctx->pc = 0x1A6B48u;
            goto label_1a6b48;
        }
    }
    ctx->pc = 0x1A6B2Cu;
    // 0x1a6b2c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1A6B2Cu;
    {
        const bool branch_taken_0x1a6b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B2Cu;
        // 0x1a6b30: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6b2c) {
            ctx->pc = 0x1A6BC8u;
            goto label_1a6bc8;
        }
    }
    ctx->pc = 0x1A6B34u;
label_1a6b34:
    // 0x1a6b34: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1A6B34u;
    {
        const bool branch_taken_0x1a6b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B34u;
        // 0x1a6b38: 0x24c60541  addiu       $a2, $a2, 0x541 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1345));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6b34) {
            ctx->pc = 0x1A6BA8u;
            goto label_1a6ba8;
        }
    }
    ctx->pc = 0x1A6B3Cu;
label_1a6b3c:
    // 0x1a6b3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6b40: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1A6B40u;
    {
        const bool branch_taken_0x1a6b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B40u;
        // 0x1a6b44: 0x24c60546  addiu       $a2, $a2, 0x546 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1350));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6b40) {
            ctx->pc = 0x1A6BA8u;
            goto label_1a6ba8;
        }
    }
    ctx->pc = 0x1A6B48u;
label_1a6b48:
    // 0x1a6b48: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1A6B48u;
    {
        const bool branch_taken_0x1a6b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B48u;
        // 0x1a6b4c: 0x24c6054b  addiu       $a2, $a2, 0x54B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1355));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6b48) {
            ctx->pc = 0x1A6BA8u;
            goto label_1a6ba8;
        }
    }
    ctx->pc = 0x1A6B50u;
label_1a6b50:
    // 0x1a6b50: 0xc069ffa  jal         func_1A7FE8
    ctx->pc = 0x1A6B50u;
    SET_GPR_U32(ctx, 31, 0x1A6B58u);
    ctx->pc = 0x1A6B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6B50u;
    // 0x1a6b54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7FE8u, 0x1A6B50u, 0x1A6B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6B58u;
label_1a6b58:
    // 0x1a6b58: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a6b58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6b5c: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1a6b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1a6b60: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1a6b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1a6b64: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A6B64u;
    {
        const bool branch_taken_0x1a6b64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A6B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B64u;
        // 0x1a6b68: 0x28620025  slti        $v0, $v1, 0x25 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)37) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6b64) {
            ctx->pc = 0x1A6BA0u;
            goto label_1a6ba0;
        }
    }
    ctx->pc = 0x1A6B6Cu;
    // 0x1a6b6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A6B6Cu;
    {
        const bool branch_taken_0x1a6b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B6Cu;
        // 0x1a6b70: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6b6c) {
            ctx->pc = 0x1A6B84u;
            goto label_1a6b84;
        }
    }
    ctx->pc = 0x1A6B74u;
    // 0x1a6b74: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A6B74u;
    {
        const bool branch_taken_0x1a6b74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A6B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B74u;
        // 0x1a6b78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6b74) {
            ctx->pc = 0x1A6B98u;
            goto label_1a6b98;
        }
    }
    ctx->pc = 0x1A6B7Cu;
    // 0x1a6b7c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1A6B7Cu;
    {
        const bool branch_taken_0x1a6b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B7Cu;
        // 0x1a6b80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6b7c) {
            ctx->pc = 0x1A6BC8u;
            goto label_1a6bc8;
        }
    }
    ctx->pc = 0x1A6B84u;
label_1a6b84:
    // 0x1a6b84: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x1a6b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x1a6b88: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A6B88u;
    {
        const bool branch_taken_0x1a6b88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A6B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B88u;
        // 0x1a6b8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6b88) {
            ctx->pc = 0x1A6BB8u;
            goto label_1a6bb8;
        }
    }
    ctx->pc = 0x1A6B90u;
    // 0x1a6b90: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A6B90u;
    {
        const bool branch_taken_0x1a6b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B90u;
        // 0x1a6b94: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6b90) {
            ctx->pc = 0x1A6BC8u;
            goto label_1a6bc8;
        }
    }
    ctx->pc = 0x1A6B98u;
label_1a6b98:
    // 0x1a6b98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6B98u;
    {
        const bool branch_taken_0x1a6b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B98u;
        // 0x1a6b9c: 0x24c60523  addiu       $a2, $a2, 0x523 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1315));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6b98) {
            ctx->pc = 0x1A6BA8u;
            goto label_1a6ba8;
        }
    }
    ctx->pc = 0x1A6BA0u;
label_1a6ba0:
    // 0x1a6ba0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6ba4: 0x24c60528  addiu       $a2, $a2, 0x528
    ctx->pc = 0x1a6ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1320));
label_1a6ba8:
    // 0x1a6ba8: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A6BA8u;
    SET_GPR_U32(ctx, 31, 0x1A6BB0u);
    ctx->pc = 0x1A6BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6BA8u;
    // 0x1a6bac: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A6BA8u, 0x1A6BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6BB0u;
label_1a6bb0:
    // 0x1a6bb0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A6BB0u;
    {
        const bool branch_taken_0x1a6bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6BB0u;
        // 0x1a6bb4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6bb0) {
            ctx->pc = 0x1A6BC8u;
            goto label_1a6bc8;
        }
    }
    ctx->pc = 0x1A6BB8u;
label_1a6bb8:
    // 0x1a6bb8: 0x24c6052d  addiu       $a2, $a2, 0x52D
    ctx->pc = 0x1a6bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1325));
    // 0x1a6bbc: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A6BBCu;
    SET_GPR_U32(ctx, 31, 0x1A6BC4u);
    ctx->pc = 0x1A6BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6BBCu;
    // 0x1a6bc0: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A6BBCu, 0x1A6BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6BC4u;
label_1a6bc4:
    // 0x1a6bc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6bc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6bc8:
    // 0x1a6bc8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a6bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a6bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6BCCu;
        // 0x1a6bd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6BD4u;
    // 0x1a6bd4: 0x0  nop
    ctx->pc = 0x1a6bd4u;
    // NOP
    ctx->pc = 0x1a6bd8u;
}
