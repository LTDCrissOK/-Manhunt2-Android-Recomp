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

// Function: sub_00261DB0
// Address: 0x261db0 - 0x261f28
void sub_00261DB0_0x261db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261DB0_0x261db0");
#endif

    switch (ctx->pc) {
        case 0x261dc0u: goto label_261dc0;
        default: break;
    }

    ctx->pc = 0x261db0u;

    // 0x261db0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x261db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x261db4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x261db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x261db8: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x261DB8u;
    SET_GPR_U32(ctx, 31, 0x261DC0u);
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x261DB8u, 0x261DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261DC0u;
label_261dc0:
    // 0x261dc0: 0x2443fffa  addiu       $v1, $v0, -0x6
    ctx->pc = 0x261dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x261dc4: 0x2c620085  sltiu       $v0, $v1, 0x85
    ctx->pc = 0x261dc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)133) ? 1 : 0);
    // 0x261dc8: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x261DC8u;
    {
        const bool branch_taken_0x261dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261DC8u;
        // 0x261dcc: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261dc8) {
            ctx->pc = 0x261F38u;
            return;
        }
    }
    ctx->pc = 0x261DD0u;
    // 0x261dd0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x261dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x261dd4: 0x24427450  addiu       $v0, $v0, 0x7450
    ctx->pc = 0x261dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29776));
    // 0x261dd8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x261dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x261ddc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x261ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x261de0: 0x800008  jr          $a0
    ctx->pc = 0x261DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x261DE8u: goto label_261de8;
            case 0x261DF0u: goto label_261df0;
            case 0x261DF8u: goto label_261df8;
            case 0x261E00u: goto label_261e00;
            case 0x261E08u: goto label_261e08;
            case 0x261E10u: goto label_261e10;
            case 0x261E18u: goto label_261e18;
            case 0x261E20u: goto label_261e20;
            case 0x261E28u: goto label_261e28;
            case 0x261E30u: goto label_261e30;
            case 0x261E38u: goto label_261e38;
            case 0x261E40u: goto label_261e40;
            case 0x261E48u: goto label_261e48;
            case 0x261E50u: goto label_261e50;
            case 0x261E58u: goto label_261e58;
            case 0x261E60u: goto label_261e60;
            case 0x261E68u: goto label_261e68;
            case 0x261E70u: goto label_261e70;
            case 0x261E78u: goto label_261e78;
            case 0x261E80u: goto label_261e80;
            case 0x261E88u: goto label_261e88;
            case 0x261E90u: goto label_261e90;
            case 0x261E98u: goto label_261e98;
            case 0x261EA0u: goto label_261ea0;
            case 0x261EA8u: goto label_261ea8;
            case 0x261EB0u: goto label_261eb0;
            case 0x261EB8u: goto label_261eb8;
            case 0x261EC0u: goto label_261ec0;
            case 0x261EC8u: goto label_261ec8;
            case 0x261ED0u: goto label_261ed0;
            case 0x261ED8u: goto label_261ed8;
            case 0x261EE0u: goto label_261ee0;
            case 0x261EE8u: goto label_261ee8;
            case 0x261EF0u: goto label_261ef0;
            case 0x261EF8u: goto label_261ef8;
            case 0x261F00u: goto label_261f00;
            case 0x261F08u: goto label_261f08;
            case 0x261F10u: goto label_261f10;
            case 0x261F18u: goto label_261f18;
            case 0x261F20u: goto label_261f20;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261DE0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x261DE8u;
label_261de8:
    // 0x261de8: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x261DE8u;
    {
        const bool branch_taken_0x261de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261DE8u;
        // 0x261dec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261de8) {
            ctx->pc = 0x261F3Cu;
            return;
        }
    }
    ctx->pc = 0x261DF0u;
label_261df0:
    // 0x261df0: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x261DF0u;
    {
        const bool branch_taken_0x261df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261DF0u;
        // 0x261df4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261df0) {
            ctx->pc = 0x261F3Cu;
            return;
        }
    }
    ctx->pc = 0x261DF8u;
label_261df8:
    // 0x261df8: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x261DF8u;
    {
        const bool branch_taken_0x261df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261DF8u;
        // 0x261dfc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261df8) {
            ctx->pc = 0x261F3Cu;
            return;
        }
    }
    ctx->pc = 0x261E00u;
label_261e00:
    // 0x261e00: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x261E00u;
    {
        const bool branch_taken_0x261e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261E00u;
        // 0x261e04: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261e00) {
            ctx->pc = 0x261F3Cu;
            return;
        }
    }
    ctx->pc = 0x261E08u;
label_261e08:
    // 0x261e08: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x261E08u;
    {
        const bool branch_taken_0x261e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261E08u;
        // 0x261e0c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261e08) {
            ctx->pc = 0x261F3Cu;
            return;
        }
    }
    ctx->pc = 0x261E10u;
