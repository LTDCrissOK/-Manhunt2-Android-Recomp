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

// Function: sub_002D8BC0
// Address: 0x2d8bc0 - 0x2d8c68
void sub_002D8BC0_0x2d8bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8BC0_0x2d8bc0");
#endif

    switch (ctx->pc) {
        case 0x2d8be8u: goto label_2d8be8;
        case 0x2d8c10u: goto label_2d8c10;
        case 0x2d8c1cu: goto label_2d8c1c;
        case 0x2d8c4cu: goto label_2d8c4c;
        default: break;
    }

    ctx->pc = 0x2d8bc0u;

    // 0x2d8bc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d8bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d8bc4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d8bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d8bc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d8bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d8bcc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d8bccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8bd0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d8bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d8bd4: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x2d8bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x2d8bd8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d8bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d8bdc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d8bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d8be0: 0xc0f707a  jal         func_3DC1E8
    ctx->pc = 0x2D8BE0u;
    SET_GPR_U32(ctx, 31, 0x2D8BE8u);
    ctx->pc = 0x2D8BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8BE0u;
    // 0x2d8be4: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC1E8u, 0x2D8BE0u, 0x2D8BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8BE8u;
label_2d8be8:
    // 0x2d8be8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2d8be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d8bec: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2d8becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2d8bf0: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x2d8bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2d8bf4: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D8BF4u;
    {
        const bool branch_taken_0x2d8bf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D8BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8BF4u;
        // 0x2d8bf8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8bf4) {
            ctx->pc = 0x2D8C2Cu;
            goto label_2d8c2c;
        }
    }
    ctx->pc = 0x2D8BFCu;
    // 0x2d8bfc: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x2d8bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d8c00: 0x28103  sra         $s0, $v0, 4
    ctx->pc = 0x2d8c00u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2d8c04: 0x1a000009  blez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D8C04u;
    {
        const bool branch_taken_0x2d8c04 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2D8C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8C04u;
        // 0x2d8c08: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8c04) {
            ctx->pc = 0x2D8C2Cu;
            goto label_2d8c2c;
        }
    }
    ctx->pc = 0x2D8C0Cu;
    // 0x2d8c0c: 0x0  nop
    ctx->pc = 0x2d8c0cu;
    // NOP
label_2d8c10:
    // 0x2d8c10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d8c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8c14: 0xc0f707a  jal         func_3DC1E8
    ctx->pc = 0x2D8C14u;
    SET_GPR_U32(ctx, 31, 0x2D8C1Cu);
    ctx->pc = 0x2D8C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8C14u;
    // 0x2d8c18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC1E8u, 0x2D8C14u, 0x2D8C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8C1Cu;
label_2d8c1c:
    // 0x2d8c1c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2d8c1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2d8c20: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2d8c20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2d8c24: 0x1e00fffa  bgtz        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D8C24u;
    {
        const bool branch_taken_0x2d8c24 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x2D8C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8C24u;
        // 0x2d8c28: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8c24) {
            ctx->pc = 0x2D8C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8c10;
        }
    }
    ctx->pc = 0x2D8C2Cu;
label_2d8c2c:
    // 0x2d8c2c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2d8c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2d8c30: 0x2462fff0  addiu       $v0, $v1, -0x10
    ctx->pc = 0x2d8c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x2d8c34: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x2d8c34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x2d8c38: 0x8c64fff0  lw          $a0, -0x10($v1)
    ctx->pc = 0x2d8c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x2d8c3c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D8C3Cu;
    {
        const bool branch_taken_0x2d8c3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8C3Cu;
        // 0x2d8c40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8c3c) {
            ctx->pc = 0x2D8C50u;
            goto label_2d8c50;
        }
    }
    ctx->pc = 0x2D8C44u;
    // 0x2d8c44: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2D8C44u;
    SET_GPR_U32(ctx, 31, 0x2D8C4Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2D8C44u, 0x2D8C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8C4Cu;
label_2d8c4c:
    // 0x2d8c4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d8c4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d8c50:
    // 0x2d8c50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d8c50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d8c54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d8c54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8c58: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d8c58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d8c5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d8c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d8c60: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8C60u;
        // 0x2d8c64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8C68u;
}
