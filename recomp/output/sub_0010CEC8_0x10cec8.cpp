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

// Function: sub_0010CEC8
// Address: 0x10cec8 - 0x10cf94
void sub_0010CEC8_0x10cec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CEC8_0x10cec8");
#endif

    switch (ctx->pc) {
        case 0x10cf24u: goto label_10cf24;
        case 0x10cf54u: goto label_10cf54;
        case 0x10cf64u: goto label_10cf64;
        default: break;
    }

    ctx->pc = 0x10cec8u;

    // 0x10cec8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10cec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10cecc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10ceccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10ced0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10ced0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ced4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ced4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ced8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x10ced8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cedc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10cedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10cee0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x10cee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x10cee4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10cee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cee8: 0x2e220011  sltiu       $v0, $s1, 0x11
    ctx->pc = 0x10cee8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x10ceec: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10CEECu;
    {
        const bool branch_taken_0x10ceec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CEECu;
        // 0x10cef0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ceec) {
            ctx->pc = 0x10CF14u;
            goto label_10cf14;
        }
    }
    ctx->pc = 0x10CEF4u;
    // 0x10cef4: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x10cef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x10cef8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x10cef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x10cefc: 0x2442a6a0  addiu       $v0, $v0, -0x5960
    ctx->pc = 0x10cefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944416));
    // 0x10cf00: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10cf00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10cf04: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x10cf04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10cf08: 0x800008  jr          $a0
    ctx->pc = 0x10CF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10CF10u: goto label_10cf10;
            case 0x10CF14u: goto label_10cf14;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CF08u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x10CF10u;
label_10cf10:
    // 0x10cf10: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10cf10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10cf14:
    // 0x10cf14: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x10CF14u;
    {
        const bool branch_taken_0x10cf14 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CF14u;
        // 0x10cf18: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cf14) {
            ctx->pc = 0x10CF4Cu;
            goto label_10cf4c;
        }
    }
    ctx->pc = 0x10CF1Cu;
    // 0x10cf1c: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10CF1Cu;
    SET_GPR_U32(ctx, 31, 0x10CF24u);
    ctx->pc = 0x10CF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CF1Cu;
    // 0x10cf20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10CF1Cu, 0x10CF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CF24u;
label_10cf24:
    // 0x10cf24: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10cf24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf28: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x10cf28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10cf2c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10CF2Cu;
    {
        const bool branch_taken_0x10cf2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10CF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CF2Cu;
        // 0x10cf30: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cf2c) {
            ctx->pc = 0x10CF3Cu;
            goto label_10cf3c;
        }
    }
    ctx->pc = 0x10CF34u;
    // 0x10cf34: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x10CF34u;
    {
        const bool branch_taken_0x10cf34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CF34u;
        // 0x10cf38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cf34) {
            ctx->pc = 0x10CF98u;
            return;
        }
    }
    ctx->pc = 0x10CF3Cu;
label_10cf3c:
    // 0x10cf3c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10cf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10cf40: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x10cf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x10cf44: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x10cf44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10cf48: 0x8c920010  lw          $s2, 0x10($a0)
    ctx->pc = 0x10cf48u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_10cf4c:
    // 0x10cf4c: 0xc0433a4  jal         func_10CE90
    ctx->pc = 0x10CF4Cu;
    SET_GPR_U32(ctx, 31, 0x10CF54u);
    ctx->pc = 0x10CF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CF4Cu;
    // 0x10cf50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CE90u, 0x10CF4Cu, 0x10CF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CF54u;
label_10cf54:
    // 0x10cf54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10cf54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10cf58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf5c: 0xc05a600  jal         func_169800
    ctx->pc = 0x10CF5Cu;
    SET_GPR_U32(ctx, 31, 0x10CF64u);
    ctx->pc = 0x10CF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CF5Cu;
    // 0x10cf60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169800u, 0x10CF5Cu, 0x10CF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CF64u;
label_10cf64:
    // 0x10cf64: 0x2e220011  sltiu       $v0, $s1, 0x11
    ctx->pc = 0x10cf64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x10cf68: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10CF68u;
    {
        const bool branch_taken_0x10cf68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CF68u;
        // 0x10cf6c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cf68) {
            ctx->pc = 0x10CF94u;
            return;
        }
    }
    ctx->pc = 0x10CF70u;
    // 0x10cf70: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x10cf70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x10cf74: 0x2442a6f0  addiu       $v0, $v0, -0x5910
    ctx->pc = 0x10cf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944496));
    // 0x10cf78: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10cf78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10cf7c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x10cf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10cf80: 0x800008  jr          $a0
    ctx->pc = 0x10CF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10CF88u: goto label_10cf88;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CF80u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x10CF88u;
label_10cf88:
    // 0x10cf88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10cf88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf8c: 0xc05a5fc  jal         func_1697F0
    ctx->pc = 0x10CF8Cu;
    SET_GPR_U32(ctx, 31, 0x10CF94u);
    ctx->pc = 0x10CF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CF8Cu;
    // 0x10cf90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F0u, 0x10CF8Cu, 0x10CF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CF94u;
}
