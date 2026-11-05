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

// Function: sub_003D6D6C
// Address: 0x3d6d6c - 0x3d6e28
void sub_003D6D6C_0x3d6d6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D6D6C_0x3d6d6c");
#endif

    switch (ctx->pc) {
        case 0x3d6d70u: goto label_3d6d70;
        case 0x3d6d88u: goto label_3d6d88;
        case 0x3d6db0u: goto label_3d6db0;
        case 0x3d6dd0u: goto label_3d6dd0;
        case 0x3d6df4u: goto label_3d6df4;
        default: break;
    }

    ctx->pc = 0x3d6d6cu;

    // 0x3d6d6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d6d6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d6d70:
    // 0x3d6d70: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3d6d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d6d74: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x3d6d74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d6d78: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x3d6d78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d6d7c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3d6d7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d6d80: 0x3e00008  jr          $ra
    ctx->pc = 0x3D6D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D6D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6D80u;
        // 0x3d6d84: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D6D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D6D88u;
label_3d6d88:
    // 0x3d6d88: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x3d6d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x3d6d8c: 0x8c628e78  lw          $v0, -0x7188($v1)
    ctx->pc = 0x3d6d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x668E78u));
    // 0x3d6d90: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x3d6d90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x3d6d94: 0xaca20014  sw          $v0, 0x14($a1)
    ctx->pc = 0x3d6d94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
    // 0x3d6d98: 0xac658e78  sw          $a1, -0x7188($v1)
    ctx->pc = 0x3d6d98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x668E78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x668E78u, _value); } while (0);
    // 0x3d6d9c: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x3d6d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x3d6da0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x3d6da0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x3d6da4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x3d6da4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x3d6da8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D6DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D6DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6DA8u;
        // 0x3d6dac: 0xaca00010  sw          $zero, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D6DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D6DB0u;
label_3d6db0:
    // 0x3d6db0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x3d6db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x3d6db4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d6db4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d6db8: 0x8c438e78  lw          $v1, -0x7188($v0)
    ctx->pc = 0x3d6db8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x668E78u));
    // 0x3d6dbc: 0x24458e78  addiu       $a1, $v0, -0x7188
    ctx->pc = 0x3d6dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938232));
    // 0x3d6dc0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d6dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d6dc4: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3D6DC4u;
    {
        const bool branch_taken_0x3d6dc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6DC4u;
        // 0x3d6dc8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6dc4) {
            ctx->pc = 0x3D6E04u;
            goto label_3d6e04;
        }
    }
    ctx->pc = 0x3D6DCCu;
    // 0x3d6dcc: 0x0  nop
    ctx->pc = 0x3d6dccu;
    // NOP
label_3d6dd0:
    // 0x3d6dd0: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x3d6dd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3d6dd4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3d6dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3d6dd8: 0x14440008  bne         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D6DD8u;
    {
        const bool branch_taken_0x3d6dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3D6DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6DD8u;
        // 0x3d6ddc: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6dd8) {
            ctx->pc = 0x3D6DFCu;
            goto label_3d6dfc;
        }
    }
    ctx->pc = 0x3D6DE0u;
    // 0x3d6de0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d6de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3d6de4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3D6DE4u;
    {
        const bool branch_taken_0x3d6de4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6DE4u;
        // 0x3d6de8: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6de4) {
            ctx->pc = 0x3D6E14u;
            goto label_3d6e14;
        }
    }
    ctx->pc = 0x3D6DECu;
    // 0x3d6dec: 0xc0b2524  jal         func_2C9490
    ctx->pc = 0x3D6DECu;
    SET_GPR_U32(ctx, 31, 0x3D6DF4u);
    ctx->pc = 0x3D6DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6DECu;
    // 0x3d6df0: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9490u, 0x3D6DECu, 0x3D6DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6DF4u;
label_3d6df4:
    // 0x3d6df4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D6DF4u;
    {
        const bool branch_taken_0x3d6df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6DF4u;
        // 0x3d6df8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6df4) {
            ctx->pc = 0x3D6E18u;
            goto label_3d6e18;
        }
    }
    ctx->pc = 0x3D6DFCu;
label_3d6dfc:
    // 0x3d6dfc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3D6DFCu;
    {
        const bool branch_taken_0x3d6dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D6E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6DFCu;
        // 0x3d6e00: 0x26050014  addiu       $a1, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6dfc) {
            ctx->pc = 0x3D6DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d6dd0;
        }
    }
    ctx->pc = 0x3D6E04u;
label_3d6e04:
    // 0x3d6e04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d6e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d6e08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d6e08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d6e0c: 0x80f0274  j           func_3C09D0
    ctx->pc = 0x3D6E0Cu;
    ctx->pc = 0x3D6E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6E0Cu;
    // 0x3d6e10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C09D0u;
    sub_003C09D0_0x3c09d0(rdram, ctx, runtime); return;
    ctx->pc = 0x3D6E14u;
label_3d6e14:
    // 0x3d6e14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d6e14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d6e18:
    // 0x3d6e18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d6e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d6e1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d6e1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d6e20: 0x3e00008  jr          $ra
    ctx->pc = 0x3D6E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D6E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6E20u;
        // 0x3d6e24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D6E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D6E28u;
}