label_261e10:
    // 0x261e10: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x261E10u;
    {
        const bool branch_taken_0x261e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261E10u;
        // 0x261e14: 0x24020027  addiu       $v0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261e10) {
            ctx->pc = 0x261F3Cu;
            return;
        }
    }
    ctx->pc = 0x261E18u;
label_261e18:
    // 0x261e18: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x261E18u;
    {
        const bool branch_taken_0x261e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261E18u;
        // 0x261e1c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261e18) {
            ctx->pc = 0x261F3Cu;
            return;
        }
    }
    ctx->pc = 0x261E20u;
label_261e20:
    // 0x261e20: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x261E20u;
    {
        const bool branch_taken_0x261e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261E20u;
        // 0x261e24: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261e20) {
            ctx->pc = 0x261F3Cu;
            return;
        }
    }
    ctx->pc = 0x261E28u;
label_261e28:
    // 0x261e28: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x261E28u;
    {
        const bool branch_taken_0x261e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261E28u;
        // 0x261e2c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261e28) {
            ctx->pc = 0x261F3Cu;
            return;
        }
    }
    ctx->pc = 0x261E30u;
label_261e30:
    // 0x261e30: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x261E30u;
    {
        const bool branch_taken_0x261e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261E30u;
        // 0x261e34: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261e30) {
            ctx->pc = 0x261F3Cu;
            return;
        }
    }
    ctx->pc = 0x261E38u;
label_261e38:
    // 0x261e38: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x261E38u;
    {
        const bool branch_taken_0x261e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261E38u;
        // 0x261e3c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261e38) {
            ctx->pc = 0x261F3Cu;
            return;
        }
    }
    ctx->pc = 0x261E40u;
label_261e40:
    // 0x261e40: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x261E40u;
    {
        const bool branch_taken_0x261e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261E40u;
        // 0x261e44: 0x24020029  addiu       $v0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261e40) {
            ctx->pc = 0x261F3Cu;
            return;
        }
    }
    ctx->pc = 0x261E48u;
label_261e48:
    // 0x261e48: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x261E48u;
    {
        const bool branch_taken_0x261e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261E48u;
        // 0x261e4c: 0x2402002a  addiu       $v0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261e48) {
            ctx->pc = 0x261F3Cu;
            return;
        }
    }
    ctx->pc = 0x261E50u;
label_261e50:
    // 0x261e50: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x261E50u;
    {
        const bool branch_taken_0x261e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261E50u;
        // 0x261e54: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261e50) {
            ctx->pc = 0x261F3Cu;
            return;
        }
    }
    ctx->pc = 0x261E58u;
label_261e58:
    // 0x261e58: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x261E58u;
    {
        const bool branch_taken_0x261e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261E58u;
        // 0x261e5c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261e58) {
            ctx->pc = 0x261F3Cu;
            return;
        }
    }
    ctx->pc = 0x261E60u;
label_261e60:
    // 0x261e60: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x261E60u;
    {
        const bool branch_taken_0x261e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261E60u;
        // 0x261e64: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261e60) {
            ctx->pc = 0x261F3Cu;
            return;
        }
    }
    ctx->pc = 0x261E68u;
label_261e68:
    // 0x261e68: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x261E68u;
    {
        const bool branch_taken_0x261e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261E68u;
        // 0x261e6c: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261e68) {
            ctx->pc = 0x261F3Cu;
            return;
        }
    }
    ctx->pc = 0x261E70u;
label_261e70:
    // 0x261e70: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x261E70u;
    {
        const bool branch_taken_0x261e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261E70u;
        // 0x261e74: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261e70) {
            ctx->pc = 0x261F3Cu;
            return;
        }
    }
    ctx->pc = 0x261E78u;
label_261e78:
    // 0x261e78: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x261E78u;
    {
        const bool branch_taken_0x261e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261E78u;
        // 0x261e7c: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261e78) {
            ctx->pc = 0x261F3Cu;
            return;
        }
    }
    ctx->pc = 0x261E80u;
label_261e80:
    // 0x261e80: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x261E80u;
    {
        const bool branch_taken_0x261e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261E80u;
        // 0x261e84: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261e80) {
            ctx->pc = 0x261F3Cu;
            return;
        }
    }
    ctx->pc = 0x261E88u;
label_261e88:
    // 0x261e88: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x261E88u;
    {
        const bool branch_taken_0x261e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261E88u;
        // 0x261e8c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261e88) {
            ctx->pc = 0x261F3Cu;
            return;
        }
    }
    ctx->pc = 0x261E90u;
label_261e90:
    // 0x261e90: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x261E90u;
    {
        const bool branch_taken_0x261e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261E90u;
        // 0x261e94: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261e90) {
            ctx->pc = 0x261F3Cu;
            return;
        }
    }
    ctx->pc = 0x261E98u;
label_261e98:
    // 0x261e98: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x261E98u;
    {
        const bool branch_taken_0x261e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261E98u;
        // 0x261e9c: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261e98) {
            ctx->pc = 0x261F3Cu;
            return;
        }
    }
    ctx->pc = 0x261EA0u;
