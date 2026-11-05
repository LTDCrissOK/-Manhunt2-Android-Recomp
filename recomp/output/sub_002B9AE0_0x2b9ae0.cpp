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

// Function: sub_002B9AE0
// Address: 0x2b9ae0 - 0x2b9b98
void sub_002B9AE0_0x2b9ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9AE0_0x2b9ae0");
#endif

    switch (ctx->pc) {
        case 0x2b9b70u: goto label_2b9b70;
        case 0x2b9b80u: goto label_2b9b80;
        default: break;
    }

    ctx->pc = 0x2b9ae0u;

    // 0x2b9ae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b9ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b9ae4: 0x2ca20005  sltiu       $v0, $a1, 0x5
    ctx->pc = 0x2b9ae4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2b9ae8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b9ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b9aec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b9aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b9af0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2B9AF0u;
    {
        const bool branch_taken_0x2b9af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9AF0u;
        // 0x2b9af4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9af0) {
            ctx->pc = 0x2B9B80u;
            goto label_2b9b80;
        }
    }
    ctx->pc = 0x2B9AF8u;
    // 0x2b9af8: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2b9af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2b9afc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2b9afcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2b9b00: 0x2442fed0  addiu       $v0, $v0, -0x130
    ctx->pc = 0x2b9b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966992));
    // 0x2b9b04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b9b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b9b08: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b9b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b9b0c: 0x800008  jr          $a0
    ctx->pc = 0x2B9B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B9B14u: goto label_2b9b14;
            case 0x2B9B24u: goto label_2b9b24;
            case 0x2B9B34u: goto label_2b9b34;
            case 0x2B9B44u: goto label_2b9b44;
            case 0x2B9B54u: goto label_2b9b54;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9B0Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B9B14u;
label_2b9b14:
    // 0x2b9b14: 0x24050082  addiu       $a1, $zero, 0x82
    ctx->pc = 0x2b9b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x2b9b18: 0x240600aa  addiu       $a2, $zero, 0xAA
    ctx->pc = 0x2b9b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x2b9b1c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2B9B1Cu;
    {
        const bool branch_taken_0x2b9b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B1Cu;
        // 0x2b9b20: 0x24110046  addiu       $s1, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9b1c) {
            ctx->pc = 0x2B9B60u;
            goto label_2b9b60;
        }
    }
    ctx->pc = 0x2B9B24u;
label_2b9b24:
    // 0x2b9b24: 0x24050096  addiu       $a1, $zero, 0x96
    ctx->pc = 0x2b9b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x2b9b28: 0x240600be  addiu       $a2, $zero, 0xBE
    ctx->pc = 0x2b9b28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
    // 0x2b9b2c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2B9B2Cu;
    {
        const bool branch_taken_0x2b9b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B2Cu;
        // 0x2b9b30: 0x2411005a  addiu       $s1, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9b2c) {
            ctx->pc = 0x2B9B60u;
            goto label_2b9b60;
        }
    }
    ctx->pc = 0x2B9B34u;
label_2b9b34:
    // 0x2b9b34: 0x2405008c  addiu       $a1, $zero, 0x8C
    ctx->pc = 0x2b9b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x2b9b38: 0x240600be  addiu       $a2, $zero, 0xBE
    ctx->pc = 0x2b9b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
    // 0x2b9b3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B9B3Cu;
    {
        const bool branch_taken_0x2b9b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B3Cu;
        // 0x2b9b40: 0x24110050  addiu       $s1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9b3c) {
            ctx->pc = 0x2B9B60u;
            goto label_2b9b60;
        }
    }
    ctx->pc = 0x2B9B44u;
label_2b9b44:
    // 0x2b9b44: 0x240500d2  addiu       $a1, $zero, 0xD2
    ctx->pc = 0x2b9b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
    // 0x2b9b48: 0x240600dc  addiu       $a2, $zero, 0xDC
    ctx->pc = 0x2b9b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x2b9b4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B9B4Cu;
    {
        const bool branch_taken_0x2b9b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B4Cu;
        // 0x2b9b50: 0x24110078  addiu       $s1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9b4c) {
            ctx->pc = 0x2B9B60u;
            goto label_2b9b60;
        }
    }
    ctx->pc = 0x2B9B54u;
label_2b9b54:
    // 0x2b9b54: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x2b9b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2b9b58: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x2b9b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2b9b5c: 0x24110028  addiu       $s1, $zero, 0x28
    ctx->pc = 0x2b9b5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2b9b60:
    // 0x2b9b60: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x2b9b60u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x2b9b64: 0x26104d40  addiu       $s0, $s0, 0x4D40
    ctx->pc = 0x2b9b64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19776));
    // 0x2b9b68: 0xc0ae670  jal         func_2B99C0
    ctx->pc = 0x2B9B68u;
    SET_GPR_U32(ctx, 31, 0x2B9B70u);
    ctx->pc = 0x2B9B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9B68u;
    // 0x2b9b6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B99C0u, 0x2B9B68u, 0x2B9B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9B70u;
label_2b9b70:
    // 0x2b9b70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b9b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9b74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b9b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9b78: 0xc0ae67a  jal         func_2B99E8
    ctx->pc = 0x2B9B78u;
    SET_GPR_U32(ctx, 31, 0x2B9B80u);
    ctx->pc = 0x2B9B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9B78u;
    // 0x2b9b7c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B99E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B99E8u, 0x2B9B78u, 0x2B9B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9B80u;
label_2b9b80:
    // 0x2b9b80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b9b80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b9b84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b9b84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9b88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b9b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b9b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B8Cu;
        // 0x2b9b90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9B8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9B94u;
    // 0x2b9b94: 0x0  nop
    ctx->pc = 0x2b9b94u;
    // NOP
    ctx->pc = 0x2b9b98u;
}
