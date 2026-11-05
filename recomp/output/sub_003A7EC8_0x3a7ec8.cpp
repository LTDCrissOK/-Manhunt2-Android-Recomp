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

// Function: sub_003A7EC8
// Address: 0x3a7ec8 - 0x3a7f88
void sub_003A7EC8_0x3a7ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A7EC8_0x3a7ec8");
#endif

    switch (ctx->pc) {
        case 0x3a7ef8u: goto label_3a7ef8;
        case 0x3a7f08u: goto label_3a7f08;
        case 0x3a7f68u: goto label_3a7f68;
        default: break;
    }

    ctx->pc = 0x3a7ec8u;

    // 0x3a7ec8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a7ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a7ecc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a7eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a7ed0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a7ed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7ed4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a7ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a7ed8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3a7ed8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7edc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a7edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a7ee0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3a7ee0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7ee4: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A7EE4u;
    {
        const bool branch_taken_0x3a7ee4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A7EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7EE4u;
        // 0x3a7ee8: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7ee4) {
            ctx->pc = 0x3A7F00u;
            goto label_3a7f00;
        }
    }
    ctx->pc = 0x3A7EECu;
    // 0x3a7eec: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3a7eecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3a7ef0: 0xc0e9ebe  jal         func_3A7AF8
    ctx->pc = 0x3A7EF0u;
    SET_GPR_U32(ctx, 31, 0x3A7EF8u);
    ctx->pc = 0x3A7EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7EF0u;
    // 0x3a7ef4: 0x24a5e580  addiu       $a1, $a1, -0x1A80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7AF8u, 0x3A7EF0u, 0x3A7EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7EF8u;
label_3a7ef8:
    // 0x3a7ef8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3A7EF8u;
    {
        const bool branch_taken_0x3a7ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7EF8u;
        // 0x3a7efc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7ef8) {
            ctx->pc = 0x3A7F6Cu;
            goto label_3a7f6c;
        }
    }
    ctx->pc = 0x3A7F00u;
label_3a7f00:
    // 0x3a7f00: 0xc0e9eac  jal         func_3A7AB0
    ctx->pc = 0x3A7F00u;
    SET_GPR_U32(ctx, 31, 0x3A7F08u);
    ctx->pc = 0x3A7AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7AB0u, 0x3A7F00u, 0x3A7F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7F08u;
label_3a7f08:
    // 0x3a7f08: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A7F08u;
    {
        const bool branch_taken_0x3a7f08 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A7F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7F08u;
        // 0x3a7f0c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7f08) {
            ctx->pc = 0x3A7F18u;
            goto label_3a7f18;
        }
    }
    ctx->pc = 0x3A7F10u;
    // 0x3a7f10: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3A7F10u;
    {
        const bool branch_taken_0x3a7f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7F10u;
        // 0x3a7f14: 0xae120010  sw          $s2, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7f10) {
            ctx->pc = 0x3A7F48u;
            goto label_3a7f48;
        }
    }
    ctx->pc = 0x3A7F18u;
label_3a7f18:
    // 0x3a7f18: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A7F18u;
    {
        const bool branch_taken_0x3a7f18 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A7F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7F18u;
        // 0x3a7f1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7f18) {
            ctx->pc = 0x3A7F30u;
            goto label_3a7f30;
        }
    }
    ctx->pc = 0x3A7F20u;
    // 0x3a7f20: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x3a7f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3a7f24: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x3a7f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x3a7f28: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A7F28u;
    {
        const bool branch_taken_0x3a7f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7F28u;
        // 0x3a7f2c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7f28) {
            ctx->pc = 0x3A7F4Cu;
            goto label_3a7f4c;
        }
    }
    ctx->pc = 0x3A7F30u;
label_3a7f30:
    // 0x3a7f30: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A7F30u;
    {
        const bool branch_taken_0x3a7f30 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A7F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7F30u;
        // 0x3a7f34: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7f30) {
            ctx->pc = 0x3A7F4Cu;
            goto label_3a7f4c;
        }
    }
    ctx->pc = 0x3A7F38u;
    // 0x3a7f38: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3a7f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3a7f3c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3a7f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3a7f40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3A7F40u;
    {
        const bool branch_taken_0x3a7f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7F40u;
        // 0x3a7f44: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7f40) {
            ctx->pc = 0x3A7F4Cu;
            goto label_3a7f4c;
        }
    }
    ctx->pc = 0x3A7F48u;
label_3a7f48:
    // 0x3a7f48: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x3a7f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3a7f4c:
    // 0x3a7f4c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3a7f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3a7f50: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x3a7f50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3a7f54: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x3a7f54u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x3a7f58: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x3a7f58u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3a7f5c: 0x4100b  movn        $v0, $zero, $a0
    ctx->pc = 0x3a7f5cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x3a7f60: 0xc0e9eb2  jal         func_3A7AC8
    ctx->pc = 0x3A7F60u;
    SET_GPR_U32(ctx, 31, 0x3A7F68u);
    ctx->pc = 0x3A7F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7F60u;
    // 0x3a7f64: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7AC8u, 0x3A7F60u, 0x3A7F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7F68u;
label_3a7f68:
    // 0x3a7f68: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3a7f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3a7f6c:
    // 0x3a7f6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a7f6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a7f70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a7f70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a7f74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a7f74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a7f78: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3a7f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a7f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A7F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7F7Cu;
        // 0x3a7f80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7F7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A7F84u;
    // 0x3a7f84: 0x0  nop
    ctx->pc = 0x3a7f84u;
    // NOP
    ctx->pc = 0x3a7f88u;
}
