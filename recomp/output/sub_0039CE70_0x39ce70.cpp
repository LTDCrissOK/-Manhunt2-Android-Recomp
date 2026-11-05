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

// Function: sub_0039CE70
// Address: 0x39ce70 - 0x39cf60
void sub_0039CE70_0x39ce70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039CE70_0x39ce70");
#endif

    switch (ctx->pc) {
        case 0x39ced0u: goto label_39ced0;
        case 0x39ced8u: goto label_39ced8;
        case 0x39cee4u: goto label_39cee4;
        case 0x39cef8u: goto label_39cef8;
        case 0x39cf24u: goto label_39cf24;
        case 0x39cf30u: goto label_39cf30;
        default: break;
    }

    ctx->pc = 0x39ce70u;

    // 0x39ce70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39ce70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39ce74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39ce74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39ce78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39ce78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ce7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39ce7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39ce80: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x39ce80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ce84: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x39ce84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x39ce88: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x39ce88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ce8c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39CE8Cu;
    {
        const bool branch_taken_0x39ce8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CE8Cu;
        // 0x39ce90: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ce8c) {
            ctx->pc = 0x39CEA4u;
            goto label_39cea4;
        }
    }
    ctx->pc = 0x39CE94u;
    // 0x39ce94: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x39CE94u;
    {
        const bool branch_taken_0x39ce94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ce94) {
            ctx->pc = 0x39CE98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39CE94u;
            // 0x39ce98: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39CEA8u;
            goto label_39cea8;
        }
    }
    ctx->pc = 0x39CE9Cu;
    // 0x39ce9c: 0x641000a  bgez        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x39CE9Cu;
    {
        const bool branch_taken_0x39ce9c = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x39ce9c) {
            ctx->pc = 0x39CEC8u;
            goto label_39cec8;
        }
    }
    ctx->pc = 0x39CEA4u;
label_39cea4:
    // 0x39cea4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39cea4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_39cea8:
    // 0x39cea8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39cea8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39ceac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39ceacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39ceb0: 0x2484bae8  addiu       $a0, $a0, -0x4518
    ctx->pc = 0x39ceb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949608));
    // 0x39ceb4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39ceb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39ceb8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x39ceb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x39cebc: 0x80ec0fe  j           func_3B03F8
    ctx->pc = 0x39CEBCu;
    ctx->pc = 0x39CEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CEBCu;
    // 0x39cec0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    sub_003B03F8_0x3b03f8(rdram, ctx, runtime); return;
    ctx->pc = 0x39CEC4u;
    // 0x39cec4: 0x0  nop
    ctx->pc = 0x39cec4u;
    // NOP
label_39cec8:
    // 0x39cec8: 0xc0e6e04  jal         func_39B810
    ctx->pc = 0x39CEC8u;
    SET_GPR_U32(ctx, 31, 0x39CED0u);
    ctx->pc = 0x39B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B810u, 0x39CEC8u, 0x39CED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CED0u;
label_39ced0:
    // 0x39ced0: 0xc0ebe50  jal         func_3AF940
    ctx->pc = 0x39CED0u;
    SET_GPR_U32(ctx, 31, 0x39CED8u);
    ctx->pc = 0x3AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF940u, 0x39CED0u, 0x39CED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CED8u;
label_39ced8:
    // 0x39ced8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39ced8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cedc: 0xc0ea83e  jal         func_3AA0F8
    ctx->pc = 0x39CEDCu;
    SET_GPR_U32(ctx, 31, 0x39CEE4u);
    ctx->pc = 0x39CEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CEDCu;
    // 0x39cee0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AA0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA0F8u, 0x39CEDCu, 0x39CEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CEE4u;
label_39cee4:
    // 0x39cee4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39cee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cee8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x39CEE8u;
    {
        const bool branch_taken_0x39cee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39CEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CEE8u;
        // 0x39ceec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cee8) {
            ctx->pc = 0x39CF18u;
            goto label_39cf18;
        }
    }
    ctx->pc = 0x39CEF0u;
    // 0x39cef0: 0xc0ebe56  jal         func_3AF958
    ctx->pc = 0x39CEF0u;
    SET_GPR_U32(ctx, 31, 0x39CEF8u);
    ctx->pc = 0x3AF958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF958u, 0x39CEF0u, 0x39CEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CEF8u;
label_39cef8:
    // 0x39cef8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39cef8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x39cefc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39cefcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39cf00: 0x2484bb18  addiu       $a0, $a0, -0x44E8
    ctx->pc = 0x39cf00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949656));
    // 0x39cf04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39cf04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39cf08: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39cf08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39cf0c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x39cf0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x39cf10: 0x80ec0fe  j           func_3B03F8
    ctx->pc = 0x39CF10u;
    ctx->pc = 0x39CF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CF10u;
    // 0x39cf14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    sub_003B03F8_0x3b03f8(rdram, ctx, runtime); return;
    ctx->pc = 0x39CF18u;
label_39cf18:
    // 0x39cf18: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x39cf18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39cf1c: 0xc0e6d28  jal         func_39B4A0
    ctx->pc = 0x39CF1Cu;
    SET_GPR_U32(ctx, 31, 0x39CF24u);
    ctx->pc = 0x39CF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CF1Cu;
    // 0x39cf20: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B4A0u, 0x39CF1Cu, 0x39CF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CF24u;
label_39cf24:
    // 0x39cf24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39cf24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cf28: 0xc0e7278  jal         func_39C9E0
    ctx->pc = 0x39CF28u;
    SET_GPR_U32(ctx, 31, 0x39CF30u);
    ctx->pc = 0x39CF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CF28u;
    // 0x39cf2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C9E0u, 0x39CF28u, 0x39CF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CF30u;
label_39cf30:
    // 0x39cf30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39cf30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39cf34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39cf34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39cf38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39cf38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39cf3c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x39cf3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x39cf40: 0x80ebe56  j           func_3AF958
    ctx->pc = 0x39CF40u;
    ctx->pc = 0x39CF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CF40u;
    // 0x39cf44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF958u;
    sub_003AF958_0x3af958(rdram, ctx, runtime); return;
    ctx->pc = 0x39CF48u;
    // 0x39cf48: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x39cf48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x39cf4c: 0x0  nop
    ctx->pc = 0x39cf4cu;
    // NOP
    // 0x39cf50: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x39cf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x39cf54: 0x0  nop
    ctx->pc = 0x39cf54u;
    // NOP
    // 0x39cf58: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x39cf58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x39cf5c: 0x0  nop
    ctx->pc = 0x39cf5cu;
    // NOP
    ctx->pc = 0x39cf60u;
}
