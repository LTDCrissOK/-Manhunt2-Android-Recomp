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

// Function: sub_00167EC8
// Address: 0x167ec8 - 0x167f78
void sub_00167EC8_0x167ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167EC8_0x167ec8");
#endif

    switch (ctx->pc) {
        case 0x167f04u: goto label_167f04;
        case 0x167f30u: goto label_167f30;
        case 0x167f5cu: goto label_167f5c;
        default: break;
    }

    ctx->pc = 0x167ec8u;

    // 0x167ec8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x167ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x167ecc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x167eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x167ed0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x167ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x167ed4: 0x24420dc8  addiu       $v0, $v0, 0xDC8
    ctx->pc = 0x167ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3528));
    // 0x167ed8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x167ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x167edc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x167edcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167ee0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x167ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x167ee4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x167ee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167ee8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x167ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x167eec: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x167eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x167ef0: 0x8e030210  lw          $v1, 0x210($s0)
    ctx->pc = 0x167ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x167ef4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x167EF4u;
    {
        const bool branch_taken_0x167ef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x167EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167EF4u;
        // 0x167ef8: 0x26120210  addiu       $s2, $s0, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167ef4) {
            ctx->pc = 0x167F04u;
            goto label_167f04;
        }
    }
    ctx->pc = 0x167EFCu;
    // 0x167efc: 0xc059ff4  jal         func_167FD0
    ctx->pc = 0x167EFCu;
    SET_GPR_U32(ctx, 31, 0x167F04u);
    ctx->pc = 0x167FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167FD0u, 0x167EFCu, 0x167F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167F04u;
label_167f04:
    // 0x167f04: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x167f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x167f08: 0x32250001  andi        $a1, $s1, 0x1
    ctx->pc = 0x167f08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x167f0c: 0x24420698  addiu       $v0, $v0, 0x698
    ctx->pc = 0x167f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1688));
    // 0x167f10: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x167f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x167f14: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x167f14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x167f18: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x167F18u;
    {
        const bool branch_taken_0x167f18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x167F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167F18u;
        // 0x167f1c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167f18) {
            ctx->pc = 0x167F48u;
            goto label_167f48;
        }
    }
    ctx->pc = 0x167F20u;
    // 0x167f20: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x167f20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167f24: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x167F24u;
    {
        const bool branch_taken_0x167f24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x167f24) {
            ctx->pc = 0x167F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167F24u;
            // 0x167f28: 0x24420638  addiu       $v0, $v0, 0x638 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1592));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167F4Cu;
            goto label_167f4c;
        }
    }
    ctx->pc = 0x167F2Cu;
    // 0x167f2c: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x167f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
label_167f30:
    // 0x167f30: 0x0  nop
    ctx->pc = 0x167f30u;
    // NOP
    // 0x167f34: 0x0  nop
    ctx->pc = 0x167f34u;
    // NOP
    // 0x167f38: 0x0  nop
    ctx->pc = 0x167f38u;
    // NOP
    // 0x167f3c: 0x0  nop
    ctx->pc = 0x167f3cu;
    // NOP
    // 0x167f40: 0x5483fffb  bnel        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x167F40u;
    {
        const bool branch_taken_0x167f40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x167f40) {
            ctx->pc = 0x167F44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167F40u;
            // 0x167f44: 0x2463ffe0  addiu       $v1, $v1, -0x20 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167f30;
        }
    }
    ctx->pc = 0x167F48u;
label_167f48:
    // 0x167f48: 0x24420638  addiu       $v0, $v0, 0x638
    ctx->pc = 0x167f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1592));
label_167f4c:
    // 0x167f4c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x167F4Cu;
    {
        const bool branch_taken_0x167f4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x167F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167F4Cu;
        // 0x167f50: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167f4c) {
            ctx->pc = 0x167F5Cu;
            goto label_167f5c;
        }
    }
    ctx->pc = 0x167F54u;
    // 0x167f54: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x167F54u;
    SET_GPR_U32(ctx, 31, 0x167F5Cu);
    ctx->pc = 0x167F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167F54u;
    // 0x167f58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x167F54u, 0x167F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167F5Cu;
label_167f5c:
    // 0x167f5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x167f5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167f60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x167f60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x167f64: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x167f64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167f68: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x167f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x167f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x167F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167F6Cu;
        // 0x167f70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167F74u;
    // 0x167f74: 0x0  nop
    ctx->pc = 0x167f74u;
    // NOP
    ctx->pc = 0x167f78u;
}
