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

// Function: sub_003D8A58
// Address: 0x3d8a58 - 0x3d8b28
void sub_003D8A58_0x3d8a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8A58_0x3d8a58");
#endif

    switch (ctx->pc) {
        case 0x3d8a70u: goto label_3d8a70;
        default: break;
    }

    ctx->pc = 0x3d8a58u;

    // 0x3d8a58: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x3d8a58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3d8a5c: 0x23903  sra         $a3, $v0, 4
    ctx->pc = 0x3d8a5cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 4));
    // 0x3d8a60: 0x18e00016  blez        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x3D8A60u;
    {
        const bool branch_taken_0x3d8a60 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x3D8A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8A60u;
        // 0x3d8a64: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8a60) {
            ctx->pc = 0x3D8ABCu;
            goto label_3d8abc;
        }
    }
    ctx->pc = 0x3D8A68u;
    // 0x3d8a68: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3d8a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3d8a6c: 0x0  nop
    ctx->pc = 0x3d8a6cu;
    // NOP
label_3d8a70:
    // 0x3d8a70: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3d8a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d8a74: 0x10430028  beq         $v0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x3D8A74u;
    {
        const bool branch_taken_0x3d8a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d8a74) {
            ctx->pc = 0x3D8B18u;
            goto label_3d8b18;
        }
    }
    ctx->pc = 0x3D8A7Cu;
    // 0x3d8a7c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3d8a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3d8a80: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3d8a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d8a84: 0x10430024  beq         $v0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x3D8A84u;
    {
        const bool branch_taken_0x3d8a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d8a84) {
            ctx->pc = 0x3D8B18u;
            goto label_3d8b18;
        }
    }
    ctx->pc = 0x3D8A8Cu;
    // 0x3d8a8c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3d8a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3d8a90: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3d8a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d8a94: 0x10430020  beq         $v0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x3D8A94u;
    {
        const bool branch_taken_0x3d8a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d8a94) {
            ctx->pc = 0x3D8B18u;
            goto label_3d8b18;
        }
    }
    ctx->pc = 0x3D8A9Cu;
    // 0x3d8a9c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3d8a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3d8aa0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3d8aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d8aa4: 0x1043001c  beq         $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x3D8AA4u;
    {
        const bool branch_taken_0x3d8aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3D8AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8AA4u;
        // 0x3d8aa8: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8aa4) {
            ctx->pc = 0x3D8B18u;
            goto label_3d8b18;
        }
    }
    ctx->pc = 0x3D8AACu;
    // 0x3d8aac: 0x1ce0fff0  bgtz        $a3, . + 4 + (-0x10 << 2)
    ctx->pc = 0x3D8AACu;
    {
        const bool branch_taken_0x3d8aac = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x3D8AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8AACu;
        // 0x3d8ab0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8aac) {
            ctx->pc = 0x3D8A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d8a70;
        }
    }
    ctx->pc = 0x3D8AB4u;
    // 0x3d8ab4: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x3d8ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3d8ab8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d8ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d8abc:
    // 0x3d8abc: 0x23883  sra         $a3, $v0, 2
    ctx->pc = 0x3d8abcu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 2));
    // 0x3d8ac0: 0x10e30011  beq         $a3, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3D8AC0u;
    {
        const bool branch_taken_0x3d8ac0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x3D8AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8AC0u;
        // 0x3d8ac4: 0x28e20002  slti        $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8ac0) {
            ctx->pc = 0x3D8B08u;
            goto label_3d8b08;
        }
    }
    ctx->pc = 0x3D8AC8u;
    // 0x3d8ac8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3D8AC8u;
    {
        const bool branch_taken_0x3d8ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D8ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8AC8u;
        // 0x3d8acc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8ac8) {
            ctx->pc = 0x3D8B20u;
            goto label_3d8b20;
        }
    }
    ctx->pc = 0x3D8AD0u;
    // 0x3d8ad0: 0x10e20008  beq         $a3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D8AD0u;
    {
        const bool branch_taken_0x3d8ad0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D8AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8AD0u;
        // 0x3d8ad4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8ad0) {
            ctx->pc = 0x3D8AF4u;
            goto label_3d8af4;
        }
    }
    ctx->pc = 0x3D8AD8u;
    // 0x3d8ad8: 0x14e20011  bne         $a3, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3D8AD8u;
    {
        const bool branch_taken_0x3d8ad8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d8ad8) {
            ctx->pc = 0x3D8B20u;
            goto label_3d8b20;
        }
    }
    ctx->pc = 0x3D8AE0u;
    // 0x3d8ae0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3d8ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d8ae4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3d8ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3d8ae8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3D8AE8u;
    {
        const bool branch_taken_0x3d8ae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d8ae8) {
            ctx->pc = 0x3D8B18u;
            goto label_3d8b18;
        }
    }
    ctx->pc = 0x3D8AF0u;
    // 0x3d8af0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3d8af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_3d8af4:
    // 0x3d8af4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3d8af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d8af8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3d8af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3d8afc: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D8AFCu;
    {
        const bool branch_taken_0x3d8afc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d8afc) {
            ctx->pc = 0x3D8B18u;
            goto label_3d8b18;
        }
    }
    ctx->pc = 0x3D8B04u;
    // 0x3d8b04: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3d8b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_3d8b08:
    // 0x3d8b08: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3d8b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3d8b0c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3d8b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d8b10: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8B10u;
    {
        const bool branch_taken_0x3d8b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3d8b10) {
            ctx->pc = 0x3D8B20u;
            goto label_3d8b20;
        }
    }
    ctx->pc = 0x3D8B18u;
label_3d8b18:
    // 0x3d8b18: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8B18u;
        // 0x3d8b1c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D8B20u;
label_3d8b20:
    // 0x3d8b20: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8B20u;
        // 0x3d8b24: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D8B28u;
}
