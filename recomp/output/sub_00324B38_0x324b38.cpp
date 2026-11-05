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

// Function: sub_00324B38
// Address: 0x324b38 - 0x324c00
void sub_00324B38_0x324b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324B38_0x324b38");
#endif

    switch (ctx->pc) {
        case 0x324b88u: goto label_324b88;
        case 0x324b9cu: goto label_324b9c;
        case 0x324bccu: goto label_324bcc;
        default: break;
    }

    ctx->pc = 0x324b38u;

    // 0x324b38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x324b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x324b3c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x324b3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324b40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x324b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x324b44: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x324b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x324b48: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x324b48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324b4c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x324b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x324b50: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x324b50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324b54: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x324b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x324b58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x324b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x324b5c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x324b5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324b60: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x324b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x324b64: 0x8e250038  lw          $a1, 0x38($s1)
    ctx->pc = 0x324b64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x324b68: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x324b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x324b6c: 0x3842029a  xori        $v0, $v0, 0x29A
    ctx->pc = 0x324b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)666);
    // 0x324b70: 0xa2180a  movz        $v1, $a1, $v0
    ctx->pc = 0x324b70u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x324b74: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x324b74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324b78: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x324B78u;
    {
        const bool branch_taken_0x324b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324B78u;
        // 0x324b7c: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324b78) {
            ctx->pc = 0x324BB8u;
            goto label_324bb8;
        }
    }
    ctx->pc = 0x324B80u;
    // 0x324b80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x324b80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324b84: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x324b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_324b88:
    // 0x324b88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x324b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324b8c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x324b8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324b90: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x324b90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324b94: 0xc0c927c  jal         func_3249F0
    ctx->pc = 0x324B94u;
    SET_GPR_U32(ctx, 31, 0x324B9Cu);
    ctx->pc = 0x324B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324B94u;
    // 0x324b98: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3249F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3249F0u, 0x324B94u, 0x324B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324B9Cu;
label_324b9c:
    // 0x324b9c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x324B9Cu;
    {
        const bool branch_taken_0x324b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324B9Cu;
        // 0x324ba0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324b9c) {
            ctx->pc = 0x324BCCu;
            goto label_324bcc;
        }
    }
    ctx->pc = 0x324BA4u;
    // 0x324ba4: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x324ba4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x324ba8: 0x5600fff7  bnel        $s0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x324BA8u;
    {
        const bool branch_taken_0x324ba8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x324ba8) {
            ctx->pc = 0x324BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324BA8u;
            // 0x324bac: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324b88;
        }
    }
    ctx->pc = 0x324BB0u;
    // 0x324bb0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x324BB0u;
    {
        const bool branch_taken_0x324bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324BB0u;
        // 0x324bb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324bb0) {
            ctx->pc = 0x324BCCu;
            goto label_324bcc;
        }
    }
    ctx->pc = 0x324BB8u;
label_324bb8:
    // 0x324bb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x324bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324bbc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x324bbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324bc0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x324bc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324bc4: 0xc0c927c  jal         func_3249F0
    ctx->pc = 0x324BC4u;
    SET_GPR_U32(ctx, 31, 0x324BCCu);
    ctx->pc = 0x324BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324BC4u;
    // 0x324bc8: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3249F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3249F0u, 0x324BC4u, 0x324BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324BCCu;
label_324bcc:
    // 0x324bcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x324bccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324bd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x324bd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x324bd4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x324bd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x324bd8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x324bd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x324bdc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x324bdcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x324be0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x324be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x324be4: 0x3e00008  jr          $ra
    ctx->pc = 0x324BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324BE4u;
        // 0x324be8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324BECu;
    // 0x324bec: 0x0  nop
    ctx->pc = 0x324becu;
    // NOP
    // 0x324bf0: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x324bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x324bf4: 0x0  nop
    ctx->pc = 0x324bf4u;
    // NOP
    // 0x324bf8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x324bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x324bfc: 0x0  nop
    ctx->pc = 0x324bfcu;
    // NOP
    ctx->pc = 0x324c00u;
}
