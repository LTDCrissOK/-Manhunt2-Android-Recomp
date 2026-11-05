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

// Function: sub_003D5BC0
// Address: 0x3d5bc0 - 0x3d5c30
void sub_003D5BC0_0x3d5bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D5BC0_0x3d5bc0");
#endif

    switch (ctx->pc) {
        case 0x3d5bc0u: goto label_3d5bc0;
        case 0x3d5bc4u: goto label_3d5bc4;
        case 0x3d5bc8u: goto label_3d5bc8;
        case 0x3d5bccu: goto label_3d5bcc;
        case 0x3d5bd0u: goto label_3d5bd0;
        case 0x3d5bd4u: goto label_3d5bd4;
        case 0x3d5bd8u: goto label_3d5bd8;
        case 0x3d5bdcu: goto label_3d5bdc;
        case 0x3d5be0u: goto label_3d5be0;
        case 0x3d5be4u: goto label_3d5be4;
        case 0x3d5be8u: goto label_3d5be8;
        case 0x3d5becu: goto label_3d5bec;
        case 0x3d5bf0u: goto label_3d5bf0;
        case 0x3d5bf4u: goto label_3d5bf4;
        case 0x3d5bf8u: goto label_3d5bf8;
        case 0x3d5bfcu: goto label_3d5bfc;
        case 0x3d5c00u: goto label_3d5c00;
        case 0x3d5c04u: goto label_3d5c04;
        case 0x3d5c08u: goto label_3d5c08;
        case 0x3d5c0cu: goto label_3d5c0c;
        case 0x3d5c10u: goto label_3d5c10;
        case 0x3d5c14u: goto label_3d5c14;
        case 0x3d5c18u: goto label_3d5c18;
        case 0x3d5c1cu: goto label_3d5c1c;
        case 0x3d5c20u: goto label_3d5c20;
        case 0x3d5c24u: goto label_3d5c24;
        case 0x3d5c28u: goto label_3d5c28;
        case 0x3d5c2cu: goto label_3d5c2c;
        default: break;
    }

    ctx->pc = 0x3d5bc0u;

label_3d5bc0:
    // 0x3d5bc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d5bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3d5bc4:
    // 0x3d5bc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d5bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3d5bc8:
    // 0x3d5bc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d5bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3d5bcc:
    // 0x3d5bcc: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
label_3d5bd0:
    if (ctx->pc == 0x3D5BD0u) {
        ctx->pc = 0x3D5BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5BCCu;
        // 0x3d5bd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5BD4u;
        goto label_3d5bd4;
    }
    ctx->pc = 0x3D5BCCu;
    {
        const bool branch_taken_0x3d5bcc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5BCCu;
        // 0x3d5bd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5bcc) {
            ctx->pc = 0x3D5BE4u;
            goto label_3d5be4;
        }
    }
    ctx->pc = 0x3D5BD4u;
label_3d5bd4:
    // 0x3d5bd4: 0x84c30004  lh          $v1, 0x4($a2)
    ctx->pc = 0x3d5bd4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
label_3d5bd8:
    // 0x3d5bd8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3d5bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d5bdc:
    // 0x3d5bdc: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_3d5be0:
    if (ctx->pc == 0x3D5BE0u) {
        ctx->pc = 0x3D5BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5BDCu;
        // 0x3d5be0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5BE4u;
        goto label_3d5be4;
    }
    ctx->pc = 0x3D5BDCu;
    {
        const bool branch_taken_0x3d5bdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D5BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5BDCu;
        // 0x3d5be0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5bdc) {
            ctx->pc = 0x3D5C1Cu;
            goto label_3d5c1c;
        }
    }
    ctx->pc = 0x3D5BE4u;
label_3d5be4:
    // 0x3d5be4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3d5be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3d5be8:
    // 0x3d5be8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3d5be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3d5bec:
    // 0x3d5bec: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
label_3d5bf0:
    if (ctx->pc == 0x3D5BF0u) {
        ctx->pc = 0x3D5BF4u;
        goto label_3d5bf4;
    }
    ctx->pc = 0x3D5BECu;
    {
        const bool branch_taken_0x3d5bec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d5bec) {
            ctx->pc = 0x3D5BFCu;
            goto label_3d5bfc;
        }
    }
    ctx->pc = 0x3D5BF4u;
label_3d5bf4:
    // 0x3d5bf4: 0x10000009  b           . + 4 + (0x9 << 2)
label_3d5bf8:
    if (ctx->pc == 0x3D5BF8u) {
        ctx->pc = 0x3D5BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5BF4u;
        // 0x3d5bf8: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5BFCu;
        goto label_3d5bfc;
    }
    ctx->pc = 0x3D5BF4u;
    {
        const bool branch_taken_0x3d5bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5BF4u;
        // 0x3d5bf8: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5bf4) {
            ctx->pc = 0x3D5C1Cu;
            goto label_3d5c1c;
        }
    }
    ctx->pc = 0x3D5BFCu;
label_3d5bfc:
    // 0x3d5bfc: 0xa0f809  jalr        $a1
label_3d5c00:
    if (ctx->pc == 0x3D5C00u) {
        ctx->pc = 0x3D5C04u;
        goto label_3d5c04;
    }
    ctx->pc = 0x3D5BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3D5C04u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5BFCu, 0x3D5C04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D5C04u;
label_3d5c04:
    // 0x3d5c04: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x3d5c04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3d5c08:
    // 0x3d5c08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d5c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d5c0c:
    // 0x3d5c0c: 0xc0f5e48  jal         func_3D7920
label_3d5c10:
    if (ctx->pc == 0x3D5C10u) {
        ctx->pc = 0x3D5C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5C0Cu;
        // 0x3d5c10: 0x8e060028  lw          $a2, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5C14u;
        goto label_3d5c14;
    }
    ctx->pc = 0x3D5C0Cu;
    SET_GPR_U32(ctx, 31, 0x3D5C14u);
    ctx->pc = 0x3D5C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5C0Cu;
    // 0x3d5c10: 0x8e060028  lw          $a2, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D7920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7920u, 0x3D5C0Cu, 0x3D5C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5C14u;
label_3d5c14:
    // 0x3d5c14: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_3d5c18:
    if (ctx->pc == 0x3D5C18u) {
        ctx->pc = 0x3D5C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5C14u;
        // 0x3d5c18: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5C1Cu;
        goto label_3d5c1c;
    }
    ctx->pc = 0x3D5C14u;
    {
        const bool branch_taken_0x3d5c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d5c14) {
            ctx->pc = 0x3D5C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D5C14u;
            // 0x3d5c18: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D5C1Cu;
            goto label_3d5c1c;
        }
    }
    ctx->pc = 0x3D5C1Cu;
label_3d5c1c:
    // 0x3d5c1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d5c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d5c20:
    // 0x3d5c20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d5c20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d5c24:
    // 0x3d5c24: 0x3e00008  jr          $ra
label_3d5c28:
    if (ctx->pc == 0x3D5C28u) {
        ctx->pc = 0x3D5C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5C24u;
        // 0x3d5c28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5C2Cu;
        goto label_3d5c2c;
    }
    ctx->pc = 0x3D5C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D5C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5C24u;
        // 0x3d5c28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D5C2Cu;
label_3d5c2c:
    // 0x3d5c2c: 0x0  nop
    ctx->pc = 0x3d5c2cu;
    // NOP
    ctx->pc = 0x3d5c30u;
}
