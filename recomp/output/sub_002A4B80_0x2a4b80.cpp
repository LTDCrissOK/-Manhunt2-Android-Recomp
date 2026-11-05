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

// Function: sub_002A4B80
// Address: 0x2a4b80 - 0x2a4c08
void sub_002A4B80_0x2a4b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4B80_0x2a4b80");
#endif

    switch (ctx->pc) {
        case 0x2a4b80u: goto label_2a4b80;
        case 0x2a4b84u: goto label_2a4b84;
        case 0x2a4b88u: goto label_2a4b88;
        case 0x2a4b8cu: goto label_2a4b8c;
        case 0x2a4b90u: goto label_2a4b90;
        case 0x2a4b94u: goto label_2a4b94;
        case 0x2a4b98u: goto label_2a4b98;
        case 0x2a4b9cu: goto label_2a4b9c;
        case 0x2a4ba0u: goto label_2a4ba0;
        case 0x2a4ba4u: goto label_2a4ba4;
        case 0x2a4ba8u: goto label_2a4ba8;
        case 0x2a4bacu: goto label_2a4bac;
        case 0x2a4bb0u: goto label_2a4bb0;
        case 0x2a4bb4u: goto label_2a4bb4;
        case 0x2a4bb8u: goto label_2a4bb8;
        case 0x2a4bbcu: goto label_2a4bbc;
        case 0x2a4bc0u: goto label_2a4bc0;
        case 0x2a4bc4u: goto label_2a4bc4;
        case 0x2a4bc8u: goto label_2a4bc8;
        case 0x2a4bccu: goto label_2a4bcc;
        case 0x2a4bd0u: goto label_2a4bd0;
        case 0x2a4bd4u: goto label_2a4bd4;
        case 0x2a4bd8u: goto label_2a4bd8;
        case 0x2a4bdcu: goto label_2a4bdc;
        case 0x2a4be0u: goto label_2a4be0;
        case 0x2a4be4u: goto label_2a4be4;
        case 0x2a4be8u: goto label_2a4be8;
        case 0x2a4becu: goto label_2a4bec;
        case 0x2a4bf0u: goto label_2a4bf0;
        case 0x2a4bf4u: goto label_2a4bf4;
        case 0x2a4bf8u: goto label_2a4bf8;
        case 0x2a4bfcu: goto label_2a4bfc;
        case 0x2a4c00u: goto label_2a4c00;
        case 0x2a4c04u: goto label_2a4c04;
        default: break;
    }

    ctx->pc = 0x2a4b80u;

label_2a4b80:
    // 0x2a4b80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a4b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2a4b84:
    // 0x2a4b84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a4b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2a4b88:
    // 0x2a4b88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a4b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2a4b8c:
    // 0x2a4b8c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2a4b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2a4b90:
    // 0x2a4b90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a4b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2a4b94:
    // 0x2a4b94: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2a4b94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a4b98:
    // 0x2a4b98: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2a4b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2a4b9c:
    // 0x2a4b9c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a4b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2a4ba0:
    // 0x2a4ba0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a4ba0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a4ba4:
    // 0x2a4ba4: 0x8e6201ac  lw          $v0, 0x1AC($s3)
    ctx->pc = 0x2a4ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 428)));
label_2a4ba8:
    // 0x2a4ba8: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_2a4bac:
    if (ctx->pc == 0x2A4BACu) {
        ctx->pc = 0x2A4BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4BA8u;
        // 0x2a4bac: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4BB0u;
        goto label_2a4bb0;
    }
    ctx->pc = 0x2A4BA8u;
    {
        const bool branch_taken_0x2a4ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A4BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4BA8u;
        // 0x2a4bac: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4ba8) {
            ctx->pc = 0x2A4BECu;
            goto label_2a4bec;
        }
    }
    ctx->pc = 0x2A4BB0u;
label_2a4bb0:
    // 0x2a4bb0: 0xc0f5240  jal         func_3D4900
label_2a4bb4:
    if (ctx->pc == 0x2A4BB4u) {
        ctx->pc = 0x2A4BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4BB0u;
        // 0x2a4bb4: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4BB8u;
        goto label_2a4bb8;
    }
    ctx->pc = 0x2A4BB0u;
    SET_GPR_U32(ctx, 31, 0x2A4BB8u);
    ctx->pc = 0x2A4BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4BB0u;
    // 0x2a4bb4: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2A4BB0u, 0x2A4BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4BB8u;
label_2a4bb8:
    // 0x2a4bb8: 0xc0a8fb6  jal         func_2A3ED8
label_2a4bbc:
    if (ctx->pc == 0x2A4BBCu) {
        ctx->pc = 0x2A4BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4BB8u;
        // 0x2a4bbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4BC0u;
        goto label_2a4bc0;
    }
    ctx->pc = 0x2A4BB8u;
    SET_GPR_U32(ctx, 31, 0x2A4BC0u);
    ctx->pc = 0x2A4BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4BB8u;
    // 0x2a4bbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3ED8u, 0x2A4BB8u, 0x2A4BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4BC0u;
label_2a4bc0:
    // 0x2a4bc0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a4bc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a4bc4:
    // 0x2a4bc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a4bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a4bc8:
    // 0x2a4bc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a4bc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a4bcc:
    // 0x2a4bcc: 0xc0a5ca2  jal         func_297288
label_2a4bd0:
    if (ctx->pc == 0x2A4BD0u) {
        ctx->pc = 0x2A4BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4BCCu;
        // 0x2a4bd0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4BD4u;
        goto label_2a4bd4;
    }
    ctx->pc = 0x2A4BCCu;
    SET_GPR_U32(ctx, 31, 0x2A4BD4u);
    ctx->pc = 0x2A4BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4BCCu;
    // 0x2a4bd0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297288u, 0x2A4BCCu, 0x2A4BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4BD4u;
label_2a4bd4:
    // 0x2a4bd4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2a4bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a4bd8:
    // 0x2a4bd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a4bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a4bdc:
    // 0x2a4bdc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2a4bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2a4be0:
    // 0x2a4be0: 0x40f809  jalr        $v0
label_2a4be4:
    if (ctx->pc == 0x2A4BE4u) {
        ctx->pc = 0x2A4BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4BE0u;
        // 0x2a4be4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4BE8u;
        goto label_2a4be8;
    }
    ctx->pc = 0x2A4BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A4BE8u);
        ctx->pc = 0x2A4BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4BE0u;
        // 0x2a4be4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4BE0u, 0x2A4BE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A4BE8u;
label_2a4be8:
    // 0x2a4be8: 0xae7001ac  sw          $s0, 0x1AC($s3)
    ctx->pc = 0x2a4be8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 428), GPR_U32(ctx, 16));
label_2a4bec:
    // 0x2a4bec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a4becu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a4bf0:
    // 0x2a4bf0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a4bf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2a4bf4:
    // 0x2a4bf4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a4bf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a4bf8:
    // 0x2a4bf8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2a4bf8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2a4bfc:
    // 0x2a4bfc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a4bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a4c00:
    // 0x2a4c00: 0x3e00008  jr          $ra
label_2a4c04:
    if (ctx->pc == 0x2A4C04u) {
        ctx->pc = 0x2A4C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4C00u;
        // 0x2a4c04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4C08u;
        goto label_fallthrough_0x2a4c00;
    }
    ctx->pc = 0x2A4C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4C00u;
        // 0x2a4c04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a4c00:
    ctx->pc = 0x2A4C08u;
}
