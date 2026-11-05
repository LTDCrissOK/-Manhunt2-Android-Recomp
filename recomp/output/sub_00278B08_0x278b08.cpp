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

// Function: sub_00278B08
// Address: 0x278b08 - 0x278c08
void sub_00278B08_0x278b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278B08_0x278b08");
#endif

    switch (ctx->pc) {
        case 0x278b3cu: goto label_278b3c;
        case 0x278b40u: goto label_278b40;
        case 0x278bc4u: goto label_278bc4;
        case 0x278be8u: goto label_278be8;
        default: break;
    }

    ctx->pc = 0x278b08u;

    // 0x278b08: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x278b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x278b0c: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x278b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x278b10: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x278b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x278b14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x278b14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278b18: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x278b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x278b1c: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x278b1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278b20: 0xffb30128  sd          $s3, 0x128($sp)
    ctx->pc = 0x278b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 19));
    // 0x278b24: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x278b24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278b28: 0xffb40130  sd          $s4, 0x130($sp)
    ctx->pc = 0x278b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 20));
    // 0x278b2c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x278b2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278b30: 0xffbf0138  sd          $ra, 0x138($sp)
    ctx->pc = 0x278b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 31));
    // 0x278b34: 0xc09e834  jal         func_27A0D0
    ctx->pc = 0x278B34u;
    SET_GPR_U32(ctx, 31, 0x278B3Cu);
    ctx->pc = 0x278B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278B34u;
    // 0x278b38: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A0D0u, 0x278B34u, 0x278B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278B3Cu;
label_278b3c:
    // 0x278b3c: 0x8e220114  lw          $v0, 0x114($s1)
    ctx->pc = 0x278b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
label_278b40:
    // 0x278b40: 0x26230004  addiu       $v1, $s1, 0x4
    ctx->pc = 0x278b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x278b44: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x278b44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278b48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x278b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x278b4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x278b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278b50: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x278b50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x278b54: 0x2c620023  sltiu       $v0, $v1, 0x23
    ctx->pc = 0x278b54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
    // 0x278b58: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x278B58u;
    {
        const bool branch_taken_0x278b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x278B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278B58u;
        // 0x278b5c: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278b58) {
            ctx->pc = 0x278B78u;
            goto label_278b78;
        }
    }
    ctx->pc = 0x278B60u;
    // 0x278b60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x278b60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x278b64: 0x244283d0  addiu       $v0, $v0, -0x7C30
    ctx->pc = 0x278b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935504));
    // 0x278b68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x278b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x278b6c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x278b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x278b70: 0x800008  jr          $a0
    ctx->pc = 0x278B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x278B78u: goto label_278b78;
            case 0x278B94u: goto label_278b94;
            case 0x278BACu: goto label_278bac;
            case 0x278BCCu: goto label_278bcc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278B70u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x278B78u;
label_278b78:
    // 0x278b78: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x278b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x278b7c: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x278b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x278b80: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x278b80u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x278b84: 0xae230114  sw          $v1, 0x114($s1)
    ctx->pc = 0x278b84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 276), GPR_U32(ctx, 3));
    // 0x278b88: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x278b88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x278b8c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x278B8Cu;
    {
        const bool branch_taken_0x278b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278B8Cu;
        // 0x278b90: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278b8c) {
            ctx->pc = 0x278BD0u;
            goto label_278bd0;
        }
    }
    ctx->pc = 0x278B94u;
label_278b94:
    // 0x278b94: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x278b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x278b98: 0x3a730001  xori        $s3, $s3, 0x1
    ctx->pc = 0x278b98u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)1);
    // 0x278b9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x278b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278ba0: 0xae230114  sw          $v1, 0x114($s1)
    ctx->pc = 0x278ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 276), GPR_U32(ctx, 3));
    // 0x278ba4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x278BA4u;
    {
        const bool branch_taken_0x278ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278BA4u;
        // 0x278ba8: 0x53900a  movz        $s2, $v0, $s3 (Delay Slot)
        if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278ba4) {
            ctx->pc = 0x278BD0u;
            goto label_278bd0;
        }
    }
    ctx->pc = 0x278BACu;
label_278bac:
    // 0x278bac: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x278BACu;
    {
        const bool branch_taken_0x278bac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x278BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278BACu;
        // 0x278bb0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278bac) {
            ctx->pc = 0x278BCCu;
            goto label_278bcc;
        }
    }
    ctx->pc = 0x278BB4u;
    // 0x278bb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x278bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278bb8: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x278bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x278bbc: 0xc09e834  jal         func_27A0D0
    ctx->pc = 0x278BBCu;
    SET_GPR_U32(ctx, 31, 0x278BC4u);
    ctx->pc = 0x278BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278BBCu;
    // 0x278bc0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A0D0u, 0x278BBCu, 0x278BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278BC4u;
label_278bc4:
    // 0x278bc4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x278BC4u;
    {
        const bool branch_taken_0x278bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278bc4) {
            ctx->pc = 0x278BD0u;
            goto label_278bd0;
        }
    }
    ctx->pc = 0x278BCCu;
label_278bcc:
    // 0x278bcc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x278bccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_278bd0:
    // 0x278bd0: 0x5240ffdb  beql        $s2, $zero, . + 4 + (-0x25 << 2)
    ctx->pc = 0x278BD0u;
    {
        const bool branch_taken_0x278bd0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x278bd0) {
            ctx->pc = 0x278BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278BD0u;
            // 0x278bd4: 0x8e220114  lw          $v0, 0x114($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278b40;
        }
    }
    ctx->pc = 0x278BD8u;
    // 0x278bd8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x278bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278bdc: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x278bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x278be0: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x278BE0u;
    SET_GPR_U32(ctx, 31, 0x278BE8u);
    ctx->pc = 0x278BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278BE0u;
    // 0x278be4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x278BE0u, 0x278BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278BE8u;
label_278be8:
    // 0x278be8: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x278be8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x278bec: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x278becu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x278bf0: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x278bf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x278bf4: 0xdfb30128  ld          $s3, 0x128($sp)
    ctx->pc = 0x278bf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x278bf8: 0xdfb40130  ld          $s4, 0x130($sp)
    ctx->pc = 0x278bf8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x278bfc: 0xdfbf0138  ld          $ra, 0x138($sp)
    ctx->pc = 0x278bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x278c00: 0x3e00008  jr          $ra
    ctx->pc = 0x278C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278C00u;
        // 0x278c04: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278C08u;
}
