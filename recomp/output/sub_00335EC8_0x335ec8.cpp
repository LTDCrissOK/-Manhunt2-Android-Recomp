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

// Function: sub_00335EC8
// Address: 0x335ec8 - 0x335fc0
void sub_00335EC8_0x335ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335EC8_0x335ec8");
#endif

    switch (ctx->pc) {
        case 0x335f08u: goto label_335f08;
        case 0x335f14u: goto label_335f14;
        case 0x335f28u: goto label_335f28;
        default: break;
    }

    ctx->pc = 0x335ec8u;

    // 0x335ec8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x335ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x335ecc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x335eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x335ed0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x335ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x335ed4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x335ed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335ed8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x335ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x335edc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x335edcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335ee0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x335ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x335ee4: 0x1240002c  beqz        $s2, . + 4 + (0x2C << 2)
    ctx->pc = 0x335EE4u;
    {
        const bool branch_taken_0x335ee4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x335EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335EE4u;
        // 0x335ee8: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335ee4) {
            ctx->pc = 0x335F98u;
            goto label_335f98;
        }
    }
    ctx->pc = 0x335EECu;
    // 0x335eec: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x335eecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x335ef0: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x335EF0u;
    {
        const bool branch_taken_0x335ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x335EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335EF0u;
        // 0x335ef4: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335ef0) {
            ctx->pc = 0x335F98u;
            goto label_335f98;
        }
    }
    ctx->pc = 0x335EF8u;
    // 0x335ef8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x335ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x335efc: 0x8e110014  lw          $s1, 0x14($s0)
    ctx->pc = 0x335efcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x335f00: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x335F00u;
    {
        const bool branch_taken_0x335f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335F00u;
        // 0x335f04: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335f00) {
            ctx->pc = 0x335F68u;
            goto label_335f68;
        }
    }
    ctx->pc = 0x335F08u;
label_335f08:
    // 0x335f08: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x335f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x335f0c: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x335F0Cu;
    SET_GPR_U32(ctx, 31, 0x335F14u);
    ctx->pc = 0x335F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335F0Cu;
    // 0x335f10: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x335F0Cu, 0x335F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335F14u;
label_335f14:
    // 0x335f14: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x335F14u;
    {
        const bool branch_taken_0x335f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x335f14) {
            ctx->pc = 0x335F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335F14u;
            // 0x335f18: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x335F48u;
            goto label_335f48;
        }
    }
    ctx->pc = 0x335F1Cu;
    // 0x335f1c: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x335f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x335f20: 0xc0cdbba  jal         func_336EE8
    ctx->pc = 0x335F20u;
    SET_GPR_U32(ctx, 31, 0x335F28u);
    ctx->pc = 0x335F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335F20u;
    // 0x335f24: 0xac930498  sw          $s3, 0x498($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 1176), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336EE8u, 0x335F20u, 0x335F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335F28u;
label_335f28:
    // 0x335f28: 0x5220001c  beql        $s1, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x335F28u;
    {
        const bool branch_taken_0x335f28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x335f28) {
            ctx->pc = 0x335F2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335F28u;
            // 0x335f2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x335F9Cu;
            goto label_335f9c;
        }
    }
    ctx->pc = 0x335F30u;
    // 0x335f30: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x335f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x335f34: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x335f34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x335f38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x335f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x335f3c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x335f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x335f40: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x335F40u;
    {
        const bool branch_taken_0x335f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335F40u;
        // 0x335f44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335f40) {
            ctx->pc = 0x335F9Cu;
            goto label_335f9c;
        }
    }
    ctx->pc = 0x335F48u;
label_335f48:
    // 0x335f48: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x335F48u;
    {
        const bool branch_taken_0x335f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x335F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335F48u;
        // 0x335f4c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335f48) {
            ctx->pc = 0x335F54u;
            goto label_335f54;
        }
    }
    ctx->pc = 0x335F50u;
    // 0x335f50: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x335f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_335f54:
    // 0x335f54: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x335F54u;
    {
        const bool branch_taken_0x335f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x335f54) {
            ctx->pc = 0x335F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335F54u;
            // 0x335f58: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x335F68u;
            goto label_335f68;
        }
    }
    ctx->pc = 0x335F5Cu;
    // 0x335f5c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x335f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x335f60: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x335f60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x335f64: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x335f64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_335f68:
    // 0x335f68: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x335f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x335f6c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x335F6Cu;
    {
        const bool branch_taken_0x335f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x335F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335F6Cu;
        // 0x335f70: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335f6c) {
            ctx->pc = 0x335F78u;
            goto label_335f78;
        }
    }
    ctx->pc = 0x335F74u;
    // 0x335f74: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x335f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_335f78:
    // 0x335f78: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x335F78u;
    {
        const bool branch_taken_0x335f78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x335F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335F78u;
        // 0x335f7c: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335f78) {
            ctx->pc = 0x335F08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_335f08;
        }
    }
    ctx->pc = 0x335F80u;
    // 0x335f80: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x335F80u;
    {
        const bool branch_taken_0x335f80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x335F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335F80u;
        // 0x335f84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335f80) {
            ctx->pc = 0x335F9Cu;
            goto label_335f9c;
        }
    }
    ctx->pc = 0x335F88u;
    // 0x335f88: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x335f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x335f8c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x335f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x335f90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x335f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x335f94: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x335f94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_335f98:
    // 0x335f98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x335f98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_335f9c:
    // 0x335f9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x335f9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335fa0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x335fa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x335fa4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x335fa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x335fa8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x335fa8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x335fac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x335facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x335fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x335FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335FB0u;
        // 0x335fb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335FB8u;
    // 0x335fb8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x335fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x335fbc: 0x0  nop
    ctx->pc = 0x335fbcu;
    // NOP
    ctx->pc = 0x335fc0u;
}
