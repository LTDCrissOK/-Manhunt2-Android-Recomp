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

// Function: sub_00355C38
// Address: 0x355c38 - 0x355d20
void sub_00355C38_0x355c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00355C38_0x355c38");
#endif

    switch (ctx->pc) {
        case 0x355c54u: goto label_355c54;
        case 0x355c70u: goto label_355c70;
        case 0x355c8cu: goto label_355c8c;
        case 0x355ca8u: goto label_355ca8;
        case 0x355cc4u: goto label_355cc4;
        case 0x355ce0u: goto label_355ce0;
        case 0x355cfcu: goto label_355cfc;
        default: break;
    }

    ctx->pc = 0x355c38u;

    // 0x355c38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x355c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x355c3c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x355c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x355c40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x355c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x355c44: 0x24a56740  addiu       $a1, $a1, 0x6740
    ctx->pc = 0x355c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26432));
    // 0x355c48: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x355c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x355c4c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x355C4Cu;
    SET_GPR_U32(ctx, 31, 0x355C54u);
    ctx->pc = 0x355C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355C4Cu;
    // 0x355c50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x355C4Cu, 0x355C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355C54u;
label_355c54:
    // 0x355c54: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x355c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x355c58: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x355C58u;
    {
        const bool branch_taken_0x355c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x355C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355C58u;
        // 0x355c5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355c58) {
            ctx->pc = 0x355D0Cu;
            goto label_355d0c;
        }
    }
    ctx->pc = 0x355C60u;
    // 0x355c60: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x355c60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x355c64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x355c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355c68: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x355C68u;
    SET_GPR_U32(ctx, 31, 0x355C70u);
    ctx->pc = 0x355C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355C68u;
    // 0x355c6c: 0x24a56748  addiu       $a1, $a1, 0x6748 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x355C68u, 0x355C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355C70u;
label_355c70:
    // 0x355c70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x355c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x355c74: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x355C74u;
    {
        const bool branch_taken_0x355c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x355C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355C74u;
        // 0x355c78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355c74) {
            ctx->pc = 0x355D0Cu;
            goto label_355d0c;
        }
    }
    ctx->pc = 0x355C7Cu;
    // 0x355c7c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x355c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x355c80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x355c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355c84: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x355C84u;
    SET_GPR_U32(ctx, 31, 0x355C8Cu);
    ctx->pc = 0x355C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355C84u;
    // 0x355c88: 0x24a56750  addiu       $a1, $a1, 0x6750 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x355C84u, 0x355C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355C8Cu;
label_355c8c:
    // 0x355c8c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x355c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x355c90: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x355C90u;
    {
        const bool branch_taken_0x355c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x355C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355C90u;
        // 0x355c94: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355c90) {
            ctx->pc = 0x355D0Cu;
            goto label_355d0c;
        }
    }
    ctx->pc = 0x355C98u;
    // 0x355c98: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x355c98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x355c9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x355c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355ca0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x355CA0u;
    SET_GPR_U32(ctx, 31, 0x355CA8u);
    ctx->pc = 0x355CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355CA0u;
    // 0x355ca4: 0x24a56758  addiu       $a1, $a1, 0x6758 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x355CA0u, 0x355CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355CA8u;
label_355ca8:
    // 0x355ca8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x355ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x355cac: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x355CACu;
    {
        const bool branch_taken_0x355cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x355CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355CACu;
        // 0x355cb0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355cac) {
            ctx->pc = 0x355D0Cu;
            goto label_355d0c;
        }
    }
    ctx->pc = 0x355CB4u;
    // 0x355cb4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x355cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x355cb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x355cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355cbc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x355CBCu;
    SET_GPR_U32(ctx, 31, 0x355CC4u);
    ctx->pc = 0x355CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355CBCu;
    // 0x355cc0: 0x24a56768  addiu       $a1, $a1, 0x6768 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x355CBCu, 0x355CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355CC4u;
label_355cc4:
    // 0x355cc4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x355cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x355cc8: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x355CC8u;
    {
        const bool branch_taken_0x355cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x355CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355CC8u;
        // 0x355ccc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355cc8) {
            ctx->pc = 0x355D0Cu;
            goto label_355d0c;
        }
    }
    ctx->pc = 0x355CD0u;
    // 0x355cd0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x355cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x355cd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x355cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355cd8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x355CD8u;
    SET_GPR_U32(ctx, 31, 0x355CE0u);
    ctx->pc = 0x355CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355CD8u;
    // 0x355cdc: 0x24a56770  addiu       $a1, $a1, 0x6770 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x355CD8u, 0x355CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355CE0u;
label_355ce0:
    // 0x355ce0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x355ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x355ce4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x355CE4u;
    {
        const bool branch_taken_0x355ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x355ce4) {
            ctx->pc = 0x355CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x355CE4u;
            // 0x355ce8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x355D0Cu;
            goto label_355d0c;
        }
    }
    ctx->pc = 0x355CECu;
    // 0x355cec: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x355cecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x355cf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x355cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355cf4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x355CF4u;
    SET_GPR_U32(ctx, 31, 0x355CFCu);
    ctx->pc = 0x355CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355CF4u;
    // 0x355cf8: 0x24a56778  addiu       $a1, $a1, 0x6778 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x355CF4u, 0x355CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355CFCu;
label_355cfc:
    // 0x355cfc: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x355cfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x355d00: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x355d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x355d04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x355d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x355d08: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x355d08u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_355d0c:
    // 0x355d0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x355d0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x355d10: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x355d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x355d14: 0x3e00008  jr          $ra
    ctx->pc = 0x355D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x355D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355D14u;
        // 0x355d18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355D1Cu;
    // 0x355d1c: 0x0  nop
    ctx->pc = 0x355d1cu;
    // NOP
    ctx->pc = 0x355d20u;
}
