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

// Function: sub_002EBBE0
// Address: 0x2ebbe0 - 0x2ebc98
void sub_002EBBE0_0x2ebbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EBBE0_0x2ebbe0");
#endif

    switch (ctx->pc) {
        case 0x2ebc60u: goto label_2ebc60;
        case 0x2ebc80u: goto label_2ebc80;
        default: break;
    }

    ctx->pc = 0x2ebbe0u;

    // 0x2ebbe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ebbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ebbe4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2ebbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2ebbe8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ebbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ebbec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ebbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ebbf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ebbf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebbf4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ebbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ebbf8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2ebbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2ebbfc: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x2ebbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x2ebc00: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x2ebc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x2ebc04: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EBC04u;
    {
        const bool branch_taken_0x2ebc04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2EBC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBC04u;
        // 0x2ebc08: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebc04) {
            ctx->pc = 0x2EBC2Cu;
            goto label_2ebc2c;
        }
    }
    ctx->pc = 0x2EBC0Cu;
    // 0x2ebc0c: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x2ebc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2ebc10: 0x240200d3  addiu       $v0, $zero, 0xD3
    ctx->pc = 0x2ebc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 211));
    // 0x2ebc14: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EBC14u;
    {
        const bool branch_taken_0x2ebc14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EBC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBC14u;
        // 0x2ebc18: 0x240200cb  addiu       $v0, $zero, 0xCB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebc14) {
            ctx->pc = 0x2EBC24u;
            goto label_2ebc24;
        }
    }
    ctx->pc = 0x2EBC1Cu;
    // 0x2ebc1c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EBC1Cu;
    {
        const bool branch_taken_0x2ebc1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EBC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBC1Cu;
        // 0x2ebc20: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebc1c) {
            ctx->pc = 0x2EBC30u;
            goto label_2ebc30;
        }
    }
    ctx->pc = 0x2EBC24u;
label_2ebc24:
    // 0x2ebc24: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2ebc24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ebc28: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x2ebc28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_2ebc2c:
    // 0x2ebc2c: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x2ebc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2ebc30:
    // 0x2ebc30: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x2ebc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x2ebc34: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EBC34u;
    {
        const bool branch_taken_0x2ebc34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2EBC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBC34u;
        // 0x2ebc38: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebc34) {
            ctx->pc = 0x2EBC58u;
            goto label_2ebc58;
        }
    }
    ctx->pc = 0x2EBC3Cu;
    // 0x2ebc3c: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x2ebc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2ebc40: 0x240200d3  addiu       $v0, $zero, 0xD3
    ctx->pc = 0x2ebc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 211));
    // 0x2ebc44: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EBC44u;
    {
        const bool branch_taken_0x2ebc44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EBC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBC44u;
        // 0x2ebc48: 0x240200cb  addiu       $v0, $zero, 0xCB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebc44) {
            ctx->pc = 0x2EBC54u;
            goto label_2ebc54;
        }
    }
    ctx->pc = 0x2EBC4Cu;
    // 0x2ebc4c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EBC4Cu;
    {
        const bool branch_taken_0x2ebc4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ebc4c) {
            ctx->pc = 0x2EBC58u;
            goto label_2ebc58;
        }
    }
    ctx->pc = 0x2EBC54u;
label_2ebc54:
    // 0x2ebc54: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2ebc54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ebc58:
    // 0x2ebc58: 0xc08dacc  jal         func_236B30
    ctx->pc = 0x2EBC58u;
    SET_GPR_U32(ctx, 31, 0x2EBC60u);
    ctx->pc = 0x2EBC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBC58u;
    // 0x2ebc5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B30u, 0x2EBC58u, 0x2EBC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBC60u;
label_2ebc60:
    // 0x2ebc60: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EBC60u;
    {
        const bool branch_taken_0x2ebc60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebc60) {
            ctx->pc = 0x2EBC64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBC60u;
            // 0x2ebc64: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EBC84u;
            goto label_2ebc84;
        }
    }
    ctx->pc = 0x2EBC68u;
    // 0x2ebc68: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EBC68u;
    {
        const bool branch_taken_0x2ebc68 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ebc68) {
            ctx->pc = 0x2EBC78u;
            goto label_2ebc78;
        }
    }
    ctx->pc = 0x2EBC70u;
    // 0x2ebc70: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EBC70u;
    {
        const bool branch_taken_0x2ebc70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebc70) {
            ctx->pc = 0x2EBC74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBC70u;
            // 0x2ebc74: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EBC84u;
            goto label_2ebc84;
        }
    }
    ctx->pc = 0x2EBC78u;
label_2ebc78:
    // 0x2ebc78: 0xc06bb10  jal         func_1AEC40
    ctx->pc = 0x2EBC78u;
    SET_GPR_U32(ctx, 31, 0x2EBC80u);
    ctx->pc = 0x2EBC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBC78u;
    // 0x2ebc7c: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEC40u, 0x2EBC78u, 0x2EBC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBC80u;
label_2ebc80:
    // 0x2ebc80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ebc80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ebc84:
    // 0x2ebc84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ebc84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ebc88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ebc88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ebc8c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2ebc8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ebc90: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBC90u;
        // 0x2ebc94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBC90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBC98u;
}