label_261ea0:
    // 0x261ea0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x261EA0u;
    {
        const bool branch_taken_0x261ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261EA0u;
        // 0x261ea4: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261ea0) {
            ctx->pc = 0x261F3Cu;
            return;
        }
    }
    ctx->pc = 0x261EA8u;
label_261ea8:
    // 0x261ea8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x261EA8u;
    {
        const bool branch_taken_0x261ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261EA8u;
        // 0x261eac: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261ea8) {
            ctx->pc = 0x261F3Cu;
            return;
        }
    }
    ctx->pc = 0x261EB0u;
label_261eb0:
    // 0x261eb0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x261EB0u;
    {
        const bool branch_taken_0x261eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261EB0u;
        // 0x261eb4: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261eb0) {
            ctx->pc = 0x261F3Cu;
            return;
        }
    }
    ctx->pc = 0x261EB8u;
label_261eb8:
    // 0x261eb8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x261EB8u;
    {
        const bool branch_taken_0x261eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261EB8u;
        // 0x261ebc: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261eb8) {
            ctx->pc = 0x261F3Cu;
            return;
        }
    }
    ctx->pc = 0x261EC0u;
label_261ec0:
    // 0x261ec0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x261EC0u;
    {
        const bool branch_taken_0x261ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261EC0u;
        // 0x261ec4: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261ec0) {
            ctx->pc = 0x261F3Cu;
            return;
        }
    }
    ctx->pc = 0x261EC8u;
label_261ec8:
    // 0x261ec8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x261EC8u;
    {
        const bool branch_taken_0x261ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261EC8u;
        // 0x261ecc: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261ec8) {
            ctx->pc = 0x261F3Cu;
            return;
        }
    }
    ctx->pc = 0x261ED0u;
label_261ed0:
    // 0x261ed0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x261ED0u;
    {
        const bool branch_taken_0x261ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261ED0u;
        // 0x261ed4: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261ed0) {
            ctx->pc = 0x261F3Cu;
            return;
        }
    }
    ctx->pc = 0x261ED8u;
label_261ed8:
    // 0x261ed8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x261ED8u;
    {
        const bool branch_taken_0x261ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261ED8u;
        // 0x261edc: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261ed8) {
            ctx->pc = 0x261F3Cu;
            return;
        }
    }
    ctx->pc = 0x261EE0u;
label_261ee0:
    // 0x261ee0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x261EE0u;
    {
        const bool branch_taken_0x261ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261EE0u;
        // 0x261ee4: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261ee0) {
            ctx->pc = 0x261F3Cu;
            return;
        }
    }
    ctx->pc = 0x261EE8u;
label_261ee8:
    // 0x261ee8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x261EE8u;
    {
        const bool branch_taken_0x261ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261EE8u;
        // 0x261eec: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261ee8) {
            ctx->pc = 0x261F3Cu;
            return;
        }
    }
    ctx->pc = 0x261EF0u;
label_261ef0:
    // 0x261ef0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x261EF0u;
    {
        const bool branch_taken_0x261ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261EF0u;
        // 0x261ef4: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261ef0) {
            ctx->pc = 0x261F3Cu;
            return;
        }
    }
    ctx->pc = 0x261EF8u;
label_261ef8:
    // 0x261ef8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x261EF8u;
    {
        const bool branch_taken_0x261ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261EF8u;
        // 0x261efc: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261ef8) {
            ctx->pc = 0x261F3Cu;
            return;
        }
    }
    ctx->pc = 0x261F00u;
label_261f00:
    // 0x261f00: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x261F00u;
    {
        const bool branch_taken_0x261f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F00u;
        // 0x261f04: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f00) {
            ctx->pc = 0x261F3Cu;
            return;
        }
    }
    ctx->pc = 0x261F08u;
label_261f08:
    // 0x261f08: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x261F08u;
    {
        const bool branch_taken_0x261f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F08u;
        // 0x261f0c: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f08) {
            ctx->pc = 0x261F3Cu;
            return;
        }
    }
    ctx->pc = 0x261F10u;
label_261f10:
    // 0x261f10: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x261F10u;
    {
        const bool branch_taken_0x261f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F10u;
        // 0x261f14: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f10) {
            ctx->pc = 0x261F3Cu;
            return;
        }
    }
    ctx->pc = 0x261F18u;
label_261f18:
    // 0x261f18: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x261F18u;
    {
        const bool branch_taken_0x261f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F18u;
        // 0x261f1c: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f18) {
            ctx->pc = 0x261F3Cu;
            return;
        }
    }
    ctx->pc = 0x261F20u;
label_261f20:
    // 0x261f20: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x261F20u;
    {
        const bool branch_taken_0x261f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F20u;
        // 0x261f24: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f20) {
            ctx->pc = 0x261F3Cu;
            return;
        }
    }
    ctx->pc = 0x261F28u;
}
