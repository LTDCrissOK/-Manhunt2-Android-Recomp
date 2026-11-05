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

// Function: sub_00122B78
// Address: 0x122b78 - 0x122c30
void sub_00122B78_0x122b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122B78_0x122b78");
#endif

    switch (ctx->pc) {
        case 0x122bb0u: goto label_122bb0;
        case 0x122bdcu: goto label_122bdc;
        case 0x122c04u: goto label_122c04;
        default: break;
    }

    ctx->pc = 0x122b78u;

    // 0x122b78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x122b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x122b7c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x122b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x122b80: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x122b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x122b84: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x122b84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122b88: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x122b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x122b8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x122b8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122b90: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x122b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x122b94: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x122b94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122b98: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x122b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x122b9c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x122b9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122ba0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x122ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x122ba4: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x122ba4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122ba8: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x122BA8u;
    SET_GPR_U32(ctx, 31, 0x122BB0u);
    ctx->pc = 0x122BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122BA8u;
    // 0x122bac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x122BA8u, 0x122BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122BB0u;
label_122bb0:
    // 0x122bb0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x122BB0u;
    {
        const bool branch_taken_0x122bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122BB0u;
        // 0x122bb4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122bb0) {
            ctx->pc = 0x122C0Cu;
            goto label_122c0c;
        }
    }
    ctx->pc = 0x122BB8u;
    // 0x122bb8: 0x37a40002  ori         $a0, $sp, 0x2
    ctx->pc = 0x122bb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)2);
    // 0x122bbc: 0x2449cdc0  addiu       $t1, $v0, -0x3240
    ctx->pc = 0x122bbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954432));
    // 0x122bc0: 0x81230000  lb          $v1, 0x0($t1)
    ctx->pc = 0x122bc0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x122bc4: 0x81270001  lb          $a3, 0x1($t1)
    ctx->pc = 0x122bc4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x122bc8: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x122bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x122bcc: 0xa3a70001  sb          $a3, 0x1($sp)
    ctx->pc = 0x122bccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x122bd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x122bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122bd4: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x122BD4u;
    SET_GPR_U32(ctx, 31, 0x122BDCu);
    ctx->pc = 0x122BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122BD4u;
    // 0x122bd8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x122BD4u, 0x122BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122BDCu;
label_122bdc:
    // 0x122bdc: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x122bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x122be0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x122be0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x122be4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x122be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122be8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x122be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122bec: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x122becu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122bf0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x122bf0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122bf4: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x122bf4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122bf8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x122bf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122bfc: 0xc048b0c  jal         func_122C30
    ctx->pc = 0x122BFCu;
    SET_GPR_U32(ctx, 31, 0x122C04u);
    ctx->pc = 0x122C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122BFCu;
    // 0x122c00: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122C30u, 0x122BFCu, 0x122C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122C04u;
label_122c04:
    // 0x122c04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x122C04u;
    {
        const bool branch_taken_0x122c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122C04u;
        // 0x122c08: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122c04) {
            ctx->pc = 0x122C14u;
            goto label_122c14;
        }
    }
    ctx->pc = 0x122C0Cu;
label_122c0c:
    // 0x122c0c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x122c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x122c10: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x122c10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_122c14:
    // 0x122c14: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x122c14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x122c18: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x122c18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122c1c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x122c1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x122c20: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x122c20u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x122c24: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x122c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x122c28: 0x3e00008  jr          $ra
    ctx->pc = 0x122C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122C28u;
        // 0x122c2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122C30u;
}
