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

// Function: sub_002B6AC8
// Address: 0x2b6ac8 - 0x2b6b60
void sub_002B6AC8_0x2b6ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6AC8_0x2b6ac8");
#endif

    switch (ctx->pc) {
        case 0x2b6b04u: goto label_2b6b04;
        case 0x2b6b24u: goto label_2b6b24;
        case 0x2b6b2cu: goto label_2b6b2c;
        case 0x2b6b40u: goto label_2b6b40;
        default: break;
    }

    ctx->pc = 0x2b6ac8u;

    // 0x2b6ac8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b6ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b6acc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2b6accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b6ad0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b6ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b6ad4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b6ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b6ad8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b6ad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6adc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b6adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b6ae0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2b6ae0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6ae4: 0xae11590c  sw          $s1, 0x590C($s0)
    ctx->pc = 0x2b6ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22796), GPR_U32(ctx, 17));
    // 0x2b6ae8: 0x8e0358f8  lw          $v1, 0x58F8($s0)
    ctx->pc = 0x2b6ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 22776)));
    // 0x2b6aec: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B6AECu;
    {
        const bool branch_taken_0x2b6aec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B6AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6AECu;
        // 0x2b6af0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6aec) {
            ctx->pc = 0x2B6B38u;
            goto label_2b6b38;
        }
    }
    ctx->pc = 0x2B6AF4u;
    // 0x2b6af4: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B6AF4u;
    {
        const bool branch_taken_0x2b6af4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b6af4) {
            ctx->pc = 0x2B6B38u;
            goto label_2b6b38;
        }
    }
    ctx->pc = 0x2B6AFCu;
    // 0x2b6afc: 0xc0ad65a  jal         func_2B5968
    ctx->pc = 0x2B6AFCu;
    SET_GPR_U32(ctx, 31, 0x2B6B04u);
    ctx->pc = 0x2B6B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6AFCu;
    // 0x2b6b00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5968u, 0x2B6AFCu, 0x2B6B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6B04u;
label_2b6b04:
    // 0x2b6b04: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B6B04u;
    {
        const bool branch_taken_0x2b6b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B04u;
        // 0x2b6b08: 0x3c030067  lui         $v1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6b04) {
            ctx->pc = 0x2B6B14u;
            goto label_2b6b14;
        }
    }
    ctx->pc = 0x2B6B0Cu;
    // 0x2b6b0c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2B6B0Cu;
    {
        const bool branch_taken_0x2b6b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B0Cu;
        // 0x2b6b10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6b0c) {
            ctx->pc = 0x2B6B4Cu;
            goto label_2b6b4c;
        }
    }
    ctx->pc = 0x2B6B14u;
label_2b6b14:
    // 0x2b6b14: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b6b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2b6b18: 0xac60a320  sw          $zero, -0x5CE0($v1)
    ctx->pc = 0x2b6b18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943520), GPR_U32(ctx, 0));
    // 0x2b6b1c: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x2B6B1Cu;
    SET_GPR_U32(ctx, 31, 0x2B6B24u);
    ctx->pc = 0x2B6B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6B1Cu;
    // 0x2b6b20: 0xa040a930  sb          $zero, -0x56D0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294945072), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x2B6B1Cu, 0x2B6B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6B24u;
label_2b6b24:
    // 0x2b6b24: 0xc0a7142  jal         func_29C508
    ctx->pc = 0x2B6B24u;
    SET_GPR_U32(ctx, 31, 0x2B6B2Cu);
    ctx->pc = 0x2B6B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6B24u;
    // 0x2b6b28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C508u, 0x2B6B24u, 0x2B6B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6B2Cu;
label_2b6b2c:
    // 0x2b6b2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b6b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b6b30: 0xae1158fc  sw          $s1, 0x58FC($s0)
    ctx->pc = 0x2b6b30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22780), GPR_U32(ctx, 17));
    // 0x2b6b34: 0xae025914  sw          $v0, 0x5914($s0)
    ctx->pc = 0x2b6b34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22804), GPR_U32(ctx, 2));
label_2b6b38:
    // 0x2b6b38: 0xc0ad6ae  jal         func_2B5AB8
    ctx->pc = 0x2B6B38u;
    SET_GPR_U32(ctx, 31, 0x2B6B40u);
    ctx->pc = 0x2B6B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6B38u;
    // 0x2b6b3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5AB8u, 0x2B6B38u, 0x2B6B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6B40u;
label_2b6b40:
    // 0x2b6b40: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x2b6b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2b6b44: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x2b6b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2b6b48: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2b6b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2b6b4c:
    // 0x2b6b4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b6b4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6b50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b6b50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6b54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b6b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6b58: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B58u;
        // 0x2b6b5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6B60u;
}
